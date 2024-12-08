double uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(long long a0, long long a1)
{
    void* v0;  // [sp-0x80]
    unsigned long long v1;  // [sp-0x78]
    void* v2;  // [sp-0x70]
    void* v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x60]
    void* v5;  // [sp-0x58]
    void* v6;  // [sp-0x50]
    unsigned long long v7;  // [sp-0x48]
    void* v8;  // [sp-0x40]
    void* v9;  // [sp-0x38]
    unsigned long long v10;  // [sp-0x30]
    void* v11;  // [sp-0x28]
    char v12;  // [bp-0x20]
    char v13;  // [bp-0x10]
    int v15;  // xmm0
    int v16;  // xmm0
    int v17;  // xmm0
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // ymm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hcfff1594cf12443e(&v12, a1);
    a0->field_10 = v2;
    v15 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v15;
    *((void* *)((char *)&a0->field_18 + 8)) = v5;
    v16 = *((int128_t *)&v3);
    *((void*)&(&a0->field_10)[1]) = v16;
    *((void* *)&a0->field_30) = v8;
    v17 = *((int128_t *)&v6);
    *((void*)&a0->field_28) = v17;
    v18 = *((int128_t *)&v9);
    *((void*)((char *)&a0->field_30 + 8)) = v18;
    (&a0->field_40)[1] = v11;
    v19 = *((int128_t *)&v12);
    *((void*)&a0->field_48) = v19;
    a0->field_58 = *((long long *)&v13);
    return (unsigned long long)(v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19);
}
