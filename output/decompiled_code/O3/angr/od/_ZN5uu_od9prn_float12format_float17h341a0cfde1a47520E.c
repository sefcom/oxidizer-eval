long long uu_od::prn_float::format_float::h341a0cfde1a47520(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    char *v0;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0xd0]
    char *v2;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v3;  // [sp-0xc0], Other Possible Types: unsigned long long
    char *v4;  // [sp-0xb8], Other Possible Types: unsigned long long
    void* v5;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    unsigned long long v9;  // [sp-0x90]
    void* v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x80]
    char v12;  // [sp-0x78]
    unsigned long v13;  // [sp-0x70], Other Possible Types: unsigned long long
    char *v14;  // [sp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x60]
    char *v16;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v17;  // [sp-0x50], Other Possible Types: unsigned long long
    char *v18;  // [sp-0x48]
    unsigned long long v19;  // [sp-0x40]
    int v20;  // [sp-0x38]
    int v22;  // ymm0
    int v23;  // xmm1
    int v24;  // ymm1
    int v25;  // ymm1
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long v28;  // cc_ndep
    unsigned long long v29;  // cc_ndep
    int v30;  // ymm0
    int v31;  // xmm0
    int v32;  // ymm0
    int v33;  // ymm0
    unsigned int v34;  // ebp
    int v35;  // ymm2
    unsigned long long v38;  // rax
    char *v39;  // rsi
    unsigned long long v40;  // rax

    v23 = (uint128_t)v22;
    v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
    v13 = (unsigned long long)v22;
    v26 = (unsigned long long)v22;
    if (((char)((CmpF((unsigned long long)v22, (unsigned long long)v22) & 69) >> 2) & 1))
    {
LABEL_4d51da:
        v30 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        if (((char)((CmpF((unsigned long long)v25, (unsigned long long)v30) & 69) >> 6) & 1) != 1 || (char)amd64g_calculate_condition(10, 0, (unsigned long long)(unsigned int)(CmpF((unsigned long long)v25, (unsigned long long)v30) & 69), 0, v29) || v26 >= 0)
        {
            if (((char)((CmpF((unsigned long long)v25, (unsigned long long)v30) & 69) >> 6) & 1) == 1 && !((char)amd64g_calculate_condition(10, 0, (unsigned long long)(unsigned int)(CmpF((unsigned long long)v25, (unsigned long long)v30) & 69), 0, v29)) || (((char)(CmpF(0x7ff0000000000000, (unsigned long long)(v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v23 & 170141183460469231722463931679029329919))) & 69) | (char)((CmpF(0x7ff0000000000000, (unsigned long long)(v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v23 & 170141183460469231722463931679029329919))) & 69) >> 6)) & 1) == 1)
            {
                v14 = &v13;
                v38 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                v14 = &v13;
                v38 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            v15 = v38;
            v16 = a1;
            v17 = 0;
            v6 = 2;
            v8 = 1;
            v9 = 1;
            v10 = 0;
            v11 = 32;
            v12 = 3;
        }
        else
        {
            v14 = &g_542048;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            v16 = a1;
            v17 = 0;
            v6 = 2;
            v8 = 1;
            v9 = 1;
            v10 = 0;
            v11 = 32;
            v12 = 1;
        }
        v0 = &g_40dad0;
        v1 = 1;
        v4 = &v6;
        v5 = 1;
        v2 = &v14;
        v3 = 2;
        v39 = &v0;
    }
    else
    {
        v27 = v26 & 0x7ff0000000000000;
        if (!((char)amd64g_calculate_condition(4, 32, v26 * 0x1000, v26 * 0x800, v28)))
        {
            if (!v27)
                goto LABEL_4d51da;
        }
        else
        {
            if (!(v27) || !(v27 != 0x7ff0000000000000))
                goto LABEL_4d51da;
        }
        v31 = 170141183460469231722463931679029329919 & v23;
        v32 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
        v20 = v23;
        log10(v32);
        floor(v32);
        v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v31, 0xc1e0000000000000)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MinV(MaxV(v31, 0xc1e0000000000000), 0x41dfffffffc00000));
        v34 = ((char)amd64g_calculate_condition(11, 0, (unsigned long long)(unsigned int)(CmpF((unsigned long long)v32, (unsigned long long)v32) & 69), 0, v29) ? (unsigned int)(unsigned long long)v33 : 0);
        __powidf2(v34);
        if (...)
            v34 -= 1;
        if (v34 < 0 || v34 >= (unsigned int)a2)
        {
            if (v34 == -1)
            {
                v0 = &v13;
                v40 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                v0 = &v13;
                v40 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            v1 = v40;
            v2 = a2 - 1;
        }
        else
        {
            v0 = &v13;
            v1 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            v2 = ~(v34) + a2;
        }
        v3 = 0;
        v4 = a1;
        v5 = 0;
        v6 = 1;
        v7 = 1;
        v8 = 1;
        v9 = 2;
        v10 = 0;
        v11 = 32;
        v12 = 3;
        v14 = &g_40dad0;
        v15 = 1;
        v18 = &v6;
        v19 = 1;
        v16 = &v0;
        v17 = 3;
        v39 = &v14;
    }
    return ::0x4d4a70::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(a0, v39);
}
