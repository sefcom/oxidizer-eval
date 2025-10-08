long long uu_join::parse_separator(void* a0, char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x88]
    char *v4;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned int v12;  // [bp-0x28]
    unsigned long long v14;  // r14
    unsigned int v15;  // edx
    unsigned long long v16;  // rax
    unsigned long v17;  // rax

    if (a2 == 1)
    {
        v17 = *(a1);
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((char *)&a0[8]) = v17;
        return v17;
    }
    else if (!a2)
    {
        *((unsigned long long *)a0) = 9223372036854775810;
        return 9223372036854775810;
    }
    else
    {
        core::str::converts::from_utf8(&v2, a1, a2);
        if (*((int *)&v2) == 1)
        {
            v2.to_vec("non-UTF-8 multi-byte tabvalid string with at least one bytemulti-character tab ", 24);
            v5 = 1;
            *((double *)&a0[8]) = v2.new();
            *((char **)&a0[16]) = &g_4fe360;
            *((unsigned long long *)a0) = 9223372036854775812;
            return 9223372036854775812;
        }
        v14 = v3;
        v7 = v14;
        v8 = v4;
        v0 = v14;
        v1 = v14 + v8;
        if (((char)core::str::validations::next_code_point(&v0) & 1) && v15 != 0x110000)
        {
            v16 = core::str::validations::next_code_point(&v0);
            if (!((char)v16 & 1))
            {
                return a0.from(v14, v8);
            }
            else if (!(v15 ^ 92) && !(v15 ^ 48))
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                *((char *)&a0[8]) = 0;
                return v16;
            }
            else
            {
                v9 = &v7;
                v10 = <&T as core::fmt::Display>::fmt;
                v2 = &g_4fe520;
                v3 = 1;
                v6 = 0;
                v4 = &v9;
                v5 = 1;
                v11.map_or_else(&v2);
                v12 = 1;
                *((double *)&a0[8]) = v11.new();
                *((char **)&a0[16]) = &g_4fe360;
                *((unsigned long long *)a0) = 9223372036854775812;
                return &g_4fe360;
            }
        }
        core::option::expect_failed("valid string with at least one bytemulti-character tab ", 35, &g_4fe530); /* do not return */
    }
}
