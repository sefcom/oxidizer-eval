fn uu_env::variable_parser::VariableParser::check_variable_name_start(a0: &Option<struct8>, a1: void*) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: &u8;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: u64;  // [sp-0x40]
    let v4: u64;  // [sp-0x38]
    let v5: &&struct_0;  // [sp-0x30]
    let v6: u64;  // [sp-0x28]
    let v7: void*;  // [sp-0x20]
    let v9: u64;  // rax

    v9 = uu_env::variable_parser::VariableParser::get_current_char(a1);
    if v9 == 0x110000 {
        return struct4 {
            field_0: 8
        };
    }
    v0 = v9;
    if v9 - 48 < 10 {
        v1 = &v0;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = "Unexpected character: '";
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::option::Option<T>::map_or_else();
        return Some(struct8 {
            field_4: <UNKNOWN>
        });
    }
}
