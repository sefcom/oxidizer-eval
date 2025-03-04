double uu_uniq::handle_obsolete::h1becbb41acd03a45(long long a0, long long a1, long long a2)
{
    char v0;  // [sp-0xc2]
    char v1;  // [sp-0xc1]
    struct struct_0 **v2;  // [sp-0xc0]
    struct struct_0 **v3;  // [bp-0xb8], Other Possible Types: int
    char *v4;  // [sp-0xb0]
    char *v5;  // [sp-0xa8]
    struct struct_0 **v6;  // [sp-0xa0]
    char v7;  // [bp-0x98]
    struct struct_0 **v8;  // [sp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x70]
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x58]
    void* v14;  // r14, Other Possible Types: unsigned long long
    struct struct_0 **v15;  // rax
    int v16;  // xmm0
    int v17;  // ymm0
    int v18;  // ymm0
    unsigned long v19;  // rdx
    void* v20;  // rax
    int v21;  // xmm0
    unsigned long long v23;  // rdx
    int v24;  // xmm0

    v6 = 0x8000000000000000;
    v8 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v2 = &v6;
    v3 = &v8;
    v4 = &v0;
    v5 = &v1;
    core::iter::traits::iterator::Iterator::filter_map::hcec70c5cd690a3a4(&v12, a1, a2, &v2);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5a1dfc9d90ab14e5(&v10, &v12);
    if (v2 != 0x8000000000000000)
    {
        v16 = *((int128_t *)&v7);
        v18 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
        v3 = v16;
        v2 = v6;
        v14 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h80beacdf87cc02d6(&v2);
        v15 = v8;
        if (!(v15 == 0x8000000000000000))
            goto LABEL_4702ee;
LABEL_4702be:
        v20 = 0;
    }
    else
    {
        v14 = 0;
        v15 = v8;
        if (v15 == 0x8000000000000000)
            goto LABEL_4702be;
LABEL_4702ee:
        v21 = *((int128_t *)&v9);
        v18 = v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21;
        v3 = v21;
        v2 = v15;
        v20 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h80beacdf87cc02d6(&v2);
    }
    a0->field_20 = *((long long *)&v11);
    v24 = *((int128_t *)&v10);
    *((void*)&a0->field_10) = v24;
    a0->field_0 = v14;
    a0->field_8 = v19;
    a0->field_28 = v20;
    a0->field_30 = v23;
    return (unsigned long long)(v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24);
}
