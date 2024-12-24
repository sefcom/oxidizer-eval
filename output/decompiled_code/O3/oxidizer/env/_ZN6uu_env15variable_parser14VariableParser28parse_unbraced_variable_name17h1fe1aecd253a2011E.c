fn uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i168;  // [sp-0x48], Other Possible Types: Option<struct8>, struct21
    let v2: i8;  // [bp-0x28]
    let v4: i64;  // r12
    let v5: i32;  // eax
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i128;  // xmm0
    let v9: i64;  // rdx

    v4 = *((a1 + 32) as &i64);
    v0 = uu_env::variable_parser::VariableParser::check_variable_name_start(a1);
    match v0 {
        Some(_) => {
            v7 = v2;
            v8 = v0;
            return struct40 {
                field_0: v8
                field_16: v1
                field_32: v7
            };
        },
        None => {
            v5 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
            if v5 != 0x110000 {
                while (v5 == 95 || v5 - 48 < 10 || (v5 & 2097119) - 65 <= 25) {
                    v0 = uu_env::variable_parser::VariableParser::skip_one(a1);
                    if v0 != 8 {
                        vvar_163{reg 224} = v0;
                        return struct40 {
                            field_0: v8
                            field_16: v1
                            field_32: v2
                        };
                    }
                    v5 = uu_env::variable_parser::VariableParser::get_current_char(a1) as i32;
                    if v5 == 0x110000 {
                        break;
                    }
                }
            }
            v6 = *((a1 + 32) as &i64);
            if v0.8 == v4 {
                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Missing variable name");
                *(a0 as &i32) = 4;
                *((a0 + 8) as &i64) = v4;
                return v7;
            }
            v0 = v4;
            v0.8 = vvar_104{reg 16};
            v7 = uu_env::string_parser::StringParser::substring(a1, &v0);
            *((a0 + 8) as &i64) = v7;
            *((a0 + 16) as &i64) = v9;
            *(a0 as &i32) = 8;
            return v7;
        },
    }
}
