fn uu_env::variable_parser::VariableParser::check_variable_name_start(a1: i64) -> Option<struct8> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x54]
    let v2: u64;  // rax
    let v4: alloc::string::String;  // rax

    v2 = uu_env::variable_parser::VariableParser::get_current_char(a1);
    if v2 != 0x110000 {
        v0 = v2;
        v2 -= 48;
        if v2 < 10 {
            v4 = format!("Unexpected character: '{}', expected variable name must not start with 0..9", &v0);
            return Some(*((a1 + 32) as &i64));
        }
    }
    return struct4 {
        field_0: 8
    };
}
