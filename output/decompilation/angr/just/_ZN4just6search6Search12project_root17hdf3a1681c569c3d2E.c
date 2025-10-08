long long just::search::Search::project_root(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x160]
    void* v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x148]
    unsigned long long v4;  // [bp-0x140]
    unsigned long long v5;  // [bp-0x138]
    unsigned long long v6;  // [bp-0x130]
    unsigned long long v7;  // [bp-0x128]
    unsigned long long v8;  // [bp-0x120]
    unsigned long long v9;  // [bp-0x118]
    char v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    char v16;  // [bp-0xd8]
    int v17;  // [bp-0xd7]
    int v18;  // [bp-0xd0]
    int v19;  // [bp-0xc0]
    char v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa0]
    char v23;  // [bp-0xa0]
    int v24;  // [bp-0x98]
    unsigned long long v25;  // [bp-0x88]
    int v26;  // [bp-0x68], Other Possible Types: char
    unsigned long long v27;  // [bp-0x58]
    unsigned long long v29;  // r14
    char v30;  // al
    unsigned long long v31;  // 4096
    int v33;  // xmm0

    v29 = a4;
    v0 = a3.parent(a4);
    std::fs::read_dir(&v20, a3, a4);
    v30 = v23;
    if (v23 == 2)
    {
        v31 = a3;
    }
    else
    {
        v11 = a4;
        v31 = a3;
        do
        {
            v8 = v29;
            v7 = v31;
            v6 = v0;
            v9 = v21;
            v10 = v30;
            while (true)
            {
                v14.next(&v9);
                if ((int)v14 != 1)
                    break;
                if (!v15)
                {
                    just::search::Search::project_root::{{closure}}(&v2, v7, v8, *((long long *)&v16));
                    memcpy(&v26, &v3, 16);
                    v27 = v5;
                    *((unsigned long long *)&v1[24]) = v5;
                    v1[8] = v26;
                    *((unsigned long long *)v1) = v2;
LABEL_689834:
                    return core::ptr::drop_in_place<std::fs::ReadDir>(&v9);
                }
                v25 = (long long)v19;
                v24 = v18;
                v21 = v15;
                v22 = *((long long *)&v16);
                v2.file_name(&v21);
                if (!(char)v3.eq(v4, ".bzrfishl", 4))
                {
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v2);
                    v2.file_name(&v21);
                    if ((char)v3.eq(v4, ".gitNAMEpathb", 4))
                        goto LABEL_6897e4;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v2);
                    v2.file_name(&v21);
                    if ((char)v3.eq(v4, ".hg_darcs-cusrc/shebang.rs", 3))
                        goto LABEL_6897e4;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v2);
                    v2.file_name(&v21);
                    if ((char)v3.eq(v4, ".svnmode{", 4))
                        goto LABEL_6897e4;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v2);
                    v2.file_name(&v21);
                    if ((char)v3.eq(v4, "_darcs-cusrc/shebang.rs", 6))
                        goto LABEL_6897e4;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v2);
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v21);
                }
                else
                {
LABEL_6897e4:
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v2);
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&v2, v7, v8);
                    *((unsigned long long *)&v1[24]) = v4;
                    *((int128_t *)&v1[8]) = *((int128_t *)&v2);
                    *((unsigned long long *)v1) = 9223372036854775814;
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v21);
                    goto LABEL_689834;
                }
            }
            core::ptr::drop_in_place<std::fs::ReadDir>(&v9);
            if (v12)
            {
                v20.components(v7, v8);
                v14.components(v12, a2);
                if (v20.eq(&v14))
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(v1 + 8, a3, v11);
                    *((unsigned long long *)v1) = 9223372036854775814;
                    return 9223372036854775814;
                }
            }
            if (!v0)
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path(v1 + 8, a3, v11);
                *((unsigned long long *)v1) = 9223372036854775814;
                return 9223372036854775814;
            }
            v29 = v13;
            v0 = v6.parent(v29);
            std::fs::read_dir(&v20, v6, v29);
            v30 = v22;
            v31 = v6;
        } while ((char)v22 != 2);
    }
    just::search::Search::project_root::{{closure}}(&v14, v31, v29, v21);
    v33 = *((int128_t *)&v14);
    *((long long *)&v1[17]) = (long long)v17;
    *((long long *)&v1[24]) = (long long)v18;
    *(v1) = v33;
    *((char *)&v1[16]) = v16;
    return v16;
}
