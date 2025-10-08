long long ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized(struct_0 *a0, struct_2 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x5c]
    char v1;  // [bp-0x54]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x20]
    unsigned long long v5;  // rax

    if (a1->field_10 <= 1)
    {
        a0->field_4 = 0;
    }
    else if (a1->field_30 <= (int)a1->field_8->field_50)
    {
        v2.new(a2, a3, a1->field_30, (int)a1->field_8->field_50);
        v3 = 0;
        v0.try_fold(&v2, &v3);
        if (v1 == 90)
        {
            a0->field_0 = 0;
            a0->field_8 = "Expected a with keyword, didn't find any tokencrates/ruff_python_formatter/src/statement/suite.rscrates/ruff_python_formatter/src/string/docstring.rs";
            a0->field_10 = 46;
            return "Expected a with keyword, didn't find any tokencrates/ruff_python_formatter/src/statement/suite.rscrates/ruff_python_formatter/src/string/docstring.rs";
        }
        v5 = v0.try_fold(&v2, &v3);
        a0->field_4 = v1 != 90;
    }
    else
    {
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97f028); /* do not return */
    }
    a0->field_0 = 4;
    return v5;
}
