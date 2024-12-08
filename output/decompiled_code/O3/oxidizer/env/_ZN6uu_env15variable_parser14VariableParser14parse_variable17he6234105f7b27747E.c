fn uu_env::variable_parser::VariableParser::parse_variable(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i320;  // [sp-0x38], Other Possible Types: struct40, struct21
    let v3: i64;  // r14
    let v5: i64;  // r14
    let v6: i64;  // rdx
    let v7: i32;  // eax
    let v8: i64;  // rdx
    let v9: i128;  // xmm0
    let v10: i64;  // rax
    let v11: i64;  // rcx
    let v12: i64;  // rdx
    let v13: i32;  // ecx
    let v14: i128;  // xmm0
    let v15: i32;  // eax
    let v16: i64;  // rsi
    let v17: i32;  // ecx
    let v18: i128;  // xmm0
    let v19: i128;  // xmm1

    v3 = *(a1 as &i64);
    v0 = uu_env::variable_parser::VariableParser::skip_one(v3);
    if v0 != 8 {
        v9 = v0;
        return struct40 {
            field_0: v7
            field_4: v13
            field_8: v14
            field_24: *((&v0 as &char + 24) as &i128)
        };
    }
    switch (uu_env::variable_parser::VariableParser::get_current_char(v3) as i32) {
    case 123:
        v0 = uu_env::variable_parser::VariableParser::skip_one(v3);
        if v0 != 8 {
            vvar_152{reg 224} = v0;
            return struct40 {
                field_0: v9
                field_16: v0
                field_32: v1
            };
        }
        v0 = uu_env::variable_parser::VariableParser::parse_braced_variable_name(v3, v8);
        v15 = v0;
        if v15 != 8 {
            v17 = *((&v0 as &char + 4) as &i32);
            v18 = *((&v0 as &char + 8) as &i128);
            v19 = *((&v0 as &char + 24) as &i128);
            return struct40 {
                field_0: v7
                field_4: v13
                field_8: v14
                field_24: *((&v0 as &char + 24) as &i128)
            };
        }
        v10 = *((&v0 as &char + 8) as &i64);
        v11 = *((&v0 as &char + 16) as &i64);
        v12 = *((&v0 as &char + 24) as &i64);
        v16 = *((&v0 as &char + 32) as &i64);
        break;
    case 1114112:
        v5 = *((v3 + 32) as &i64);
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "missing variable name");
        *(a0 as &i32) = 4;
        *((a0 + 8) as &i64) = v5;
        return struct40 {
            field_0: v7
            field_4: v13
            field_8: v14
            field_24: *((&v0 as &char + 24) as &i128)
        };
    default:
        v0 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(v3, v6);
        v7 = v0;
        if v7 != 8 {
            v13 = *((&v0 as &char + 4) as &i32);
            v14 = *((&v0 as &char + 8) as &i128);
            return struct40 {
                field_0: v7
                field_4: v13
                field_8: v14
                field_24: *((&v0 as &char + 24) as &i128)
            };
        }
        v10 = *((&v0 as &char + 8) as &i64);
        v11 = *((&v0 as &char + 16) as &i64);
        v12 = 0;
        break;
    }
    return struct40 {
        field_0: v7
        field_4: v13
        field_8: v14
        field_24: *((&v0 as &char + 24) as &i128)
    };
}
