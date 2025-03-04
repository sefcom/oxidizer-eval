long long uu_seq::numberparse::parse_decimal_no_exponent::hf3af1526d793a9d8(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x98]
    char v1;  // [sp-0x90]
    int v2;  // [bp-0x8f]
    int v3;  // [sp-0x80]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x67]
    char v7;  // [bp-0x58]
    int v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v11;  // rax
    char v12;  // cl
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r14
    int v15;  // xmm0

    bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&v4, a1, a2);
    v11 = *((long long *)&v4);
    if (v0 == 0x8000000000000000)
    {
        v9 = *((long long *)&v7);
        *((int128_t *)&v8) = *((int128_t *)&v5);
        core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(&v8);
        a0->padding_8[0] = 0;
        a0->field_0 = 9223372036854775812;
        return a0;
    }
    v12 = v5;
    *((int128_t *)&v2) = *((int128_t *)&v6);
    *((int128_t *)&v3) = *((int128_t *)&v7);
    v0 = v11;
    v1 = v12;
    v13 = (unsigned int)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(a1, a2, "-.", 2) + a3;
    v14 = ~(a3) + a2;
    if (!(char)uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(a1, a2, &v0))
    {
        a0->field_20 = (long long)(&v3)[8];
        v15 = *((int128_t *)&v0);
        a0->field_10 = (int128_t)(&v2)[7];
        *((void*)&a0->field_0) = v15;
        a0->field_28 = v13;
        a0->field_30 = v14;
        return a0;
    }
    a0->field_0 = 9223372036854775810;
    a0->field_28 = v13;
    a0->field_30 = v14;
    ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&v0);
    return a0;
}
