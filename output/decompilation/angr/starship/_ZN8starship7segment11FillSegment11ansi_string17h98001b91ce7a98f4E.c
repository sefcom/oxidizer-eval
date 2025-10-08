long long starship::segment::FillSegment::ansi_string(struct_0 *a0, struct_1 *a1, char a2, unsigned long long a3, void* a4)
{
    unsigned long long v0;  // [bp-0x278]
    void* v1;  // [bp-0x270]
    void* v2;  // [bp-0x260]
    void* v3;  // [bp-0x250]
    void* v4;  // [bp-0x240]
    unsigned long v5;  // [bp-0x238]
    void* v6;  // [bp-0x230]
    char v7;  // [bp-0x228]
    unsigned int v8;  // [bp-0x224]
    char v9;  // [bp-0x220]
    void* v10;  // [bp-0x218]
    void* v11;  // [bp-0x208]
    void* v12;  // [bp-0x1f8]
    unsigned long v13;  // [bp-0x1e8]
    unsigned long v14;  // [bp-0x1e0]
    void* v15;  // [bp-0x1d8]
    char v16;  // [bp-0x1d0]
    unsigned int v17;  // [bp-0x1cc]
    char v18;  // [bp-0x1c8]
    unsigned long v19;  // [bp-0x1c0]
    unsigned long v20;  // [bp-0x1b8]
    char v21;  // [bp-0x1b0]
    char *v22;  // [bp-0x30]
    void* v23;  // [bp-0x28]
    unsigned long v25;  // rcx

    if ((a2 & 1))
    {
        v0 = a3;
        v25 = a1->field_10;
        v19 = a1->field_8;
        v20 = v25;
        v1 = 0;
        v2 = 0;
        v3 = 0;
        v4 = 0;
        v5 = v25;
        v6 = 0;
        v7 = 2;
        v8 = 268566529;
        v9 = 16;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = v25;
        v14 = v25;
        v15 = 0;
        v16 = 2;
        v17 = 268566529;
        v18 = 16;
        v21.new(&v1);
        v22 = &v0;
        v23 = 0;
        v1.collect(&v21);
        if (a1->field_18 == 2)
            goto LABEL_bc95e0;
LABEL_bc95a5:
        a0->field_30.to_ansi_style(&a1->field_18, a4);
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v1);
    }
    else
    {
        (char)v1.clone(a1);
        if (a1->field_18 != 2)
            goto LABEL_bc95a5;
LABEL_bc95e0:
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v1);
        a0->field_30 = 0;
        a0->field_38 = 0;
        *((unsigned long long *)&(&a0->field_38)[1]) = 90194313237;
    }
    a0->field_18 = 9223372036854775810;
    return a0;
}
