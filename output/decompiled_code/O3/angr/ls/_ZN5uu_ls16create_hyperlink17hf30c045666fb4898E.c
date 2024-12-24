long long uu_ls::create_hyperlink::hf30c045666fb4898(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x100]
    unsigned long v2;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xf0]
    unsigned long long v4;  // [sp-0xe8]
    unsigned long long v5;  // [sp-0xe0]
    int v6;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v7;  // [sp-0xc8]
    char v8;  // [bp-0xc0]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0xa8]
    char v12;  // [bp-0xa0]
    char v13;  // [bp-0x98]
    unsigned long v14;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x88]
    char v16;  // [bp-0x80]
    char v17;  // [bp-0x68]
    unsigned long v18;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x48]
    unsigned long long v20;  // [sp-0x40]
    unsigned long long v21;  // [sp-0x38]
    void* v22;  // [sp-0x30]
    unsigned long long v24;  // rdx

    v14 = a1;
    v15 = a2;
    hostname::get::h299ad45fb752b4ed(&v0, a1, a2);
    if (v0 != 0x8000000000000000)
    {
        v7 = v2;
        *((int128_t *)&v6) = *((int128_t *)&v0);
    }
    else
    {
        uu_ls::create_hyperlink::_$u7b$$u7b$closure$u7d$$u7d$::hffb2e63819c18e63(&v6, v1);
    }
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v16, (long long)(&v6)[8], v7);
    std::fs::canonicalize::h9f0e08ef1a65a84e(&v0, a3 + 24, v24);
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h9b65d6766a83304d(&v8, &v0);
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v11, *((long long *)&v9), *((long long *)&v10));
    v0 = *((long long *)&v12);
    v1 = *((long long *)&v13) + v0;
    v2 = "_-.:~/";
    v3 = 6;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h5b06ac58d0571215(&v17, &v0, v24);
    v0 = &v16;
    v1 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h49508d7fbc814311;
    v2 = &v17;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &v14;
    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
    v18 = &g_612be8;
    v19 = 4;
    v22 = 0;
    v20 = &v0;
    v21 = 3;
    ::0x51ccd0::core::option::Option$LT$T$GT$::map_or_else::h4ac335b83d8d44c4(a0, &v18);
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v17);
    ::0x51a870::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h631d03c135faa1e8(&v11);
    ::0x51a670::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h59266c5fcebcf02f(&v8);
    ::0x51a870::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h631d03c135faa1e8(&v16);
    return ::0x51a7a0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hc4b69a9e1b24c343(&v6);
}
