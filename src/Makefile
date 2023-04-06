../fastmsm.wasm: *.c *.h
	clang --target=wasm32 -O3 -flto -nostdlib -Wl,--no-entry -Wl,--export-all -Wl,--lto-O3 -o ../fastmsm.wasm WFastMSM.c -DWASM_BUILD

