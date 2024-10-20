long long uu_seq::numberparse::parse_exponent_no_decimal::hd431c0b6836da524(struct_0 *a0, char *a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x80], Other Possible Types: unsigned long long
    char v1;  // [sp-0x78]
    int v2;  // [bp-0x77]
    int v3;  // [sp-0x68]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    int v6;  // [bp-0x4f]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x30]
    char *v10;  // rsi
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rax
    unsigned long long v13;  // rsi
    char v14;  // cl
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbp
    int v18;  // xmm0

    v10 = a3 + 1;
    if (!((char)amd64g_calculate_condition(4, 24, a3 + 1, 0, (unsigned long long)(char)(&v8 < 88))))
    {
        if (a2 <= v10)
        {
            if (a2 != v10)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(a1 + v10)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&v4, v10 + a1, a2 - v10);
    if (!v4)
    {
        v11 = *((long long *)&v5);
        _ZN10bigdecimal8impl_num68_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$14from_str_radix17hea2b920a5b162d36E.llvm.11928066015573170657(&v4, a1, a2);
        v12 = *((long long *)&v4);
        if (v0 != 0x8000000000000000)
        {
            v14 = v5;
            *((int128_t *)&v2) = (int128_t)v6;
            *((int128_t *)&v3) = (int128_t)v6;
            v0 = v12;
            v1 = v14;
            if (!(char)_ZN6uu_seq11numberparse19is_minus_zero_float17h9c975407bde38417E.llvm.11928066015573170657(a1, a2, &v0))
            {
                v16 = a3 + v11;
                if (2 > v16)
                    v16 = 1;
                v15 = v16 + ((char)v3 < 1);
            }
            else
            {
                v15 = v11 + 2;
                if (v11 <= 0)
                    v15 = 2;
            }
            v17 = v11 >> 63 & -(v11);
            if (!(char)_ZN6uu_seq11numberparse19is_minus_zero_float17h9c975407bde38417E.llvm.11928066015573170657(a1, a2, &v0))
            {
                a0->field_20 = (long long)(&v3)[8];
                v18 = *((int128_t *)&v0);
                a0->field_10 = (int128_t)(&v2)[7];
                *((void*)&a0->field_0) = v18;
                a0->field_28 = v15;
                a0->field_30 = v17;
                return a0;
            }
            a0->field_0 = 9223372036854775810;
            a0->field_28 = v15;
            a0->field_30 = v17;
            if (v0)
            {
                __rust_dealloc(*((long long *)&v1));
                return a0;
            }
            return a0;
        }
        else
        {
            v13 = *((long long *)&v5);
            if (v13 >= 9223372036854775812 && v13)
                __rust_dealloc(*((long long *)&v7));
        }
    }
    a0->padding_8[0] = 0;
    a0->field_0 = 9223372036854775812;
    return a0;
}
