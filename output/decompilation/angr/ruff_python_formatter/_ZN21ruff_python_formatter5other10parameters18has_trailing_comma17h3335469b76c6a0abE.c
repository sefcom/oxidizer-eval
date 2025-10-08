long long ruff_python_formatter::other::parameters::has_trailing_comma(unsigned long long a0[12], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xb0], Other Possible Types: unsigned long long
    char *v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    void* v4;  // [bp-0x98]
    char *v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v9;  // [bp-0x68]
    char v10;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    int v13;  // [bp-0x48], Other Possible Types: char
    char v14;  // [bp-0x38]
    char v15;  // [bp-0x28]
    unsigned int v17;  // edx
    unsigned int v18;  // edx

    if (a1 == 94)
        return 0;
    v11 = a1;
    v12 = a2;
    if (!a0[2] || a0[5] || a0[10] || a0[8])
    {
        v11.range();
        v0.starts_at(v18, a3, a4);
        memcpy(&v15, &v4, 16);
        memcpy(&v14, &v2, 16);
        memcpy(&v13, &v0, 16);
    }
    else
    {
        v11.range();
        v0.starts_at(v17, a3, a4);
        memcpy(&v15, &v4, 16);
        memcpy(&v14, &v2, 16);
        memcpy(&v13, &v0, 16);
        if (!a0[11])
        {
            v0.try_fold(&v13);
            if (v1 == 90)
            {
                v8 = 90;
                v5 = &v7;
                v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                v0 = &g_97e550;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                core::panicking::panic_fmt(&v0, &g_97e5a8); /* do not return */
            }
            v7 = v0;
            v8 = *((int *)&v1);
            if ((char)v8 != 11)
            {
                v5 = &v7;
                v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                v0 = &g_97e550;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                core::panicking::panic_fmt(&v0, &g_97e5a8); /* do not return */
            }
            v0.try_fold(&v13);
            if (v1 == 90)
            {
                v10 = 90;
                v5 = &v9;
                v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                v0 = &g_97e570;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                core::panicking::panic_fmt(&v0, &g_97e590); /* do not return */
            }
            v9 = v0;
            v10 = *((int *)&v1);
            if ((char)v10 != 14)
            {
                v5 = &v9;
                v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                v0 = &g_97e570;
                v1 = 2;
                v4 = 0;
                v2 = &v5;
                v3 = 1;
                core::panicking::panic_fmt(&v0, &g_97e590); /* do not return */
            }
        }
    }
    v0.try_fold(&v13);
    if ((char)v1 == 90)
        core::option::expect_failed("There must be a token after the argument listcrates/ruff_python_formatter/src/pattern/pattern_arguments.rs", 45, &g_97e5c0); /* do not return */
    return (char)v1 == 11;
}
