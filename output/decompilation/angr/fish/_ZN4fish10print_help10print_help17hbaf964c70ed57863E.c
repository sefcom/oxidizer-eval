int fish::print_help::print_help(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x1c8], Other Possible Types: char
    char v1;  // [bp-0x1c4]
    unsigned long long v2;  // [bp-0x1c0]
    int v3;  // [bp-0x1b8], Other Possible Types: void*
    void* v4;  // [bp-0x1a8]
    unsigned long long v5;  // [bp-0x1a0]
    void* v6;  // [bp-0x198]
    unsigned long long v7;  // [bp-0x190]
    int v8;  // [bp-0x188]
    int v9;  // [bp-0x188], Other Possible Types: char
    int v10;  // [bp-0x188]
    int v11;  // [bp-0x188]
    unsigned long long v12;  // [bp-0x188]
    unsigned long v13;  // [bp-0x180], Other Possible Types: unsigned long long
    int v14;  // [bp-0x17c]
    int v15;  // [bp-0x178], Other Possible Types: void*, unsigned long long
    void* v16;  // [bp-0x170]
    char v17;  // [bp-0x168]
    char v18;  // [bp-0x158]
    unsigned int v19;  // [bp-0x148]
    unsigned int v20;  // [bp-0x144]
    unsigned long long v21;  // [bp-0x140]
    void* v22;  // [bp-0x138]
    unsigned long long v23;  // [bp-0x130]
    void* v24;  // [bp-0x128]
    char v25;  // [bp-0x120]
    unsigned long long v26;  // [bp-0x118]
    char v27;  // [bp-0x100]
    int v29;  // xmm0
    int v30;  // xmm0
    unsigned long long v31;  // rdx

    v4 = 0;
    v5 = 1;
    v6 = 0;
    v4.push("__fish_print_help C", 18);
    v4.push(a0, a1);
    v27.new();
    v12 = "-c__fish_print_help C";
    v13 = 2;
    v15 = 1;
    v16 = 0;
    v27.args(&v12);
    v0.spawn(&v27);
    if (*((int *)&v0) == 1)
    {
        v21 = v2;
        v19 = 1;
LABEL_13f0f59:
        v7 = v21;
        v22 = 0;
        v23 = 4;
        v24 = 0;
        v26 = g_14df168[0].localize();
        v25 = 1;
        v0.to_arg(&v7);
        v30 = *((int128_t *)&v25);
        *((int128_t *)&v15) = *((int128_t *)&vvar_95{reg 32});
        v9 = v30;
        memcpy(&v17, &v0, 16);
        memcpy(&v18, &v1, 16);
        fish_printf::printf_impl::sprintf_locale(&v0, &v22, "%s: %s\nInvalid working directory, it must start and end with /", 7, &v12, 2);
        v0.unwrap(&g_14df198);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v12);
        v15 = v24;
        *((int128_t *)&v10) = *((int128_t *)&v22);
        fish::wutil::wwrite_to_fd((long long)(&v10)[8], v24, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
        core::ptr::drop_in_place<std::io::error::Error>(&v7);
    }
    else
    {
        v29 = *((int128_t *)&v1);
        *((int128_t *)&v14) = (int128_t)v3;
        v8 = v29;
        fish::print_help::print_help::{{closure}}(&(char)v19, &v12);
        if (((char)v19 & 1))
            goto LABEL_13f0f59;
        if (v20)
        {
            v0 = 0;
            v2 = 4;
            v3 = 0;
            v9 = 1;
            v13 = g_14df168[0].localize();
            v15 = v31;
            fish_printf::printf_impl::sprintf_locale(&v25, &v0, "%s\n", 3, &v9, 1);
            v25.unwrap(&g_14df180);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
            v15 = v3;
            *((int128_t *)&v11) = *((int128_t *)&v0);
            fish::wutil::wwrite_to_fd((long long)(&v11)[8], v3, 2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
        }
    }
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v4, 1);
    return core::ptr::drop_in_place<std::process::Command>(&v27);
}
