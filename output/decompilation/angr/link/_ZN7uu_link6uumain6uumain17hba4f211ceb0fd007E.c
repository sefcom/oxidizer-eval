long long uu_link::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x360]
    unsigned long long v1;  // [bp-0x360]
    struct struct_0 *v2[2];  // [bp-0x358]
    struct struct_0 *v3[2];  // [bp-0x358]
    int v4;  // [bp-0x350]
    int v5;  // [bp-0x350]
    uint128_t v6;  // [bp-0x340]
    unsigned long long v7;  // [bp-0x330]
    unsigned long long v8;  // [bp-0x320]
    struct struct_0 *v9[2];  // [bp-0x318]
    int v10;  // [bp-0x310]
    int v11;  // [bp-0x300]
    unsigned long long v12;  // [bp-0x2f0]
    char v13;  // [bp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 *v14[2];  // [bp-0x2e0], Other Possible Types: unsigned long
    int v15;  // [bp-0x2d8], Other Possible Types: unsigned long
    unsigned long v16;  // [bp-0x2d0]
    int v17;  // [bp-0x2c8]
    unsigned long long v18;  // [bp-0x2b8]
    unsigned long long v19;  // [bp-0x2b0]
    struct struct_0 *v21[2];  // rdi
    void* v23;  // rdx
    struct struct_0 *v24[2];  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdi

    uu_link::uu_app(&v13);
    v0.try_get_matches_from(&v13, a0, a1);
    v21 = v3;
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v9.from();
    v12 = v7;
    *((uint128_t *)&v11) = v6;
    v10 = v4;
    v8 = v1;
    v9[0] = &v3;
    v13.try_get_many(&v8, _ZN7uu_link7options5FILES17h89eb36184dd2377aE, g_569a48);
    v0.unwrap(_ZN7uu_link7options5FILES17h89eb36184dd2377aE, g_569a48, &v13);
    if (v1)
    {
        v2[0] = &v3;
        v5 = v4;
    }
    else
    {
        v6 = 0;
        v1 = core::ops::function::FnOnce::call_once;
        v23 = 0;
        v2 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs";
        v5 = v11;
    }
    v13 = v1;
    v14[0] = &v2;
    v15 = v5;
    *((uint128_t *)&v17) = v6;
    v18 = v7;
    v19 = v23;
    v0.from_iter(&v13, &g_569950);
    if ((long long)v5)
    {
        if ((long long)v5 != 1)
        {
            v24 = v3;
            v25 = std::fs::hard_link(v24[0]->field_8, v24[0]->field_10, v24[1]->field_8, v24[1]->field_10);
            v13 = v24[1]->field_8;
            v14 = v24[1]->field_10;
            v15 = v24[0]->field_8;
            v16 = v24[0]->field_10;
            v26 = v25.map_err_context(&v13);
            ::0x495b70::core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsString>>(&v0);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
            return v26;
        }
        v27 = &g_569980;
        v28 = 1;
    }
    else
    {
        v27 = &g_569968;
        v28 = 0;
    }
    core::panicking::panic_bounds_check(v28, v28, v27); /* do not return */
}
