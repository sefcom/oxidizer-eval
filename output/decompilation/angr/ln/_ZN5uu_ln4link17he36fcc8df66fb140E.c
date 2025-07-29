long long uu_ln::link(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56])
{
    unsigned int v0;  // [bp-0x1dc]
    unsigned long long v1;  // [bp-0x1d8]
    unsigned long long v3;  // [bp-0x1d0]
    unsigned long long v4;  // [bp-0x1c8]
    char v5;  // [bp-0x1c0]
    char v6;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v7;  // [bp-0x1a0], Other Possible Types: char
    unsigned long long v8;  // [bp-0x198]
    char v9;  // [bp-0x190]
    char *v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x170]
    char *v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x160]
    unsigned long long v14;  // [bp-0x158]
    unsigned long long v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x138]
    unsigned long long v19;  // [bp-0x130]
    char v20;  // [bp-0x128], Other Possible Types: unsigned long long
    char *v21;  // [bp-0x128]
    unsigned long long v22;  // [bp-0x120]
    char *v23;  // [bp-0x118], Other Possible Types: unsigned long long
    int v24;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v25;  // [bp-0x108]
    unsigned int v33;  // eax
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax

    v33 = 0;
    v14 = 0x8000000000000000;
    if (a4[49])
    {
        v33 = uu_ln::relative_path(&(char)v17, a0, a1, a2, a3);
    }
    else
    {
        v18 = a0;
        v19 = a1;
        v17 = 0x8000000000000000;
    }
    v0 = v33 & 0xffffff00 | 1;
    if (!(char)a2.is_symlink(a3))
    {
        std::fs::metadata(&v20, a2, a3);
        ::0x4a38f0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v20, v22);
        if ((unsigned int)v20 == 2)
        {
            if (a4[48])
            {
                v34 = std::os::unix::fs::symlink(&(char)v17, a2, a3);
                if (v34)
                {
                    v35 = v34.from();
                }
                else
                {
LABEL_4a6721:
                    if (a4[53])
                    {
                        v1 = 1;
                        v3 = a2;
                        v4 = a3;
                        v5 = 1;
                        v6 = 1;
                        *((int128_t *)&v7) = *((int128_t *)&v18);
                        v9 = 1;
                        v10 = &v1;
                        v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v12 = &v6;
                        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v20 = &g_588220;
                        v22 = 2;
                        v25 = 0;
                        v23 = &v10;
                        v24 = 2;
                        v0 = (unsigned int)&v10 & 0xffffff00 | 1;
                        std::io::stdio::_print(&v20);
                        v20 = &g_588240;
                        v22 = 1;
                        v23 = 8;
                        *((uint128_t *)&v24) = 0;
                        std::io::stdio::_print(&v20);
                    }
                    core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&(char)v17);
                    return 0;
                }
            }
            else
            {
                if (a4[50] && (char)v18.is_symlink(v19))
                {
                    std::fs::canonicalize(&v20, &(char)v17);
                    v6.map_err_context(&v20, &(char)v17);
                    if (v6 == 0x8000000000000000)
                    {
                        core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&(char)v17);
                        core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v14);
                        return *((long long *)&v7);
                    }
                    v1 = v6;
                    v3 = *((long long *)&v7);
                    v4 = v8;
                }
                else
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v1, v18, v19);
                }
                v23 = v4;
                v21 = v1;
                v22 = v3;
                v21 = &(char)v17;
                v22 = a2;
                v23 = a3;
                v35 = std::fs::hard_link(&v21, a2, a3).map_err_context(&v21);
                if (!v35)
                    goto LABEL_4a6721;
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&(char)v17);
            core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v14);
            return v35;
        }
    }
    goto (long long)(g_416a84[a4[55]] + (char *)&g_416a84[0]);
}
