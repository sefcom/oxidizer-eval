long long fish::highlight::highlight::Highlighter::visit_argument(struct_0 *a0, unsigned long long a1, char a2, unsigned int a3)
{
    char v0;  // [bp-0x54]
    unsigned int v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned int v8;  // r13d
    unsigned int v11;  // ebp
    unsigned int v12;  // r15d
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi
    unsigned long v15;  // rdi
    unsigned long long v16;  // rsi
    char v17;  // al
    unsigned long long v18;  // rax
    unsigned long v19;  // rdx
    unsigned long long v20;  // rsi

    a0.color_as_argument(a1, fish::ast::Node::source_range, a3);
    v7 = a0->field_88.io_still_ok(a0->field_90);
    if (!(char)v7)
        return v7;
    v0.try_source_range(a1);
    v8 = 0;
    v11 = 0;
    v12 = 0;
    if (v0)
    {
        v11 = v1;
        v12 = v2;
    }
    if ((a0->field_0 & 1))
        v8 = v11.contains_inclusive(v12, a0->field_8);
    v13 = a1.try_source(a0->field_78, a0->field_80);
    if (v13)
    {
        v14 = v13;
        if (v13)
            goto LABEL_13bc640;
LABEL_13bc63f:
    }
    else
    {
        v14 = 4;
        if (!v13)
            goto LABEL_13bc63f;
LABEL_13bc640:
    }
    v3.to_vec(v14, v13);
    v15 = &a0->padding_10[24];
    v16 = v4;
    if (a2)
    {
        v17 = v15.test_cd_path(v16, *((long long *)&v5), v8);
        if (v17 != 2)
            goto LABEL_13bc696;
        a0->field_50.color_node(a0->field_58, a1, fish::ast::Node::source_range, 0x10000);
    }
    else
    {
        v17 = v15.test_path(v16, *((long long *)&v5), v8);
LABEL_13bc696:
        if ((v17 & 1) && v11.as_usize(v12) < v19)
        {
            v20 = a0->field_58;
            do
            {
                if (v18 >= v20)
                    core::panicking::panic_bounds_check(v18, v20, &g_14d97c8); /* do not return */
                *((char *)(a0->field_50 + v18 * 4)) = 1;
                v18 += 1;
            } while (v19 != v18);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
}
