double uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(long long a0, long long a1)
{
    int v0;  // [sp-0x108]
    unsigned long long v1;  // [sp-0xf8]
    int v2;  // [sp-0xe8]
    unsigned long long v3;  // [sp-0xd8]
    int v4;  // [sp-0xc8]
    unsigned long long v5;  // [sp-0xb8]
    int v6;  // [sp-0xa8]
    unsigned long long v7;  // [sp-0x98]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x78]
    char v10;  // [bp-0x70]
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x58]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    char v16;  // [bp-0x28]
    char v17;  // [bp-0x18]
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // xmm0
    int v22;  // xmm0
    int v23;  // xmm0
    int v24;  // ymm0

    uu_sort::chunks::Chunk::recycle::_$u7b$$u7b$closure$u7d$$u7d$::h749b46789b699b37(&v10, a1 + 24);
    v1 = *((long long *)&v11);
    v19 = *((int128_t *)&v10);
    v0 = v19;
    v3 = *((long long *)&v13);
    v20 = *((int128_t *)&v12);
    v2 = v20;
    v5 = *((long long *)&v15);
    v21 = *((int128_t *)&v14);
    v4 = v21;
    v7 = *((long long *)&v17);
    v22 = *((int128_t *)&v16);
    v6 = v22;
    uu_sort::chunks::Chunk::into_owner::hb42f0e7ac9257e28(&v8, a1);
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v3;
    *((void*)&(&a0->field_10)[1]) = v2;
    *((unsigned long long *)&a0->field_30) = v5;
    *((void*)&a0->field_28) = v4;
    *((void*)((char *)&a0->field_30 + 8)) = v6;
    (&a0->field_40)[1] = v7;
    v23 = *((int128_t *)&v8);
    *((void*)&a0->field_48) = v23;
    a0->field_58 = *((long long *)&v9);
    return (unsigned long long)(...);
}
