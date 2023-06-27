../fastmsm-bls12-381.wasm: *.c *.h
	clang --target=wasm32 -O3 -flto -nostdlib -Wl,--no-entry -Wl,--export-all -Wl,--lto-O3 -o ../fastmsm-bls12-381.wasm WFastMSM.c -DWASM_BUILD

