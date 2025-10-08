long long ruff_python_formatter::statement::clause::colon_range(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x18]
    unsigned long v5;  // rax

    v2.starts_at(a1, a2, a3);
    v3 = 0;
    v0.try_fold(&v2, &v3);
    v5 = v1;
    if ((unsigned int)v5 == 12)
    {
        *((unsigned long *)&a0->field_4[0]) = v0;
        a0->field_0 = 4;
        return v5;
    }
    else if ((unsigned int)v5 == 90)
    {
        a0->field_0 = 0;
        *((char **)&a0->field_4[4]) = "Expected the colon marking the end of the case header but found the end of the range.assertExpected at least on assignment targetcrates/ruff_python_formatter/src/statement/stmt_assign.rs";
        *((unsigned long long *)&a0->field_8) = 85;
        return "Expected the colon marking the end of the case header but found the end of the range.assertExpected at least on assignment targetcrates/ruff_python_formatter/src/statement/stmt_assign.rs";
    }
    else
    {
        a0->field_0 = 0;
        *((char **)&a0->field_4[4]) = "Expected colon marking the end of the case header but found another token instead.Expected the colon marking the end of the case header but found the end of the range.assertExpected at least on assignment targetcrates/ruff_python_formatter/src/statement/st";
        *((unsigned long long *)&a0->field_8) = 82;
        return "Expected colon marking the end of the case header but found another token instead.Expected the colon marking the end of the case header but found the end of the range.assertExpected at least on assignment targetcrates/ruff_python_formatter/src/statement/st";
    }
}
