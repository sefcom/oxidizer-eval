long long uu_sort::chunks::RecycledChunk::new(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    void* v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    void* v5;  // [bp-0x58]
    void* v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    void* v8;  // [bp-0x40]
    void* v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    void* v11;  // [bp-0x28]
    int v12;  // [bp-0x20], Other Possible Types: char
    char v13;  // [bp-0x10]
    unsigned long long v15;  // rax

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
    v12.from_elem(a1);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = 0;
    *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v3);
    *((int128_t *)&a0->field_28) = *((int128_t *)&v6);
    *((unsigned long long *)&a0->field_30) = 0;
    *((int128_t *)((char *)&a0->field_30 + 8)) = *((int128_t *)&v9);
    (&a0->field_40)[1] = 0;
    *((unsigned long long *)&a0->field_48) = 0;
    *((unsigned long long *)((char *)&a0->field_48 + 8)) = 8;
    a0->field_58 = 0;
    v15 = *((long long *)&v13);
    a0->field_70 = v15;
    *((void*)&a0->field_60) = v12;
    return v15;
}
