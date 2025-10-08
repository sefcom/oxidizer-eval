long long ruff_python_formatter::statement::clause::find_keyword(struct_0 *a0, unsigned long long a1, char a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned long v4;  // rax

    v2.starts_at(a1, a3, a4);
    v0.try_fold(&v2);
    v4 = *((int *)&v1);
    if ((char)v4 == 90 || v1 == 90)
    {
        a0->field_0 = 0;
        *((char **)&a0->field_4[4]) = "Expected the case header keyword token but reached the end of the source instead.Expected colon marking the end of the case header but found another token instead.Expected the colon marking the end of the case header but found the end of the range.assertEx";
        *((unsigned long long *)&a0->field_8) = 81;
        return "Expected the case header keyword token but reached the end of the source instead.Expected colon marking the end of the case header but found another token instead.Expected the colon marking the end of the case header but found the end of the range.assertEx";
    }
    else if (a2 == (char)v4)
    {
        *((unsigned long *)&a0->field_4[0]) = v0;
        a0->field_0 = 4;
        return v4;
    }
    else
    {
        a0->field_0 = 0;
        *((char **)&a0->field_4[4]) = "Expected the keyword token but found another token instead.Expected the case header keyword token but reached the end of the source instead.Expected colon marking the end of the case header but found another token instead.Expected the colon marking the end";
        *((unsigned long long *)&a0->field_8) = 59;
        return "Expected the keyword token but found another token instead.Expected the case header keyword token but reached the end of the source instead.Expected colon marking the end of the case header but found another token instead.Expected the colon marking the end";
    }
}
