long long uu_seq::numberparse::parse_exponent_no_decimal::hd2950fa793267dc0(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    char v1;  // [sp-0x90]
    int v2;  // [bp-0x8f]
    int v3;  // [sp-0x80]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    int v6;  // [bp-0x67]
    char v7;  // [bp-0x58]
    int v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v11;  // r13
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rax
    char v16;  // cl
    unsigned long long v17;  // rax
    unsigned long long v18;  // r12
    unsigned long v19;  // cc_ndep
    unsigned long long v20;  // rbp
    int v21;  // xmm0

    v11 = a3 + 1;
    v12 = ::0x4cd120::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v11, a1, a2);
    if (!v12)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v11, a2, &g_543f40); /* do not return */
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v4, v12, v13);
    if (!v4)
    {
        v14 = *((long long *)&v5);
        bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&v4, a1, a2);
        v15 = *((long long *)&v4);
        if (v0 == 0x8000000000000000)
        {
            v9 = *((long long *)&v7);
            *((int128_t *)&v8) = *((int128_t *)&v5);
            core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(&v8);
        }
        else
        {
            v16 = v5;
            *((int128_t *)&v2) = (int128_t)v6;
            *((int128_t *)&v3) = *((int128_t *)&v7);
            v0 = v15;
            v1 = v16;
            if ((char)uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(a1, a2, &v0))
            {
                v17 = v14 + 2;
                if (v14 <= 0)
                    v17 = 2;
            }
            else
            {
                v18 = a3 + v14;
                if ((char)amd64g_calculate_condition(0, 4, a3, v14, v19))
                {
                    a0->padding_8[0] = 0;
                    a0->field_0 = 9223372036854775812;
                    ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304();
                    return a0;
                }
                if (2 > v18)
                    v18 = 1;
                v17 = v18 + ((char)v3 < 1);
            }
            v20 = v14 >> 63 & -(v14);
            if ((char)uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(a1, a2, &v0))
            {
                a0->field_0 = 9223372036854775810;
                a0->field_28 = v17;
                a0->field_30 = v20;
                ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304();
                return a0;
            }
            a0->field_20 = (long long)(&v3)[8];
            v21 = *((int128_t *)&v0);
            a0->field_10 = (int128_t)(&v2)[7];
            *((void*)&a0->field_0) = v21;
            a0->field_28 = v17;
            a0->field_30 = v20;
            return a0;
        }
    }
    a0->padding_8[0] = 0;
    a0->field_0 = 9223372036854775812;
    return a0;
}
