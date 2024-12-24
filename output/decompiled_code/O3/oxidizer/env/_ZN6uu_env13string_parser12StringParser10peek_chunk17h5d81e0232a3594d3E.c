fn uu_env::string_parser::StringParser::peek_chunk(a0: &struct_0, a1: &struct_1) -> u64 {
    let v0: struct32;  // [sp-0x48], Other Possible Types: u256
    let v1: u128;  // [sp-0x28]
    let v2: u64;  // [sp-0x18]
    let v4: u64;  // rax

    v0 = uu_env::string_parser::StringParser::get_chunk_with_length_at(a1, a1->field_20);
    if v0 as i64 {
        v4 = 0;
    } else {
        v2 = *((&v0 as &char + 24) as &i64);
        v1 = *((&v0 as &char + 8) as &i128);
        (&a0->field_0)[1] = v1;
        v4 = 1;
    }
    return struct8 {
        field_0: v4
    };
}
