long long uu_cp::aligned_ancestors::h4cf131ef21f6aa74(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [sp-0xc0]
    unsigned long long v1;  // [sp-0xb8]
    void* v2;  // [sp-0xb0]
    char v3;  // [bp-0xa8]
    char v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x80]
    unsigned long long v9;  // [sp-0x78]
    unsigned long long v10;  // [sp-0x70]
    char v11;  // [sp-0x68]
    int v12;  // [sp-0x40]
    int v13;  // [sp-0x30]
    unsigned long long v15;  // r14
    unsigned long v16;  // rdx
    unsigned long long v17;  // rax
    uint128_t *v18;  // rax
    uint128_t *v19;  // rdx
    int v20;  // ymm0
    int v21;  // ymm1
    int v22;  // xmm0
    int v23;  // xmm1

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha9a51cff601b0b6f(&v3, a1, a2);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha9a51cff601b0b6f(&v6, a3, a4);
    v15 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he83a069ad3b6613e(1, *((long long *)&v5) - 1, *((long long *)&v4), *((long long *)&v5), &g_5b5f18);
    v9 = 1;
    v10 = v16;
    v11 = 0;
    v17 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hce3f4665478ff52e(&v9, *((long long *)&v7), *((long long *)&v8));
    v0 = 0;
    v1 = 8;
    v2 = 0;
    core::iter::traits::iterator::Iterator::zip::hb514995cb38ea568(&v9, v15, v16 * 16 + v15, v17, v16 * 16 + v17);
    v18 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h0c852af8ce20f45a(&v9);
    if (!v18)
    {
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
        ::0x4fcbf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::hdc1f49bdf38a06e8(&v6);
        ::0x4fcbf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::hdc1f49bdf38a06e8(&v3);
        return a0;
    }
    do
    {
        v22 = *(v18);
        v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
        v23 = *(v19);
        v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
        v12 = v22;
        v13 = v23;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1a85c61530c4026e(&v0, &v12);
        v18 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h0c852af8ce20f45a(&v9);
    } while (v18);
}
