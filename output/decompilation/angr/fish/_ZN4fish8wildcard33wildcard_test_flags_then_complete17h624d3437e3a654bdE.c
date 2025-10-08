long long fish::wildcard::wildcard_test_flags_then_complete(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5, unsigned short a6, void* a7, struct_0 *a8)
{
    char v0;  // [bp-0x158], Other Possible Types: unsigned long long
    char v1;  // [bp-0x158]
    char *v2;  // [bp-0x140]
    int v3;  // [bp-0x138], Other Possible Types: char
    unsigned long long v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    int v6;  // [bp-0x118]
    unsigned long long v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x108]
    int v9;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v10;  // [bp-0xe8]
    char v11;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xd8]
    char v13;  // [bp-0xd0]
    char v14;  // [bp-0xa8]
    void* v15;  // [bp+0x10]
    unsigned long v16;  // rbx
    char v17;  // al
    unsigned int v18;  // ebp
    unsigned int v19;  // r13d
    void* v20;  // 4096
    void* v21;  // rbp
    char v22;  // al
    char v25;  // al

    v0 = a0;
    v16 = a6;
    v17 = a8.is_dir();
    if (!((char)v16 & 64) && v17 && !((char)v16 & 16))
    {
        v11.to_vec(a2, a3);
        v3.add(&v11, "/", 1);
        v18 = (unsigned int)a5 & 0xffffff00 | (char)fish::wildcard::wildcard_complete(v4, v5, a4, a5, 1, &g_14e4dd8, a7, v16, 1) == 1;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
        return v18;
    }
    v19 = ((unsigned int)v16 & 65535) >> 14 & 1;
    if ((char)fish::wildcard::wildcard_complete(a2, a3, a4, a5, 0, a5, NULL, v16, v19) != 1)
        return 0;
    if (((char)v16 & 32) && !a8.is_dir())
        return 0;
    if (!((char)v16 & 16))
    {
        a8.check_type();
        v20 = a7;
LABEL_14266c8:
        v15 = v20;
        if (!((char)v16 & 64))
        {
            v7 = 0x8000000000000000;
            v21 = a7;
        }
        else
        {
            if (a8->field_40 == 2)
            {
                fish::wutil::lwstat(&v11, v0, a1);
                if (*((int *)&v11) == 2)
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v11);
                    return 0;
                }
                v22 = (0xf000 & *((int *)&v14)) == 0xa000;
            }
            v0 = v22;
            v9.to_vec(fish::wildcard::file_get_desc(a2, a3, a8.is_dir(), v1, ((unsigned int)v16 & 65535 & 16) >> 4), a2);
            v8 = v10;
            v6 = v9;
            v21 = v15;
        }
        v2 = &v6;
        if (a8.is_dir())
        {
            v11.to_vec(a2, a3);
            v5 = *((long long *)&v13);
            *((int128_t *)&v3) = *((int128_t *)&v11);
            v11.add(&(char)v3, "/", 1);
            v25 = fish::wildcard::wildcard_complete(v12, *((long long *)&v13), a4, a5, &v2, &g_14e4e08, v21, v16, 1);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
        }
        else
        {
            v25 = fish::wildcard::wildcard_complete(a2, a3, a4, a5, &v2, &g_14e4e08, v21, v16, v19);
        }
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v6);
        return (unsigned int)v21 & 0xffffff00 | v25 == 1;
    }
    else if ((!(char)fish::common::is_windows_subsystem_for_linux(0) || !(char)fish::wcstringutil::string_suffixes_string_case_insensitive(".", 4, a2, a3)) && (char)a8.check_type() == 5)
    {
        v20 = a7;
        if (!(int)fish::wutil::waccess(v0, a1, 1))
            goto LABEL_14266c8;
    }
    return 0;
}
