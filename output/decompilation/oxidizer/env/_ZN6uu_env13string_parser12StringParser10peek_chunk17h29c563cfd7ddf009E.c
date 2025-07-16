fn uu_env::string_parser::StringParser::peek_chunk(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v1: i8;  // [bp-0x20]
    let v3: u32;  // ecx
    let v5: struct9;  // rax
    let v6: u64;  // rax

    uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, *((a1 + 32) as &i64), v3);
    v5 = 1;
    return struct32 {
        field_0: v6
        field_8: <UNKNOWN>
    };
}
