long long uu_tail::chunks::BytesChunkBuffer::print::had08519fe61c1e10(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    int v1;  // [sp-0x28]
    int v3;  // ymm0
    int v4;  // ymm1
    void* *v5;  // rax
    int v6;  // xmm0
    int v7;  // xmm1
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4a54dde34758e423(&v0, a0);
    while (true)
    {
        v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&v0);
        if (!v5)
        {
            v6 = v0;
            v3 = v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
            v7 = v1;
            v4 = v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7;
            v0 = v7;
            v1 = v6;
            v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&v0);
            if (!v5)
                return 0;
        }
        v9 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_all::h889fb69209bd29d4(a1, uu_tail::chunks::BytesChunk::get_buffer::h202da470562e82e0(*(v5)), v8);
        if (v9)
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v9);
    }
}
