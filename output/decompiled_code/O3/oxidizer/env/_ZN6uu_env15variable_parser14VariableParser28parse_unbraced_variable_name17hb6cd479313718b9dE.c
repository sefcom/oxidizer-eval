fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x48], Other Possible Types: Option<struct8>, struct21
    let v1: i64;  // [sp-0x40]
    let v3: i8;  // [bp-0x28]
    let v5: i64;  // r12
    let v6: i32;  // eax
    let v8: i64;  // rax
    let v9: i128;  // xmm0
    let v10: i64;  // rdx

    v5 = *((a1 + 32) as &i64);
    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1);
    match v0 {
        Some(_) => {
            v8 = v3;
            v9 = v0;
            return struct40 {
                field_0: v9
                field_16: v2
                field_32: v8
            };
        },
        None => {
            v6 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
            if v6 != 0x110000 {
                while (v6 == 95 || v6 - 48 < 10 || (v6 & 2097119) - 65 <= 25) {
                    v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                    if v0 != 8 {
                        vvar_163{reg 224} = v0;
                        return struct40 {
                            field_0: v9
                            field_16: v2
                            field_32: v3
                        };
                    }
                    v6 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
                    if v6 == 0x110000 {
                        break;
                    }
                }
            }
            if v1 == v5 {
                v8 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Missing variable name");
                *(a0 as &i32) = 4;
                *((a0 + 8) as &i64) = v5;
                return v8;
            }
            v0 = v5;
            v1 = *((a1 + 32) as &i64);
            v8 = uu_env::string_parser::StringParser::substring(a1, &v0);
            *((a0 + 8) as &i64) = v8;
            *((a0 + 16) as &i64) = v10;
            *(a0 as &i32) = 8;
            return v8;
        },
    }
}
