void uu_test::parser::Parser::lparen(struct_0 *a0, void* a1)
{
    void* v0;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x170]
    char *v2;  // [bp-0x168]
    unsigned long v3;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x158]
    struct_1 *v5;  // [bp-0x148], Other Possible Types: char, unsigned long long
    int v6;  // [bp-0x140]
    unsigned long v7;  // [bp-0x130]
    char v8;  // [bp-0x128]
    struct_1 *v9;  // [bp-0x120]
    unsigned long v10;  // [bp-0x118]
    char *v11;  // [bp-0x110], Other Possible Types: char
    unsigned long long v12;  // [bp-0x108]
    int v13;  // [bp-0xe8], Other Possible Types: char
    unsigned long v14;  // [bp-0xd8]
    char v15;  // [bp-0xd0]
    char v16;  // [bp-0xa8]
    char v17;  // [bp-0x80]
    char v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x20]
    int v21;  // xmm0

    v18.clone(a1 + 24);
    v19 = 3;
    v8.from_iter(&v18, &g_56eca8);
    switch (v10)
    {
    case 0:
        v0 = 0;
        v11.into_literal(&v0);
        v5.literal(a1, &v11);
        goto LABEL_49c0d6;
    case 1:
        v5 = v9;
        v11 = &v5;
        v12 = <&T as core::fmt::Display>::fmt;
        v0 = &g_42db30;
        v1 = 1;
        v4 = 0;
        v2 = &v11;
        v3 = 1;
        v13.map_or_else(&v0);
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v14;
        *((void*)&(&a0->field_0)[1]) = v13;
        a0->field_0 = 3;
        ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
        return;
    case 2:
        if (*((int *)&v9->field_0) == 4 && *((int *)&v9->field_28) == 3 && (char)v9->field_38.eq(v9->field_40))
            goto LABEL_49bfd0;
        if (*((int *)&v9->field_28) == 3 && (char)v9->field_38.eq(v9->field_40))
            goto LABEL_49c06b;
        if (*((int *)&v9->field_0) == 4)
            goto LABEL_49c0af;
        goto LABEL_49c0f1;
    case 3:
        if (*((long long *)&v9->field_0) == 4)
        {
            if (!(*((int *)&v9->field_28) == 3 && (char)v9->field_38.eq(v9->field_40)))
                goto LABEL_49bffc;
LABEL_49bfd0:
            v0 = 0;
            v11.into_literal(&v0);
            v5.literal(a1, &v11);
            goto LABEL_49c0d6;
        }
        if ((int)*((long long *)&v9->field_0) == 5 && v9->field_50 == 3 && (char)v9->field_60.eq(v9->field_68))
        {
            v15.next_token(a1);
            a1.uop(&v15);
            (char)v0.expect(a1);
            break;
        }
        else
        {
LABEL_49bffc:
            if (*((long long *)&v9->field_28) == 3)
            {
                if (!(char)v9->field_38.eq(v9->field_40))
                    goto LABEL_49c0a9;
LABEL_49c06b:
                v16.next_token(a1);
                (char)v0.literal(a1, &v16);
                if (v0 != 7)
                {
                    *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
                    *((void*)&(&a0->field_0)[1]) = v21;
                    a0->field_0 = v0;
                    ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
                    return;
                }
                (char)v0.expect(a1);
                break;
            }
            else if ((int)*((long long *)&v9->field_28) == 4)
            {
                if (!(*((int *)&v9->field_0) == 4))
                    goto LABEL_49c0f1;
                v17.next_token(a1);
                (char)v0.literal(a1, &v17);
                if (v0 != 7)
                {
                    *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
                    *((void*)&(&a0->field_0)[1]) = v21;
                    a0->field_0 = v0;
                    ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
                    return;
                }
                (char)v0.expect(a1);
                break;
            }
            else
            {
LABEL_49c0a9:
                if (*((long long *)&v9->field_0) == 4)
                {
LABEL_49c0af:
                    v0 = 0;
                    v11.into_literal(&v0);
                    v5.literal(a1, &v11);
LABEL_49c0d6:
                    if (v5 == 7)
                    {
                        a0->field_0 = 7;
                        ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
                        return;
                    }
                    *((unsigned long *)((char *)&a0->field_8 + 8)) = v7;
                    *((void*)&(&a0->field_0)[1]) = v6;
                    a0->field_0 = v5;
                    ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
                    return;
                }
                goto LABEL_49c0f1;
            }
        }
    default:
LABEL_49c0f1:
        (char)v0.expr(a1);
        if (v0 != 7)
        {
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
            *((void*)&(&a0->field_0)[1]) = v21;
            a0->field_0 = v0;
            ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
            return;
        }
        (char)v0.expect(a1);
    }
    if (v0 != 7)
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
        *((void*)&(&a0->field_0)[1]) = v21;
        a0->field_0 = v0;
        ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
        return;
    }
    a0->field_0 = 7;
    ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v8);
    return;
}
