fn uu_env::variable_parser::VariableParser::get_current_char(a0: u32) -> u64 {
    let v0: struct9;  // [sp-0x10]

    v0 = uu_env::string_parser::StringParser::peek(a0);
    if v0.field_8 == 2 {
        return v0.field_0;
    }
    return 0x110000;
}
