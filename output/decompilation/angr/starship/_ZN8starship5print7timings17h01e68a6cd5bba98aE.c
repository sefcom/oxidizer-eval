void starship::print::timings(unsigned long long a0[17])
{
    unsigned long long v0;  // [bp-0x810]
    unsigned long long v1;  // [bp-0x808]
    unsigned long v2;  // [bp-0x800], Other Possible Types: unsigned long long
    int v3;  // [bp-0x7f8], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x7f0]
    unsigned long long v5;  // [bp-0x7e8]
    char *v6;  // [bp-0x7e0]
    unsigned long long v7;  // [bp-0x7d8]
    unsigned long v8;  // [bp-0x7d0]
    unsigned long long v9;  // [bp-0x7c8]
    unsigned long long v10;  // [bp-0x7c0]
    void* v11;  // [bp-0x7b8]
    unsigned long long v12;  // [bp-0x7b0]
    void* v13;  // [bp-0x7a8]
    char v14;  // [bp-0x7a0]
    unsigned long long v15;  // [bp-0x798]
    unsigned long long v16;  // [bp-0x790]
    char v17;  // [bp-0x788]
    unsigned long long v18;  // [bp-0x778]
    char v19;  // [bp-0x768]
    unsigned long long v20;  // [bp-0x758]
    unsigned long long v21;  // [bp-0x748]
    unsigned long long v22;  // [bp-0x740]
    char *v23;  // [bp-0x738]
    unsigned long long v24;  // [bp-0x730]
    void* v25;  // [bp-0x728]
    char v26;  // [bp-0x718]
    char v27;  // [bp-0x700]
    unsigned long long v29;  // rbx
    unsigned long long v30;  // r14
    unsigned long long v31;  // r15
    void* v32;  // rdx
    void* v33;  // rdx
    char *v34;  // r15
    void* v35;  // r13
    char *v36;  // rbp
    unsigned long v37;  // rbx
    unsigned long long v38;  // r14
    unsigned long v39;  // r12

    v0 = 0x8000000000000000;
    v27.new(a0, &v0);
    starship::print::compute_modules(&v0, &v27);
    v14.collect(v1, v2 * 96 + v1);
    core::ptr::drop_in_place<alloc::vec::Vec<starship::module::Module>>(&v0);
    v29 = v15;
    v30 = v16;
    alloc::slice::<impl [T]>::sort_by(v29, v30);
    v31 = v30 * 80 + v29;
    if (!((char)v29.reduce(v31) & 1))
        v32 = 0;
    v13 = v32;
    if (!((char)v29.reduce(v31) & 1))
        v33 = 0;
    v11 = v33;
    v0 = &g_11f6760;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    v34 = &v0;
    std::io::stdio::_print(&v0);
    v12 = v29;
    if (v30)
    {
        v10 = v30 * 80;
        v35 = 0;
        v36 = &v26;
        do
        {
            v37 = v36;
            v38 = v12;
            alloc::slice::<impl [T]>::repeat(v34, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1, v13 - *((long long *)(64 + v38 + (char *)v35)));
            v18 = v2;
            memcpy(&v17, &v0, 16);
            v39 = v34;
            alloc::slice::<impl [T]>::repeat(v39, " =\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-1.11.0/src/iter/extend.rsfatal runtime error: thread local panicked on drop, aborting\n/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs/rustc/bf64d66bd58", 1, v11 - *((long long *)(72 + v38 + (char *)v35)));
            v20 = v2;
            memcpy(&v19, &v0, 16);
            v36 = v37;
            starship::print::format_duration(v37, v38 + v35 + 48);
            v0 = v38 + v35;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &v17;
            v3 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &v19;
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = v36;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v8 = v38 + v35 + 24;
            v9 = <alloc::string::String as core::fmt::Display>::fmt;
            v21 = &g_11f6770;
            v22 = 6;
            v25 = 0;
            v34 = v39;
            v23 = v39;
            v24 = 5;
            std::io::stdio::_print(&v21);
            core::ptr::drop_in_place<alloc::string::String>(v6);
            core::ptr::drop_in_place<alloc::string::String>(&v19);
            core::ptr::drop_in_place<alloc::string::String>(&v17);
            v35 += 80;
        } while (v10 != v35);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<starship::print::timings::ModuleTiming>>(&v14);
    core::ptr::drop_in_place<starship::context::Context>(&v27);
    return;
}
