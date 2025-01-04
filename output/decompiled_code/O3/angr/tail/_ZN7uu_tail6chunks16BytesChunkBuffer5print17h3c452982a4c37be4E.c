long long uu_tail::chunks::BytesChunkBuffer::print::h3c452982a4c37be4(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [sp-0x58]
    int v1;  // [sp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    int v5;  // xmm0
    int v6;  // ymm0
    int v7;  // ymm0
    int v8;  // xmm1
    int v9;  // ymm1
    int v10;  // ymm1
    void* *v11;  // rax
    int v12;  // xmm0
    int v13;  // xmm1
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax

    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4a54dde34758e423(&v2, a0);
    v5 = *((int128_t *)&v2);
    v7 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5;
    v8 = *((int128_t *)&v3);
    v10 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8;
    v1 = v8;
    v0 = v5;
    while (true)
    {
        v11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&v0);
        if (!v11)
        {
            v12 = v0;
            v7 = v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12;
            v13 = v1;
            v10 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
            v0 = v13;
            v1 = v12;
            v11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d73d6dce9ac4e35(&v0);
            if (!v11)
            {
                ::0x511e70::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(a1);
                return 0;
            }
        }
        v15 = ::0x512410::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h167ba1bb875d74b3(a1, uu_tail::chunks::BytesChunk::get_buffer::h202da470562e82e0(*(v11)), v14);
        if (v15)
        {
            ::0x511e70::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h13404fe74d804a04(a1);
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v15);
        }
    }
}
