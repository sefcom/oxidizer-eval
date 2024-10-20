long long uu_seq::numberparse::parse_no_decimal_no_exponent::h68c9f2230a2eaff7(struct_0 *a0, char *a1, unsigned long a2)
{
    int v0;  // [sp-0xd8]
    int v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xb8]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0xa0]
    char v6;  // [bp-0x90]
    int v7;  // [sp-0x88]
    int v8;  // [sp-0x78]
    void* v9;  // [sp-0x68]
    unsigned long v10;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [sp-0x50]
    unsigned long v13;  // [sp-0x48], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x40]
    char v15;  // [sp-0x38]
    char *v17;  // rax
    char *v19;  // r12
    char *v20;  // r15
    char *v22;  // rax
    char *v23;  // rcx
    int v24;  // ymm3
    int v25;  // ymm4
    int v26;  // ymm5
    int v27;  // ymm6
    int v28;  // ymm7
    int v29;  // xmm3
    int v30;  // xmm4
    int v31;  // xmm5
    int v32;  // xmm5
    int v33;  // xmm6
    int v34;  // xmm6
    int v35;  // xmm7
    int v36;  // xmm7
    int v37;  // xmm7
    int v38;  // xmm7
    int v39;  // xmm5
    int v40;  // xmm5
    int v41;  // xmm5
    int v42;  // xmm5
    int v43;  // xmm7
    int v44;  // xmm5
    unsigned long long v45;  // rdx
    char *v47;  // rax
    int v48;  // xmm4
    int v49;  // xmm4
    char *v50;  // rcx
    unsigned long long v51;  // rax
    void* v52;  // rax
    unsigned long long v53;  // r12
    unsigned long long v54;  // cc_op
    unsigned long long v55;  // cc_dep1
    unsigned long long v56;  // cc_dep2
    unsigned long v57;  // cc_ndep
    unsigned long long v58;  // rsi

    _ZN10bigdecimal8impl_num68_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$14from_str_radix17hea2b920a5b162d36E.llvm.11928066015573170657(&v3, a1, a2);
    if (*((long long *)&v3) != 0x8000000000000000)
    {
        v2 = *((long long *)&v6);
        *((int128_t *)&v1) = *((int128_t *)&v5);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        if (a2 && *(a1) == 45)
        {
            *((int128_t *)&v8) = 0x10000000000000000;
            *((int128_t *)&v7) = 0x80000000000000000;
            v9 = 0;
            v12 = (char)(&v1)[8];
            v10 = &v0;
            v11 = v2;
            v15 = 1;
            v13 = &v7;
            v14 = 0;
            if ((long long)v7)
                __rust_dealloc((long long)(&v7)[8]);
            if ((char)bigdecimal::impl_cmp::check_equality_bigdecimal_ref::hab00001fd516d84f(&v10, &v13))
            {
                a0->field_0 = 9223372036854775810;
                a0->field_28 = a2;
                a0[1].field_0 = 0;
                if ((long long)v0)
                {
                    __rust_dealloc((long long)(&v0)[8]);
                    return a0;
                }
                return a0;
            }
        }
        a0->field_20 = v2;
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        a0->field_28 = a2;
        a0[1].field_0 = 0;
        return a0;
    }
    if (!a2)
    {
        a0->padding_8[0] = 0;
        a0->field_0 = 9223372036854775812;
        core::ptr::drop_in_place$LT$core..result..Result$LT$bigdecimal..BigDecimal$C$bigdecimal..ParseBigDecimalError$GT$$GT$::h855bdf789e30aa5c(&v3);
        return a0;
    }
    if (a2 < 0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v17 = __rust_alloc(a2, 1);
    if (!v17)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v19 = v17;
    v20 = v17;
    memcpy(v19, a1, a2);
    if (a2 < 8)
    {
LABEL_4977be:
        do
        {
            v51 = *(v50);
            *(v50) = (char)(((v51 - 65 & 4294967295 & 255 & 255) < 26) * 32) | (char)v51;
            v50 += 1;
        } while (v50 != &v19[a2]);
    }
    else
    {
        if (a2 < 32)
        {
            v22 = 0;
            goto LABEL_49775a;
        }
        v22 = 9223372036854775776 & a2;
        v23 = 0;
        do
        {
            v29 = *((int128_t *)(v20 + v23));
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
            v30 = *((int128_t *)(v20 + v23 + 16));
            v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            v31 = v29;
            v32 = AddV(v31, 254878165027055868711782549095951876031);
            v33 = v30;
            v34 = AddV(v33, 254878165027055868711782549095951876031);
            v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
            v35 = v32;
            v36 = MinV(v35, 33361016364797888574840647787428256025);
            v37 = CmpEQV(v36, v32);
            v38 = v37 & 42702100946941297375796029167908167712;
            v39 = v34;
            v40 = MinV(v39, 33361016364797888574840647787428256025);
            v41 = CmpEQV(v40, v34);
            v42 = v41 & 42702100946941297375796029167908167712;
            v43 = v38 | v29;
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
            v44 = v42 | v30;
            v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
            *((void*)(v20 + v23)) = v43;
            *((void*)(v20 + v23 + 16)) = v44;
            v23 += 32;
        } while (v22 != v23);
        if (v22 != a2)
        {
            if (!((char)a2 & 24))
            {
                v47 = v22 + v19;
                goto LABEL_4977be;
            }
LABEL_49775a:
            v45 = 9223372036854775800 & a2;
            do
            {
                v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)(v20 + v22));
                v48 = (uint128_t)v24;
                v49 = AddV(v48, 13816973012072644543);
                v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v49, 1880844493789993498)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(MaxV(v49, 1880844493789993498), v49) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v49, 1880844493789993498), v49)) & 2314885530818453536 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v49, 1880844493789993498), v49)) & 2314885530818453536 | (uint128_t)v24;
                *((unsigned long long *)(v20 + v22)) = (unsigned long long)v26;
                v22 += 8;
            } while (v45 != v22);
            if (v45 == a2)
                goto LABEL_4977ef;
            goto LABEL_4977be;
        }
    }
