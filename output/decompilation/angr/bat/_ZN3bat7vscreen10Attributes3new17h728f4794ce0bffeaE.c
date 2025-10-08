long long bat::vscreen::Attributes::new(struct_0 *a0)
{
    int v0;  // [bp-0x150], Other Possible Types: char
    unsigned long long v1;  // [bp-0x140]
    int v2;  // [bp-0x138]
    unsigned long long v3;  // [bp-0x128]
    int v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x108]
    int v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xe8]
    int v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xc8]
    int v10;  // [bp-0xb8]
    unsigned long long v11;  // [bp-0xa8]
    int v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x88]
    int v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x68]
    int v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x48]
    int v18;  // [bp-0x38], Other Possible Types: char
    unsigned long long v19;  // [bp-0x28]
    int v20;  // [bp-0x20], Other Possible Types: char
    char v21;  // [bp-0x10]

    v20.to_vec(1, 0);
    v0.to_vec(1, 0);
    v3 = v1;
    v2 = v0;
    v0.to_vec(1, 0);
    v5 = v1;
    v4 = v0;
    v0.to_vec(1, 0);
    v7 = v1;
    v6 = v0;
    v0.to_vec(1, 0);
    v9 = v1;
    v8 = v0;
    v0.to_vec(1, 0);
    v11 = v1;
    v10 = v0;
    v0.to_vec(1, 0);
    v13 = v1;
    v12 = v0;
    v0.to_vec(1, 0);
    v15 = v1;
    v14 = v0;
    v0.to_vec(1, 0);
    v17 = v1;
    v16 = v0;
    v0.to_vec(1, 0);
    v19 = v1;
    memcpy(&v18, &v0, 16);
    v0.to_vec(1, 0);
    *((unsigned long long *)&a0->field_c0) = v1;
    *((void*)&a0->field_b8) = v0;
    *((char *)&a0->field_c0 + 8) = 0;
    a0->field_10 = *((long long *)&v21);
    *((void*)&a0->field_0) = v20;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v3;
    *((void*)&(&a0->field_10)[1]) = v2;
    *((unsigned long long *)&a0->field_30) = v5;
    *((void*)&a0->field_28) = v4;
    (&a0->field_40)[1] = v7;
    *((void*)((char *)&a0->field_30 + 8)) = v6;
    a0->field_58 = v9;
    *((void*)&a0->field_48) = v8;
    *((void*)&(&a0->field_58)[1]) = v10;
    *((unsigned long long *)((char *)&a0->field_60 + 8)) = v11;
    *((void*)&a0->field_70) = v12;
    *((unsigned long long *)&a0->field_78) = v13;
    *((void*)((char *)&a0->field_78 + 8)) = v14;
    (&a0->field_88)[1] = v15;
    *((void*)&a0->field_90) = v16;
    a0->field_a0 = v17;
    *((unsigned long long *)((char *)&a0->field_a8 + 8)) = v19;
    *((void*)&(&a0->field_a0)[1]) = v18;
    return v19;
}
