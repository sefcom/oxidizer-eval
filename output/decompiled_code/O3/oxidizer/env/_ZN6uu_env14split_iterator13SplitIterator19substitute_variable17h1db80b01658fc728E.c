fn uu_env::split_iterator::SplitIterator::substitute_variable(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i320;  // [sp-0x70], Other Possible Types: struct40, Option<struct24>
    let v1: struct8;  // [bp-0x48]
    let v2: struct24;  // [bp-0x40]
    let v4: i64;  // rax
    let v5: i64;  // r15
    let v6: i64;  // r12
    let v7: i64;  // rdx
    let v8: i32;  // ecx
    let v9: i128;  // xmm0
    let v10: i128;  // xmm1
    let v11: i64;  // rax
    let v12: i64;  // rax

    v1 = struct8 {
        field_0: a1 + 24
    };
    v0 = uu_env::variable_parser::VariableParser::parse_variable(&v1, a2);
    v4 = v0;
    if v4 != 8 {
        v8 = *((&v0 as &char + 4) as &i32);
        v9 = *((&v0 as &char + 8) as &i128);
        v10 = *((&v0 as &char + 24) as &i128);
        v11 = v4;
        return struct40 {
            field_0: v4 as i32
            field_4: v8
            field_8: v9
            field_24: v10
        };
    }
    v5 = *((&v0 as &char + 24) as &i64);
    v6 = *((&v0 as &char + 32) as &i64);
    v2 = struct24 {
        field_0: 0x8000000000000000
        field_8: *((&v0 as &char + 8) as &i128)
    };
    v0 = std::env::var_os(&v2, v7);
    if v0 != 0x8000000000000000 {
        uu_env::string_expander::StringExpander::put_string(a1, &v0, v7);
    } else if v5 {
        uu_env::string_expander::StringExpander::put_native_string(a1, v5, v6);
    }
    v11 = v12;
    return struct4 {
        field_0: 8
    };
}
