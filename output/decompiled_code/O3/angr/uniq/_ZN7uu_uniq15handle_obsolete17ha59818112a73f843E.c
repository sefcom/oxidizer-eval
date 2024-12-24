double uu_uniq::handle_obsolete::ha59818112a73f843(long long a0, long long a1, long long a2)
{
    char v0;  // [sp-0xc2]
    char v1;  // [sp-0xc1]
    unsigned long v2;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v3;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xb0]
    unsigned long long v5;  // [sp-0xa8]
    unsigned long long v6;  // [sp-0xa0]
    char v7;  // [bp-0x98]
    unsigned long long v8;  // [sp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x70]
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x58]
    void* v14;  // r14
    unsigned long long v15;  // rax
    int v16;  // xmm0
    int v17;  // ymm0
    int v18;  // ymm0
    unsigned long v19;  // rdx
    unsigned long long v20;  // r15
    void* v21;  // rax
    int v22;  // ymm0
    int v23;  // xmm0
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r15
    unsigned long long v26;  // r14
    int v27;  // xmm0

    v6 = 0x8000000000000000;
    v8 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = &v6;
    v3 = &v8;
    v4 = &v0;
    v5 = &v1;
    core::iter::traits::iterator::Iterator::filter_map::h58cb5509541687fa(&v12, a1, a2, &v2);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha148c6ba2823ba85(&v10, &v12);
    if (v2 != 0x8000000000000000)
    {
        v16 = *((int128_t *)&v7);
        v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
        v3 = v16;
        v2 = v6;
        v14 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h4c87f4ae6e6cf03a(&v2);
        v20 = v19;
        v15 = v8;
        if (!(v15 == 0x8000000000000000))
            goto LABEL_47045e;
LABEL_47042e:
        v21 = 0;
    }
    else
    {
        v14 = 0;
        v15 = v8;
        if (v15 == 0x8000000000000000)
            goto LABEL_47042e;
LABEL_47045e:
        v23 = *((int128_t *)&v9);
        v18 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
        v3 = v23;
        v2 = v15;
        v21 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h4c87f4ae6e6cf03a(&v2);
    }
    a0->field_20 = *((long long *)&v11);
    v27 = *((int128_t *)&v10);
    *((void*)&a0->field_10) = v27;
    a0->field_0 = v26;
    a0->field_8 = v25;
    a0->field_28 = v21;
    a0->field_30 = v24;
    return (unsigned long long)(v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27);
}
