long long uu_od::prn_float::format_float::h341a0cfde1a47520(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xd8]
    char *v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    char *v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xc0], Other Possible Types: unsigned long long
    char *v5;  // [sp-0xb8], Other Possible Types: unsigned long long
    void* v6;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xa8]
    unsigned long long v9;  // [sp-0xa0]
    unsigned long long v10;  // [sp-0x98]
    unsigned long long v11;  // [sp-0x90]
    void* v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x80]
    char v14;  // [sp-0x78]
    unsigned long v15;  // [sp-0x70]
    char *v16;  // [sp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long v17;  // [sp-0x68]
    unsigned long long v18;  // [sp-0x60]
    char *v19;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v20;  // [sp-0x50], Other Possible Types: unsigned long long
    char *v21;  // [sp-0x48]
    unsigned long long v22;  // [sp-0x40]
    int v23;  // [sp-0x38]
    int v25;  // ymm0
    int v26;  // xmm1
    int v27;  // ymm1
    int v28;  // ymm1
    unsigned long long v29;  // rax
    unsigned long long v30;  // r14
    unsigned long long v31;  // rcx
    unsigned long v32;  // cc_ndep
    unsigned long long v33;  // cc_ndep
    int v34;  // ymm0
    int v35;  // xmm0
    int v36;  // ymm0
    int v37;  // ymm0
    unsigned int v38;  // ebp
    int v39;  // ymm2
    unsigned long long v42;  // rax
    char *v43;  // rsi
    unsigned long long v44;  // rax

    v26 = (uint128_t)v25;
    v28 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
    v15 = (unsigned long long)v25;
    v29 = (unsigned long long)v25;
    if (((char)((CmpF((unsigned long long)v25, (unsigned long long)v25) & 69) >> 2) & 1))
    {
LABEL_4d51da:
        v34 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        if (((char)((CmpF((unsigned long long)v28, (unsigned long long)v34) & 69) >> 6) & 1) != 1 || (char)amd64g_calculate_condition(10, 0, (unsigned long long)(CmpF((unsigned long long)v28, (unsigned long long)v34) & 69), 0, v33) || v29 >= 0)
        {
            if (((char)((CmpF((unsigned long long)v28, (unsigned long long)v34) & 69) >> 6) & 1) == 1 && !((char)amd64g_calculate_condition(10, 0, (unsigned long long)(CmpF((unsigned long long)v28, (unsigned long long)v34) & 69), 0, v33)) || (((char)(CmpF(0x7ff0000000000000, (unsigned long long)(v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v26 & 170141183460469231722463931679029329919))) & 69) | (char)((CmpF(0x7ff0000000000000, (unsigned long long)(v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v26 & 170141183460469231722463931679029329919))) & 69) >> 6)) & 1) == 1)
            {
                v16 = &v15;
                v42 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                v16 = &v15;
                v42 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            v18 = v42;
            v19 = a1;
            v20 = 0;
            v7 = 2;
            v10 = 1;
            v11 = 1;
            v12 = 0;
            v13 = 32;
            v14 = 3;
        }
        else
        {
            v16 = &g_542048;
            v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            v19 = a1;
            v20 = 0;
            v7 = 2;
            v10 = 1;
            v11 = 1;
            v12 = 0;
            v13 = 32;
            v14 = 1;
        }
        v0 = &g_40dad0;
        v2 = 1;
        v5 = &v7;
        v6 = 1;
        v3 = &v16;
        v4 = 2;
        v43 = &v0;
    }
    else
    {
        v30 = a2;
        v31 = v29 & 0x7ff0000000000000;
        if (!((char)amd64g_calculate_condition(4, 32, v29 * 0x1000, v29 * 0x800, v32)))
        {
            if (!v31)
                goto LABEL_4d51da;
        }
        else
        {
            if (!(v31 && v31 != 0x7ff0000000000000))
                goto LABEL_4d51da;
        }
        v35 = 170141183460469231722463931679029329919 & v26;
        v36 = (v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
        v23 = v26;
        log10(v36);
        floor(v36);
        v37 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v35, 0xc1e0000000000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MinV(MaxV(v35, 0xc1e0000000000000), 0x41dfffffffc00000));
        v38 = ((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v36, (unsigned long long)v36) & 69), 0, v33) ? (unsigned int)(unsigned long long)v37 : 0);
        __powidf2(v38);
        if (...)
            v38 -= 1;
        if (v38 < 0 || v38 >= (unsigned int)a2)
        {
            if (v38 == -1)
            {
                v1 = &v15;
                v44 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                v30 = a2 - 1;
                v1 = &v15;
                v44 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            v2 = v44;
            v3 = v30;
        }
        else
        {
            v1 = &v15;
            v2 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            v3 = ~(v38) + a2;
        }
        v4 = 0;
        v5 = a1;
        v6 = 0;
        v8 = 1;
        v9 = 1;
        v10 = 1;
        v11 = 2;
        v12 = 0;
        v13 = 32;
        v14 = 3;
        v17 = &g_40dad0;
        v18 = 1;
        v21 = &v7;
        v22 = 1;
        v19 = &v0;
        v20 = 3;
        v43 = &v16;
    }
    return ::0x4d4a70::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(a0, v43);
}
