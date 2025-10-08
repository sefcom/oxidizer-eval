long long fish::parse_tree::LineCounter<NodeType>::line_offset_of_character_at_offset(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3[5];  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx

    v0 = v2;
    v3 = a0->field_0;
    if (a1 > v3[4])
    {
        core::panicking::panic("assertion failed: offset <= src.len()Should have unclosed bracketssrc/parse_util.rs", 37, &g_14dd530); /* do not return */
    }
    else if (a1)
    {
        v4 = a0->field_10;
        if (a1 > v4)
        {
            v6 = fish::wcstringutil::count_newlines(v3[3].index(v3[4], v4, a1, &g_14dd578), v5);
            v7 = v6 + a0->field_18;
            if ((char)__CFADD__(v6, a0->field_18))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dd590); /* do not return */
            goto LABEL_13e2f92;
        }
        else
        {
            if ((char)_ccall(2, 8, a1, v4, v8))
            {
                v10 = fish::wcstringutil::count_newlines(v3[3].index(v3[4], a1, v4, &g_14dd548), v9);
                v7 = a0->field_18 - v10;
                if (a0->field_18 < v10)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dd560); /* do not return */
LABEL_13e2f92:
                a0->field_18 = v7;
            }
            else
            {
                v7 = a0->field_18;
            }
            a0->field_10 = a1;
            return v7;
        }
    }
    else
    {
        return 0;
    }
}
