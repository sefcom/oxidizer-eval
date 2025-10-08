long long uu_nl::nl(unsigned long long a0, struct_0 *a1, struct_1 *a2)
{
    char v0;  // [bp-0x169]
    char v1;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x160]
    char v3;  // [bp-0x158]
    unsigned long v4;  // [bp-0x130]
    unsigned long v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    unsigned long long v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x110]
    unsigned long v9;  // [bp-0xb8]
    unsigned long v10;  // [bp-0xb0]
    unsigned long v11;  // [bp-0xa8]
    unsigned long v12;  // [bp-0xa0]
    unsigned long v13;  // [bp-0x98]
    unsigned long v14;  // [bp-0x90]
    unsigned long v15;  // [bp-0x88]
    unsigned long v16;  // [bp-0x80]
    unsigned long v17;  // [bp-0x78]
    struct_1 *v18;  // [bp-0x70]
    unsigned long v19;  // [bp-0x68]
    unsigned long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x20]
    unsigned long long v26;  // r13
    unsigned long v27;  // rbp

    v24 = v26;
    v22 = a0;
    v23.next(a0);
    if (*((long long *)&v23) == 9223372036854775809)
        return 0;
    v4 = a1->field_0;
    v20 = a2->field_38;
    v19 = a2->field_40;
    v15 = &a2->padding_0[32];
    v0 = a2->field_80;
    v17 = a2->field_60;
    v9 = a2->field_70;
    v13 = a2->field_78;
    v14 = a2->field_78 + 1;
    v12 = a2 + 1;
    v11 = &a2->padding_48;
    v18 = a2;
    v10 = a2->field_68;
    v5 = a1->field_8;
    v21 = 0x8000000000000000;
    v16 = &a2->padding_0[16];
    v1.map_err_context(&v23);
    if (v1 == 0x8000000000000000)
        return v2;
    v6 = v1;
    v7 = v2;
    v8 = *((long long *)&v3);
    v27 = a1->field_10 + 1;
    if (v8)
        v27 = 0;
    a1->field_10 = v27;
    goto (long long)(g_44ee90[(int)v7.parse(v8, v20, v19)] + (char *)&g_44ee90[0]);
}
