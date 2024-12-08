double uu_sort::chunks::Chunk::recycle::h0e011c1b3d3a5463(long long a0, long long a1)
{
    int v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x88]
    int v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x68]
    int v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x48]
    int v6;  // [sp-0x38]
    unsigned long long v7;  // [sp-0x28]
    char v8;  // [bp-0x20]
    char v9;  // [bp-0x10]
    int v11;  // xmm0
    int v12;  // xmm0
    int v13;  // xmm0
    int v14;  // xmm0
    int v15;  // xmm0
    int v16;  // ymm0

    a1[5] = 0;
    a1[8] = 0;
    a1[11] = 0;
    a1[14] = 0;
    v1 = a1[5];
    v11 = *((int128_t *)&a1[3]);
    v0 = v11;
    a1[3] = 0;
    a1[4] = 8;
    a1[5] = 0;
    v3 = a1[8];
    v12 = *((int128_t *)&a1[6]);
    v2 = v12;
    a1[6] = 0;
    a1[7] = 8;
    a1[8] = 0;
    v5 = a1[11];
    v13 = *((int128_t *)&a1[9]);
    v4 = v13;
    a1[9] = 0;
    a1[10] = 8;
    a1[11] = 0;
    v7 = a1[14];
    v14 = *((int128_t *)&a1[12]);
    v6 = v14;
    a1[12] = 0;
    a1[13] = 8;
    a1[14] = 0;
    uu_sort::chunks::Chunk::into_owner::h7d580979d1e83db4(&v8, a1);
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v3;
    *((void*)&(&a0->field_10)[1]) = v2;
    *((unsigned long long *)&a0->field_30) = v5;
    *((void*)&a0->field_28) = v4;
    *((void*)((char *)&a0->field_30 + 8)) = v6;
    (&a0->field_40)[1] = v7;
    v15 = *((int128_t *)&v8);
    *((void*)&a0->field_48) = v15;
    a0->field_58 = *((long long *)&v9);
    return (unsigned long long)(...);
}
