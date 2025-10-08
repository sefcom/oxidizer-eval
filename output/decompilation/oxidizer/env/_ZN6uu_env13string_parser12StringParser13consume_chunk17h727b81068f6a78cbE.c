fn uu_env::string_parser::StringParser::consume_chunk(a0: i64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x48]
    let v1: i64;  // [bp-0x40]
    let v2: i8;  // [bp-0x38]
    let v3: u32;  // [bp-0x34]
    let v8: u64;  // rax

    v0 = uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, *((a1 + 32) as &i64));
    return struct32 {
        field_0: v8
        field_8: v1
        field_16: v2
        field_17: v3
        field_20: <UNKNOWN>
    };
}
