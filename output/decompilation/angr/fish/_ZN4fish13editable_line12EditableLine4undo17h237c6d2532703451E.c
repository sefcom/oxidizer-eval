long long fish::editable_line::EditableLine::undo()
{
    int v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xd8]
    struct_0 *v4;  // [bp-0xd0]
    unsigned long v5;  // [bp-0xc8]
    unsigned long v6;  // [bp-0xc0]
    unsigned long v7;  // [bp-0xb8]
    unsigned long v8;  // [bp-0xb0]
    unsigned long v9;  // [bp-0xa8]
    unsigned long v10;  // [bp-0xa0]
    unsigned long long v11[13];  // [bp-0x98]
    void* v12;  // [bp-0x88]
    void* v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    void* v15;  // [bp-0x68]
    int v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x50]
    void* v18;  // [bp-0x48]
    unsigned long v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x38]
    struct_0 *v22;  // rdi
    struct_0 *v23;  // rbx
    unsigned long v24;  // rax
    unsigned long v25;  // rax
    unsigned long v26;  // rdi
    unsigned long v27;  // rsi
    unsigned long long v28;  // r14
    unsigned long long v29;  // rax
    char v30;  // r12b
    unsigned long v31;  // r13
    struct_1 *v32;  // r14
    unsigned long v33;  // rax
    char *v34;  // r15
    unsigned long long v35;  // rbp
    unsigned long long v36;  // rcx
    struct_2 *v37;  // rbp
    unsigned long v38;  // r12
    unsigned long long v39;  // rax
    unsigned long long v40;  // rcx
    unsigned int v41;  // ebp

    v24 = v22->field_68;
    v25 = v24;
    if (!v25)
    {
        v23.end_edit_group();
        v23->field_70 = 0;
        return v41 & 0xffffff00 | v25;
    }
    v6 = v24;
    v26 = v24 - 1;
    v27 = v22->field_60;
    if (v26 >= v22->field_60)
        core::panicking::panic_bounds_check(v26, v27, &g_14d65a8); /* do not return */
    v5 = v22->field_78;
    v28 = v22->field_58;
    v29 = v26 * 104;
    v30 = *((long long *)(v28 + v29 + 16));
    v10 = *((long long *)(v28 + v29 + 24));
    v7 = v26;
    v4 = v22;
    v22->field_68 = v26;
    v31 = *((long long *)(v28 + v29 + 88));
    if ((char)__CFADD__(*((long long *)(v28 + v29 + 72)), v31))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d65c0); /* do not return */
    v32 = v28 + v29;
    v2.to_vec(4, 0);
    v1 = v3;
    v0 = v2;
    v18 = 0;
    *(v11) = 0;
    v19 = v31;
    v20 = *((long long *)(v28 + v29 + 72)) + v31;
    v13 = 0;
    v14 = 4;
    v15 = 0;
    v17 = v1;
    v16 = v0;
    v12 = 0;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v2, v32->field_28, v32->field_30);
    v23 = v4;
    v1 = v3;
    v0 = v2;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
    v17 = v1;
    v16 = v0;
    v9 = &v23->padding_0[32];
    v8 = &v23->padding_0[56];
    fish::editable_line::apply_edit(v9, v8, &v11);
    v23.set_position(*((long long *)&v32->field_50));
    core::ptr::drop_in_place<fish::editable_line::Edit>(&v11);
    if (v23->field_68)
    {
        v34 = &v11;
        while (true)
        {
            v26 = v33 - 1;
            if (v26 >= v23->field_60)
                core::panicking::panic_bounds_check(v26, v23->field_60, &g_14d65a8); /* do not return */
            v35 = v23->field_58;
            v36 = v26 * 104;
            if (*((long long *)(v35 + v36 + 16)) != 1 || !(v30 & 1) || *((long long *)(v35 + v36 + 24)) != v10)
                break;
            v37 = v35 + v36;
            v23->field_68 = v26;
            v38 = v37->field_58;
            if ((char)__CFADD__(v37->field_48, v38))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d65c0); /* do not return */
            v2.to_vec(4, 0);
            v1 = v3;
            v0 = v2;
            v18 = 0;
            *(v11) = 0;
            v19 = v38;
            v20 = v37->field_48 + v38;
            v13 = 0;
            v14 = 4;
            v15 = 0;
            v17 = v1;
            v16 = v0;
            v12 = 0;
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v2, v37->field_28, v37->field_30);
            v23 = v4;
            v1 = v3;
            v0 = v2;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
            v17 = v1;
            v16 = v0;
            fish::editable_line::apply_edit(v9, v8, v34);
            v23.set_position(*((long long *)&v37->field_50));
            core::ptr::drop_in_place<fish::editable_line::Edit>(v34);
            v33 = v23->field_68;
            v30 = 1;
            if (!v33)
                break;
        }
    }
    if (v7 >= v23->field_60)
        core::panicking::panic_bounds_check(v7, v23->field_60, &g_14d65d8); /* do not return */
    v39 = v23->field_58;
    v40 = v7 * 104;
    *((unsigned long long *)(v39 + v40)) = 1;
    *((unsigned long *)(v39 + v40 + 8)) = v5;
    v25 = v6;
    v23.end_edit_group();
    v23->field_70 = 0;
    return v41 & 0xffffff00 | v25;
}
