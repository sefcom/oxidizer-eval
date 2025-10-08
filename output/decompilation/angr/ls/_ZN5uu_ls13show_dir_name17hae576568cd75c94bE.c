long long uu_ls::show_dir_name(unsigned long long a0[6], unsigned long long a1, char a2[248])
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    uint128_t v9;  // [bp-0x38]
    char v11;  // bpl
    unsigned long long v12;  // rax

    uucore::features::quoting_style::escape_dir_name(&v0, a0[4], a0[5], &a2[1 + 4]);
    if (!a2[247] || a2[246])
    {
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
    }
    else
    {
        v11 = 1;
        uu_ls::create_hyperlink(&v3, v1, v2, a0);
    }
    v12 = uu_ls::write_os_str(a1, v4, v5);
    if (!v12)
    {
        v6 = &g_686b58;
        v7 = 1;
        v8 = 8;
        v9 = 0;
        v12 = a1.write_fmt(&v6);
    }
    core::ptr::drop_in_place<std::ffi::os_str::OsString>((long long)v3, v4);
    if (!v11)
        return v12;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
    return v12;
}
