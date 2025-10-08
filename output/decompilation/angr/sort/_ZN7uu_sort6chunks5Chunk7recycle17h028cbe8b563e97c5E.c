double uu_sort::chunks::Chunk::recycle(long long a0, long long a1)
{
    char v0;  // [bp-0xa8]
    int v1;  // [bp-0x90], Other Possible Types: char
    unsigned long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x68]
    int v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x50]
    int v7;  // [bp-0x48]
    unsigned long v8;  // [bp-0x38]
    char v9;  // [bp-0x30]
    char v10;  // [bp-0x20]
    unsigned long long v12;  // r15
    int v13;  // xmm0

    uu_sort::chunks::Chunk::recycle::{{closure}}(&v1, a1 + 24);
    a0->field_10 = v2;
    *((void*)&a0->field_0) = v1;
    *((unsigned long *)((char *)&a0->field_18 + 8)) = v4;
    *((void*)&(&a0->field_10)[1]) = v3;
    *((unsigned long *)&a0->field_30) = v6;
    *((void*)&a0->field_28) = v5;
    *((void*)((char *)&a0->field_30 + 8)) = v7;
    (&a0->field_40)[1] = v8;
    memcpy(&v0, &v9, 16);
    v12 = *((long long *)&v10);
    (&a0->field_58)[1].into_owner(a1);
    v13 = *((int128_t *)&v0);
    *((void*)&a0->field_48) = v13;
    a0->field_58 = v12;
    return (unsigned long long)v13;
}
