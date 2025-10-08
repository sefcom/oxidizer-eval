fn uu_env::string_parser::StringParser::peek_chunk(a0: i64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x28]
    let v3: struct9;  // rax
    let v4: u64;  // rax

    v0 = uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, *((a1 + 32) as &i64));
    v3 = 1;
    return struct24 {
        field_0: v4
        field_8: *(&v0.field_8 as &i128)
    };
}
