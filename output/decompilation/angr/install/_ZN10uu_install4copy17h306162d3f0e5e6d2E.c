long long uu_install::copy(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[101])
{
    char v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd8]
    char v2;  // [bp-0xd0], Other Possible Types: unsigned long long
    char *v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    int v10;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    char *v13;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    char v16;  // [bp-0x58]
    char *v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    char *v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x38]
    unsigned long long v22;  // rax

    if (a4[99])
    {
        uu_install::need_copy(&v0, a0, a1, a2, a3, a4);
        if (v0)
        {
            return v0;
        }
        else if (!v2)
        {
            return 0;
        }
    }
    uu_install::perform_backup(&v0, a2, a3, a4);
    if (v0 == 9223372036854775809)
        return v2;
    v6 = v0;
    v7 = v2;
    v8 = v3;
    v22 = uu_install::copy_file(a0, a1, a2, a3);
    if (!v22)
    {
        if (a4[100])
        {
            v22 = uu_install::strip_file(a2, a3, a4);
            if (v22)
                goto LABEL_4697bf;
        }
        v22 = uu_install::set_ownership_and_permissions(a2, a3, a4);
        if (v22)
            goto LABEL_469787;
        if (a4[98])
        {
            v22 = uu_install::preserve_timestamps(a0, a1, a2, a3);
            if (!v22)
                goto LABEL_4697cb;
LABEL_4697bf:
        }
        else
        {
LABEL_4697cb:
            if (a4[97])
            {
                v13 = 1;
                v14 = a0;
                v15 = a1;
                v16 = 1;
                v9 = 1;
                v10 = a2;
                v11 = a3;
                v12 = 1;
                v17 = &v13;
                v18 = <os_display::Quoted as core::fmt::Display>::fmt;
                v19 = &v9;
                v20 = <os_display::Quoted as core::fmt::Display>::fmt;
                v1 = &g_502530;
                v2 = 2;
                v5 = 0;
                v3 = &v17;
                v4 = 2;
                std::io::stdio::_print(&v1);
                if (v0 == 0x8000000000000000)
                {
                    v0 = &g_502550;
                    v2 = 1;
                    v3 = 8;
                    *((uint128_t *)&v4) = 0;
                    std::io::stdio::_print(&v0);
                }
                else
                {
                    v9 = 1;
                    *((int128_t *)&v10) = *((int128_t *)&v7);
                    v12 = 1;
                    v13 = &v9;
                    v14 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v0 = &g_502560;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v13;
                    v4 = 1;
                    std::io::stdio::_print(&v0);
LABEL_46991c:
                    core::ptr::drop_in_place<std::path::PathBuf>(&v6);
                }
            }
            else if (!(v0 == 0x8000000000000000))
            {
                goto LABEL_46991c;
            }
            return 0;
        }
    }
    else
    {
LABEL_469787:
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v6);
    return v22;
}
