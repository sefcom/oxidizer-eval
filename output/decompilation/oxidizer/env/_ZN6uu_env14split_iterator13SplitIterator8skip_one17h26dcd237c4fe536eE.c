fn uu_env::split_iterator::SplitIterator::skip_one(a0: i64, a1: u64) -> long long {
    let v0: u8;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, a1 + 24);
    if !((((0 ^ v0) & (0 ^ -(v0))) >> 63) as char) {
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
