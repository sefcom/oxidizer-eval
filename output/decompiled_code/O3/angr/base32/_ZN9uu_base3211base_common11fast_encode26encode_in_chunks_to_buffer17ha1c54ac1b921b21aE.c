long long uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::ha1c54ac1b921b21a(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long a3, unsigned long long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x78]
    unsigned long long v1;  // [sp-0x70]
    unsigned long long v2;  // [sp-0x68]
    unsigned long v3;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x50]
    int v6;  // [sp-0x48]
    unsigned long long v7;  // [bp+0x8]
    char v8;  // [bp+0x10]
    unsigned long long v9[4];  // r15
    unsigned long long v10;  // rdx
    unsigned long long v12;  // 4096
    unsigned long long v13;  // 4096
    unsigned long long v14;  // r14
    unsigned long long v15;  // rdx
    void* v16;  // rax
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rsi
    struct struct_0 **v20;  // r15
    unsigned long long v21;  // rsi

    v9 = *((long long *)&v8);
    v10 = v7;
    if (a3)
    {
        if (a5 < a3)
        {
            v3 = &g_501e30;
            v4 = 1;
            v5 = 8;
            *((int128_t *)&v6) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
        }
        v14 = a3 + a4;
        _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h3f0c6dd7f5fae71f(v9, a4, v14);
        if (v9[3] != a2)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v16 = a1->field_28(a0, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h0acaa4f13922ec3c(v9), v15, v7);
        if (v16)
            return v16;
        if (v9[3])
            v9[3] = 0;
        v9[2] = 0;
        v10 = v7;
    }
    if (!a2)
    {
        v3 = &g_501e00;
        v4 = 1;
        v5 = 8;
        *((int128_t *)&v6) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    v0 = v12;
    v2 = v13;
    v18 = v13 - (!(v13 | a2) >> 32 ? (0 CONCAT (unsigned int)v13) /m (unsigned int)a2 >> 32 & 4294967295 : (0 CONCAT v13) /m a2 >> 64);
    v19 = v0;
    v1 = v19 + v18;
    v20 = a1->field_28;
    while (true)
    {
        v21 = v19;
        if (v18 < a2)
        {
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h3f0c6dd7f5fae71f(*((long long *)&v8), v1, v0 + v2);
            return 0;
        }
        v16 = v20(a0, v21, a2, v10);
        if (v16)
            return v16;
    }
}
