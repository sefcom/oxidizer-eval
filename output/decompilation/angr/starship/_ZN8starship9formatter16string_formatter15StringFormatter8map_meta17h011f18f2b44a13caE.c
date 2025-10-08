long long starship::formatter::string_formatter::StringFormatter::map_meta(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    int v2;  // [bp-0x128]
    unsigned long long v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    void* v5;  // [bp-0x108]
    unsigned long v6;  // [bp-0x100]
    unsigned long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    void* v9;  // [bp-0xe8]
    unsigned long v10;  // [bp-0xe0]
    unsigned long v11;  // [bp-0xd8]
    unsigned long v12;  // [bp-0xd0]
    int v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    char v15;  // [bp-0xb0]
    int v16;  // [bp-0x98], Other Possible Types: char
    unsigned long long v17;  // [bp-0x88]
    int v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x70]
    void* v20;  // [bp-0x68]
    uint128_t v21;  // [bp-0x58]
    void* v22;  // [bp-0x40]
    unsigned long v24;  // rax
    unsigned long v25;  // rdx
    unsigned long v26;  // rax
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2

    v0 = a2;
    v1 = a3;
    v15.get_variables(a1);
    v24 = a1->field_10[1];
    v25 = v24;
    v26 = v24;
    if (v26)
        v26 = a1->field_20[0];
    v4 = v24;
    v5 = 0;
    v6 = v24;
    v7 = *((long long *)&a1->field_18);
    v8 = v4;
    v9 = 0;
    v10 = v24;
    v11 = *((long long *)&a1->field_18);
    v12 = v26;
    v20 = 0;
    v22 = 0;
    v21 = 0;
    v16.fold(&v4, &v20, &v0);
    v13 = v16;
    v14 = v17;
    v2 = v18;
    v3 = v19;
    v20.into_iter(&v13);
    v20.fold(&a1->field_10[1]);
    v20.into_iter(&v2);
    v20.fold(&a1->field_20[1]);
    a0->field_40 = a1->field_30;
    v28 = a1->field_0;
    v29 = a1->field_10;
    v30 = *((int128_t *)&a1->field_18);
    a0->field_30 = *((int128_t *)&a1->field_20[1]);
    *((void*)&a0->field_20) = v30;
    *((void*)&a0->field_10) = v29;
    *((void*)&a0->field_0) = v28;
    return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(&v15);
}
