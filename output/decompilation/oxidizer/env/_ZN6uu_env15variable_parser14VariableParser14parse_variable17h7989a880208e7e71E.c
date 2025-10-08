fn uu_env::variable_parser::VariableParser::parse_variable(a1: i64) -> : struct36 {
    let a0: i64;  // rdi
    let v0: Option<struct17>;  // [bp-0x38], Other Possible Types: u256
    let v1: struct40;  // [bp-0x38]
    let v2: u32;  // [bp-0x34], Other Possible Types: unsigned int
    let v3: u64;  // [bp-0x30]
    let v4: i64;  // [bp-0x28]
    let v5: i8;  // [bp-0x18]
    let v7: i64;  // r14
    let v10: void*;  // rdx
    let v11: struct32;  // xmm0
    let v12: struct24;  // rsi
    let v13: iNone;  // xmm0
    let v14: iNone;  // xmm1
    let v15: Option<struct17>;  // xmm0

    v7 = *(a1 as &i64);
    v0 = uu_env::variable_parser::VariableParser::skip_one(v7);
    match v0 {
        Some(_) => {
            v15 = v0 as i128;
            return struct40 {
                field_0: v15
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *(&v5 as &i64)
            };
        },
        None => {
            match (uu_env::variable_parser::VariableParser::get_current_char(v7) as u32) {
                123 => {
                    v0 = uu_env::variable_parser::VariableParser::skip_one(v7);
                    if let Some(_) = v0 {
                        break;
                    }
                    v1 = uu_env::variable_parser::VariableParser::parse_braced_variable_name(v7);
                    if v1.field_0 as i32 != 12 {
                        v13 = *((&v1.field_0 as &char + 8) as &i128);
                        v14 = *((&v1.field_16 as &char + 8) as &i128);
                        return struct40 {
                            field_0: v1.field_0 as i32
                            field_4: v2
                            field_8: v13
                            field_24: v14
                        };
                    }
                    break;
                }
                1114112 => {
                    return struct16 {
                        field_0: 5
                        padding_4: <UNKNOWN>
                        field_8: *((v7 + 32) as &i64)
                    };
                }
                _ => {
                    v1 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(v7);
                    if v1.field_0 as i32 != 12 {
                        v11 = *((&v1.field_0 as &char + 8) as &i128);
                        return struct40 {
                            field_0: v1.field_0 as i32
                            field_4: v2
                            field_8: v11
                            field_24: *((&v1.field_16 as &char + 8) as &i128)
                        };
                    }
                }
            }
            return struct40 {
                field_0: 12
                padding_4: <UNKNOWN>
                field_8: v3
                field_16: v4
                field_24: v10
                field_32: v12
            };
        },
    }
}
