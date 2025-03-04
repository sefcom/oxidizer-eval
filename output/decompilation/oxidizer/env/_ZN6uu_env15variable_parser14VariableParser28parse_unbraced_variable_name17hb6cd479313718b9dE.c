fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(a0: &struct40, a1: void*) -> u64 {
    let v0: struct21;  // [sp-0x48], Other Possible Types: Option<struct8>, struct16
    let v1: i64;  // [sp-0x40]
    let v6: i32;  // eax

    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1);
    match v0 {
        Some(_) => {
            return struct40 {
                field_0: v9
                field_16: v2 as i128
                field_32: v8
            };
        },
        None => {
            v6 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
            if v6 != 0x110000 {
                while (v6 == 95 || v6 - 48 < 10 || (v6 & 2097119) - 65 <= 25) {
                    v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                    if v0.field_0 != 8 {
                        return struct40 {
                            field_0: v9
                            field_16: v2 as i128
                            field_32: v8
                        };
                    }
                    v6 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
                    if v6 == 0x110000 {
                        break;
                    }
                }
            }
            if v1 != *((a1 + 32) as &i64) {
                v0 = struct16 {
                    field_0: v5
                    field_8: v7
                };
                uu_env::string_parser::StringParser::substring(a1, &v0);
                return struct20 {
                    field_0: 8
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
            }
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Missing variable name");
            return struct12 {
                field_0: 4
                field_8: <UNKNOWN>
            };
        },
    }
}
