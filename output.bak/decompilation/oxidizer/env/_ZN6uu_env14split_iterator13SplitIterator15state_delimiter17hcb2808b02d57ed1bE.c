fn uu_env::split_iterator::SplitIterator::state_delimiter(a0: &Option<struct40>, a1: u32) -> u64 {
    let v0: struct21;  // [sp-0x58], Other Possible Types: Option<struct40>, struct41
    let v1: i32;  // [bp-0x2c]

    v1 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    if v1 != 35 {
        return struct4 {
            field_0: 8
        };
        v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
        return Some(struct40 {
            field_0: v7
            field_16: v0
            field_32: v3
        });
        v0 = uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1);
        return Some(struct40 {
            field_0: v7
            field_16: v0
            field_32: v3
        });
    }
    v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    return Some(struct40 {
        field_0: v7
        field_16: v0
        field_32: v3
    });
    v0 = uu_env::split_iterator::SplitIterator::state_comment(a1);
    return Some(struct40 {
        field_0: v7
        field_16: v0
        field_32: v3
    });
}
