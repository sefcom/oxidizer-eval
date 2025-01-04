fn uu_env::split_iterator::SplitIterator::state_delimiter(a0: &Option<struct40>, a1: u32, a2: u32) -> u64 {
    let v0: i168;  // [sp-0x58], Other Possible Types: struct21, struct40, Option<struct40>, struct41
    let v1: i32;  // [sp-0x2c]
    let v3: i64;  // rax
    let v4: i64;  // rdx

    loop {
        v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1);
        v1 = v3;
        switch (v1) {
        case 35:
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                vvar_161{reg 224} = v0;
                return struct40 {
                    field_0: v5
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
            v0 = uu_env::split_iterator::SplitIterator::state_comment(a1, v4);
            break;
        case 92:
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                vvar_166{reg 224} = v0;
                return struct40 {
                    field_0: v5
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
            v0 = uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1, v4);
            break;
        case 1114112:
            return struct4 {
                field_0: 8
            };
        default:
            if <T as core::slice::cmp::SliceContains>::slice_contains(&v1, &g_425318, 6) as i8 {
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                break;
            } else {
                v0 = uu_env::split_iterator::SplitIterator::state_unquoted(a1, v4);
                break;
            }
        }
        if v0 != 8 {
            vvar_171{reg 224} = v0;
            return struct40 {
                field_0: v5
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i64)
            };
        }
    }
}
