long long uu_mv::copy_dir_contents_recursive(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x1b0]
    unsigned long long v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x1a0]
    unsigned long long v3;  // [bp-0x190]
    char v4;  // [bp-0x188]
    unsigned long long v5;  // [bp-0x180]
    unsigned long long v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x170]
    unsigned long long v8;  // [bp-0x168]
    unsigned long long v9;  // [bp-0x160]
    unsigned long long v10;  // [bp-0x158]
    unsigned long long v11;  // [bp-0x150]
    unsigned long long v12;  // [bp-0x148]
    int v13;  // [bp-0x140]
    unsigned long long v14;  // [bp-0x130]
    char v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x110]
    unsigned long long v18;  // [bp-0x108]
    unsigned long long v19;  // [bp-0x100]
    int v20;  // [bp-0xf8]
    unsigned long long v21;  // [bp-0xe8]
    char v22;  // [bp-0xe0]
    unsigned long long v23;  // [bp-0xe0]
    char v24;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v25;  // [bp-0xd0]
    int v26;  // [bp-0x90]
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx

    std::fs::read_dir(&v22, a0, a1);
    if (v24 == 2)
        return v23;
    v3 = v23;
    v4 = v24;
    while (true)
    {
        v17.next(&v3);
        if (!((char)v17 & 1))
        {
            ::0x4c7430::core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
            return 0;
        }
        v27 = v19;
        if (!v18)
            break;
        v14 = v21;
        v13 = v20;
        v11 = v18;
        v12 = v27;
        v0.path(&v11);
        v28 = v1.file_name(v2);
        if (!v28)
            core::option::unwrap_failed(&g_5d9d90); /* do not return */
        v5.join(a2, a3, v28, v29);
        if (a6)
        {
            v8.to_string_lossy(v1, v2);
            v22.to_vec(v9, v10);
            v16 = (long long)v25;
            memcpy(&v15, &v23, 16);
            a6.set_message(&v15);
            ::0x4c7640::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
        }
        if ((char)v1.is_dir(v2))
        {
            v27 = std::fs::create_dir_all(&v5);
            if (!(!v27))
                goto LABEL_4ce582;
            v27 = uu_mv::copy_dir_contents_recursive(v1, v2, v6, v7, a4, a5, a6);
        }
        else
        {
            v27 = uu_mv::copy_file_with_hardlinks_helper(v1, v2, v6, v7, a4, a5);
        }
        if (!v27)
        {
            if (a6)
            {
                std::fs::metadata(&v22, v1, v2);
                if (v23 == 2)
                {
                    ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v24);
                }
                else
                {
                    a6.inc((long long)v26);
                    ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v23, v24);
                }
            }
            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v5);
            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            ::0x4c7440::core::ptr::drop_in_place<std::fs::DirEntry>(&v11);
        }
        else
        {
LABEL_4ce582:
            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v5);
            ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            ::0x4c7440::core::ptr::drop_in_place<std::fs::DirEntry>(&v11);
            break;
        }
    }
    ::0x4c7430::core::ptr::drop_in_place<std::fs::ReadDir>(&v3);
    return v27;
}
