long long uu_sort::chunks::Chunk::recycle(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x140]
    int v1;  // [bp-0x138], Other Possible Types: char
    unsigned long long v2;  // [bp-0x128]
    int v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x108]
    int v5;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v6;  // [bp-0xe8]
    int v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v10;  // [bp-0xa8]
    int v11;  // [bp-0xa0], Other Possible Types: char
    unsigned long v12;  // [bp-0x90]
    char v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x78]
    int v15;  // [bp-0x70]
    unsigned long long v16;  // [bp-0x60]
    char v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x48]
    int v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x30]
    char v21;  // [bp-0x28]
    char v22;  // [bp-0x18]

    v0 = a1;
    uu_sort::chunks::Chunk::recycle::{{closure}}(&v13, a1 + 24);
    v2 = v14;
    memcpy(&v1, &v13, 16);
    v4 = v16;
    v3 = v15;
    v6 = v18;
    memcpy(&v5, &v17, 16);
    v8 = v20;
    v7 = v19;
    v10 = *((long long *)&v22);
    memcpy(&v9, &v21, 16);
    v11.into_owner(a1);
    a0->field_10 = v2;
    *((void*)&a0->field_0) = v1;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v4;
    *((void*)&(&a0->field_10)[1]) = v3;
    *((unsigned long long *)&a0->field_30) = v6;
    *((void*)&a0->field_28) = v5;
    (&a0->field_40)[1] = v8;
    *((void*)((char *)&a0->field_30 + 8)) = v7;
    *((void*)&a0->field_48) = v9;
    a0->field_58 = v10;
    *((void*)&(&a0->field_58)[1]) = v11;
    *((unsigned long *)((char *)&a0->field_60 + 8)) = v12;
    return a0;
}
