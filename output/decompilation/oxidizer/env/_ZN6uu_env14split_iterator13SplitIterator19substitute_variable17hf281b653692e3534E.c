fn uu_env::split_iterator::SplitIterator::substitute_variable(a0: i64, a1: u64) -> int {
    let v0: struct36;  // [bp-0x70]
    let v1: struct24;  // [bp-0x70]
    let v2: u32;  // [bp-0x6c]
    let v3: struct16;  // [bp-0x68], Other Possible Types: u128
    let v4: u32;  // [bp-0x58]
    let v5: u32;  // [bp-0x50]
    let v6: u64;  // [bp-0x48]
    let v7: struct24;  // [bp-0x40]
    let v9: u64;  // rax

    v6 = a1 + 24;
    v0 = uu_env::variable_parser::VariableParser::parse_variable(&v6);
    v9 = v0.field_0;
    if v9 != 12 {
        return struct40 {
            field_0: v9 as u32
            field_4: v2
            field_8: v3
            field_24: *(&v0.field_24 as &i128)
        };
    }
    v7 = struct24 {
        field_0: 0x8000000000000000
        field_8: v3
    };
    v1 = std::env::var_os(&v7);
    if !((((0 ^ v1.field_0) & (0 ^ -(v1.field_0))) >> 63) as char) {
        uu_env::string_expander::StringExpander::put_string(a1, &v1);
    } else if v4 {
        uu_env::string_expander::StringExpander::put_native_string(a1, v4, v5);
    }
    return struct4 {
        field_0: 12
    };
}
