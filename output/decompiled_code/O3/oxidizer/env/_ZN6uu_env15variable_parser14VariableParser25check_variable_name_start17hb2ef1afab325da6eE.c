fn uu_env::variable_parser::VariableParser::check_variable_name_start(a0: &struct_0, a1: &struct_1) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v2: u64;  // rax
    let v3: u64;  // r14

    v2 = uu_env::variable_parser::VariableParser::get_current_char(a1);
    if v2 != 0x110000 {
        v0 = v2;
        v2 -= 48;
        if v2 < 10 {
            v3 = a1->field_20;
            v2 = format!("Unexpected character: '{:?}', expected variable name must not start with 0..9", &v0);
            a0->field_0 = 4;
            a0->field_8 = v3;
            return v2;
        }
    }
    return struct4 {
        field_0: 8
    };
}
