long long flealib::browserhistory::get_browsing_history(struct_0 *a0)
{
    int v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128], Other Possible Types: unsigned long long
    int v3;  // [bp-0x118]
    char v4;  // [sp-0x118]
    unsigned long long v5;  // [bp-0x108]
    void* v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    void* v8;  // [bp-0xe8]
    char v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    char v12;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v13;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v14;  // [bp-0xb0]
    int v15;  // [bp-0xa8]
    char v16;  // [bp-0x98]

    std::env::var(&v12, "HOME", 4);
    v9.unwrap(&v12, &g_b0acf8);
    v9.append_elements("/.config/google-chrome/Default/History/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 38);
    v6 = 0;
    v7 = 8;
    v8 = 0;
    std::fs::metadata(&v12, v10, v11);
    ::0x797870::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v12);
    if ((unsigned int)v12 != 2)
    {
        flealib::browserhistory::get_history(&v12, v10, v11, "SELECT url, title, visit_count, last_visit_time FROM urls ORDER BY last_visit_time DESC/.mozilla/firefox//snap/firefox/common/.mozilla/firefox/profiles.ini/places.sqlite/flea-tmp/firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 87);
        memcpy(&v4, &v13, 16);
        v5 = v14;
        if (!(v12 == 9223372036854775826))
            goto LABEL_79a852;
        v0 = v3;
        v2 = v5;
        v6.append_elements(v1, v5, &g_b0ad28);
        v2 = 0;
        ::0x797740::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
    }
    flealib::browserhistory::get_firefox_history(&v12);
    memcpy(&v3, &v13, 16);
    v5 = v14;
    if (v12 == 9223372036854775826)
    {
        v0 = v3;
        v2 = v5;
        v6.append_elements(v1, v5, &g_b0ad40);
        v2 = 0;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = 0;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v6);
        a0->field_0 = 9223372036854775826;
        ::0x797740::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&(char)v0);
    }
    else
    {
LABEL_79a852:
        a0->field_20 = *((int128_t *)&v16);
        *((void*)&a0->field_18) = v15;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v5;
        *((void*)&(&a0->field_0)[1]) = v3;
        a0->field_0 = v12;
        ::0x797740::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
    }
    ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&v9);
    return a0;
}
