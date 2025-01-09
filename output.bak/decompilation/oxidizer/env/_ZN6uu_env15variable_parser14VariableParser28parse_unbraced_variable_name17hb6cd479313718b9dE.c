fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(a0: &struct40, a1: void*) -> u64 {
    let v0: struct21;  // [sp-0x48], Other Possible Types: Option<struct8>, i64
    let v1: i64;  // [sp-0x40]
    let v4: i64;  // r12
    let v7: i32;  // eax
    let v9: i64;  // rax

    v4 = *((a1 + 32) as &i64);
    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1) as u64;
    return struct40 {
        field_0: v6
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: v5
    };
    v7 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
    if v7 != 0x110000 {
        while (v7 == 95 || v7 - 48 < 10 || (v7 & 2097119) - 65 <= 25) {
            v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
            return struct40 {
                field_0: v6
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v5
            };
            v7 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
            if v7 == 0x110000 {
                break;
            }
        }
    }
    if v1 != v4 {
        v0 = v4;
        v1 = *((a1 + 32) as &i64);
        v9 = uu_env::string_parser::StringParser::substring(a1, &v0);
        return struct20 {
            field_0: 8
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
    }
    v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Missing variable name");
    return struct12 {
        field_0: 4
        field_8: <UNKNOWN>
    };
}
