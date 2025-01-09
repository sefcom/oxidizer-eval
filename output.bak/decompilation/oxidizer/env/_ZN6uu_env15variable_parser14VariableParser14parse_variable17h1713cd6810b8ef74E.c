fn uu_env::variable_parser::VariableParser::parse_variable(a0: &struct40, a1: &&struct_0) -> u64 {
    let v0: i320;  // [sp-0x38], Other Possible Types: struct40, struct21
    let v3: i64;  // r14

    v3 = *(a1 as &i64);
    v0 = uu_env::variable_parser::VariableParser::skip_one(v3);
    if v0 != 8 {
        return struct40 {
            field_0: v7
            field_16: v0
            field_32: v1
        };
    }
    switch (uu_env::variable_parser::VariableParser::get_current_char(v3) as i32) {
    case 123:
        v0 = uu_env::variable_parser::VariableParser::skip_one(v3);
        if v0 != 8 {
            return struct40 {
                field_0: v7
                field_16: v0
                field_32: v1
            };
        }
        v0 = uu_env::variable_parser::VariableParser::parse_braced_variable_name(v3);
        if v0 != 8 {
            return struct40 {
                field_0: v13
                field_4: v15
                field_8: v16
                field_24: v17
            };
        }
        break;
    case 1114112:
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "missing variable name");
        return struct12 {
            field_0: 4
            field_8: <UNKNOWN>
        };
    default:
        v0 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(v3);
        if v0 != 8 {
            return struct40 {
                field_0: v6
                field_4: v11
                field_8: v12
                field_24: *((&v0 as &char + 24) as &i128)
            };
        }
        break;
    }
    return struct36 {
        field_0: 8
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
