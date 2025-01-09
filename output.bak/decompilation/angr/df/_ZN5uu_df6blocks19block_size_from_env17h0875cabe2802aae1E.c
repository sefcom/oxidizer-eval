long long uu_df::blocks::block_size_from_env::h0875cabe2802aae1()
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0xa0]
    int v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x88]
    unsigned long v5;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    unsigned long long v8;  // [sp-0x60]
    unsigned long long v9;  // [sp-0x58]
    unsigned long long v10;  // [sp-0x50]
    void* v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x40]
    char v13;  // [bp-0x38]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rbx

    v5 = "DF_BLOCK_SIZE";
    v6 = 13;
    v7 = "BLOCK_SIZE";
    v8 = 10;
    v9 = "BLOCKSIZEsrc/uu/df/src/columns.rs";
    v10 = 9;
    v11 = 0;
    v12 = 3;
    while (true)
    {
        v15 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf71787afda94e57(&v5);
        if (!v15)
        {
            ::0x4d3e60::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h810d07154baeed19();
            return 0;
        }
        std::env::var::hec353e942184343c(&v0, v15, v16);
        if (!*((long long *)&v0))
            break;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h122bc1b4c76f4cd7(&v0);
    }
    v4 = *((long long *)&v2);
    *((int128_t *)&v3) = *((int128_t *)&v1);
    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v13, (long long)(&v3)[8], *((long long *)&v2));
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hc8411f64556cc8d7(&v13);
    ::0x4d3d30::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4c5421f62a6f6c4d(&v3);
    if (*((long long *)&v0))
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h122bc1b4c76f4cd7(&v0);
    v17 = -0x100 | *((int *)&v13) == 3;
    ::0x4d3e60::core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$3_usize$GT$$GT$::h810d07154baeed19();
    return v17;
}
