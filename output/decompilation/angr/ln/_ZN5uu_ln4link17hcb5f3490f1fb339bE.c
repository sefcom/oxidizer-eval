long long uu_ln::link(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56])
{
    char v0;  // [bp-0x198], Other Possible Types: unsigned long long
    int v1;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x188]
    char v3;  // [bp-0x180]
    unsigned long long v4;  // [bp-0x168]
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    char v8;  // [bp-0x150]
    unsigned long long v10[3];  // [bp-0x148]
    unsigned long long v11;  // [bp-0x140]
    unsigned long long v12;  // [bp-0x138]
    unsigned long long v13;  // [bp-0x130]
    char *v15;  // [bp-0x118], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v16;  // [bp-0x110]
    char *v17;  // [bp-0x108], Other Possible Types: unsigned long long
    int v18;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v19;  // [bp-0xf8]
    char *v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x60]
    char *v22;  // [bp-0x58]
    unsigned long long v23;  // [bp-0x50]
    unsigned long long v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x38]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    char v29;  // bl

    v13 = 0x8000000000000000;
    if (a4[49])
    {
        uu_ln::relative_path(&(char)v10, a0, a1, a2, a3);
    }
    else
    {
        v11 = a0;
        v12 = a1;
        *(v10) = 0x8000000000000000;
    }
    if (!(char)a2.is_symlink(a3))
    {
        std::fs::metadata(&v15, a2, a3);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v15);
        if ((unsigned int)v15 == 2)
        {
            if (a4[48])
            {
                v27 = std::os::unix::fs::symlink(&(char)v10, a2, a3);
                if (v27)
                {
                    v28 = v27.from();
                }
                else
                {
LABEL_46661c:
                    if (a4[53])
                    {
                        v4 = 1;
                        v6 = a2;
                        v7 = a3;
                        v8 = 1;
                        v0 = 1;
                        *((int128_t *)&v1) = *((int128_t *)&v11);
                        v3 = 1;
                        v20 = &v4;
                        v21 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v22 = &v0;
                        v23 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v15 = &g_4f6170;
                        v16 = 2;
                        v19 = 0;
                        v17 = &v20;
                        v18 = 2;
                        std::io::stdio::_print(&v15);
                        v15 = &g_4f6190;
                        v16 = 1;
                        v17 = 8;
                        *((uint128_t *)&v18) = 0;
                        std::io::stdio::_print(&v15);
                    }
                    core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&(char)v10);
                    if (v29)
                        return 0;
                    return 0;
                }
            }
            else if (a4[50] && (char)v11.is_symlink(v12))
            {
                std::fs::canonicalize(&v15, &(char)v10);
                v0.map_err_context(&v15, v11, v12);
                if (v0 != 0x8000000000000000)
                {
                    v24 = v0;
                    v28 = v1;
                    v25 = v2;
LABEL_4665a1:
                    v15 = &(char)v10;
                    v16 = a2;
                    v17 = a3;
                    v28 = std::fs::hard_link(&v24, a2, a3).map_err_context(&v15);
                    if (!v28)
                        goto LABEL_46661c;
                }
            }
            else
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v24, v11, v12);
                goto LABEL_4665a1;
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&(char)v10);
            core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&v13);
            return v28;
        }
    }
    goto (long long)(g_41a3ec[a4[55]] + (char *)&g_41a3ec[0]);
}
