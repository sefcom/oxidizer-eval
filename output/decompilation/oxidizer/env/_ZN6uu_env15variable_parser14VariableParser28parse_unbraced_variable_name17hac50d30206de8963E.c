fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x48], Other Possible Types: struct36
    let v1: Option<struct17>;  // [bp-0x48]
    let v2: u128;  // [bp-0x38]
    let v4: u64;  // r12
    let v5: core::fmt::Arguments;  // eax
    let v7: u64;  // rdx

    v4 = *((a1 + 32) as &i64);
    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1);
    if v0.field_0 != 12 {
        return struct40 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v2
            field_32: v0.field_32
        };
    }
    uu_env::variable_parser::VariableParser::get_current_char(a1);
    if v5 != 0x110000 {
        while (v5 == 95 || v5 - 48 < 10 || (v5 & 2097119) - 65 < 26) {
            v1 = uu_env::variable_parser::VariableParser::skip_one(a1);
            if let Some(_) = v1 {
                return struct40 {
                    field_0: *(&v0.field_0 as &i128)
                    field_16: v2
                    field_32: v0.field_32
                };
            }
            uu_env::variable_parser::VariableParser::get_current_char(a1);
            if v5 == 0x110000 {
                break;
            }
        }
    }
    if *((a1 + 32) as &i64) != v4 {
        v0 = struct16 {
            field_0: v4
            field_8: *((a1 + 32) as &i64)
        };
        return struct24 {
            field_0: 12
            padding_4: <UNKNOWN>
            field_8: uu_env::string_parser::StringParser::substring(a1, &v0)
            field_16: v7
        };
    }
    return struct16 {
        field_0: 5
        padding_4: <UNKNOWN>
        field_8: v4
    };
}
