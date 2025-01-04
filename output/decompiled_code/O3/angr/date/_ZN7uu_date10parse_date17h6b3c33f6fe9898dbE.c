long long uu_date::parse_date::h6b3c33f6fe9898db(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    int v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x28]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // r8
    unsigned long long v9;  // r9

    parse_datetime::parse_datetime::h31f6ee9f0c9ea07f(&v0, _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h19d63261396b90f5(a1), v6, v7, v8, v9);
    if (*((long long *)&v0) == 9223372036854775810)
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        a0->field_0 = 0x8000000000000000;
        return 9223372036854775810;
    }
    v4 = *((long long *)&v2);
    *((int128_t *)&v3) = *((int128_t *)&v0);
    return uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h0b2ffe81582c5501(a0, a1, &v3);
}
