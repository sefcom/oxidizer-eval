double uu_head::take::TakeAllBut$LT$I$GT$::new::h46af4e6ffbb3148a(long long a0, long long a1, long long a2, long long a3)
{
    char v0;  // [bp-0x98]
    void* v1;  // [sp-0x88]
    unsigned long long v2;  // [sp-0x80]
    int v3;  // [sp-0x78]
    char v4;  // [bp-0x60]
    char v5;  // [bp-0x50]
    int v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x38]
    int v9;  // ymm0
    int v10;  // ymm0
    void* v11;  // r13
    int v12;  // xmm0

    v1 = 0;
    v2 = 8;
    v10 = v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v3) = 0;
    if (!a3)
    {
        a0->field_20 = a3;
        *((void*)&a0->field_10) = v3;
        a0->field_0 = v1;
        a0->field_8 = v2;
        a0->field_28 = a1;
        a0->field_30 = a2;
        return (unsigned long long)(v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3);
    }
    v11 = 0;
    while (true)
    {
        v11 = ::0x4c3d50::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v11);
        _$LT$uucore..features..lines..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h263a04593d3e2321(&v4, &v0);
        if (*((long long *)&v4) == 9223372036854775809)
            break;
        v7 = *((long long *)&v5);
        v12 = *((int128_t *)&v4);
        v10 = v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12;
        v6 = v12;
        uucore::features::ringbuffer::RingBuffer$LT$T$GT$::push_back::hae07e5fa5289e66a(&v4, &v1, &v6);
        ::0x4c3e00::core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$$GT$::h665ed2cb8fd55ceb(&v4);
        if (v11 >= a3)
            break;
    }
}
