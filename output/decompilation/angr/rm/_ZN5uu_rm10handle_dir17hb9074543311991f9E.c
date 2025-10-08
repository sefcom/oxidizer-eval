long long uu_rm::handle_dir(unsigned long long a0, unsigned long long a1, char a2[5])
{
    char *v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char *v4;  // [bp-0x80], Other Possible Types: unsigned long long
    int v5;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x70]
    char v7;  // [bp-0x56]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // r14
    unsigned long long v14;  // rdx
    char *v15;  // r12
    unsigned long long v16;  // rax
    char v17;  // cl
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v13 = uu_rm::clean_trailing_slashes(a0, a1);
    if ((char)uu_rm::path_is_current_or_parent_directory(v13, v14))
    {
        v8 = uucore::util_name();
        v9 = v14;
        v0 = &v8;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &g_4ea4a0;
        v3 = 2;
        v6 = 0;
        v15 = &v0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        v8 = v13;
        v9 = v14;
        v0 = &v8;
        v1 = <std::path::Display as core::fmt::Display>::fmt;
        v16 = &g_4ea550;
    }
    else
    {
        (char)v2.components(v13, v14);
        if (!v7 && (char)v4 - 5 < 2)
        {
            v17 = a2[3];
            if (a2[3])
            {
                return uu_rm::remove_dir_recursive(v13, v14, a2);
            }
            else if (a2[4])
            {
                return uu_rm::remove_dir(v13, v14, a2);
            }
        }
        else
        {
            v18 = v13.parent(v14);
            v17 = a2[3];
            if (v17)
            {
                if (v18)
                    return uu_rm::remove_dir_recursive(v13, v14, a2);
                if (!a2[2])
                    return uu_rm::remove_dir_recursive(v13, v14, a2);
                if (a2[4])
                    goto LABEL_45d113;
            }
            else if (a2[4])
            {
                if (v18)
                    return uu_rm::remove_dir(v13, v14, a2);
LABEL_45d113:
                if (!a2[2])
                    return uu_rm::remove_dir(v13, v14, a2);
            }
        }
        if (v17)
        {
            v8 = uucore::util_name();
            v9 = v14;
            v0 = &v8;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ea4a0;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            v8 = "/";
            v9 = <char as core::fmt::Display>::fmt;
            v2 = &g_4ea570;
            v3 = 2;
            v6 = 0;
            v4 = &v8;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            v8 = uucore::util_name();
            v9 = v14;
            v0 = &v8;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ea4a0;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            v2 = &g_4ea590;
            v3 = 1;
            v4 = 8;
            *((uint128_t *)&v5) = 0;
            v19 = std::io::stdio::_eprint(&v2);
            return v19 & 0xffffffffffffff00 | 1;
        }
        v8 = uucore::util_name();
        v9 = v14;
        v0 = &v8;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &g_4ea4a0;
        v3 = 2;
        v6 = 0;
        v15 = &v0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_eprint(&v2);
        v8 = 1;
        v9 = v13;
        v10 = v14;
        v11 = 1;
        v0 = &v8;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v16 = &g_4ea5a0;
    }
    v2 = v16;
    v3 = 2;
    v6 = 0;
    v4 = v15;
    v5 = 1;
    return std::io::stdio::_eprint(&v2) & 0xffffffffffffff00 | 1;
}
