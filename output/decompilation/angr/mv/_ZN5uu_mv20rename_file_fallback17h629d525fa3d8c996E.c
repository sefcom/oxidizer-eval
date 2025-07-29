long long uu_mv::rename_file_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x1a1]
    unsigned long long v1;  // [bp-0x1a0]
    int v2;  // [bp-0x198], Other Possible Types: char
    unsigned long long v3;  // [bp-0x188]
    unsigned long long v4;  // [bp-0x178]
    unsigned long long v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    int v8;  // [bp-0x158]
    unsigned long long v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x120]
    char v14;  // [bp-0x118], Other Possible Types: unsigned long long
    char v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x100]
    int v17;  // [bp-0xf8]
    char v18;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xd0]
    int v22;  // [bp-0xc8]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long v27;  // rdx
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax

    v4 = a0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    v1 = a1;
    if ((char)a2.is_symlink(a3))
    {
        v24 = std::fs::remove_file(a2, a3);
        v10 = a0;
        v11 = a1;
        v12 = a2;
        v13 = a3;
        if (!v24)
            goto LABEL_4ce8c0;
        v25 = uu_mv::rename_file_fallback::{{closure}}(&v10, v24);
    }
    else
    {
        std::fs::metadata(&v18, a2, a3);
        ::0x4c8450::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v18, v19);
        if (v18 != 2)
        {
            v26 = std::fs::remove_file(a2, a3);
            if (v26)
                return v26;
        }
LABEL_4ce8c0:
        if (!a5 || !a4)
        {
LABEL_4ce8d0:
            if (!std::fs::copy(a0, v1, a2, a3))
            {
                v28 = uucore::features::fsxattr::copy_xattrs(&v4, &v6);
                if (!v28)
                {
LABEL_4ce9e7:
                    v28 = std::fs::remove_file(a0, v1);
                    if (!v28)
                        return 0;
                }
            }
            else if (!v27)
            {
                goto LABEL_4ce9e7;
            }
            v25 = uu_mv::rename_file_fallback::{{closure}}(v28);
        }
        else
        {
            v0 = 0;
            v14.check_hardlink(a4, a0, v1, a2, a3, a5, &v0);
            memcpy(&v2, &v15, 16);
            v3 = v16;
            if (v14 == 9223372036854775812)
            {
                v8 = v2;
                v9 = v3;
                if ((long long)v8 == 0x8000000000000000)
                {
                    ::0x4c7ea0::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v8);
                    goto LABEL_4ce8d0;
                }
                else
                {
                    v20 = v3;
                    memcpy(&v18, &v2, 16);
                    v29 = std::fs::hard_link(&v18, a2, a3);
                    if (!v29)
                        v29 = std::fs::remove_file(a0, v1);
                    ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v18);
                    return v29;
                }
            }
            else
            {
                v22 = v17;
                memcpy(&v19, &v2, 16);
                v21 = v3;
                v18 = v14;
                v25 = (unsigned long long)v18.from();
            }
        }
    }
    return v25;
}
