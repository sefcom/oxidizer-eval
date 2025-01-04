fn uu_env::string_parser::StringParser::peek_chunk(a0: &struct_1, a1: &struct_0) -> u64 {
    let v0: u256;  // [sp-0x28], Other Possible Types: struct32
    let v2: u64;  // rax

    v0 = uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, a1->field_20);
    if v0 as i64 {
        v2 = 0;
    } else {
        *(&(&a0->field_0)[1] as &i128) = *((&v0 as &char + 8) as &i128);
        v2 = 1;
    }
    return struct8 {
        field_0: v2
    };
}
