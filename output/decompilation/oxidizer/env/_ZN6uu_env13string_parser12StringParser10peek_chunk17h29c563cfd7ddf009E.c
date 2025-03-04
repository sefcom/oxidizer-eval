fn uu_env::string_parser::StringParser::peek_chunk(a0: &Option<struct16>, a1: void*) -> u64 {
    let v0: struct32;  // [sp-0x28]

    v0 = uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, *(&a1->field_20 as &i64));
    if !v0.field_0 {
        *(&(&a0->padding_0)[1] as &i128) = *(&v0.field_8 as &i128);
    }
    return struct8 {
        field_0: v2
    };
}
