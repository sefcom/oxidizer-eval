double uu_split::handle_obsolete::he1565c7d7191f1a3(long long a0, long long a1, long long a2)
{
    char v0;  // [sp-0x82]
    char v1;  // [sp-0x81]
    unsigned long long v2;  // [sp-0x80]
    char v3;  // [bp-0x70]
    char *v4;  // [sp-0x68]
    char *v5;  // [sp-0x60]
    char *v6;  // [sp-0x58]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x40]
    char v9;  // [bp-0x38]
    int v11;  // xmm0
    int v12;  // xmm0
    int v13;  // ymm0

    v2 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v4 = &v2;
    v5 = &v0;
    v6 = &v1;
    core::iter::traits::iterator::Iterator::filter_map::h713c6b1ad2f070aa(&v9, a1, a2, &v4);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4cb8c89f733ed375(&v7, &v9);
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v3);
    v11 = *((int128_t *)&v2);
    *((void*)&(&a0->field_10)[1]) = v11;
    v12 = *((int128_t *)&v7);
    *((void*)&a0->field_0) = v12;
    a0->field_10 = *((long long *)&v8);
    return (unsigned long long)((v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12);
}
