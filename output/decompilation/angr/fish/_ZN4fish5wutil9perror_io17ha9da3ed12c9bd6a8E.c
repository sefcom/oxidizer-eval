void fish::wutil::perror_io(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    void* v8;  // [bp-0x68], Other Possible Types: char
    int v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    int v11;  // [bp-0x30], Other Possible Types: char
    char v12;  // [bp-0x20]

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v4 = a0;
    v5 = a1;
    v3 = 0;
    v11.to_arg(a2);
    memcpy(&v8, &v5, 16);
    *((int128_t *)&v6) = *((int128_t *)&v3);
    v9 = v11;
    memcpy(&v10, &v12, 16);
    fish_printf::printf_impl::sprintf_locale(&v11, &v0, "%s: %s\nInvalid working directory, it must start and end with /", 7, &(char)v6, 2);
    v11.unwrap(&g_14c14d0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v6);
    v8 = v2;
    memcpy(&(char)v6, &v0, 16);
    fish::wutil::wwrite_to_fd(v7, v2, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v6);
    return;
}
