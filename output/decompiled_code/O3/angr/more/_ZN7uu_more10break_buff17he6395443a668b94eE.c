double uu_more::break_buff::he6395443a668b94e(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    void* v2;  // [sp-0x98]
    void* v3;  // [sp-0x90]
    unsigned long long v4;  // [sp-0x88]
    char v5;  // [bp-0x80]
    unsigned short v6;  // [sp-0x50]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    void* v9;  // [sp-0x38]
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // r8
    unsigned long long v15;  // r9
    int v16;  // xmm0
    int v17;  // ymm0

    ::0x4db520::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v5, a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5d7525725ab87575(&v3, core::iter::traits::iterator::Iterator::fold::haf2e61b0f943967a(&v3, v11, v12), 0);
    if (v3)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v0 = v4;
    v1 = *((long long *)&v5);
    v2 = 0;
    ::0x4db520::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v5, a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 0;
    while (true)
    {
        v13 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h6d0b307c0d2190f6(&v3);
        if (!v13)
            break;
        uu_more::break_line::h73539b671d3ea9e7(&v7, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h200055905ca292d8(&v7, v13, v12), v12, a3, v14, v15);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3ec15337970eadce(&v0, *((long long *)&v8), v9);
        v9 = 0;
        ::0x4d9eb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h54d13806247b6c15(&v7);
    }
    a0->field_10 = v2;
    v16 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v16;
    return (unsigned long long)(v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16);
}
