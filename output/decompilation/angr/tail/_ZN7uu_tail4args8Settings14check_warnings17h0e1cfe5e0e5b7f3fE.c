long long uu_tail::args::Settings::check_warnings(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    char *v2;  // [bp-0x60], Other Possible Types: unsigned long long
    int v3;  // [bp-0x58], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x50]
    char *v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long v10;  // rax
    unsigned long long v11;  // rdx, Other Possible Types: unsigned long
    unsigned long long v12;  // rax
    unsigned int v13;  // ebp
    char v14;  // r14b
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    if (a0->field_48)
    {
        v10 = a0->field_4c;
        if ((unsigned int)v10)
        {
            if ((unsigned int)v10 != 2)
                goto LABEL_49fa7b;
            v7 = uucore::util_name();
            v8 = v11;
            v5 = &v7;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = &g_573098;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v12 = &g_5730b8;
        }
        else
        {
            v7 = uucore::util_name();
            v8 = v11;
            v5 = &v7;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = &g_573098;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v12 = &g_5730c8;
        }
        v0 = v12;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        v10 = std::io::stdio::_eprint(&v0);
    }
LABEL_49fa7b:
    v13 = a0->field_44;
    v14 = a0->field_4c;
    if (v13)
    {
        if (v14 == 2)
        {
            v7 = uucore::util_name();
            v8 = v11;
            v5 = &v7;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = &g_573098;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v15 = &g_5730d8;
        }
        else
        {
            if (!uu_tail::platform::unix::supports_pid_checks(v13))
            {
                v7 = uucore::util_name();
                v8 = v11;
                v5 = &v7;
                v6 = <&T as core::fmt::Display>::fmt;
                v0 = &g_573098;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                std::io::stdio::_eprint(&v0);
                v0 = &g_5730e8;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                std::io::stdio::_eprint(&v0);
            }
LABEL_49fbb4:
            v16 = a0.has_stdin();
            if (!(char)v16)
                return v16;
            if (!v14 && !v13 && a0->field_28 == 1)
            {
                v0.stdin();
                v17 = v0.is_ok_and();
                if ((char)v17)
                    return v17;
            }
            std::io::stdio::stdin();
            v18 = std::sys::io::is_terminal::isatty::is_terminal();
            if (!(char)v18)
                return v18;
            v7 = uucore::util_name();
            v8 = v11;
            v5 = &v7;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = &g_573098;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v15 = &g_5730f8;
        }
        v0 = v15;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        return std::io::stdio::_eprint(&v0);
    }
    if (v14 == 2)
        return v10;
    goto LABEL_49fbb4;
}
