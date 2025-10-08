long long fish::ast::finalize_parse(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    int v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x68]
    int v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x58]
    unsigned long v6;  // [bp-0x50]
    int v7;  // [bp-0x48]
    unsigned long v8;  // [bp-0x38]
    char v9;  // [bp-0x30]
    unsigned long long v11;  // rcx
    char v12;  // al
    unsigned long long v13;  // rcx

    v0 = a2;
    v1 = v11;
    v9.kind(&v0);
    a1.chomp_extras(&v9);
    v12 = a1->padding_48[130];
    v3 = a1->field_30;
    *((int128_t *)&v2) = *((int128_t *)&a1->field_28);
    v6 = a1->field_10;
    *((uint128_t *)&v4) = a1->field_0;
    *((int128_t *)&v7) = *((int128_t *)&(&a1->field_10)[1]);
    v8 = *((long long *)((char *)&a1->field_18 + 8));
    *((int128_t *)&(&a0->field_40)[1]) = *((int128_t *)&v0);
    *((char *)&a0->field_48 + 8) = v12;
    v13 = (long long)v4;
    *((void*)&a0->field_0) = v2;
    a0->field_10 = v3;
    a0->field_18 = v13;
    a0->field_20 = v5;
    a0->field_28 = v6;
    *((void*)&a0->field_30) = v7;
    a0->field_40 = v8;
    return v8;
}
