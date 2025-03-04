fn uu_env::split_iterator::SplitIterator::skip_one(a0: &struct21, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x38]
    let v1: i64;  // [sp-0x30]
    let v2: i8;  // [sp-0x28]
    let v3: struct24;  // [sp-0x20]

    v3 = uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a1 + 24);
    if v0 == 0x8000000000000000 {
        *((a0 + 8) as &unsigned long) = v1;
        *((a0 + 16) as &unsigned long) = v1;
        *((a0 + 24) as &char) = v2;
    }
    return struct4 {
        field_0: v5 as u32
    };
}
