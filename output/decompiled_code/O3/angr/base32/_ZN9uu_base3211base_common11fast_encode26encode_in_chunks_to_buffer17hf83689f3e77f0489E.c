long long uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::hf83689f3e77f0489(unsigned long long a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0xb0]
    char v1;  // [bp-0xa8]
    char v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    unsigned long v5;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    int v8;  // [sp-0x70]
    char v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long v12;  // [bp+0x8]
    char v13;  // [bp+0x10]
    struct_0 *v14;  // rbp
    unsigned long long v15;  // r12
    struct struct_1 **v16;  // rbp
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    void* v19;  // rax
    struct_3 *v20;  // rbx
    unsigned long long v22;  // rax
    unsigned long long v23;  // r8

    v14 = *((long long *)&v13);
    v15 = v12;
    if (!a3)
    {
        v16 = a1->field_28;
    }
    else
    {
        if (a3 > a5)
        {
            v5 = &g_54a7a8;
            v6 = 1;
            v7 = 8;
            *((int128_t *)&v8) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v5); /* do not return */
        }
        ::0x4c44a0::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h28fd6a241dde88d1(&v1, a4, a5, a3);
        v17 = *((long long *)&v1);
        a4 = *((long long *)&v3);
        a5 = *((long long *)&v4);
        _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h11b3164f0075f9a1(v14, v17, *((long long *)&v2) + v17);
        if (v14->field_18 != a2)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v16 = a1->field_28;
        v19 = v16(a0, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hd338e6cf207795fc(v14), v18, v15);
        if (v19)
            return v19;
        v20 = *((long long *)&v13);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::h1c7d20b47a0ba08c(v20, 0);
        v20->field_10 = 0;
    }
    ::0x4c4400::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hdc42b558cabfeed8(&v9, a4, a5, a2, &g_54a7e8);
    v0 = *((long long *)&v10);
    while (true)
    {
        v22 = ::0x4c4730::_$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha42140e97c53d0ac(&v9);
        if (!v22)
        {
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h11b3164f0075f9a1(*((long long *)&v13), v0, *((long long *)&v11) + v0);
            return 0;
        }
        else if (v18 != a2)
        {
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
        else
        {
            v19 = v16(a0, v22, a2, v15, v23);
            if (v19)
                return v19;
        }
    }
}
