double uu_ls::get_security_context::hc3a239a09bb7bc7d(long long a0, long long a1, long long a2, long long a3)
{
    char v0;  // [bp-0x188]
    char v1;  // [bp-0x178]
    unsigned long v2;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x168]
    unsigned long long v4;  // [sp-0x160]
    unsigned long long v5;  // [sp-0x158]
    char v6;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x148]
    unsigned long v8;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x138]
    void* v10;  // [sp-0x130]
    unsigned long v11;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x118]
    unsigned short v13;  // [sp-0x110]
    unsigned long long v14;  // [sp-0x108]
    int v15;  // [sp-0x100]
    unsigned long long v16;  // [sp-0xf0]
    char v17;  // [bp-0xd8]
    int v19;  // xmm0
    int v20;  // ymm0
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rsi
    int v24;  // xmm0

    ::0x51d010::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2d1b440b8b51b75c(&v0, "? , ,\n", 1);
    if (!a3)
    {
        a0->field_10 = *((long long *)&v1);
        v24 = *((int128_t *)&v0);
        *((void*)&a0->field_0) = v24;
        return (unsigned long long)(v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24);
    }
    uu_ls::get_metadata_with_deref_opt::h0f2d8ddad62dff8c(&v17, a1, a2, 1);
    if (*((int *)&v17) == 2)
    {
        v2 = v14;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v6, a1, a2);
        v14 = v2;
        v19 = *((int128_t *)&v6);
        v15 = v19;
        v16 = v8;
        v13 = 2;
        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
        v11 = uucore::util_name::h412db5e565a079f3();
        v12 = v22;
        v2 = &v11;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
        v4 = &v13;
        v5 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h00273f496a2f8f40;
        v6 = &g_612798;
        v7 = 3;
        v10 = 0;
        v8 = &v2;
        v9 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v23, v22);
        ::0x51a490::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h70d82c0d2efe4f8e(&v13);
    }
}
