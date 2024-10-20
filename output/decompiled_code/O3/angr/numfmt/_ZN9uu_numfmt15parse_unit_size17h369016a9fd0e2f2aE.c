long long uu_numfmt::parse_unit_size::h369016a9fd0e2f2a(unsigned long long a0[3], char *a1, unsigned long a2)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8]
    char *v3;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x98]
    char v5;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0x88]
    void* v7;  // [sp-0x80]
    unsigned long v8;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x68]
    void* v10;  // [sp-0x60]
    char *v11;  // [sp-0x58]
    unsigned long long v12;  // [sp-0x50]
    char v13;  // [sp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    char *v17;  // r15
    char *v18;  // r12
    void* v19;  // r13
    unsigned long long v20;  // cc_ndep
    unsigned long long v21;  // rax
    unsigned long long v22;  // r13
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    unsigned int v25;  // edx
    unsigned int v26;  // edi
    unsigned int v27;  // esi
    unsigned long long *v28;  // rcx
    unsigned long long *v29;  // rax
    unsigned long long *v30;  // rcx
    unsigned long long v31;  // xmm0lq
    unsigned long long v32;  // rax
    int v33;  // ymm1
    int v34;  // ymm0
    int v35;  // ymm1

    v17 = a1;
    v3 = a1;
    v4 = &a1[a2];
    v5 = 0;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h70c100feb896fee1(&v0, &v3);
    v18 = *((long long *)&v2);
    if (v18)
    {
        if (a2 <= v18)
        {
            if (a2 != v18)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(v17 + v18)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v3, "0invalid unit size: ", 1, v18);
        v19 = v4;
        if (!(*((long long *)&v5) != v18 || bcmp(v19, *((long long *)&v1), v18)))
        {
            if (!v3)
            {
LABEL_48d6e3:
                v10 = 0;
                v11 = v17;
                v12 = a2;
                v13 = 1;
                v8 = &v10;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v3 = &g_4fae80;
                v4 = 1;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v3);
            }
            else
            {
                __rust_dealloc(v19);
LABEL_48d6e3:
                v10 = 0;
                v11 = v17;
                v12 = a2;
                v13 = 1;
                v8 = &v10;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v3 = &g_4fae80;
                v4 = 1;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v3);
            }
LABEL_48d752:
            a0[2] = *((long long *)&v15);
            *((int128_t *)&a0[0]) = *((int128_t *)&v14);
LABEL_48d781:
            return __rust_dealloc(*((long long *)&v1));
        }
        else if (v3)
        {
            __rust_dealloc(v19);
        }
    }
    v21 = a2;
    v22 = 1;
    v23 = v21 - v18;
    if (v21 != v18)
    {
        v24 = *((char *)(v17 + v18));
        if ((char)v24 < 0)
        {
            v25 = (unsigned int)v24 & 31;
            v26 = *((char *)(v17 + v18 + 1)) & 63;
            if ((v24 & 255) <= 223)
            {
                v24 = v25 * 64 | v26;
            }
            else
            {
                v27 = *((char *)(v17 + v18 + 2)) & 63 | v26 * 64;
                v24 = ((v24 & 255 & 255) < 240 ? *((char *)(v17 + v18 + 3)) & 63 | v27 * 64 | (v25 & 7) * 0x40000 : v27 | v25 * 0x1000);
            }
        }
        switch ((unsigned int)v24)
        {
        case 69:
            v28 = 6;
            if (v23 == 1)
                goto LABEL_48d66c;
            break;
        case 71:
            v28 = 3;
            if (v23 == 1)
                goto LABEL_48d66c;
            break;
        case 75:
            v28 = 1;
            if (v23 == 1)
                goto LABEL_48d66c;
            break;
        case 77:
            v28 = 2;
            if (v23 == 1)
                goto LABEL_48d66c;
            if (v23 == 2 && *((char *)(v17 + v18 + 1)) == 105)
            {
                v29 = &g_41df08;
                goto LABEL_48d673;
            }
        case 80:
            v28 = 5;
            if (v23 == 1)
                goto LABEL_48d66c;
            break;
        case 84:
            v28 = 4;
            if (!(v23 == 1))
                break;
LABEL_48d66c:
            v29 = &g_41deb8;
LABEL_48d673:
            v31 = *((long long *)((char *)v29 + 0x8 * v30));
            v32 = v31;
            v35 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v31) & 340282366920938463463374607431768211455 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | SubV((uint128_t)(v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v31), 0x43e0000000000000);
            v22 = (unsigned long long)v35 & v32 >> 63 | v32;
            if (!((char)amd64g_calculate_condition(3, 0, (unsigned long long)(unsigned int)(CmpF(v32, (unsigned long long)(v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000)) & 69), 0, v20)))
                v22 = 0;
            if ((((char)(CmpF(v32, 4895412794951729151) & 69) | (char)((CmpF(v32, 4895412794951729151) & 69) >> 6)) & 1) != 1)
            {
                v22 = -1;
                goto LABEL_48d6bc;
            }
            else
            {
                goto LABEL_48d6bc;
            }
        default:
LABEL_48d6e3:
            v10 = 0;
            v11 = v17;
            v12 = a2;
            v13 = 1;
            v8 = &v10;
            v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v3 = &g_4fae80;
            v4 = 1;
            v7 = 0;
            v5 = &v8;
            v6 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v3);
            goto LABEL_48d752;
        }
    }
LABEL_48d6bc:
    if (v18)
    {
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, *((long long *)&v1), v18);
        if (!(!(char)v3))
            goto LABEL_48d6e3;
        v22 = v4 * v22;
    }
    a0[1] = v22;
    a0[0] = 0x8000000000000000;
    goto LABEL_48d781;
}
