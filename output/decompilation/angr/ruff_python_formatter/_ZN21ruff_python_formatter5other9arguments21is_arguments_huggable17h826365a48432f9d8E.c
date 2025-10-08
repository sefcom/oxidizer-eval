long long ruff_python_formatter::other::arguments::is_arguments_huggable(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x50]
    struct_1 *v1;  // [bp-0x48]
    char v2;  // [bp-0x28]
    struct_1 *v4;  // r15
    unsigned long v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned int v7;  // ebp
    unsigned int v8;  // edx

    if (a0->field_8)
    {
        if (a0->field_8 == 1 && !a0->field_18)
        {
            v4 = a0->field_0;
LABEL_711063:
            if (!ruff_python_formatter::expression::is_expression_huggable(v4, a1->field_3a))
            {
                switch (v4->field_0)
                {
                case 17:
                    v5 = &v4->padding_4[4];
                    v6 = 2;
                    break;
                case 18:
                    v5 = &v4->padding_4[4];
                    v6 = 3;
                    break;
                case 19:
                    v5 = &v4->padding_4[4];
                    v6 = 0;
                    break;
                case 20:
                    v5 = &v4->padding_4[4];
                    v6 = 1;
                    break;
                default:
                    v6 = 4;
                    break;
                }
                if ((char)v6.is_ok_and(v5, a0, a1))
                    goto LABEL_711112;
            }
            else
            {
LABEL_711112:
                v0.leading_dangling_trailing(a1->field_10, v4);
                if (!*((long long *)&v2) && !v1)
                {
                    v7 = vvar_55{reg 56} & 0xffffff00 | 1;
                    if (a1->field_37)
                        return v7;
                    v4.range();
                    if (v8 > (&a0->padding_20)[1])
                    {
                        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97dfc8); /* do not return */
                    }
                    else if (!(char)ruff_python_formatter::other::commas::has_magic_trailing_comma(v8, (&a0->padding_20)[1], a1))
                    {
                        return v7;
                    }
                }
            }
        }
    }
    else
    {
        if (a0->field_18 == 1)
        {
            v4 = a0->field_10;
            if (v4->field_6f == 218)
            {
                v0 = 82;
                v1 = v4;
                if (!a1->field_10 + 64.get_inner(&v0))
                    goto LABEL_711063;
            }
        }
    }
    return 0;
}
