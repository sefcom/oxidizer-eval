long long fish::complete::CustomArgData::new(struct_0 *a0, unsigned long a1)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    void* v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    void* v5;  // [bp-0x48]
    int v6;  // [bp-0x40], Other Possible Types: char
    int v7;  // [bp-0x30]
    char v8;  // [bp-0x20]

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v6.default();
    *((int128_t *)((char *)&a0->field_48 + 8)) = *((int128_t *)&v8);
    *((void*)((char *)&a0->field_38 + 8)) = v7;
    *((void*)&a0->field_30) = v6;
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = 0;
    *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v3);
    *((unsigned short *)&a0->field_68) = 0x100;
    *((unsigned long long *)((char *)&a0->field_58 + 8)) = 0;
    a0->field_28 = a1;
    return 0;
}
