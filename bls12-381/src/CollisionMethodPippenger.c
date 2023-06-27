/***

Copyright (c) 2022, Yrrid Software, Inc.  All rights reserved.
Licensed under the Apache License, Version 2.0, see LICENSE for details.

Author(s):  Niall Emmart
            Sougata Bhattacharya
            Antony Suresh

***/


static inline void cmSlice(uint32_t *sliced, uint64_t *packed) {
    uint64_t mask = 0x1FFF, low = packed[0], high = packed[1];

    sliced[0] = low & mask;
    sliced[1] = (low >> 13) & mask;
    sliced[2] = (low >> 26) & mask;
    sliced[3] = (low >> 39) & mask;
    sliced[4] = (low >> 52) + (high << 12) & mask;
    sliced[5] = (high >> 1) & mask;
    sliced[6] = (high >> 14) & mask;
    sliced[7] = (high >> 27) & mask;
    sliced[8] = (high >> 40) & mask;
    sliced[9] = high >> 53;

    // sliced[9] must be positive
    for (int i = 0; i < 9; i++) {
        if (sliced[i] > 0x1000) {
            sliced[i + 1]++;
            sliced[i] = (sliced[i] == 0x2000) ? 0 : (sliced[i] ^ 0x80001FFF);
        }
    }
}

void cmProcessSlices(CMState *state, PointXY *point, uint32_t *normalSlices, uint32_t *phiSlices, uint32_t count,
                     uint32_t shift, bool negate) {
    if (negate)
        negateXY(point);

    bool flag_point_allocated = false;
    for (int i = 0; i < count; i++)
        if (((int32_t) normalSlices[i]) > 0) {
            if (!flag_point_allocated) {
                cmUpdatePoint(state, point);
                flag_point_allocated = true;
            }
            cmAddPointToBucket(state, (i << shift) + normalSlices[i] - 1, point);
        }

    negateXY(point);

    flag_point_allocated = false;
    for (int i = 0; i < count; i++)
        if (((int32_t) normalSlices[i]) < 0) {
            if (!flag_point_allocated) {
                cmUpdatePoint(state, point);
                flag_point_allocated = true;
            }
            cmAddPointToBucket(state, (i << shift) + (normalSlices[i] & 0xFFFF), point);
        }

    // process "phi" points
    if (negate)
        negateXY(point);

    scaleByLambdaXY(point, point);

    flag_point_allocated = false;
    for (int i = 0; i < count; i++)
        if (((int32_t) phiSlices[i]) < 0) {
            if (!flag_point_allocated) {
                cmUpdatePoint(state, point);
                flag_point_allocated = true;
            }
            cmAddPointToBucket(state, (i << shift) + (phiSlices[i] & 0xFFFF), point);
        }

    negateXY(point);

    flag_point_allocated = false;
    for (int i = 0; i < count; i++)
        if (((int32_t) phiSlices[i]) > 0) {
            if (!flag_point_allocated) {
                cmUpdatePoint(state, point);
                flag_point_allocated = true;
            }
            cmAddPointToBucket(state, (i << shift) + phiSlices[i] - 1, point);
        }
}

void cmPreprocessScalar(uint32_t *scalar) {
    if (scalar[7] > 0x73EDA753) {
        scalarSubN(scalar);
        if (scalar[7] > 0x73EDA753)
            scalarSubN(scalar);
    }
}

uint32_t *cmMSM(CMRun *run) {
    CMState state;
    uint64_t normal[2], phi[2];
    uint32_t normalSlices[10], phiSlices[10];
    PointXY point;

    cmInitialize(&state, 13, run->maxBatch, run->maxCollisions);

    state.points = run->points;

    for (int i = 0; i < run->pointCount; i++) {
#if defined(WASM_BUILD)
        //if(*(uint8_t*)(run->points + i*26 + 24)!=0)
        //  continue;
        loadXY(&point, run->points + i*24);
        fieldToMontgomeryFullReduce(&point.x, &point.x);
        fieldToMontgomeryFullReduce(&point.y, &point.y);
#endif

#if defined(C_BUILD)
        loadXY(&point, run->points + i*24);
#endif

        // cmPreprocessScalar(run->scalars + i*8);
        lambdaQR((uint32_t *) phi, (uint32_t *) normal, run->scalars + i * 8);
        cmSlice(normalSlices, normal);
        cmSlice(phiSlices, phi);

        cmProcessSlices(&state, &point, normalSlices, phiSlices, 10, 12, false);
    }

    cmCompleteProcessing(&state);
    return cmMSMReduce(&state);
}