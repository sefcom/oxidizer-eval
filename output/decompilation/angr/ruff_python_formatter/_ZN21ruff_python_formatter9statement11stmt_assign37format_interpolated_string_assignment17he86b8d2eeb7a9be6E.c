long long ruff_python_formatter::statement::stmt_assign::format_interpolated_string_assignment(unsigned long long a0, struct_0 *a1, unsigned long long a2[2])
{
    unsigned long long v0;  // [bp-0x28]
    struct_0 *v1;  // [bp-0x20]
    unsigned long long v3;  // r15

    v0 = a0;
    v1 = a1;
    if (a0 == 3)
    {
        v3 = 1;
        if ((char)(((0 ^ a1->field_0) & (0 ^ -(a1->field_0))) >> 63))
            return 2;
    }
    else if (a0 != 2)
    {
        return 2;
    }
    else if (a1->field_0 >= 9223372036854775810)
    {
        v3 = 0;
    }
    else
    {
        return 2;
    }
    if (!a1->field_8.from_interpolated_string_elements(*((long long *)&a1->field_10), a2[0], a2[1]))
        return 2;
    if (v0.is_multiline(a2))
        v3 = 2;
    return v3;
}
