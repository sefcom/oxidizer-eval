double uu_join::Line::new::h002fafd6b52f7c72(long long a0, long long a1, long long a2, long long a3)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    int v3;  // xmm0
    int v4;  // xmm0
    int v5;  // ymm0

    _$LT$uu_join..WhitespaceSep$u20$as$u20$uu_join..Separator$GT$::field_ranges::h7ab0111544b3588e(&v0, a2, a1[1], a1[2], a3);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = a1[2];
    v3 = *((int128_t *)&a1[0]);
    *((void*)&(&a0->field_10)[1]) = v3;
    v4 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v4;
    a0->field_10 = *((long long *)&v1);
    return (unsigned long long)(v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v4);
}
