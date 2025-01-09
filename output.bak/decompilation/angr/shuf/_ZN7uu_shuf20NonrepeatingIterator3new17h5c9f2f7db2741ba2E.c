double uu_shuf::NonrepeatingIterator::new::h5c9f2f7db2741ba2(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rsi
    int v5;  // xmm0
    int v6;  // ymm0

    v0 = v2;
    v3 = a1[0];
    v4 = a1[1];
    if (v4 < v3)
    {
        a3 = 0;
    }
    else if (v3 || v4 != -1)
    {
        a3 = ::0x4bf570::core::cmp::min_by::h9901c89ba00e38af(a3, v4 - v3 + 1);
    }
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hf7b2857436e5a11e(a0);
    a0->field_50 = a1[2];
    v5 = *((int128_t *)&a1[0]);
    *((void*)&a0->field_40) = v5;
    a0->field_38 = a2;
    a0->field_30 = a3;
    return (unsigned long long)(v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5);
}
