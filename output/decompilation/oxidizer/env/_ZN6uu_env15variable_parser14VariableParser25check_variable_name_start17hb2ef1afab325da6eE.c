fn uu_env::variable_parser::VariableParser::check_variable_name_start(a0: &Option<struct8>, a1: void*) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v2: u64;  // rax

    v2 = uu_env::variable_parser::VariableParser::get_current_char(a1);
    if v2 != 0x110000 {
        v0 = v2;
        if v2 - 48 < 10 {
            return Some(struct8 {
                field_0: v3
            });
        }
    }
    return struct4 {
        field_0: 8
    };
}
