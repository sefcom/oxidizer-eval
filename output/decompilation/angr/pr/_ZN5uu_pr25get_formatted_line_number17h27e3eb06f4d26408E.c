long long uu_pr::get_formatted_line_number(void* a0, unsigned long long a1[31], unsigned long long a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0xe0]
    char *v1;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0xd0]
    char *v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xb8]
    unsigned short v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xa0]
    char *v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    char v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    int v16;  // [bp-0x58], Other Possible Types: char
    void* v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    unsigned long long v19;  // [bp-0x38]
    void* v21;  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r15
    unsigned long long v26;  // r15
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx

    v21 = 0;
    if (!((char)(((0 ^ a1[27]) & (0 ^ -(a1[27]))) >> 63)))
    {
        if (a1[2])
        {
            v21 = a3;
            if (!!a2 && !a3)
                goto LABEL_537d24;
        }
        else if (a2)
        {
LABEL_537d24:
            v1.to_vec(core::fmt::num::imp::<impl u64>::_fmt(a2, &v7, 20), a2);
            v23 = v3;
            v15 = v23;
            memcpy(&v13, &v1, 16);
            v24 = a1[30];
            v0 = &a1[27];
            v25 = v23;
            v26 = v25 - v24;
            if (v25 >= v24)
            {
                v28 = v26.get(v14, v23);
                if (!v28)
                    core::str::slice_error_fail(v14, v23, v26, v23, &g_669620); /* do not return */
                v18 = v28;
                v19 = v29;
                if (v24 > 65535)
                {
                    v1 = &g_668f50;
                    v2 = 1;
                    v3 = 8;
                    *((uint128_t *)&v4) = 0;
                    core::panicking::panic_fmt(&v1, &g_669638); /* do not return */
                }
                v1 = &v18;
                v2 = <&T as core::fmt::Display>::fmt;
                v3 = &v0;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = 0;
                v6 = v24;
                v7 = &g_456960;
                v8 = 2;
                v11 = &g_458388;
                v12 = 2;
                v9 = &v1;
                v10 = 3;
                v16.map_or_else(&v7);
            }
            else if (v24 <= 65535)
            {
                v1 = &v13;
                v2 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &v0;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = 0;
                v6 = v24;
                v7 = &g_456960;
                v8 = 2;
                v11 = &g_458388;
                v12 = 2;
                v9 = &v1;
                v10 = 3;
                v16.map_or_else(&v7);
            }
            else
            {
                v1 = &g_668f50;
                v2 = 1;
                v3 = 8;
                *((uint128_t *)&v4) = 0;
                core::panicking::panic_fmt(&v1, &g_669608); /* do not return */
            }
            *((void* *)&a0[16]) = v17;
            *(a0) = v16;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v13);
        }
    }
    *((unsigned long long *)a0) = 0;
    *((unsigned long long *)&a0[8]) = 1;
    *((unsigned long long *)&a0[16]) = 0;
    return v21;
}
