long long uu_fmt::parasplit::ParaWords::create_words(struct_2 *a0)
{
    unsigned long v0;  // [bp-0x178]
    unsigned long long v1[3];  // [bp-0x170]
    unsigned long long v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    char v4[74];  // [bp-0x158]
    char *v5;  // [bp-0x150]
    char v6;  // [bp-0x120]
    char v7;  // [bp-0xf0]
    unsigned long long v8[3];  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    char v10;  // [bp-0x9f]
    char v11;  // [bp-0x5f]
    char v12;  // [bp-0x58]
    struct_0 *v14;  // rax
    char v15[74];  // r14
    unsigned long v16;  // r15
    unsigned long v17;  // r13
    unsigned long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // r8
    unsigned long long v21;  // rdx
    struct_0 *v22;  // rax

    v14 = a0->field_20;
    if (v14->field_68)
    {
        v8[0] = v14->field_8;
        v9 = &v14->field_8[v14->field_10];
        v10 = 2;
        v11 = 2;
        return a0.spec_extend(&v8);
    }
    v15 = a0->field_18;
    if (v15[72] || v15[73] == 1)
    {
        if (!v14->field_10)
            core::panicking::panic_bounds_check(0, 0, &g_583d18); /* do not return */
        v16 = v14->field_50;
        v17 = v14->field_8->field_8;
        v18 = v14->field_8->field_10;
        v19 = v14->field_50.get(v14->field_8->field_8, v14->field_8->field_10);
        if (!(!v19))
            goto LABEL_4a5ea7;
        v20 = &g_583d30;
    }
    else
    {
        if (!v14->field_10)
            core::panicking::panic_bounds_check(0, 0, &g_583ce8); /* do not return */
        v16 = v14->field_60;
        v17 = v14->field_8->field_8;
        v18 = v14->field_8->field_10;
        v19 = v14->field_60.get(v14->field_8->field_8, v14->field_8->field_10);
        if (v19)
        {
LABEL_4a5ea7:
            v12.new(v15, v19, v21);
            a0.spec_extend(&v12);
            v22 = a0->field_20;
            if (v22->field_10 <= 1)
                return v22;
            v0 = v22->field_60;
            v1[0] = v22->field_8;
            v2 = &v22->field_8[v22->field_10];
            v3 = 1;
            *((struct struct_3 **)&v4[0]) = a0->field_18;
            v5 = &v0;
            v6 = 2;
            v7 = 2;
            return a0.spec_extend(&v1);
        }
        v20 = &g_583d00;
    }
    core::str::slice_error_fail(v17, v18, v16, v18, v20); /* do not return */
}
