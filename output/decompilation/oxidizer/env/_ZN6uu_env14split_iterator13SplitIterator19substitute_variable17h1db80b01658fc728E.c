fn uu_env::split_iterator::SplitIterator::substitute_variable(a0: &struct40, a1: &u64) -> u64 {
    let v0: Option<struct24>;  // [sp-0x70], Other Possible Types: struct40
    let v1: i64;  // [sp-0x48]
    let v2: struct24;  // [bp-0x40]
    let v4: i64;  // rax
    let v5: i64;  // r15
    let v6: i64;  // r12
    let v7: i32;  // ecx
    let v8: iNone;  // xmm0
    let v9: iNone;  // xmm1
    let v10: i64;  // rax
    let v13: i64;  // rax

    v1 = a1 + 24;
    v0 = uu_env::variable_parser::VariableParser::parse_variable(&v1);
    v4 = v0.field_0;
    if v4 as u32 != 8 {
        v7 = v0.field_4;
        v8 = v0.field_8;
        v9 = v0.field_24;
        *(a0 as &u32) = v4 as u32;
        *((a0 + 4) as &unsigned int) = v7;
        *((a0 + 8) as void*) = v8;
        *((a0 + 24) as void*) = v9;
        v10 = v4;
        return v10;
    }
    v5 = v0.field_24 as i64;
    v6 = *((&v0.field_24 as &char + 8) as &i64);
    v2 = struct24 {
        field_0: 0x8000000000000000
        field_8: v0.field_8
    };
    v0 = std::env::var_os(&v2);
    if v0 as i64 != 0x8000000000000000 {
        uu_env::string_expander::StringExpander::put_string(a1, &v0);
        return v10;
    } else if !v5 {
        return v10;
    } else {
        uu_env::string_expander::StringExpander::put_native_string(a1, v5, v6);
        v10 = v13;
        return v10;
    }
}
