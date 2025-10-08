fn uu_env::variable_parser::VariableParser::skip_one(a0: i64, a1: void*) -> long long {
    let v0: u8;  // [bp-0x20]
    let v1: struct16;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]

    uu_env::string_parser::StringParser::consume_chunk(&v0, a1);
    if *(&v0 as &i32) != 1 {
        return struct4 {
            field_0: 12
        };
    }
    return struct32 {
        field_0: 11
        padding_4: <UNKNOWN>
        field_8: v1
        field_16: v1
        field_24: v2
    };
}
