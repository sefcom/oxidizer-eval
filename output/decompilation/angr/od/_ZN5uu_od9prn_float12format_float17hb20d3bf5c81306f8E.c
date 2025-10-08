long long uu_od::prn_float::format_float(unsigned long long a0, unsigned short a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90], Other Possible Types: char *, unsigned long long
    int v3;  // [bp-0x88], Other Possible Types: unsigned long long, unsigned short
    void* v4;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x78], Other Possible Types: unsigned short
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58], Other Possible Types: void*
    unsigned long long v9;  // [bp-0x50], Other Possible Types: unsigned short
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    int v12;  // [bp-0x38]
    int v14;  // ymm0
    int v15;  // xmm1
    unsigned long v16;  // xmm1lq
    unsigned long v17;  // rax
    unsigned long long v18;  // rcx
    unsigned long v19;  // r9
    uint128_t v20;  // xmm0
    unsigned long v21;  // xmm0lq
    unsigned long v22;  // cc_ndep
    unsigned int v23;  // ebx
    unsigned long v24;  // xmm2lq
    unsigned short v25;  // r12w
    unsigned long long v26;  // rax
    char *v27;  // rsi
    unsigned long v28;  // cc_ndep
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax

    v15 = (uint128_t)v14;
    v16 = (unsigned long long)v15;
    v17 = (unsigned long long)v14;
    v18 = 9223372036854775807 & v17;
    if (v18 != 0x7ff0000000000000)
    {
        v19 = v17;
        if (!(v19 & 0x7ff0000000000000) || (v19 & 0x7ff0000000000000) == 0x7ff0000000000000)
            goto LABEL_46b6ba;
        v20 = 170141183460469231722463931679029329919 & v15;
        v21 = v20;
        v12 = v15;
        log10(v21);
        floor();
        v23 = ((char)_ccall(11, 0, (unsigned long long)(CmpF(v21, v21) & 69), 0, v22) ? (unsigned int)(MinV(MaxV(v20, 0xc1e0000000000000), 0x41dfffffffc00000)) : 0);
        __powidf2(v23);
        v24 = (unsigned long long)v12;
        if (!((((char)(CmpF(v24, 0) & 69) | (char)((CmpF(v24, 0) & 69) >> 6)) & 1) == 1 || (((char)(CmpF(0x4024000000000000, v24) & 69) | (char)((CmpF(0x4024000000000000, v24) & 69) >> 6)) & 1) == 1))
        {
            v23 -= 1;
        }
        else if ((((char)(CmpF(0, v24) & 69) | (char)((CmpF(0, v24) & 69) >> 6)) & 1) != 1 && (((char)(CmpF(v24, 0xc024000000000000) & 69) | (char)((CmpF(v24, 0xc024000000000000) & 69) >> 6)) & 1) != 1)
        {
            v23 -= 1;
        }
        if ((v23 < (unsigned int)a2 & (v23 < 0 ^ 1)))
        {
            if (a2 + ~(v23) > 65535)
            {
                v0 = &g_5038d8;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                core::panicking::panic_fmt(&v0, &g_5038e8); /* do not return */
            }
LABEL_46b8b5:
            v0 = &(unsigned long long)v14;
            v26 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        }
        else
        {
            if (v23 == -1)
                goto LABEL_46b8b5;
            v25 = (unsigned int)a2 - 1;
            v0 = &(unsigned long long)v14;
            v26 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
        }
        v1 = v26;
        v2 = 0;
        v3 = v25;
        v4 = 0;
        v5 = a1;
        v6 = &g_41a940;
        v7 = 1;
        v10 = &g_41d258;
        v11 = 1;
        v8 = &v0;
        v9 = 3;
        v27 = &v6;
    }
    else
    {
LABEL_46b6ba:
        if (((char)((CmpF(v16, 0) & 69) >> 6) & 1) == 1 && !((char)_ccall(10, 0, (unsigned long long)(CmpF(v16, 0) & 69), 0, v28)))
        {
            if (!v19)
                goto LABEL_46b725;
            v6 = &g_503900;
            v7 = <&T as core::fmt::Display>::fmt;
            v8 = 0;
            v9 = a1;
            v0 = &g_41a940;
            v1 = 1;
            v29 = &g_41d2a8;
        }
        else
        {
            if (v18 > 9218868437227405311)
            {
LABEL_46b725:
                v6 = &(unsigned long long)v14;
                v30 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            }
            else
            {
                v6 = &(unsigned long long)v14;
                v30 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            v7 = v30;
            v8 = 0;
            v9 = a1;
            v0 = &g_41a940;
            v1 = 1;
            v29 = &g_41d228;
        }
        v4 = v29;
        v5 = 1;
        v2 = &v6;
        v3 = 2;
        v27 = &v0;
    }
    return a0.map_or_else(v27);
}
