long long fish::editable_line::EditableLine::push_edit(void* a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x80]
    int v1;  // [bp-0x78], Other Possible Types: char
    unsigned long long v2;  // [bp-0x68]
    void* v3;  // [bp-0x60], Other Possible Types: char
    char v4;  // [bp-0x50]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbp
    unsigned long long v9;  // r13
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rax
    unsigned long v14;  // rax
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdi
    unsigned long v17;  // rcx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    char v23;  // cl

    v6 = a1->field_58;
    v7 = a1->field_60;
    if ((v7 <= v6 & a2))
    {
        v8 = a1->field_40;
        v9 = a1->field_48;
        if ((char)a0.want_to_coalesce_insertion_of(v8, v9))
        {
            if (v6 != (long long)a0[120])
            {
                v11 = &g_14d6548;
                v12 = "assertion failed: range.start == self.position()assertion failed: self.undo_history.may_coalesceexecutable path: ";
            }
            else if ((long long)a0[96])
            {
                v10 = (long long)a0[96] * 104;
                if ((long long)a0[88] + v10 == 104)
                    core::option::unwrap_failed(&g_14d6560); /* do not return */
                (long long)a0[88] + v10 - 48.spec_extend(v8, v9 * 4 + v8);
                fish::editable_line::apply_edit(a0 + 32, a0 + 56, a1);
                if ((char)__CFADD__(v9, (long long)a0[120]))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d6578); /* do not return */
                a0.set_position(v9 + (long long)a0[120]);
                if ((char)a0[112])
                    return (unsigned long long)core::ptr::drop_in_place<fish::editable_line::Edit>(a1);
                v11 = &g_14d6590;
                v12 = "assertion failed: self.undo_history.may_coalesceexecutable path: ";
            }
            else
            {
                core::option::unwrap_failed(&g_14d6560); /* do not return */
            }
            core::panicking::panic(v12, 48, v11); /* do not return */
        }
    }
    if (v6 >= v7 && !a1->field_48)
        return (unsigned long long)core::ptr::drop_in_place<fish::editable_line::Edit>(a1);
    if ((long long)a0[16])
    {
        v13 = (long long)a0[128];
        a1->field_10 = 1;
        a1->field_18 = v13;
    }
    v14 = (long long)a0[104];
    v15 = (long long)a0[96] - v14;
    if ((long long)a0[96] > v14)
    {
        v16 = v14 * 104 + (long long)a0[88];
        *((unsigned long *)&a0[96]) = v14;
        core::ptr::drop_in_place<[fish::editable_line::Edit]>(v16, v15);
    }
    v17 = a0 + 120;
    if (*((char *)a0))
        v17 = a0 + 8;
    v18 = *((long long *)v17);
    *((unsigned long long *)a0) = 0;
    a1->field_50 = v18;
    v19 = v6.clone(v7);
    v21 = (long long)a0[40].index((long long)a0[48], v19, v20, &g_14d6500);
    v3.to_vec(v21, a2);
    v2 = *((long long *)&v4);
    memcpy(&v1, &v3, 16);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a1->field_20);
    a1->field_30 = v2;
    *((void*)&a1->field_20) = v1;
    fish::editable_line::apply_edit(a0 + 32, a0 + 56, a1);
    a0.set_position(fish::editable_line::cursor_position_after_edit(a1));
    v0 = (long long)a0[96];
    if ((long long)a0[104] != v0)
    {
        v3 = 0;
        core::panicking::assert_failed(0, a0 + 104, &v0, &v3, &g_14d6518); /* do not return */
    }
    if (v6 >= v7)
    {
        v23 = 1;
        if ((char)a0[113] != 1)
            v23 = a1->field_48 == 1;
    }
    *((char *)&a0[112]) = v23;
    *((unsigned long long *)&a0[104]) = v0 + 1;
    return a0 + 80.push(a1);
}
