fn uu_env::split_iterator::SplitIterator::state_comment(a1: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: Option<struct17>;  // [bp-0x48]
    let v1: u128;  // [bp-0x38]
    let v2: i8;  // [bp-0x28]
    let v4: u32;  // eax

    v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1);
    if v4 != 10 {
        do {
            if v4 == 0x110000 {
                return struct4 {
                    field_0: 9
                };
            }
            uu_env::string_parser::StringParser::skip_until_char_or_end(a1 + 24, 10);
            v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1);
        } while (v4 != 10);
    }
    v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    match v0 {
        Some(_) => {
            return struct40 {
                field_0: v0 as i128
                field_16: v1
                field_32: *(&v2 as &i64)
            };
        },
        None => {
            return struct4 {
                field_0: 12
            };
        },
    }
}
