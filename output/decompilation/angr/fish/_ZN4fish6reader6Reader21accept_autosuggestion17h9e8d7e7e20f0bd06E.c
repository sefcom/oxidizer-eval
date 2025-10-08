long long fish::reader::Reader::accept_autosuggestion(unsigned long long a0[165], struct_0 *a1)
{
    char v0;  // [bp-0x4a]
    char v1;  // [bp-0x49]
    char v2;  // [bp-0x48]
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v6;  // r15
    unsigned long v7;  // rsi
    unsigned long long v8;  // r15
    unsigned long long v9;  // r15
    unsigned long long v10;  // r12
    char v11;  // al
    unsigned long long v12;  // r12
    unsigned long long v13;  // r12
    unsigned long v14;  // rdi
    unsigned long long v15;  // r8
    unsigned long long v16;  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx

    if (!(char)a0.is_at_line_with_autosuggestion())
        core::panicking::panic("assertion failed: self.is_at_line_with_autosuggestion()assertion failed: elt == EditableLineTag::Commandlinef", 55, &g_14e0b30); /* do not return */
    a0.clear_pager();
    v4 = a0[163].clone(a0[164]);
    if (a1->field_0 == 1)
    {
        v1 = 0;
        v0 = a1->field_1;
        v6 = v4.len(v5);
        v7 = a0[162];
        v8 = v6;
        if (v8 < a0[162])
        {
            v9 = v6;
            while (true)
            {
                v10 = v9;
                v11 = v0.consume_char(*((int *)(a0[161] + v10 * 4)));
                v7 = a0[162];
                v8 = v10;
                if (!v11)
                    break;
                v12 = v10 + 1;
                v9 = v12;
                if (v12 >= v7)
                    break;
            }
        }
        v13 = v8;
        v14 = a0[161];
        v15 = &g_14e0ba8;
        goto LABEL_1404acb;
    }
    else
    {
        if (a1->field_8 != -1)
        {
            v16 = v4.len(v5);
            v17 = a0[162] - v16;
            if (a0[162] < v16)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e0b48); /* do not return */
            v18 = a1->field_8.min(v17);
            if (!v18)
                return v18;
            v7 = a0[162];
            v6 = a0[162] - v17;
            if (a0[162] < v17)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e0b60); /* do not return */
            }
            else if (!((char)__CFADD__(v18, v6)))
            {
                v14 = a0[161];
                v15 = &g_14e0b90;
                v13 = v18 + v6;
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e0b78); /* do not return */
            }
LABEL_1404acb:
            v2.to_vec(v14.index(v7, v6, v13, v15), v5);
            v20 = v5;
        }
        else
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v2, a0[161], a0[162]);
            v20 = v4;
        }
        v21 = v20;
        return a0.replace_substring(0, v21, v5, &v2);
    }
}
