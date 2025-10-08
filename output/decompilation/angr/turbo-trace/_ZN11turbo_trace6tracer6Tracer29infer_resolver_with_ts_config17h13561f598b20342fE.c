long long turbo_trace::tracer::Tracer::infer_resolver_with_ts_config(unsigned long long *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    int v0;  // [bp-0x4f8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x4e8]
    char v2;  // [bp-0x4e0]
    char v3;  // [bp-0x4c8]
    int v4;  // [bp-0x378], Other Possible Types: char
    unsigned long long v5;  // [bp-0x368]
    unsigned long long v6;  // [bp-0x360]
    unsigned long long v7;  // [bp-0x340]
    unsigned long long v8;  // [bp-0x338]
    unsigned long long v9;  // [bp-0x330]
    char v10;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x1b0]
    char v12;  // [bp-0x1a8]
    unsigned long long v14;  // r13
    unsigned long long v15;  // r15
    unsigned long long v16;  // rdx

    v7 = a1;
    v8 = a2;
    v9 = 1;
    v14 = v7.try_fold();
    v7 = a1;
    v8 = a2;
    v9 = 1;
    v15 = v7.try_fold();
    if (!v14 && !v15)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v3.clone(a3);
    if (v14)
    {
        v10.join_component(v14, v16, "tsconfig.json/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/oxc_resolver-4.2.0/src/options.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/oxc_resolver-4.2.0/src/fs_cache.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/oxc_resolver-4.2.0/src/tsconfig.rs", 13);
        v7.to_vec(v11, *((long long *)&v12));
        v1 = 1;
        memcpy(&v0, &v7, 16);
        core::ptr::drop_in_place<core::option::Option<oxc_resolver::options::TsconfigOptions>>(&v4);
        v5 = 1;
        v4 = v0;
        v6 = 9223372036854775809;
        core::ptr::drop_in_place<turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf>(&v10);
    }
    if (v15)
    {
        memcpy(&v7, &v3, 392);
        v0.join_component(v15, v16, "node_modules,../package.jsondefault#/#.jsontsconfig.json/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/oxc_resolver-4.2.0/src/options.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/oxc_resolver-4.2.0/src/fs_cache", 12);
        v2.spec_to_string(&v0);
        v10.with_module(&v7, &v2);
        memcpy(&v3, &v10, 392);
        core::ptr::drop_in_place<turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf>(&v0);
    }
    memcpy(&v7, &v3, 392);
    return a0.clone_with_options(a3->field_188, &v7);
}
