# Findora's fix on Yrrid Software's WASM MSM implementation

This is Findora's fix on Yrrid Software's WASM MSM implementation: 
[GitHub repository](https://github.com/yrrid/submission-wasm-msm). 


The fix addresses two problems.
- The batch controller is incorrect. The existing implementation can cause "stack overflow" such that some memory space 
is overwritten and causes unexpected behaviors.
- The finite field inversion is incorrect. It does not handle "one" properly. 
