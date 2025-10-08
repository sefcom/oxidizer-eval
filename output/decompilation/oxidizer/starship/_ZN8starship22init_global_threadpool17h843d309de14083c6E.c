fn starship::init_global_threadpool() -> int {
    let v0: void*;  // [bp-0xc8]
    let v1: struct96;  // [bp-0xc8]
    let v2: u128;  // [bp-0xb8]
    let v3: struct700;  // [bp-0xa0]
    let v4: struct40;  // [bp-0x90]
    let v5: void*;  // [bp-0x80]
    let v6: u16;  // [bp-0x70]
    let v7: struct96;  // [bp-0x68]
    let v10: u64;  // rdx

    v6 = 0;
    v3 = 0;
    v0 = 0;
    v4 = 0;
    v5 = 0;
    v2 = 0;
    v2 = starship::num_rayon_threads();
    v7 = v1;
    core::result::Result<T,E>::expect(rayon_core::ThreadPoolBuilder<S>::build_global(&v7), v10);
    return;
}
