long long uu_rmdir::remove_single(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [bp-0x128], Other Possible Types: char *, char
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    int v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    int v6;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [bp-0xf0]
    int v8;  // [bp-0xe8], Other Possible Types: char *, unsigned long long
    unsigned long long v9;  // [bp-0xe0]
    int v10;  // [bp-0xd8], Other Possible Types: void*
    int v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    int v16;  // [bp-0x98], Other Possible Types: char
    unsigned long long v17;  // [bp-0x88]
    int v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x70]
    int v20;  // [bp-0x68], Other Possible Types: char
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    char v25;  // [bp-0x30]
    int v28;  // xmm2
    int v29;  // xmm3
    unsigned long long v30;  // rax

    if ((a3 & 0x10000))
    {
        (char)v0.to_vec("util_name\n", 9);
        v6.to_vec(uucore::util_name(), a2);
        v19 = v8;
        *((int128_t *)&v18) = *((int128_t *)&v6);
        memcpy(&v16, &v0, 16);
        v17 = v2;
        v6.to_vec("pathzeroAnsi -- ", 4);
        v21 = v8;
        memcpy(&v20, &v6, 16);
        v22 = 1;
        v23 = a1;
        v24 = a2;
        v25 = 1;
        v6.spec_to_string(&v22);
        v2 = v21;
        v0 = v20;
        *((int128_t *)&v3) = *((int128_t *)&v6);
        v5 = v8;
        v28 = *((int128_t *)&v17);
        v29 = (int128_t)(&v18)[8];
        v6 = v16;
        v8 = v28;
        v10 = v29;
        v14 = v4;
        v15 = v5;
        v12 = v2;
        v13 = (long long)v3;
        v11 = v20;
        (char)v0.from_iter(&v6);
        uucore::mods::locale::get_message_with_args(&v16, "rmdir-verbose-removing-directoryrmdir-help-ignore-fail-non-emptyassertion failed: idx < CAPACITYassertion failed: new_cap >= len", 32, &(char)v0);
        v0 = &v16;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_572bf8;
        v7 = 2;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        std::io::stdio::_print(&v6);
        ::0x49e1e0::core::ptr::drop_in_place<alloc::string::String>(&v16);
    }
    v30 = std::fs::remove_dir(a1, a2);
    if (v30)
    {
        a0[1] = a1;
        a0[2] = a2;
    }
    a0[0] = v30;
    return v30;
}
