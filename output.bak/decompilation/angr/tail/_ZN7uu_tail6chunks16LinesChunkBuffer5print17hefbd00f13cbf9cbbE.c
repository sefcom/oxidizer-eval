long long uu_tail::chunks::LinesChunkBuffer::print::hefbd00f13cbf9cbb(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    int v1;  // [sp-0x28]
    int v3;  // ymm0
    int v4;  // ymm1
    void* *v5;  // rax
    int v6;  // xmm0
    int v7;  // xmm1
    void* v8;  // rax

    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4cb2a7b481604fe2(&v0, a0);
    while (true)
    {
        v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4bc207bf22529cac(&v0);
        if (!v5)
        {
            v6 = v0;
            v3 = v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
            v7 = v1;
            v4 = v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7;
            v0 = v7;
            v1 = v6;
            v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4bc207bf22529cac(&v0);
            if (!v5)
                return 0;
        }
        v8 = uu_tail::chunks::LinesChunk::print_bytes::heb78e59b7507785b(*(v5), a1);
        if (v8)
            return v8;
    }
}
