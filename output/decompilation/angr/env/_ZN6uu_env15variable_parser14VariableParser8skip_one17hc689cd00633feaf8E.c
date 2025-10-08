long long uu_env::variable_parser::VariableParser::skip_one(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    char v4;  // cl

    v0.consume_chunk(a1);
    if (*((int *)&v0) != 1)
    {
        a0->field_0 = 12;
        return 12;
    }
    v4 = v2;
    a0->field_8 = v1;
    a0->field_10 = v1;
    a0->field_18 = v4;
    a0->field_0 = 11;
    return 11;
}
