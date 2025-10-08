long long uu_link::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // [bp-0x370]
    struct_0 *v2;  // [bp-0x368]
    int v3;  // [bp-0x360]
    int v4;  // [bp-0x350]
    int v5;  // [bp-0x340], Other Possible Types: char
    unsigned long long v6;  // [bp-0x330]
    struct_0 *v7;  // [bp-0x328]
    int v8;  // [bp-0x320]
    int v9;  // [bp-0x310]
    unsigned long long v10;  // [bp-0x300]
    int v11;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    unsigned long long v12;  // [bp-0x2f8]
    unsigned long v13;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v14;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    void* v15;  // [bp-0x2e0], Other Possible Types: unsigned long
    int v16;  // [bp-0x2d8]
    void* v17;  // [bp-0x2d0]
    int v18;  // [bp-0x2c8]
    void* v19;  // [bp-0x2c0]
    int v21;  // xmm0
    struct_0 *v22;  // rbx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdi

    uu_link::uu_app(&v11);
    (char)v1.try_get_matches_from(&v11, a0, a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v7.from();
    v10 = *((long long *)&v5);
    v9 = v4;
    v8 = v3;
    v6 = v1;
    v7 = v2;
    v11.try_get_many(&v6, _ZN7uu_link7options5FILES17hf2424eaf39b3eae1E, g_4dc938);
    (char)v1.unwrap(_ZN7uu_link7options5FILES17hf2424eaf39b3eae1E, g_4dc938, &v11);
    if (v1)
    {
        v21 = *((int128_t *)&v1);
        v18 = v5;
        v16 = v4;
        v14 = v3;
        v11 = v21;
    }
    else
    {
        v12 = core::ops::function::FnOnce::call_once;
        v13 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v14 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
        v15 = 0;
        v17 = 0;
        v19 = 0;
    }
    (char)v1.collect(&v11);
    v22 = v2;
    if ((long long)v3)
    {
        if ((long long)v3 != 1)
        {
            v23 = std::fs::hard_link(v22->field_0->field_8, v22->field_0->field_10, v22->field_8->field_8, v22->field_8->field_10);
            v11 = v22->field_8->field_8;
            v13 = v22->field_8->field_10;
            v14 = v22->field_0->field_8;
            v15 = v22->field_0->field_10;
            v24 = v23.map_err_context(&v11);
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v1, v22);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v6);
            return v24;
        }
        v25 = &g_4dc058;
        v26 = 1;
    }
    else
    {
        v25 = &g_4dc040;
        v26 = 0;
    }
    core::panicking::panic_bounds_check(v26, v26, v25); /* do not return */
}
