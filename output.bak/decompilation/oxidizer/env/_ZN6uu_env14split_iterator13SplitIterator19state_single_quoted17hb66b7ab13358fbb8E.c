fn uu_env::split_iterator::SplitIterator::state_single_quoted(a0: &struct40, a1: void*) -> u64 {
    let v0: struct21;  // [sp-0x40], Other Possible Types: struct40, Option<struct17>
    let v5: struct21;  // rax

    loop {
        switch (uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32) {
        case 92:
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            return struct40 {
                field_0: v4
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v3
            };
            v0 = uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(a1);
            break;
        case 39:
            v5 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            return struct40 {
                field_0: v4
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v3
            };
        default:
            return struct16 {
                field_0: 0x2700000000
                field_8: v3
            };
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1) as u136;
            break;
        }
        return struct40 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: v3
        };
    }
}
