fn uu_env::split_iterator::SplitIterator::substitute_variable(a1: i32) -> Option<struct40> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x70], Other Possible Types: struct8, u32
    let v1: u32;  // [bp-0x6c]
    let v2: struct24;  // [bp-0x68], Other Possible Types: u128
    let v3: i8;  // [bp-0x58], Other Possible Types: u64
    let v4: u32;  // [bp-0x50]
    let v5: struct40;  // [bp-0x48], Other Possible Types: struct8
    let v6: struct24;  // [bp-0x40]
    let v8: void*;  // rdx
    let v9: u64;  // rax

    v5 = a1 + 24;
    v5 = uu_env::variable_parser::VariableParser::parse_variable(v8);
    v9 = v0;
    if v9 != 8 {
        return Some(struct40 {
            field_0: v9 as u32
            field_4: v1
            field_8: v2
            field_24: *(&v3 as &i128)
        });
    }
    v6 = struct24 {
        field_0: 0x8000000000000000
        field_8: v2
    };
    v0 = std::env::var_os(&v6);
    if v0.field_0 != 0x8000000000000000 {
        v0 = uu_env::string_expander::StringExpander::put_string(v8);
    } else if v3 {
        uu_env::string_expander::StringExpander::put_native_string(a1, v3, v4);
    }
    return struct4 {
        field_0: 8
    };
}
