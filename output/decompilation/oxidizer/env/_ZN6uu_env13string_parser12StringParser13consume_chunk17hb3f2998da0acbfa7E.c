fn uu_env::string_parser::StringParser::consume_chunk(a0: &Result<struct17, struct9>, a1: void*) -> u64 {
    let v0: struct32;  // [sp-0x48]
    let v2: u64;  // r15
    let v6: u32;  // eax

    v2 = a1->field_20;
    v0 = uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, v2);
    if !v0.field_0 {
        v6 = *((&v0.field_16 as &char + 1) as &i32);
        a0->field_11 = *((&v0.field_16 as &char + 4) as &i32);
        (&a0->padding_0)[1] = v6;
        uu_env::string_parser::StringParser::set_pointer(a1, v2 + v0.field_24);
    }
    return struct17 {
        field_0: v5
        field_8: v3
        field_16: v4
    };
}