LABEL_4977ef:
    v52 = 0;
    switch (a2)
    {
    case 3:
        v53 = 0x8000000000000000;
        if (!(unsigned short)(v20[2] ^ 102) && !(unsigned short)(*((short *)&v20) ^ 28265))
            goto LABEL_4978c6;
        v52 = *((short *)&v20) ^ 24942;
        v54 = 18;
        v55 = (unsigned short)(v20[2] ^ 110) | (unsigned short)v52;
        v56 = 0;
        break;
    case 4:
        if (*((int *)&v20) == 1718511917)
            goto LABEL_4978c2;
        v54 = 7;
        v55 = *((int *)&v20);
        v56 = 1851878957;
        break;
    case 8:
        v53 = 0x8000000000000000;
        if (!(*((long long *)&v20) == 8751735898823356009))
            goto LABEL_497886;
LABEL_4978c6:
        __rust_dealloc(v20);
        a0->field_0 = v53;
        *((int128_t *)&a0->field_28) = 0;
        v58 = *((long long *)&v4);
        if (v58 < 9223372036854775812)
        {
            return a0;
        }
        else if (!v58)
        {
            return a0;
        }
        else
        {
            __rust_dealloc(*((long long *)&v5));
            return a0;
        }
    case 9:
        if (!(v20[8] ^ 121) && !(8388357179923392813 ^ *((long long *)&v20)))
        {
LABEL_4978c2:
            v53 = 9223372036854775809;
            goto LABEL_4978c6;
        }
        else
        {
LABEL_497886:
            v52 = 0;
            goto LABEL_497888;
        }
    default:
LABEL_497888:
        a0->padding_8[0] = (char)v52;
        a0->field_0 = 9223372036854775812;
        __rust_dealloc(v20);
        core::ptr::drop_in_place$LT$core..result..Result$LT$bigdecimal..BigDecimal$C$bigdecimal..ParseBigDecimalError$GT$$GT$::h855bdf789e30aa5c(&v3);
        return a0;
    }
    v52 = v52 | -0x100 | amd64g_calculate_condition(4, v54, v55, v56, v57) & 255;
    goto LABEL_497888;
}
