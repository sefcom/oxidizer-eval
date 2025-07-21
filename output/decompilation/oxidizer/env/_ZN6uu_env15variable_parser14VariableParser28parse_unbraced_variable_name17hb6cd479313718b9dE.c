fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(a1: i64) -> : struct40 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x48], Other Possible Types: char
    let v1: u128;  // [bp-0x38]
    let v2: i8;  // [bp-0x28]
    let v4: u64;  // r12
    let v5: void*;  // rdx
    let v6: struct40;  // eax

    v4 = *((a1 + 32) as &i64);
    uu_env::variable_parser::VariableParser::check_variable_name_start(a1, v5);
    if *(&v0 as &i32) != 8 {
        return struct40 {
            field_0: *(&v0 as &i128)
            field_16: v1
            field_32: *(&v2 as &i64)
        };
    }
    uu_env::variable_parser::VariableParser::get_current_char(a1);
    if v6 != 0x110000 {
        while (v6 == 95 || v6 - 48 < 10 || (v6 & 2097119) - 65 <= 25) {
            uu_env::variable_parser::VariableParser::skip_one(a1, v5);
            if *(&v0 as &i32) != 8 {
                return struct40 {
                    field_0: *(&v0 as &i128)
                    field_16: v1
                    field_32: *(&v2 as &i64)
                };
            }
            uu_env::variable_parser::VariableParser::get_current_char(a1);
            if v6 == 0x110000 {
                break;
            }
        }
    }
    if *((a1 + 32) as &i64) != v4 {
        v0 = struct16 {
            field_0: v4
            field_8: *((a1 + 32) as &i64)
        };
        v0 = struct16 {
            field_0: v4
            field_8: *((a1 + 32) as &i64)
        };
        return struct24 {
            field_0: 8
            padding_4: <UNKNOWN>
            field_8: uu_env::string_parser::StringParser::substring(a1, &v0)
            field_16: v5
        };
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Missing variable name");
    return struct16 {
        field_0: 4
        padding_4: <UNKNOWN>
        field_8: v4
    };
}
