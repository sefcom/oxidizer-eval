fn uu_env::split_iterator::SplitIterator::substitute_variable(a1: i32) -> Option<struct40> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x70], Other Possible Types: u32, struct8
    let v1: u32;  // [bp-0x6c]
    let v2: u128;  // [bp-0x68]
    let v3: u64;  // [bp-0x58], Other Possible Types: char
    let v4: u32;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: struct40;  // [bp-0x48]
    let v7: u64;  // [bp-0x40]
    let v9: void*;  // rdx
    let v10: u64;  // rax

    v5 = a1 + 24;
    v6 = uu_env::variable_parser::VariableParser::parse_variable(v9);
    v10 = v0;
    if v10 != 8 {
        return struct48 {
            field_0: v10 as u32
            field_4: v1
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    memcpy(&v6 as u8, &v2, 16);
    v7 = 0x8000000000000000;
    v0 = std::env::var_os(&v7);
    if v0.field_0 != 0x8000000000000000 {
        v0 = uu_env::string_expander::StringExpander::put_string(v9);
    } else if v3 {
        uu_env::string_expander::StringExpander::put_native_string(a1, v3, v4);
    }
    return struct4 {
        field_0: 8
    };
}
