long long uu_mv::hardlink::HardlinkTracker::check_hardlink(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long a6, char *a7)
{
    unsigned long long v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    int v3;  // [bp-0x158]
    char *v4;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x128]
    char *v6;  // [bp-0x120]
    unsigned long long v7;  // [bp-0x118]
    void* v8;  // [bp-0x110]
    struct struct_2 v9[16];  // [bp-0x100]
    unsigned long long v10;  // [bp-0xf8]
    char *v11;  // [bp-0xf0]
    unsigned long long v12;  // [bp-0xe8]
    char v13;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xd8]
    char *v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    void* v17;  // [bp-0xc0], Other Possible Types: char
    struct_0 *v18;  // rax
    struct_0 *v19;  // r13
    struct_1 *v20;  // rax

    std::fs::metadata(&v13, a2, a3);
    if (*((int *)&v13) == 2)
    {
        v0 = v14;
        if (*(a7))
        {
            v1 = a2;
            v2 = a3;
            *((unsigned long long **)&v9[0]) = &v1;
            v10 = <std::path::Display as core::fmt::Display>::fmt;
            v11 = &v0;
            v12 = <std::io::error::Error as core::fmt::Display>::fmt;
            v4 = &g_5d9f68;
            v5 = 3;
            v8 = 0;
            v6 = &v9[0].field_0;
            v7 = 2;
            std::io::stdio::_eprint(&v4);
        }
        a0[1] = 0x8000000000000000;
        a0[0] = 9223372036854775812;
        ::0x4d37e0::core::ptr::drop_in_place<std::io::error::Error>(v0);
        return a0;
    }
    else
    {
        *((int128_t *)&v3) = *((int128_t *)&v17);
        v18 = a1.get_inner(&(char)v3);
        if (v18)
        {
            v19 = v18;
            v20 = a6 + 24.get_inner(&(char)v3);
            if (v20 && v20->field_20 >= 2)
            {
                if (*(a7))
                {
                    v1 = a2;
                    v2 = a3;
                    *((int128_t *)&v9[0]) = *((int128_t *)&(&v19->padding_0)[1]);
                    v4 = &v1;
                    v5 = <std::path::Display as core::fmt::Display>::fmt;
                    v6 = &(char)v9;
                    v7 = <std::path::Display as core::fmt::Display>::fmt;
                    v13 = &g_5d9f98;
                    v14 = 3;
                    v17 = 0;
                    v15 = &v4;
                    v16 = 2;
                    std::io::stdio::_eprint(&v13);
                }
                a0[1].clone(&v19->padding_0[16]);
                a0[0] = 9223372036854775812;
                return a0;
            }
        }
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v13, a4, a5);
        (char)v4.insert(a1, (long long)v3, (long long)(&v3)[8], &v13);
        ::0x4d39a0::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v4);
        a0[1] = 0x8000000000000000;
        a0[0] = 9223372036854775812;
        return a0;
    }
}
