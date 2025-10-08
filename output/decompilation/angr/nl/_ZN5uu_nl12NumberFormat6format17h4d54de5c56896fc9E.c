long long uu_nl::NumberFormat::format(unsigned long long a0, char *a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    char *v2;  // [bp-0x58], Other Possible Types: unsigned long long
    int v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    char *v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    void* v8;  // [bp-0x28]
    unsigned short v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]
    unsigned int v13;  // eax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long v16;  // rcx

    v10 = a2;
    v13 = *(a1);
    if (v13)
    {
        if (v13 != 1)
        {
            if (a2 >= 0)
            {
                if (a3 <= 65535)
                {
                    v6 = &v10;
                    v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                    v8 = 0;
                    v9 = a3;
                    v15 = &g_44e930;
                }
                else
                {
                    v0 = &g_63a250;
                    v1 = 1;
                    v2 = 8;
                    *((uint128_t *)&v3) = 0;
                    core::panicking::panic_fmt(&v0, &g_63a290); /* do not return */
                }
            }
            else
            {
                v11 = -(a2);
                v16 = a3 - 1;
                if (v16 > 65535)
                {
                    v0 = &g_63a250;
                    v1 = 1;
                    v2 = 8;
                    *((uint128_t *)&v3) = 0;
                    core::panicking::panic_fmt(&v0, &g_63a2b8); /* do not return */
                }
                v6 = &v11;
                v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
                v8 = 0;
                v9 = v16;
                v15 = &g_63a2a8;
            }
            v0 = v15;
            v1 = 1;
            v14 = &g_4543f0;
        }
        else if (a3 <= 65535)
        {
            v6 = &v10;
            v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v8 = 0;
            v9 = a3;
            v0 = &g_44e930;
            v1 = 1;
            v14 = &g_4543c0;
        }
        else
        {
            v0 = &g_63a250;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            core::panicking::panic_fmt(&v0, &g_63a278); /* do not return */
        }
    }
    else
    {
        if (a3 <= 65535)
        {
            v6 = &v10;
            v7 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
            v8 = 0;
            v9 = a3;
            v0 = &g_44e930;
            v1 = 1;
            v14 = &g_454390;
        }
        else
        {
            v0 = &g_63a250;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            core::panicking::panic_fmt(&v0, &g_63a260); /* do not return */
        }
    }
    v4 = v14;
    v5 = 1;
    v2 = &v6;
    v3 = 2;
    a0.map_or_else(&v0);
    return a0;
}
