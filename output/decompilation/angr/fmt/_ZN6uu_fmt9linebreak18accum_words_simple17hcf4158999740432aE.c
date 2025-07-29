long long uu_fmt::linebreak::accum_words_simple(struct_0 *a0, struct_3 *a1, unsigned int a2, char a3, struct_1 *a4)
{
    unsigned long long *v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    struct_2 *v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long v12;  // rax
    struct_0 *v13;  // rcx
    char v14;  // al

    v2 = a1->field_0;
    v4 = a1->field_0.compute_width(a4, a2, 0);
    v5 = ((a1->field_30 || a4->field_3a) == 1 ? ((a3 & a4->field_3a | a4->field_38) & 1) + 1 : 0);
    v1 = a4->field_28;
    v6 = a2 + a4->field_28 + v4 + v5;
    v7 = a1->field_18;
    if (v6 > v2->field_30)
    {
        v8 = uu_fmt::linebreak::write_newline(a1->field_8, a1->field_10, v7);
        if (!(!v8))
            goto LABEL_4a6fe0;
        v9 = a4->field_18;
        v10 = a4->field_20.get(a4->field_10, v9);
        if (!v10)
            core::str::slice_error_fail(a4->field_10, v9, a4->field_20, v9, &g_583e78); /* do not return */
        v8 = uu_fmt::linebreak::write_with_spaces(v10, v11, 0, v7);
        if (!(!v8))
            goto LABEL_4a6fe0;
        v12 = a4->field_39;
        v13 = a0;
        *(v0) = v1 + a1->field_28;
    }
    else
    {
        v8 = uu_fmt::linebreak::write_with_spaces(a4->field_10, a4->field_18, v5, v7);
        if (v8)
        {
LABEL_4a6fe0:
            v13 = a0;
            *(v0) = v8;
            v14 = 2;
            v12 = v8 & 0xffffffffffffff00 | 2;
        }
        else
        {
            v12 = a4->field_39;
            v13 = a0;
            *(v0) = v6;
        }
    }
    v13->field_8 = v14;
    return v12;
}
