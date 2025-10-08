long long uu_env::variable_parser::VariableParser::check_variable_name_start(struct_1 *a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28], Other Possible Types: char
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax
    unsigned int v5;  // ecx
    unsigned long long v7;  // rdx

    v4 = a1.get_current_char();
    v5 = 12;
    if ((unsigned int)(v4 - 48) <= 9)
    {
        v0 = 0;
        v1.to_vec(::0x46d300::core::char::methods::encode_utf8_raw(v4 & 4294967295, &v0), v7);
        a0->field_8 = a1->field_20;
        *((void*)&a0->field_10) = v1;
        v4 = *((long long *)&v2);
        a0->field_20 = v4;
        v5 = 7;
    }
    a0->field_0 = v5;
    return v4;
}
