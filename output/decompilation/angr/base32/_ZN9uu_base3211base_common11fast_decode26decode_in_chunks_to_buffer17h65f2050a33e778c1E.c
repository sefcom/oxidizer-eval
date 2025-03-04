long long uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::h65f2050a33e778c1(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7[3])
{
    unsigned long long v0;  // [sp-0xb0]
    char v1;  // [bp-0xa8]
    char v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    unsigned long v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    int v8;  // [sp-0x70]
    char v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long long v12;  // r13
    struct struct_0 **v13;  // rbp
    unsigned long long v14;  // 4096
    unsigned long long v15;  // rsi
    void* v16;  // rax
    unsigned long long v19;  // rax
    unsigned long v20;  // rdx

    v12 = a5;
    if (!a3)
    {
        v13 = a1->field_20;
        v14 = a4;
    }
    else
    {
        if (a3 > a5)
        {
            v5 = &g_549b48;
            v6 = 1;
            v7 = 8;
            *((uint128_t *)&v8) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v5, &g_549b88); /* do not return */
        }
        ::0x4c4890::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::he6f6165f889f215d(&v1, a4, a5, a3);
        v15 = *((long long *)&v1);
        v0 = *((long long *)&v3);
        v12 = *((long long *)&v4);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6a1402b86cdf1413(a7, v15, *((long long *)&v2) + v15);
        if (a7[2] != a2)
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffer.len() == decode_in_chunks_of_size", 67, &g_549ba0); /* do not return */
        v13 = a1->field_20;
        v16 = v13(a0, a7[1], a2, a6, a4);
        if (v16)
            return v16;
        a7[2] = 0;
        v14 = v0;
    }
    ::0x4c47c0::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hc443a03f678429ff(&v9, v14, v12, a2);
    v0 = *((long long *)&v10);
    while (true)
    {
        v19 = ::0x4c4bb0::_$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&v9);
        if (!v19)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6a1402b86cdf1413(a7, v0, *((long long *)&v11) + v0);
            return 0;
        }
        else if (v20 != a2)
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: sl.len() == decode_in_chunks_of_size", 54, &g_549bd0); /* do not return */
        }
        else
        {
            v16 = v13(a0, v19, a2, a6, a4);
            if (v16)
                return v16;
        }
    }
}
