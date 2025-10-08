long long just::loader::Loader::new(struct_0 *a0)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x48]
    int v4;  // [bp-0x40], Other Possible Types: char
    int v5;  // [bp-0x30]
    int v6;  // [bp-0x20]
    char v7;  // [bp-0x10]

    v0.new();
    v4.new();
    a0->field_30 = *((long long *)&v7);
    *((void*)&a0->field_20) = v6;
    *((void*)&a0->field_10) = v5;
    *((void*)&a0->field_0) = v4;
    *((void*)&(&a0->field_30)[1]) = v0;
    *((void*)((char *)&a0->field_38 + 8)) = v1;
    *((void*)((char *)&a0->field_48 + 8)) = v2;
    *((unsigned long *)((char *)&a0->field_58 + 8)) = v3;
    return a0;
}
