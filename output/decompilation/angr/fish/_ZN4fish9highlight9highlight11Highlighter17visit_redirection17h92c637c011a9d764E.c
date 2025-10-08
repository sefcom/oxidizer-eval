void fish::highlight::highlight::Highlighter::visit_redirection(struct_0 *a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    unsigned int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x44]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rax
    void* v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbp
    unsigned int v13;  // r15d
    void* *v14;  // rcx

    v9 = a1.try_source(a0->field_78, a0->field_80);
    if (!v9)
        v10 = 0;
    if (!v9)
        v9 = 4;
    v7.try_from(v9, v10);
    v4.expect(&v7, "Should have successfully parsed a pipe_or_redir_t since it was in our ast", 73, &g_14d97e0);
    a1 += 16;
    v11 = a1.try_source(a0->field_78, a0->field_80);
    if (v11)
    {
        v12 = v11;
        if (v11)
            goto LABEL_13bc7a9;
LABEL_13bc7a8:
    }
    else
    {
        v12 = 4;
        if (!v11)
            goto LABEL_13bc7a8;
LABEL_13bc7a9:
    }
    v1.to_vec(v12, v11);
    if (v5 >= 0)
    {
        v0 = a0->field_50;
        v0.color_node(a0->field_58, a1, fish::ast::Node::source_range, 0xc0000);
        if (fish::highlight::highlight::has_cmdsub(v2, v3))
        {
            a0.color_as_argument(a1, fish::ast::Node::source_range, 1);
        }
        else
        {
            v13 = 0xc0000;
            v14 = fish::ast::Node::source_range;
            if ((char)a0->field_88.io_still_ok(a0->field_90))
            {
                if (!(char)fish::highlight::highlight::contains_pending_variable(a0->field_68, a0->field_70, v2, v3))
                    v13 = ((char)a0->padding_0[40].test_redirection_target(v2, v3, v6) ? 0xc0000 : 0x10000);
LABEL_13bc88a:
                v14 = fish::ast::Node::source_range;
                goto LABEL_13bc88a;
            }
LABEL_13bc89e:
            v0.color_node(a0->field_58, a1, v14, v13);
        }
    }
    else
    {
        v13 = 0x10000;
        v14 = fish::ast::Node::source_range;
        goto LABEL_13bc89e;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    return;
}
