long long uu_seq::numberparse::parse_decimal_no_exponent::h7f49d3541530e37d(struct_0 *a0, unsigned short *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x88]
    unsigned long v1;  // [sp-0x80], Other Possible Types: unsigned long long
    char v2;  // [sp-0x78]
    int v3;  // [bp-0x77]
    int v4;  // [sp-0x68]
    char v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x4f]
    char v8;  // [bp-0x48]
    int v9;  // [bp-0x40]
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rsi
    char v13;  // al
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    int v17;  // xmm0

    _ZN10bigdecimal8impl_num68_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$14from_str_radix17hea2b920a5b162d36E.llvm.11928066015573170657(&v5, a1, a2);
    v11 = *((long long *)&v5);
    if (v0 == 0x8000000000000000)
    {
        v12 = *((long long *)&v6);
        if (v12 >= 9223372036854775812 && v12)
            __rust_dealloc(*((long long *)&v8));
        a0->padding_8[0] = 0;
        a0->field_0 = 9223372036854775812;
        return a0;
    }
    else
    {
        v13 = v6;
        *((int128_t *)&v3) = *((int128_t *)&v7);
        *((int128_t *)&v4) = (int128_t)v9;
        v0 = v11;
        v1 = v0;
        v2 = v13;
        v15 = (a2 < 2 ? 0 : -0x100 | *(a1) == 11821) + a3;
        v16 = ~(a3) + a2;
        if (!(char)_ZN6uu_seq11numberparse19is_minus_zero_float17h9c975407bde38417E.llvm.11928066015573170657(a1, a2, &v1))
        {
            a0->field_20 = (long long)(&v4)[8];
            v17 = *((int128_t *)&v1);
            a0->field_10 = (int128_t)(&v3)[7];
            *((void*)&a0->field_0) = v17;
            a0->field_28 = v15;
            a0->field_30 = v16;
            return a0;
        }
        a0->field_0 = 9223372036854775810;
        a0->field_28 = v15;
        a0->field_30 = v16;
        if (v0)
        {
            __rust_dealloc(*((long long *)&v2));
            return a0;
        }
        return a0;
    }
}
