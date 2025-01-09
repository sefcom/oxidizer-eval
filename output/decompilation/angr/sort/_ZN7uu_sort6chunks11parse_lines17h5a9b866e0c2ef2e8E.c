long long uu_sort::chunks::parse_lines::h5a9b866e0c2ef2e8(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3[9], unsigned int a4, unsigned long a5)
{
    void* v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    void* v2;  // [sp-0xd0]
    unsigned int v3;  // [sp-0xc8]
    char v4;  // [bp-0xb8]
    char v5;  // [bp-0xa8]
    unsigned long long v6[9];  // [sp-0x98]
    char *v7;  // [sp-0x90]
    unsigned long long v8;  // [sp-0x88]
    int v9;  // [sp-0x80]
    unsigned long long v10;  // [sp-0x70]
    int v11;  // [sp-0x68]
    int v12;  // [sp-0x58]
    int v13;  // [sp-0x48]
    unsigned short v14;  // [sp-0x38]
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    unsigned long long v18;  // 4096
    unsigned long long v19;  // 4096

    v3 = 0;
    v17 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(::0x55a670::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(a4, &v3), v16, a0, a1);
    if (!v17)
        v18 = a1;
    else
        v18 = v16;
    if (!v17)
        v19 = a0;
    else
        v19 = v17;
    if (a2->field_10)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: lines.is_empty()", 34, &g_601948); /* do not return */
    }
    else if (a3[2])
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.selections.is_empty()", 49, &g_601930); /* do not return */
    }
    else if (a3[5])
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.num_infos.is_empty()", 48, &g_601918); /* do not return */
    }
    else if (a3[8])
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: line_data.parsed_floats.is_empty()", 52, &g_601900); /* do not return */
    }
    else
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        ::0x55a9d0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v3, a4, v19, v18);
        *((int128_t *)&v13) = *((int128_t *)&v5);
        *((int128_t *)&v12) = *((int128_t *)&v4);
        *((int128_t *)&v11) = *((int128_t *)&v3);
        *((uint128_t *)&v9) = 0;
        v10 = v18;
        v14 = 1;
        v6[0] = a3;
        v7 = &v0;
        v8 = a5;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::ha92d856ec75aa721(a2, v6);
        return ::0x55a580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..ops..range..Range$LT$usize$GT$$GT$$GT$::h2fc80e81fa42ea86(&v0);
    }
}
