long long check_docs::validate_includes(struct_0 *a0, unsigned long long a1, unsigned long long a2[3])
{
    char v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x80]
    char *v4;  // [bp-0x78], Other Possible Types: unsigned long long
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x60]
    int v7;  // [bp-0x58], Other Possible Types: char
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9[3];  // [bp-0x38]
    int v10;  // [bp-0x30], Other Possible Types: char
    char v11;  // [bp-0x20]

    v7.into_iter(a1);
    v9[0] = a2;
    v2.partition_map(&v7);
    v1 = v4;
    memcpy(&v0, &v2, 16);
    v8 = v6;
    memcpy(&v7, &v5, 16);
    v2 = a2[1];
    v3 = a2[2] * 56 + a2[1];
    v4 = &v0;
    v10.collect(&v2);
    a0->field_10 = v8;
    *((void*)&a0->field_0) = v7;
    *((void*)&(&a0->field_10)[1]) = v10;
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v11);
    v0.drop_in_place<alloc::vec::Vec<check_docs::Anchor>>();
    a2.drop_in_place<alloc::vec::Vec<check_docs::Anchor>>();
    return a0;
}
