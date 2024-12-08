fn uu_env::variable_parser::VariableParser::parse_braced_variable_name(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i168;  // [sp-0x78], Other Possible Types: struct21, Option<struct8>
    let v2: i64;  // [sp-0x60]
    let v3: i64;  // [sp-0x58]
    let v5: i32;  // [sp-0x44]
    let v6: i64;  // [sp-0x40]
    let v7: i64;  // [sp-0x38]
    let v9: i64;  // r13
    let v10: i32;  // eax
    let v11: i64;  // r14
    let v12: i64;  // rdi
    let v13: i64;  // rsi
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i128;  // xmm0
    let v17: i64;  // rbp
    let v18: i32;  // eax
    let v19: i64;  // r15
    let v20: i64;  // r15
    let v21: i128;  // xmm0
    let v22: i64;  // rdx
    let v23: i64;  // r12

    v9 = *((a1 + 32) as &i64);
    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1);
    match v0 {
        Some(_) => {
            v15 = v3;
            v16 = v0;
            return struct40 {
                field_0: v16
                field_16: v1
                field_32: v15
            };
        },
        None => {
            v10 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
        },
    }
    if v10 == 0x110000 {
LABEL_4d562f:
        v11 = *((a1 + 32) as &i64);
        v12 = a0 + 16;
        v13 = &g_424e64;
        v14 = 21;
    }
    loop {
        if v10 <= 127 && v10 - 48 >= 10 && (v10 & 95) - 65 > 25 && v10 != 95 {
            if v10 == 58 {
                v17 = *((a1 + 32) as &i64);
                loop {
                    v18 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
                    if v18 != 125 {
                        if v18 == 0x110000 {
                            v11 = *((a1 + 32) as &i64);
                            v12 = a0 + 16;
                            v13 = &g_424e79;
                            v14 = 41;
                        }
                        v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                        v15 = v0;
                        goto LABEL_4d57be;
                    } else {
                        v19 = *((a1 + 32) as &i64);
                        v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                        v15 = v0;
                        if v15 == 8 {
                            v0 = v17 + 1;
                            v0.8 = vvar_223{reg 136};
                            v20 = uu_env::string_parser::StringParser::substring(a1, &v0);
LABEL_4d578e:
                            v0 = v9;
                            v0.8 = vvar_77{reg 56};
                            v15 = uu_env::string_parser::StringParser::substring(a1, &v0);
                            *((a0 + 8) as &i64) = v15;
                            *((a0 + 16) as &i64) = v22;
                            *((a0 + 24) as &i64) = v20;
                            *((a0 + 32) as &i64) = v23;
                            *(a0 as &i32) = 8;
                            return v15;
                        }
LABEL_4d57be:
                        v21 = *((&v0 as &char + 4) as &i128);
                        return struct40 {
                            field_0: v15 as i32
                            field_4: v21
                            field_20: v1
                            field_36: v4
                        };
                    }
                }
            } else if v10 != 125 {
                v5 = v10;
                v11 = *((a1 + 32) as &i64);
                v6 = &v5;
                v7 = <char as core::fmt::Display>::fmt;
                v0 = "Unexpected character: '";
                v0.8 = 2;
                v3 = 0;
                v0.16 = stack_base + -64;
                v2 = 1;
                v15 = core::option::Option<T>::map_or_else(a0 + 16, &v0);
            } else {
                v17 = *((a1 + 32) as &i64);
                v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                v15 = v0;
                if v15 == 8 {
                    v20 = 0;
                    goto LABEL_4d578e;
                }
            }
        }
        v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
        if v0 != 8 {
            break;
        }
        v10 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
        if v10 == 0x110000 {
            goto LABEL_4d562f;
        }
    }
}
