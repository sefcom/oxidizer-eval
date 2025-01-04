fn uu_env::variable_parser::VariableParser::parse_braced_variable_name(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i168;  // [sp-0x78], Other Possible Types: struct21, Option<struct8>
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [bp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: i64;  // [sp-0x58]
    let v6: i32;  // [sp-0x44]
    let v7: i64;  // [sp-0x40]
    let v8: i64;  // [sp-0x38]
    let v10: i64;  // r13
    let v11: i32;  // eax
    let v12: i64;  // r14
    let v13: i64;  // rdi
    let v14: i64;  // rsi
    let v15: i64;  // rdx
    let v16: i64;  // rax
    let v17: i128;  // xmm0
    let v18: i64;  // rbp
    let v19: i32;  // eax
    let v21: i64;  // r15
    let v22: i128;  // xmm0
    let v23: i64;  // rdx
    let v24: i64;  // r12

    v10 = *((a1 + 32) as &i64);
    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1);
    match v0 {
        Some(_) => {
            v16 = v4;
            v17 = v0;
            return struct40 {
                field_0: v17
                field_16: v2
                field_32: v16
            };
        },
        None => {
            v11 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
        },
    }
    if v11 == 0x110000 {
LABEL_4d52ff:
        v12 = *((a1 + 32) as &i64);
        v13 = a0 + 16;
        v14 = &g_424d9f;
        v15 = 21;
    }
    loop {
        if v11 <= 127 && v11 - 48 >= 10 && (v11 & 95) - 65 > 25 && v11 != 95 {
            if v11 == 58 {
                v18 = *((a1 + 32) as &i64);
                loop {
                    v19 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
                    if v19 != 125 {
                        if v19 == 0x110000 {
                            v12 = *((a1 + 32) as &i64);
                            v13 = a0 + 16;
                            v14 = &g_424db4;
                            v15 = 41;
                        }
                        v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                        v16 = v0;
                        goto LABEL_4d548e;
                    } else {
                        v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                        v16 = v0;
                        if v16 == 8 {
                            v0 = v18 + 1;
                            v1 = *((a1 + 32) as &i64);
                            v21 = uu_env::string_parser::StringParser::substring(a1, &v0);
LABEL_4d545e:
                            v0 = v10;
                            v1 = v18;
                            v16 = uu_env::string_parser::StringParser::substring(a1, &v0);
                            *((a0 + 8) as &i64) = v16;
                            *((a0 + 16) as &i64) = v23;
                            *((a0 + 24) as &i64) = v21;
                            *((a0 + 32) as &i64) = v24;
                            *(a0 as &i32) = 8;
                            return v16;
                        }
LABEL_4d548e:
                        v22 = *((&v0 as &char + 4) as &i128);
                        return struct40 {
                            field_0: v16 as i32
                            field_4: v22
                            field_20: v2
                            field_36: v5
                        };
                    }
                }
            } else if v11 != 125 {
                v6 = v11;
                v12 = *((a1 + 32) as &i64);
                v7 = &v6;
                v8 = <char as core::fmt::Display>::fmt;
                v0 = "Unexpected character: '";
                v1 = 2;
                v4 = 0;
                v2 = &v7;
                v3 = 1;
                v16 = core::option::Option<T>::map_or_else(a0 + 16, &v0);
            } else {
                v18 = *((a1 + 32) as &i64);
                v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                v16 = v0;
                if v16 == 8 {
                    v21 = 0;
                    goto LABEL_4d545e;
                }
            }
        }
        v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
        if v0 != 8 {
            break;
        }
        v11 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
        if v11 == 0x110000 {
            goto LABEL_4d52ff;
        }
    }
}
