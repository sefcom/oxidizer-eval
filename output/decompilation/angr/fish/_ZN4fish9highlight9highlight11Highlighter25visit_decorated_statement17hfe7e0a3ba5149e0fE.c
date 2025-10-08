long long fish::highlight::highlight::Highlighter::visit_decorated_statement(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x78], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x78]
    unsigned long long v2[4];  // [bp-0x70], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x70]
    int v4;  // [bp-0x68], Other Possible Types: void*, char
    unsigned long long v5;  // [bp-0x60]
    void* v6;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x50]
    int v8;  // [bp-0x48], Other Possible Types: char
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    void* v13;  // r13
    unsigned long long v14;  // r12
    char v15;  // al
    unsigned long long v16;  // r9
    unsigned long v17;  // rdx
    unsigned int v18;  // eax
    unsigned int *v19;  // r14
    unsigned long long v20;  // rbp
    char v21;  // r15b
    unsigned long long v22;  // rbp
    unsigned long long v24;  // rax
    unsigned long v25;  // rax
    unsigned long long v26;  // r12
    unsigned long v28;  // r13
    unsigned long v29;  // rdx
    unsigned long v30;  // r13
    unsigned long long v32;  // rax
    unsigned long v33;  // rax
    unsigned long long v34;  // rdi
    unsigned long v35;  // rdx
    unsigned long v36;  // rdx
    unsigned long v37;  // rcx
    unsigned long v39;  // rbp

    if (a1->field_10 != 2)
        a0->field_50.visit_keyword(a0->field_58, &a1->field_10, <T as fish::ast::AsNode>::as_node, <fish::ast::KeywordIf as fish::ast::Keyword>::keyword);
    v11 = v4.try_source_range(a1);
    if (!*((int *)&v4))
        return v11;
    v12 = a1.try_source(a0->field_78, a0->field_80);
    if (!v12)
        v13 = 0;
    v0 = 4;
    if (!v12)
        v12 = 4;
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v2[0] = a0->field_88;
    if (!(char)a0->field_88.io_still_ok(a0->field_90) || fish::tokenizer::variable_assignment_equals_pos(v12, v13) == 1)
    {
        v14 = 0;
LABEL_13bcaf5:
        a0.color_command(a1);
    }
    else
    {
        fish::highlight::highlight::statement_get_expanded_command(&v8, a0->field_78, a0->field_80, a1, v2);
        v0 = 4;
        v14 = 0;
        if (!((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63)))
        {
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
            v4 = v8;
            v14 = *((long long *)&v9);
            v6 = v14;
            v0 = v5;
            if (!fish::highlight::highlight::has_expand_reserved(v5, v14))
            {
                v15 = a1.decoration();
                if (!v2[0])
                {
                    v16 = 472 + v2[1];
                    v17 = &g_14c7518;
                }
                else if ((unsigned int)v2[0] == 1)
                {
                    v16 = v2[1];
                    v17 = v2[2];
                }
                else
                {
                    v16 = v2[2];
                    v17 = v2[3];
                }
                if ((char)fish::highlight::highlight::command_is_valid(v0, v14, v15, a0->field_18, a0->field_20, v16, v17))
                    goto LABEL_13bcaf5;
            }
        }
        a0->field_50.color_node(a0->field_58, a1, fish::ast::Node::source_range, 0x10000);
    }
    v18 = fish::highlight::highlight::is_veritable_cd(v0, v14);
    v0.eq(v14, "setset_colorsourcestatusswitchulimitwhileP", 3);
    if (!a1->field_28)
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    v19 = a1->field_20;
    v7 = &a0->padding_60;
    v20 = a1->field_28 * 16;
    v0 = 0;
    v2 = v18;
    do
    {
        v22 = v20;
        if (*(v19))
        {
            a0.visit_redirection(v19.redirection());
            continue;
        }
        if ((v21 & 1))
        {
            v24 = v19.argument();
            v25 = v24.try_source(a0->field_78, a0->field_80);
            if (!v25)
            {
                v26 = 4;
                if (v25)
                    goto LABEL_13bccd6;
            }
            else
            {
                v26 = v25;
                if (v25)
                {
LABEL_13bccd6:
                    v28 = v29;
LABEL_13bccd8:
                    v30 = v28;
                    v21 = 1;
                    if (!(char)fish::common::valid_var_name(v26, v30))
                        goto LABEL_13bcd05;
                    v7.push(v26, v30, &g_14d9858);
                    goto LABEL_13bcd02;
                }
            }
            v28 = v25;
            goto LABEL_13bccd8;
        }
        else
        {
LABEL_13bcd02:
LABEL_13bcd05:
            a0.visit_argument(v19.argument(), v3, ~((char)v0) & 1);
            v32 = v19.argument();
            v33 = v32.try_source(a0->field_78, a0->field_80);
            if (!v33)
            {
                v34 = 4;
                v35 = v29;
                if (v33)
                    goto LABEL_13bcd56;
                goto LABEL_13bcd55;
            }
            else
            {
                v34 = v33;
                v35 = v29;
                if (!v33)
                {
LABEL_13bcd55:
                    v36 = v33;
                    goto LABEL_13bcd58;
                }
                else
                {
LABEL_13bcd56:
                    v36 = v35;
LABEL_13bcd58:
                    v37 = v0;
                    v1 = (unsigned int)v37 & 0xffffff00 | (char)v37 | v34.eq_by(v34 + v36 * 4, "--", &g_9ff4e2);
                }
            }
        }
        v19 += 4;
        v39 = v22 - 16;
        v20 = v39;
    } while (v22 != 16);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
}
