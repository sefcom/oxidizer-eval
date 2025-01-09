long long uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(unsigned long long a0)
{
    char v0;  // [bp-0x10]
    char v1;  // [bp-0x8]

    uu_env::string_parser::StringParser::peek::h20e2a8bf20172604(&v0, a0);
    if (v1 == 2)
        return *((int *)&v0);
    return 0x110000;
}
