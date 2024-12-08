long long uu_tail::chunks::LinesChunkBuffer::print::h9edf62575b029e6a(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    int v1;  // [sp-0x28]
    int v3;  // ymm0
    int v4;  // ymm1
    void* *v5;  // rax
    int v6;  // xmm0
    int v7;  // xmm1
    unsigned int v8;  // rdx
    void* v9;  // rax

    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h5adfecd8da620bc8(&v0, a0);
    while (true)
    {
        v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he9d08c15b23b98b2(&v0);
        if (!v5)
        {
            v6 = v0;
            v3 = v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
            v7 = v1;
            v4 = v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7;
            v0 = v7;
            v1 = v6;
            v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he9d08c15b23b98b2(&v0);
            if (!v5)
                return 0;
        }
        v9 = uu_tail::chunks::LinesChunk::print_bytes::ha2e4d76a3a2e0222(*(v5), a1, v8);
        if (v9)
            return v9;
    }
}
