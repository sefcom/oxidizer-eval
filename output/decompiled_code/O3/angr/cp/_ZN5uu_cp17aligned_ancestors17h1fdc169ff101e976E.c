long long uu_cp::aligned_ancestors::h1fdc169ff101e976(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
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
    unsigned long long v15;  // rcx
    unsigned long long v16;  // r14
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax
    uint128_t *v19;  // rax
    uint128_t *v20;  // rdx
    int v21;  // ymm0
    int v22;  // ymm1
    int v23;  // xmm0
    int v24;  // xmm1

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2d260c346f93e71e(&v3, a1, a2, a3);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2d260c346f93e71e(&v6, a3, a4, v15);
    v16 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h3bba7ff4fc5ca19a(1, *((long long *)&v5) - 1, *((long long *)&v4), *((long long *)&v5), &g_5b5848);
    v9 = 1;
    v10 = v17;
    v11 = 0;
    v18 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h51a70756630858d2(&v9, *((long long *)&v7), *((long long *)&v8));
    v0 = 0;
    v1 = 8;
    v2 = 0;
    core::iter::traits::iterator::Iterator::zip::h6a316fe915d9851a(&v9, v16, v17 * 16 + v16, v18, v17 * 16 + v18);
    v19 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h111663ea4d18b646(&v9);
    if (!v19)
    {
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
        ::0x4fc2c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::h7219ca1c8c2aeb9f(&v6);
        ::0x4fc2c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..path..Path$GT$$GT$::h7219ca1c8c2aeb9f(&v3);
        return a0;
    }
    do
    {
        v23 = *(v19);
        v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
        v24 = *(v20);
        v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24;
        v12 = v23;
        v13 = v24;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h082777bef9fad7e7(&v0, &v12, v20);
        v19 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h111663ea4d18b646(&v9);
    } while (v19);
}
