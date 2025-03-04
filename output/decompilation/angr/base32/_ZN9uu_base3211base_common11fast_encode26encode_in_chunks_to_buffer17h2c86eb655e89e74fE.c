long long uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h2c86eb655e89e74f(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7[4])
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
    unsigned long long v13;  // rax
    struct struct_0 **v14;  // rbp
    unsigned long long v15;  // rsi
    void* v16;  // rax
    unsigned long long v18;  // rax
    unsigned long v19;  // rdx

    v12 = a5;
    v13 = a4;
    if (!a3)
    {
        v14 = a1->field_28;
    }
    else
    {
        if (a3 > a5)
        {
            v5 = &g_549c90;
            v6 = 1;
            v7 = 8;
            *((uint128_t *)&v8) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v5, &g_549ca0); /* do not return */
        }
        ::0x4c56a0::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::he6f6165f889f215d(&v1, a4, a5, a3);
        v15 = *((long long *)&v1);
        v0 = *((long long *)&v3);
        v12 = *((long long *)&v4);
        _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h47f5f8dff0c4e4ab(a7, v15, *((long long *)&v2) + v15);
        if (a7[3] != a2)
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffer.len() == encode_in_chunks_of_size", 67, &g_549cb8); /* do not return */
        v14 = a1->field_28;
        v16 = v14(a0, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(a7), a2, a6);
        if (v16)
            return v16;
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::h73fe8c7a0c90d99e(a7, 0);
        a7[2] = 0;
        v13 = v0;
    }
    ::0x4c5600::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hc443a03f678429ff(&v9, v13, v12, a2, &g_549cd0);
    v0 = *((long long *)&v10);
    while (true)
    {
        v18 = ::0x4c5930::_$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&v9);
        if (!v18)
        {
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h47f5f8dff0c4e4ab(a7, v0, *((long long *)&v11) + v0);
            return 0;
        }
        else if (v19 != a2)
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: sl.len() == encode_in_chunks_of_size", 54, &g_549ce8); /* do not return */
        }
        else
        {
            v16 = v14(a0, v18, a2, a6, a4);
            if (v16)
                return v16;
        }
    }
}
