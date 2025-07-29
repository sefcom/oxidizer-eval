long long uu_od::prn_float::format_float(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    char *v2;  // [sp-0xc8], Other Possible Types: void*
    unsigned long long v3;  // [sp-0xc0]
    void* v4;  // [bp-0xb8], Other Possible Types: char *
    unsigned long long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    void* v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    char *v15;  // [bp-0x58], Other Possible Types: void*
    unsigned long long v16;  // [bp-0x50]
    char *v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    int v19;  // [bp-0x38]
    int v21;  // ymm0
    int v22;  // xmm1
    unsigned long v23;  // xmm1lq
    unsigned long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long v26;  // r9
    uint128_t v27;  // xmm0
    unsigned long v28;  // xmm0lq
    unsigned long v29;  // cc_ndep
    unsigned int v30;  // ebx
    unsigned long v31;  // xmm2lq
    unsigned long long v32;  // rax
    char *v33;  // rsi
    unsigned long v34;  // cc_ndep
    unsigned long long v35;  // rax

    v22 = (uint128_t)v21;
    v23 = (unsigned long long)v22;
    v24 = (unsigned long long)v21;
    v25 = 9223372036854775807 & v24;
    if (v25 != 0x7ff0000000000000)
    {
        v26 = v24;
        if (!(v26 & 0x7ff0000000000000) || (v26 & 0x7ff0000000000000) == 0x7ff0000000000000)
            goto LABEL_4b9fea;
        v27 = 170141183460469231722463931679029329919 & v22;
        v28 = v27;
        v19 = v22;
        log10(v28);
        floor(v28);
        v30 = ((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF(v28, v28) & 69), 0, v29) ? (unsigned int)(MinV(MaxV(v27, 0xc1e0000000000000), 0x41dfffffffc00000)) : 0);
        __powidf2(v30);
        v31 = (unsigned long long)v19;
        if (!((((char)(CmpF(v31, 0) & 69) | (char)((CmpF(v31, 0) & 69) >> 6)) & 1) == 1 || (((char)(CmpF(0x4024000000000000, v31) & 69) | (char)((CmpF(0x4024000000000000, v31) & 69) >> 6)) & 1) == 1))
        {
            v30 -= 1;
        }
        else if ((((char)(CmpF(0, v31) & 69) | (char)((CmpF(0, v31) & 69) >> 6)) & 1) != 1 && (((char)(CmpF(v31, 0xc024000000000000) & 69) | (char)((CmpF(v31, 0xc024000000000000) & 69) >> 6)) & 1) != 1)
        {
            v30 -= 1;
        }
        if ((v30 < (unsigned int)a2 & (v30 < 0 ^ 1)))
        {
            v0 = &(unsigned long long)v21;
            v1 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v2 = 0;
            v3 = ~(v30) + a2;
        }
        else
        {
            if (v30 != -1)
            {
                a2 -= 1;
                v0 = &(unsigned long long)v21;
                v32 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            else
            {
                v0 = &(unsigned long long)v21;
                v32 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            }
            v1 = v32;
            v2 = 0;
            v3 = a2;
        }
        v4 = 0;
        v5 = a1;
        v6 = 1;
        v7 = 1;
        v8 = 1;
        v9 = 2;
        v10 = 0;
        v11 = 32;
        v12 = 3;
        v13 = &g_432030;
        v14 = 1;
        v17 = &v6;
        v18 = 1;
        v15 = &v0;
        v16 = 3;
        v33 = &v13;
    }
    else
    {
LABEL_4b9fea:
        if (((char)((CmpF(v23, 0) & 69) >> 6) & 1) == 1 && !((char)amd64g_calculate_condition(10, 0, (unsigned long long)(CmpF(v23, 0) & 69), 0, v34)))
        {
            if (!v26)
                goto LABEL_4ba071;
            v13 = &g_595f78;
            v14 = <&T as core::fmt::Display>::fmt;
            v15 = 0;
            v16 = a1;
            v6 = 2;
            v8 = 1;
            v9 = 1;
            v10 = 0;
            v11 = 32;
            v12 = 1;
        }
        else
        {
            if (v25 > 9218868437227405311)
            {
LABEL_4ba071:
                v13 = &(unsigned long long)v21;
                v35 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            }
            else
            {
                v13 = &(unsigned long long)v21;
                v35 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            v14 = v35;
            v15 = 0;
            v16 = a1;
            v6 = 2;
            v8 = 1;
            v9 = 1;
            v10 = 0;
            v11 = 32;
            v12 = 3;
        }
        v0 = &g_432030;
        v1 = 1;
        v4 = &v6;
        v5 = 1;
        v2 = &v13;
        v3 = 2;
        v33 = &v0;
    }
    return a0.map_or_else(v33);
}
