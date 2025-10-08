long long check_docs::filter_valid_anchors(struct_0 *a0, unsigned long long a1, unsigned long long a2[3])
{
    unsigned long long v0[3];  // [bp-0x140]
    int v1;  // [bp-0x138], Other Possible Types: char
    unsigned long long v2;  // [bp-0x128]
    char v3;  // [bp-0x120]
    unsigned long long v4;  // [bp-0x110]
    int v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    char v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xd8]
    int v10;  // [bp-0xc8], Other Possible Types: char
    unsigned long v11;  // [bp-0xb8]
    char v12;  // [bp-0xb0]
    char *v13;  // [bp-0x90]
    char v14;  // [bp-0x88]
    char v15;  // [bp-0x70]

    v0[0] = a2;
    v12.into_iter(a1);
    v13 = &v0;
    v1.partition_map(&v12);
    v5 = v1;
    v7 = v2;
    memcpy(&v8, &v3, 16);
    v9 = v4;
    check_docs::filter_unused_ends(&v12, a2[1], a2[2], v6, v2);
    v1.into_iter(&v12);
    v14.collect(&v1);
    v1.into_iter(&(char)v5);
    v10.collect(&v1);
    v12.into_iter(&v8);
    v1.into_iter(&v14);
    v15.chain(&v12, &v1);
    v1.collect(&v15);
    a0->field_10 = v11;
    *((void*)&a0->field_0) = v10;
    *((void*)&(&a0->field_10)[1]) = v1;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v2;
    a2.drop_in_place<alloc::vec::Vec<check_docs::Anchor>>();
    return a0;
}
