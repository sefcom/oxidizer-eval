long long uu_split::filenames::Suffix::from(struct_0 *a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned int v0;  // [bp-0x9c]
    unsigned long long v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x8c]
    char v3;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long *v7;  // [bp-0x60]
    unsigned long v8;  // [bp-0x60]
    char v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long v13;  // [bp-0x38]
    char v15;  // al
    char v16;  // al
    char v17;  // al
    char v18;  // al
    unsigned long long v19[3];  // r12
    char v20;  // r15b
    unsigned int v21;  // ecx
    double v22;  // xmm0lq
    uint256_t v23;  // ymm0
    unsigned long v24;  // xmm0lq
    unsigned long v25;  // xmm0lq
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rbp
    unsigned long long v30;  // rax
    unsigned long long v32;  // cc_ndep

    v7 = a2;
    v15 = a1.contains_id(_ZN8uu_split20OPT_NUMERIC_SUFFIXES17he1cb3638a1abbd49E, g_5a6d80);
    v16 = a1.contains_id(_ZN8uu_split16OPT_HEX_SUFFIXES17h116a297a79fc6ad8E, g_5a6da0);
    v17 = a1.get_flag(_ZN8uu_split26OPT_NUMERIC_SUFFIXES_SHORT17h98c3321f9a793ea1E, g_5a6d90);
    v18 = a1.get_flag(_ZN8uu_split22OPT_HEX_SUFFIXES_SHORT17h2e3b23708520a0a5E, g_5a6db0);
    if (v15)
    {
        v3.try_get_one(a1, _ZN8uu_split20OPT_NUMERIC_SUFFIXES17he1cb3638a1abbd49E, g_5a6d80);
        v19 = _ZN8uu_split20OPT_NUMERIC_SUFFIXES17he1cb3638a1abbd49E.unwrap(g_5a6d80, &v3);
        v0 = (unsigned int)v19 & 0xffffff00 | 1;
        if (v19)
        {
            ::0x4bca20::core::num::<impl u64>::from_str_radix(&v3, v19[1], v19[2], 10);
            if (v3 == 1)
            {
                v3.clone(v19);
                *((int128_t *)&a0->field_18[0]) = *((int128_t *)&v6);
                *((unsigned long long *)&a0->padding_1[7]) = 0;
                *((unsigned long long *)&a0->field_10) = v4;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                return a0;
            }
            goto LABEL_4bd316;
        }
        else
        {
            v1 = 0;
            v20 = 1;
        }
    }
    else if (v16)
    {
        v3.try_get_one(a1, _ZN8uu_split16OPT_HEX_SUFFIXES17h116a297a79fc6ad8E, g_5a6da0);
        v19 = _ZN8uu_split16OPT_HEX_SUFFIXES17h116a297a79fc6ad8E.unwrap(g_5a6da0, &v3);
        v0 = (unsigned int)v19 & 0xffffff00 | 2;
        if (!v19)
            goto LABEL_4bd339;
        ::0x4bca20::core::num::<impl u64>::from_str_radix(&v3, v19[1], v19[2], 16);
        if (v3 == 1)
        {
            v3.clone(v19);
            *((int128_t *)&a0->field_18[0]) = *((int128_t *)&v6);
            *((unsigned long long *)&a0->padding_1[7]) = 0;
            *((unsigned long long *)&a0->field_10) = v4;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            return a0;
        }
LABEL_4bd316:
        v1 = v6;
    }
    else
    {
        if (!v17)
            v21 = v18 * 2;
        else
            v21 = 1;
        v0 = v21;
LABEL_4bd339:
        v20 = 1;
        v1 = 0;
    }
    v3.try_get_one(a1, _ZN8uu_split17OPT_SUFFIX_LENGTH17h219ac9d5c1bf9c01E, g_5a6dc0);
    v19 = _ZN8uu_split17OPT_SUFFIX_LENGTH17h219ac9d5c1bf9c01E.unwrap(g_5a6dc0, &v3);
    if (v19)
    {
        ::0x4bca20::core::num::<impl u64>::from_str_radix(&v3, v19[1], v19[2], 10);
        if (v3 == 1)
        {
            v3.clone(v19);
            *((int128_t *)&a0->field_18[0]) = *((int128_t *)&v6);
            *((unsigned long long *)&a0->padding_1[7]) = 0;
            *((unsigned long long *)&a0->field_10) = v4;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            return a0;
        }
LABEL_4bd3e3:
    }
    else
    {
        v6 = 2;
        goto LABEL_4bd3e3;
    }
    v2 = ((v6 & v19) ? 0 : v20);
    if (*(v7) < 6)
    {
        v8 = *((long long *)((char *)v7 + g_435bf0[*(v7)]));
        v22 = (unsigned long long)(AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v1 + *((long long *)((char *)v7 + g_435bf0[*(v7)]))) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v1 + *((long long *)((char *)v7 + g_435bf0[*(v7)]))) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v1 + *((long long *)((char *)v7 + g_435bf0[*(v7)]))) - 0x45300000000000004330000000000000));
        v13 = g_435c20[(char)v0];
        log(v22);
        *((double *)&v12) = v22;
        v23 = v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v13;
        log((unsigned long long)v23);
        v24 = DivV(v12, (uint128_t)v23);
        v25 = v24;
        ceil(v25);
        v26 = ((char)amd64g_calculate_condition(3, 0, (unsigned long long)(CmpF(v25, 0) & 69), 0, v32) ? (unsigned long long)(SubV(v24, 0x43e0000000000000)) & v25 >> 63 | v25 : 0);
        if ((((char)(CmpF(v25, 4895412794951729151) & 69) | (char)((CmpF(v25, 4895412794951729151) & 69) >> 6)) & 1) != 1)
            v26 = 18446744073709551615;
        if (v1 < v8)
        {
            if (!(v6 & v19))
            {
                if (v6 <= v26)
                    v6 = v26;
                else
                    v6 = v6;
                v2 = 0;
            }
            else if (v6 >= v26)
            {
                v2 = 0;
                goto LABEL_4bd534;
            }
            else
            {
                *((unsigned long long *)&a0->padding_1[7]) = 2;
                *((unsigned long long *)&a0->field_10) = v26;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                return a0;
            }
        }
        else
        {
            if (v6 < v26)
            {
                *((unsigned long long *)&a0->padding_1[7]) = 2;
                *((unsigned long long *)&a0->field_10) = v26;
                *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                return a0;
            }
        }
    }
    if (v6)
        v27 = v6;
    else
        v27 = 2;
    if (v19)
        v6 = v27;
    else
        v6 = v6;
LABEL_4bd534:
    v3.try_get_one(a1, _ZN8uu_split21OPT_ADDITIONAL_SUFFIX17hb254e4f413784fb3E, g_5a6d60);
    v30 = _ZN8uu_split21OPT_ADDITIONAL_SUFFIX17hb254e4f413784fb3E.unwrap(g_5a6d60, &v3);
    if (!v30)
        core::option::unwrap_failed(&g_5a7d68); /* do not return */
    v9.clone(v30);
    v3 = v10;
    v5 = v11 + v10;
    if (!v3.try_fold().eq())
    {
        *((unsigned long *)&a0->field_10) = v11;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v9);
        a0->field_18[0] = v6;
        a0->field_18[1] = v1;
        a0->field_28 = v2;
        a0->field_29 = v0;
        return a0;
    }
    a0->field_18[1] = v11;
    *((int128_t *)&a0->field_10) = *((int128_t *)&v9);
    *((unsigned long long *)&a0->padding_1[7]) = 1;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return a0;
}
