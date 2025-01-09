long long uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax
    char v5;  // cl
    unsigned long long v6;  // rax

    uu_env::string_parser::StringParser::consume_chunk::hb3f2998da0acbfa7(&v0, a1);
    if (!*((long long *)&v0))
    {
        v6 = 8;
    }
    else
    {
        v4 = *((long long *)&v1);
        v5 = v2;
        a0->field_8 = v4;
        a0->field_10 = v4;
        a0->field_18 = v5;
        v6 = 5;
    }
    a0->field_0 = v6;
    return v6;
}
