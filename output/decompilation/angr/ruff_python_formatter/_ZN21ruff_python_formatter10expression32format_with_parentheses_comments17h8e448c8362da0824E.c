long long ruff_python_formatter::expression::format_with_parentheses_comments(unsigned long long a0, unsigned long long a1, unsigned long long a2[6], struct_2 *a3)
{
    unsigned long long v0;  // [bp-0x1c0]
    unsigned long v1;  // [bp-0x1b8]
    unsigned long v2;  // [bp-0x1b0]
    struct_5 *v3;  // [bp-0x1a8]
    unsigned int v4;  // [bp-0x1a0], Other Possible Types: unsigned long
    unsigned int v5;  // [bp-0x1a0]
    unsigned long v6;  // [bp-0x198]
    char *v7;  // [bp-0x190], Other Possible Types: unsigned long
    unsigned long long v8;  // [bp-0x188]
    unsigned long long v9;  // [bp-0x180]
    unsigned long long v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x170]
    unsigned long long v12;  // [bp-0x160]
    char *v13;  // [bp-0x158]
    char v14;  // [bp-0x14c]
    unsigned long long v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    unsigned long long v17;  // [bp-0x138]
    char v18;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x128]
    unsigned long long v20;  // [bp-0x120]
    int v21;  // [bp-0x118], Other Possible Types: unsigned long long
    char *v22;  // [bp-0x110]
    unsigned long long v23;  // [bp-0x108]
    unsigned long long v24;  // [bp-0x100]
    unsigned long long v25;  // [bp-0xf8]
    char v26;  // [bp-0xf0]
    char *v27;  // [bp-0x90]
    unsigned long long v28;  // [bp-0x88]
    char *v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x78]
    char v31;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x68]
    unsigned long long v33;  // [bp-0x60]
    unsigned long v34;  // [bp-0x58]
    char v35;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x48]
    unsigned long long v37;  // [bp-0x40]
    char v38;  // [bp-0x38]
    unsigned long long v40;  // rax
    struct_4 *v41;  // rax
    uint128_t *v42;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // r8
    unsigned long v45;  // r12
    unsigned long v46;  // r13
    void* v47;  // r14
    unsigned long long v48;  // rbp
    unsigned long long v49;  // rax
    unsigned long long v50;  // rbp
    unsigned long long v51;  // r12

    v12 = a1;
    v40 = a1.from();
    v41 = a3->field_8->field_30(a3->field_0);
    v42 = a3->field_8->field_30(a3->field_0);
    ruff_python_ast::parenthesize::parentheses_iterator(&v18, v40, v43, 94, v44, v41->field_10->field_60, *(v42), *(v42));
    v5 = 0;
    v14.spec_fold(&v18, &v5);
    if ((v14 & 1))
    {
        v18 = v15;
        v45 = a2[0];
        v46 = a2[1];
        v47 = core::slice::<impl [T]>::partition_point(a2[0], v46, &v18);
        v48 = a2[5];
        v49 = core::slice::<impl [T]>::partition_point(a2[4], a2[5], &v18);
        if (v47 > v46)
        {
            v18 = &g_97adf0;
            v19 = 1;
            v20 = 8;
            *((uint128_t *)&v21) = 0;
            core::panicking::panic_fmt(&v18, &g_97dea0); /* do not return */
        }
    }
    else
    {
        v49 = a2[5];
        v45 = a2[0];
        v46 = a2[1];
        v47 = 0;
        v48 = v49;
    }
    v50 = v48;
    core::slice::<impl [T]>::split_at_unchecked(&v31, v45, v46, v47);
    if (v49 > v50)
    {
        v18 = &g_97adf0;
        v19 = 1;
        v20 = 8;
        *((uint128_t *)&v21) = 0;
        core::panicking::panic_fmt(&v18, &g_97deb8); /* do not return */
    }
    v1 = v46;
    v2 = v45;
    v11 = v32;
    v51 = v33;
    core::slice::<impl [T]>::split_at_unchecked(&v35, a2[4], v50, v49);
    if (!v34 || *((char *)(v51 + 9)))
    {
        v51 = 4;
        v0 = 0;
    }
    else
    {
        v2 = v51 + 12;
        v0 = 1;
        v1 = v34 - 1;
    }
    v10 = *((long long *)&v38);
    v13 = &v12;
    v19 = v31;
    v20 = v11;
    v18 = 1;
    v5.fmt(&v18, a3);
    if (v4 != 4)
    {
        v3->field_10 = v7;
        v3->field_0 = *((int128_t *)&v4);
        return v7;
    }
    v4 = v2;
    v6 = v1;
    v7 = &v13;
    v8 = v35;
    v9 = v36;
    v18 = "()iflambda:crates/ruff_python_formatter/src/expression/expr_lambda.rs";
    v19 = 1;
    v20 = v51;
    v21 = v0;
    v26 = 0;
    v22 = &v4;
    v23 = &g_97ded0;
    v24 = ")iflambda:crates/ruff_python_formatter/src/expression/expr_lambda.rs";
    v25 = 1;
    v16 = v37;
    v17 = v10;
    v27 = &v18;
    v28 = &g_97d978;
    v29 = &v16;
    v30 = &g_97d5a8;
    return a0.write_fmt(a3, &v27, 2);
}
