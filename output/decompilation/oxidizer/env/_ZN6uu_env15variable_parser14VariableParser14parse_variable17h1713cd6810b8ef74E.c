fn uu_env::variable_parser::VariableParser::parse_variable(a0: &struct40, a1: &&struct_0) -> u64 {
    let v0: struct21;  // [sp-0x38]
    let v1: struct40;  // [sp-0x38]
    let v4: i64;  // r14

    v4 = *(a1 as &i64);
    v0 = uu_env::variable_parser::VariableParser::skip_one(v4);
    if v0.field_0 != 8 {
        return struct40 {
            field_0: v8
            field_16: v1.field_0
            field_32: *(&v2 as &i64)
        };
    }
    match (uu_env::variable_parser::VariableParser::get_current_char(v4) as i32) {
        123 => {
            v0 = uu_env::variable_parser::VariableParser::skip_one(v4);
            if v0.field_0 != 8 {
                return struct40 {
                    field_0: v8
                    field_16: v1.field_0
                    field_32: *(&v2 as &i64)
                };
            }
            v1 = uu_env::variable_parser::VariableParser::parse_braced_variable_name(v4);
            if v1.field_0 as i32 != 8 {
                return struct40 {
                    field_0: v14
                    field_4: v16
                    field_8: v17
                    field_24: v18
                };
            }
            break;
        }
        1114112 => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "missing variable name");
            return struct12 {
                field_0: 4
                field_8: <UNKNOWN>
            };
        }
        _ => {
            v1 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(v4);
            if v1.field_0 as i32 != 8 {
                return struct40 {
                    field_0: v7
                    field_4: v12
                    field_8: v13
                    field_24: *((&v1.field_16 as &char + 8) as &i128)
                };
            }
            break;
        }
    }
    return struct36 {
        field_0: 8
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
