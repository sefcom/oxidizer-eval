long long uu_mv::hardlink::HardlinkGroupScanner::scan_directory_recursive(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x190]
    unsigned long long v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x180]
    char v4;  // [bp-0x178]
    unsigned long v5;  // [bp-0x170]
    void* v6;  // [bp-0x168]
    int v7;  // [bp-0x168]
    int v8;  // [bp-0x160]
    char v9;  // [bp-0x158]
    unsigned long long v10;  // [bp-0x140]
    unsigned long long v11;  // [bp-0x138]
    int v12;  // [bp-0x130]
    unsigned long long v13;  // [bp-0x120]
    unsigned long long v14;  // [bp-0x118]
    unsigned long long v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x108]
    int v17;  // [bp-0x100]
    unsigned long long v18;  // [bp-0xf0]
    int v19;  // [bp-0xe8], Other Possible Types: char
    char v20;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xe0]
    char v22;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0xc8]
    unsigned long long v24;  // [bp-0xc0]
    char v25;  // [bp-0xb8]
    unsigned long long v27;  // r14
    unsigned long long v28;  // rax

    std::fs::read_dir(&v19, a1, a2);
    if (v20 == 2)
        return (long long)v19;
    v3 = (long long)v19;
    v4 = v20;
    v5 = a0 + 24;
    while (true)
    {
        v14.next(&v3);
        if (!((char)v14 & 1))
        {
            ::0x4d37b0::core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
            return 0;
        }
        v27 = v16;
        if (!v15)
            break;
        v13 = v18;
        v12 = v17;
        v10 = v15;
        v11 = v27;
        v0.path(&v10);
        if ((char)v1.is_dir(v2))
        {
            v27 = a0.scan_directory_recursive(v1, v2);
            if (!(!v27))
                goto LABEL_4d4cb9;
            goto LABEL_4d4b20;
        }
        else
        {
            std::fs::metadata(&v19, v1, v2);
            if (*((int *)&v19) == 2)
            {
                v27 = v21;
LABEL_4d4cb9:
                ::0x4d37d0::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                ::0x4d37c0::core::ptr::drop_in_place<std::fs::DirEntry>(&v10);
                break;
            }
            if (*((long long *)&v25) < 2)
            {
LABEL_4d4b20:
                ::0x4d37d0::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                goto LABEL_4d4b28;
            }
            else
            {
                v19.rustc_entry(v5, v23, v24);
                if (*((long long *)&v19))
                {
                    memcpy(&v9, &v22, 16);
                    *((int128_t *)&v7) = *((int128_t *)&v19);
                }
                else
                {
                    *((int128_t *)&v8) = *((int128_t *)&v21);
                    v6 = 0;
                }
                v28 = v6.or_default();
                v22 = v2;
                *((int128_t *)&v19) = *((int128_t *)&v0);
                v28.push(&v19, &g_5da040);
LABEL_4d4b28:
                ::0x4d37c0::core::ptr::drop_in_place<std::fs::DirEntry>(&v10);
            }
        }
    }
    ::0x4d37b0::core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
    return v27;
}
