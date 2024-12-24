fn uu_env::split_iterator::SplitIterator::state_comment(a0: void*, a1: u64, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x48]
    let v2: i8;  // [bp-0x28]
    let v4: struct21;  // rax
    let v5: u64;  // rdx
    let v6: u128;  // xmm0

    v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1);
    switch (v4 as u32) {
    case 10:
        v4 = uu_env::split_iterator::SplitIterator::skip_one(a1);
        if v0 != 8 {
            v4 = v2;
            v6 = v0;
            return struct40 {
                field_0: v6
                field_16: v1
                field_32: v4
            };
        }
        return struct4 {
            field_0: 8
        };
    case 1114112:
        return struct4 {
            field_0: 6
        };
    default:
        uu_env::string_parser::StringParser::skip_until_char_or_end(a1 + 24, 10, v5);
        break;
    }
}
