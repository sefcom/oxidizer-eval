long long fish::builtins::argparse::ArgParseCmdOpts::new(struct_0 *a0)
{
    int v0;  // [bp-0x100], Other Possible Types: char
    unsigned long v1;  // [bp-0xf0]
    int v2;  // [bp-0xe8]
    unsigned long v3;  // [bp-0xd8]
    int v4;  // [bp-0xd0]
    unsigned long v5;  // [bp-0xc0]
    int v6;  // [bp-0xb8]
    unsigned long v7;  // [bp-0xa8]
    int v8;  // [bp-0xa0]
    unsigned long v9;  // [bp-0x90]
    int v10;  // [bp-0x88]
    int v11;  // [bp-0x78]
    int v12;  // [bp-0x68]
    int v13;  // [bp-0x58]
    int v14;  // [bp-0x48]
    int v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    unsigned int v17;  // [bp-0x18]
    char v18;  // [bp-0x14]

    v0.default();
    *((char *)&a0->field_c8) = 2;
    *((int *)((char *)&a0->field_b8 + 12)) = *((int *)&v18);
    *((long long *)((char *)&a0->field_a8 + 8)) = *((long long *)&v16);
    *((unsigned long long *)&a0->field_b8) = 18446744073709551615;
    *((unsigned int *)((char *)&a0->field_b8 + 8)) = v17;
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    *((unsigned long *)((char *)&a0->field_18 + 8)) = v3;
    *((void*)&(&a0->field_10)[1]) = v2;
    *((unsigned long *)&a0->field_30) = v5;
    *((void*)&a0->field_28) = v4;
    (&a0->field_40)[1] = v7;
    *((void*)((char *)&a0->field_30 + 8)) = v6;
    *((void*)&(&a0->field_58)[1]) = v10;
    *((void*)((char *)&a0->field_60 + 8)) = v11;
    *((void*)&(&a0->field_70)[1]) = v12;
    *((void*)((char *)&a0->field_88 + 8)) = v14;
    *((void*)((char *)&a0->field_98 + 8)) = v15;
    *((void*)((char *)&a0->field_78 + 8)) = v13;
    *((void*)&a0->field_48) = v8;
    a0->field_58 = v9;
    return v9;
}
