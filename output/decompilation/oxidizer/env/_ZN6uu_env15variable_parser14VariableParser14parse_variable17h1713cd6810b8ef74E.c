fn uu_env::variable_parser::VariableParser::parse_variable(a1: i64) -> : struct40 {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0x38]
    let v1: u32;  // [bp-0x34]
    let v2: i8;  // [bp-0x30], Other Possible Types: u64
    let v3: i8;  // [bp-0x28], Other Possible Types: u64
    let v4: i8;  // [bp-0x20]
    let v5: i8;  // [bp-0x18]
    let v7: i64;  // r14
    let v8: u64;  // rdx
    let v10: u64;  // r14
    let v11: u128;  // xmm0
    let v12: struct24;  // rdx
    let v13: u128;  // xmm0
    let v14: u64;  // rsi
    let v15: alloc::string::String;  // xmm0

    v7 = *(a1 as &i64);
    uu_env::variable_parser::VariableParser::skip_one(v7, v8);
    if v0 != 8 {
        v11 = *(&v0 as &i128);
        return struct40 {
            field_0: v11
            field_16: *(&v3 as &i128)
            field_32: *(&v5 as &i64)
        };
    }
    match (uu_env::variable_parser::VariableParser::get_current_char(v7) as i32) {
        123 => {
            uu_env::variable_parser::VariableParser::skip_one(v7, v8);
            if !(v0 == 8) {
                break;
            }
            uu_env::variable_parser::VariableParser::parse_braced_variable_name(v7, v8);
            if v0 != 8 {
                v15 = *(&v2 as &i128);
                return struct48 {
                    field_0: v0
                    field_4: v1
                    field_8: <UNKNOWN>
                    field_24: <UNKNOWN>
                };
            }
            break;
        }
        1114112 => {
            v10 = *((v7 + 32) as &i64);
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "missing variable name");
            return struct16 {
                field_0: 4
                field_8: v10
            };
        }
        _ => {
            uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(v7, v8);
            if v0 != 8 {
                v13 = *(&v2 as &i128);
                return struct48 {
                    field_0: v0
                    field_4: v1
                    field_8: <UNKNOWN>
                    field_24: <UNKNOWN>
                };
            }
        }
    }
    return struct40 {
        field_0: 8
        field_8: v2
        field_16: v3
        field_24: v12
        field_32: v14
    };
}
