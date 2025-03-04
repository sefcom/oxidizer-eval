long long uu_seq::numberparse::parse_decimal_and_exponent::hfdc1c6342c162095(struct_0 *a0, char *a1, unsigned long long a2, unsigned long a3, char *a4)
{
    unsigned long long v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    char v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    int v5;  // [bp-0x8f]
    char v6;  // [bp-0x80]
    unsigned long v7;  // [sp-0x70]
    char v8;  // [sp-0x68]
    int v9;  // [bp-0x67]
    int v10;  // [sp-0x58]
    int v11;  // [sp-0x48]
    unsigned long long v12;  // [sp-0x38]
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    char v17;  // cl
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rax
    char v22;  // al
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // r14
    void* v26;  // r14
    int v27;  // xmm0

    v14 = a4 + 1;
    v15 = ::0x4cd120::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v14, a1, a2);
    if (!v15)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v14, a2, &g_543f58); /* do not return */
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v3, v15, a2);
    if (!v3)
    {
        v2 = *((long long *)&v4);
        bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&v3, a1, a2);
        v16 = *((long long *)&v3);
        if (v7 == 0x8000000000000000)
        {
            v12 = *((long long *)&v6);
            *((int128_t *)&v11) = *((int128_t *)&v4);
            core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(&v11);
        }
        else
        {
            v17 = v4;
            *((int128_t *)&v9) = (int128_t)v5;
            *((int128_t *)&v10) = *((int128_t *)&v6);
            v7 = v16;
            v8 = v17;
            if (a4)
            {
                if (a4 >= a2)
                {
                    if (a4 != a2)
                        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, a4, &g_543f70); /* do not return */
                }
                else
                {
                    if (*((char *)(a1 + a4)) <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, 0, a4, &g_543f70); /* do not return */
                }
            }
            core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&v3, a1, a4);
            if (!v3)
            {
                v19 = v2;
                if (v19 <= 0)
                    v20 = 2;
                else
                    v20 = v19 + 2;
                v21 = (*((long long *)&v4) - 0 == 1 ? v20 : 1);
                v0 = v21;
                if (!((char)amd64g_calculate_condition(0, 4, a3, v19, v18)))
                {
                    v1 = a3 + v19;
                    v22 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(a1, a2, "-.", 2);
                    if (!v22)
                    {
                        v24 = v1;
                        goto LABEL_4ce158;
                    }
                    else
                    {
                        v23 = v1;
                        v24 = v23 + 1;
                        if (!((char)amd64g_calculate_condition(0, 24, v23 + 1, 0, amd64g_calculate_rflags_c(17, (unsigned long long)v22, 0, v18))))
                        {
LABEL_4ce158:
                            if (!(v24 >= v0) || !((v0 = v24, v24 < 0)))
                            {
                                v25 = &a4[~(a3)];
                                v26 = v25 - v2;
                                if (v25 < v2)
                                    v26 = 0;
                                else
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h0ebacd778ae85bc5(v26 >> 63);
                                if ((char)uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(a1, a2, &v7))
                                {
                                    a0->field_0 = 9223372036854775810;
                                    a0->field_28 = v0;
                                    a0->field_30 = v26;
                                    ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&v7);
                                    return a0;
                                }
                                a0->field_20 = (long long)(&v10)[8];
                                v27 = *((int128_t *)&v7);
                                a0->field_10 = (int128_t)(&v9)[7];
                                *((void*)&a0->field_0) = v27;
                                a0->field_28 = v0;
                                a0->field_30 = v26;
                                return a0;
                            }
                        }
                    }
                }
            }
            a0->padding_8[0] = 0;
            a0->field_0 = 9223372036854775812;
            ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&v7);
            return a0;
        }
    }
    a0->padding_8[0] = 0;
    a0->field_0 = 9223372036854775812;
    return a0;
}
