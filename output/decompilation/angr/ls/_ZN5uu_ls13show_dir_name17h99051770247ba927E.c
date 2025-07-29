long long uu_ls::show_dir_name(unsigned long long a0[6], unsigned long long a1, struct_0 *a2)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    uint128_t v9;  // [bp-0x38]
    char v11;  // bpl
    unsigned long long v12;  // rax

    uucore::features::quoting_style::locale_aware_escape_dir_name(&v3, a0[4], a0[5], a2->field_fe * 0x10000 | a2->field_fc);
    if (!a2->field_f7 || a2->field_f6)
    {
        v2 = v5;
        *((int128_t *)&v0) = *((int128_t *)&v3);
    }
    else
    {
        v11 = 1;
        uu_ls::create_hyperlink(&v0, v4, v5, a0);
    }
    v12 = uu_ls::write_os_str(a1, v1, v2);
    if (v12)
    {
        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
    }
    else
    {
        v6 = &g_69f368;
        v7 = 1;
        v8 = 8;
        v9 = 0;
        v12 = a1.write_fmt(&v6);
        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
    }
    if (v11)
        ::0x51cb00::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
    return v12;
}
