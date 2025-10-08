long long fish::builtins::fish_indent::PrettyPrinterState::prettify_traversal(void* a0)
{
    unsigned long long v0;  // [bp-0x78]
    int v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    uint128_t v5;  // [bp-0x48]
    unsigned long long v7;  // rax
    struct_5 *v8;  // rdx
    struct_5 *v9;  // rbp
    struct_5 *v10;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax

    v7 = a0.next();
    if (!v7)
        return v7;
    while (true)
    {
        v10 = v9;
        if (v10->field_50(v7))
            goto LABEL_134dd60;
        v11 = v10->field_58(v7);
        if (v11)
        {
            v12 = v11;
            v13 = v8->field_b0(v11);
            if ((char)v13 != 4)
            {
                switch ((unsigned int)v13)
                {
                case 5:
                    a0.visit_right_brace(v12, v8->field_20, v8->field_78);
                    break;
                case 10:
                    a0.visit_semi_nl(v12, v8->field_20, v8->field_78);
                    break;
                default:
LABEL_134dd60:
                    a0.emit_node_text(v7, v10);
                }
            }
            else
            {
                a0.visit_left_brace(v12, v8->field_20, v8->field_78);
            }
        }
        else
        {
            v10->field_40(&v0, v7);
            switch (v0)
            {
            case 0:
                a0.visit_redirection((long long)v1);
                a0.skip_children((long long)v1, &g_14c2ce0);
                break;
            case 3: case 35:
                a0.emit_node_text(v7, v10);
                a0.skip_children(v7, v10);
                break;
            case 14:
                a0.visit_begin_header((long long)v1);
                a0.skip_children((long long)v1, &g_14c3a60);
                break;
            case 33:
                a0.visit_maybe_newlines((long long)v1);
                a0.skip_children((long long)v1, &g_14c2c08);
                break;
            default:
                if (v10->field_60(v7))
                {
                    v2 = &g_14c9688;
                    v3 = 1;
                    v4 = 8;
                    v5 = 0;
                    core::panicking::panic_fmt(&v2, &g_14c9698); /* do not return */
                }
            }
        }
        v7 = a0.next();
        v9 = v8;
        if (!v7)
            return v7;
    }
}
