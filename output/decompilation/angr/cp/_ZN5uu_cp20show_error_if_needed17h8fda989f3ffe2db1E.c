long long uu_cp::show_error_if_needed(unsigned long long *a0)
{
    char *v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    unsigned long long *v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char *v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    void* v7;  // [bp-0x30]
    char *v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx

    v2 = a0;
    v11 = *(a0);
    if (v11 == 9223372036854775812)
    {
        return v11;
    }
    else if (v11 != 9223372036854775815)
    {
        v0 = uucore::util_name();
        v1 = v12;
        v8 = &v0;
        v9 = <&T as core::fmt::Display>::fmt;
        v3 = &g_5fb720;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint(&v3);
        v0 = &v2;
        v1 = <&T as core::fmt::Display>::fmt;
        v3 = &g_5fb580;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        return std::io::stdio::_eprint(&v3);
    }
    else
    {
        return v11;
    }
}
