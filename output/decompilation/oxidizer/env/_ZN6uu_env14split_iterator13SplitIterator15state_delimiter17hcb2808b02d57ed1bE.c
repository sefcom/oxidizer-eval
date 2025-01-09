fn uu_env::split_iterator::SplitIterator::state_delimiter(a0: &Option<struct40>, a1: u32) -> u64 {
    let v0: struct21;  // [sp-0x58], Other Possible Types: Option<struct40>, struct41, struct40
    let v1: i32;  // [sp-0x2c]

    loop {
        v1 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        match (v1) {
            35 => {
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                v0 = uu_env::split_iterator::SplitIterator::state_comment(a1);
                break;
            }
            92 => {
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                v0 = uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1);
                break;
            }
            1114112 => {
                return struct4 {
                    field_0: 8
                };
            }
            _ => {
                if !<T as core::slice::cmp::SliceContains>::slice_contains(&v1, &g_425318, 6) as i8 {
                    v0 = uu_env::split_iterator::SplitIterator::state_unquoted(a1);
                    return Some(struct40 {
                        field_0: v4
                        field_16: *((&v0 as &char + 16) as &i128)
                        field_32: v3
                    });
                }
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                break;
            }
        }
    }
}
