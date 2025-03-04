long long uu_ls::create_hyperlink::h72b30fed8b305b42(unsigned long long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    char *v0;  // [sp-0x108], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x100]
    char *v2;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0xf0]
    char *v4;  // [sp-0xe8]
    unsigned long long v5;  // [sp-0xe0]
    int v6;  // [sp-0xd8], Other Possible Types: char
    unsigned long long v7;  // [sp-0xc8]
    char v8;  // [bp-0xc0]
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0xa8]
    char v12;  // [bp-0xa0]
    char v13;  // [bp-0x98]
    unsigned long v14;  // [sp-0x90]
    unsigned long long v15;  // [sp-0x88]
    char v16;  // [bp-0x80]
    char v17;  // [bp-0x68]
    unsigned long v18;  // [sp-0x50]
    unsigned long long v19;  // [sp-0x48]
    struct struct_0 **v20;  // [sp-0x40]
    unsigned long long v21;  // [sp-0x38]
    void* v22;  // [sp-0x30]

    v14 = a1;
    v15 = a2;
    hostname::get::h61ff34d453bc4655(&v0);
    if (v0 != 0x8000000000000000)
    {
        v7 = v2;
        *((int128_t *)&v6) = *((int128_t *)&v0);
    }
    else
    {
        uu_ls::create_hyperlink::_$u7b$$u7b$closure$u7d$$u7d$::h5c4b22834743e018(&v6, v1);
    }
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v16, (long long)(&v6)[8], v7);
    std::fs::canonicalize::h205134df7886662b(&v0, a3 + 24);
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h2f717c7e2037f670(&v8, &v0);
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v11, *((long long *)&v9), *((long long *)&v10));
    v0 = *((long long *)&v12);
    v1 = &v0[*((long long *)&v13)];
    v2 = "_-.:~/";
    v3 = 6;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::h5a0c4658461ac5be(&v17, &v0);
    v0 = &v16;
    v1 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hdd85d91aa0a3dd15;
    v2 = &v17;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &v14;
    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    v18 = &g_6129e8;
    v19 = 4;
    v22 = 0;
    v20 = &v0;
    v21 = 3;
    ::0x51ccf0::core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(a0, &v18);
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v17);
    ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v11);
    ::0x51a690::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&v8);
    ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v16);
    return ::0x51a7c0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&v6);
}
