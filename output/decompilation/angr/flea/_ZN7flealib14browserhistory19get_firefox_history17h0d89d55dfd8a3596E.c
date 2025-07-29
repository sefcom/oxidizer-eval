long long flealib::browserhistory::get_firefox_history(struct_0 *a0)
{
    int v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0x200]
    unsigned long long v2;  // [bp-0x1f8]
    char v3;  // [bp-0x1f0]
    unsigned long long v4;  // [bp-0x1e8]
    unsigned long long v5;  // [bp-0x1e0]
    int v6;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v7;  // [bp-0x1c8]
    char v8;  // [bp-0x1c0]
    unsigned long long v9;  // [bp-0x1b0]
    int v10;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v11;  // [bp-0x198]
    unsigned long long v12;  // [bp-0x190]
    int v13;  // [bp-0x188]
    char v14;  // [bp-0x178]
    int v15;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v16;  // [bp-0xe8]
    char v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xc8]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v25;  // rax

    std::env::var(&v10, "HOME", 4);
    (char)v0.unwrap(&v10, &g_b0ad58);
    v8.clone(&(char)v0);
    (char)v0.append_elements("/.mozilla/firefox//snap/firefox/common/.mozilla/firefox/profiles.ini/places.sqlite/flea-tmp/firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 18);
    std::fs::metadata(&v10, v1, v2);
    ::0x797870::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v10);
    if ((int)*((long long *)&v10) == 2)
    {
        v8.append_elements("/snap/firefox/common/.mozilla/firefox/profiles.ini/places.sqlite/flea-tmp/firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 38);
        v11 = v9;
        memcpy(&v10, &v8, 16);
        ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    }
    else
    {
        v11 = v2;
        memcpy(&v10, &(char)v0, 16);
    }
    v2 = v11;
    *((int128_t *)&v0) = *((int128_t *)&v10);
    v3.clone(&(char)v0);
    v3.append_elements("profiles.ini/places.sqlite/flea-tmp/firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 12);
    std::fs::metadata(&v10, v4, v5);
    ::0x797870::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v10);
    if ((int)*((long long *)&v10) == 2)
    {
        *((unsigned long long *)&a0->field_8) = 0;
        *((unsigned long long *)&a0->padding_9[7]) = 8;
        a0->field_18 = 0;
        a0->field_0 = 9223372036854775826;
        ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&v3);
        ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
    }
    else
    {
        v18 = v5;
        memcpy(&v17, &v3, 16);
        v10.load_from_file_opt(&v17);
        v17.unwrap(&v10);
        v20 = v17.section();
        if (!v20)
            core::option::unwrap_failed(&g_b0ad88); /* do not return */
        v21 = v20.get();
        if (!v21)
            core::option::unwrap_failed(&g_b0ada0); /* do not return */
        (char)v0.append_elements(v21, v22);
        (char)v0.append_elements("/places.sqlite/flea-tmp/firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 14);
        std::env::var(&v10, "HOME", 4);
        v6.unwrap(&v10, &g_b0adb8);
        v6.append_elements("/flea-tmp/firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 10);
        std::fs::create_dir_all(&v6).unwrap();
        v6.append_elements("firefox_historySELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 15);
        std::fs::copy(&(char)v0, &v6).unwrap(v22);
        v11 = v7;
        v10 = v6;
        ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        v2 = v11;
        *((int128_t *)&v0) = (int128_t)v10;
        flealib::browserhistory::get_history(&v10, v1, v11, "SELECT url, IFNULL(title, ''), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC", 116);
        v25 = (long long)v10;
        memcpy(&v15, &(char)v10, 16);
        v16 = v12;
        if (v25 != 9223372036854775826)
        {
            a0->field_30 = *((int128_t *)&v14);
            *((void*)&a0->field_20) = v13;
        }
        a0->field_18 = v16;
        *((void*)&a0->field_8) = v15;
        a0->field_0 = v25;
        core::ptr::drop_in_place<ini::Ini>(&v17);
        ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&v8);
    }
    ::0x7972f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    return a0;
}
