fn uu_env::split_iterator::SplitIterator::state_delimiter(a0: &struct40, a1: i64) -> u64 {
    let v0: struct36;  // [bp-0x58]
    let v1: Option<struct17>;  // [bp-0x58]
    let v2: struct41;  // [bp-0x58]
    let v3: struct40;  // [bp-0x58]
    let v4: u128;  // [bp-0x48]
    let v5: u32;  // [bp-0x2c]
    let v7: i64;  // rdi

    loop {
        v5 = uu_env::split_iterator::SplitIterator::get_current_char(a1);
        match (v5) {
            35 => {
                v1 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                match v1 {
                    Some(_) => {
                        return struct40 {
                            field_0: v0
                            field_16: v4
                            field_32: *((&v2.field_21 as &char + 8) as &i64)
                        };
                    },
                    None => {
                        v3 = uu_env::split_iterator::SplitIterator::state_comment(a1);
                    },
                }
            }
            92 => {
                v1 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                match v1 {
                    Some(_) => {
                        return struct40 {
                            field_0: v0
                            field_16: v4
                            field_32: *((&v2.field_21 as &char + 8) as &i64)
                        };
                    },
                    None => {
                        v2 = uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1);
                    },
                }
            }
            1114112 => {
                return struct4 {
                    field_0: 12
                };
            }
            _ => {
                v7 = &v0;
                if !<char as core::slice::cmp::SliceContains>::slice_contains(&v5, &g_41e808, 6) {
                    uu_env::split_iterator::SplitIterator::state_unquoted(v7, a1);
                } else {
                    uu_env::split_iterator::SplitIterator::skip_one(v7, a1);
                }
            }
        }
        if v0.field_0 != 12 {
            return struct40 {
                field_0: v0
                field_16: v4
                field_32: *((&v2.field_21 as &char + 8) as &i64)
            };
        }
    }
}
