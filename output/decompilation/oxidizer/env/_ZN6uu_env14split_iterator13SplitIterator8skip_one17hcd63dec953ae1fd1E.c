fn uu_env::split_iterator::SplitIterator::skip_one(a0: &struct21, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v2: u8;  // [sp-0x28]

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii();
    if v0 == 0x8000000000000000 {
        a0->field_8 = v1;
        a0->field_10 = v1;
        a0->field_18 = v2;
    }
    return struct4 {
        field_0: v4 as u32
    };
}
