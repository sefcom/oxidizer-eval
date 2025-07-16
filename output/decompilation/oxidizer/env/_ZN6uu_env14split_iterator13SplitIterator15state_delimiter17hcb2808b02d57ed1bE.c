fn uu_env::split_iterator::SplitIterator::state_delimiter(a0: &struct40, a1: i64) -> long long {
    let v0: u128;  // [bp-0x58]
    let v1: struct40;  // [bp-0x58]
    let v2: struct41;  // [bp-0x58]
    let v3: struct40;  // [bp-0x58]
    let v4: u128;  // [bp-0x48]
    let v5: u32;  // [bp-0x2c]
    let v7: u32;  // rdx

    loop {
        v5 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        match (v5) {
            35 => {
                uu_env::split_iterator::SplitIterator::skip_one(a1, v7);
                if v0 as i32 != 8 {
                    return struct40 {
                        field_0: v0
                        field_16: v4
                        field_32: v2.field_21 as i64
                    };
                }
                v1 = uu_env::split_iterator::SplitIterator::state_comment(a1);
            }
            92 => {
                uu_env::split_iterator::SplitIterator::skip_one(a1, v7);
                if v0 as i32 != 8 {
                    return struct40 {
                        field_0: v0
                        field_16: v4
                        field_32: v2.field_21 as i64
                    };
                }
                v2 = uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1);
            }
            1114112 => {
                return struct4 {
                    field_0: 8
                };
            }
            _ => {
                if !<T as core::slice::cmp::SliceContains>::slice_contains(&v5, &g_425318, 6) {
                    v3 = uu_env::split_iterator::SplitIterator::state_unquoted(a1);
                } else {
                    uu_env::split_iterator::SplitIterator::skip_one(a1, v7);
                }
            }
        }
        if v0 as i32 != 8 {
            return struct40 {
                field_0: v0
                field_16: v4
                field_32: v2.field_21 as i64
            };
        }
    }
}
