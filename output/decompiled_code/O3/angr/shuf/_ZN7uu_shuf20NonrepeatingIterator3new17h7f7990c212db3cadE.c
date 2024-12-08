double uu_shuf::NonrepeatingIterator::new::h7f7990c212db3cad(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rsi
    int v6;  // xmm0
    int v7;  // ymm0

    v0 = v2;
    v3 = a1[0];
    v4 = a1[1];
    v5 = v4 - v3;
    if (v4 < v3)
    {
        a3 = 0;
    }
    else if (v3 || v4 != -1)
    {
        a3 = ::0x4bf0f0::core::cmp::min_by::h2352a00a03691985(a3, v5 + 1);
    }
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h495e18fc3d4cc2a0(a0, v5, a2);
    a0->field_50 = a1[2];
    v6 = *((int128_t *)&a1[0]);
    *((void*)&a0->field_40) = v6;
    a0->field_38 = a2;
    a0->field_30 = a3;
    return (unsigned long long)(v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6);
}
