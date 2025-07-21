fn uu_env::split_iterator::SplitIterator::state_delimiter(a0: &struct40, a1: i64) -> long long {
    let v0: struct40;  // [bp-0x58]
    let v1: struct40;  // [bp-0x58]
    let v2: struct40;  // [bp-0x58]
    let v3: u128;  // [bp-0x48]
    let v4: core::fmt::Arguments;  // [bp-0x2c]
    let v6: u32;  // rdx

    loop {
        v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        match (v4) {
            35 => {
                uu_env::split_iterator::SplitIterator::skip_one(a1, v6);
                if v0.field_0 as i32 != 8 {
                    return struct40 {
                        field_0: v0
                        field_16: v3
                        field_32: v2.field_32
                    };
                }
                v1 = uu_env::split_iterator::SplitIterator::state_comment(a1);
            }
            92 => {
                uu_env::split_iterator::SplitIterator::skip_one(a1, v6);
                if v0.field_0 as i32 != 8 {
                    return struct40 {
                        field_0: v0
                        field_16: v3
                        field_32: v2.field_32
                    };
                }
                uu_env::split_iterator::SplitIterator::state_delimiter_backslash(&v0, a1);
            }
            1114112 => {
                return struct4 {
                    field_0: 8
                };
            }
            _ => {
                if !<T as core::slice::cmp::SliceContains>::slice_contains(&v4, &g_425318, 6) {
                    v2 = uu_env::split_iterator::SplitIterator::state_unquoted(a1);
                } else {
                    uu_env::split_iterator::SplitIterator::skip_one(a1, v6);
                }
            }
        }
        if v0.field_0 as i32 != 8 {
            return struct40 {
                field_0: v0
                field_16: v3
                field_32: v2.field_32
            };
        }
    }
}
