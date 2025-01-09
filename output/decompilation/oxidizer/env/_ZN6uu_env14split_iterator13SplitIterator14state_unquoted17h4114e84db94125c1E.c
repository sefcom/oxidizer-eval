fn uu_env::split_iterator::SplitIterator::state_unquoted(a0: &struct40, a1: u32) -> u64 {
    let v0: i336;  // [sp-0x58], Other Possible Types: struct21, struct40, Option<struct17>, struct41
    let v1: i32;  // [sp-0x2c]

LABEL_4d9c73:
    v1 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    if v1 <= 38 {
        match (v1) {
            34 => {
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 != 8 {
                    return struct40 {
                        field_0: v5
                        field_16: *((&v0 as &char + 16) as &i128)
                        field_32: v3
                    };
                }
                v0 = uu_env::split_iterator::SplitIterator::state_double_quoted(a1);
                break;
            }
            36 => {
                uu_env::split_iterator::SplitIterator::substitute_variable();
                break;
            }
            _ => {
LABEL_4d9cfe:
            }
        }
        goto LABEL_4d9cfe;
    }
    match (v1) {
        39 => {
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                break;
            }
            v0 = uu_env::split_iterator::SplitIterator::state_single_quoted(a1);
            goto LABEL_4d9c69;
        }
        92 => {
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                break;
            }
            v0 = uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a1);
            goto LABEL_4d9c69;
        }
        1114112 => {
            uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
            return struct4 {
                field_0: 6
            };
        }
        _ => {
LABEL_4d9cfe:
            if <T as core::slice::cmp::SliceContains>::slice_contains(&v1, &g_425318, 6) as i8 {
                uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
                uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 == 8 {
                    return struct4 {
                        field_0: 8
                    };
                }
                break;
            } else {
                v0 = uu_env::split_iterator::SplitIterator::take_one(a1);
                if v0 != 8 {
                    return struct40 {
                        field_0: v3 as i32
                        field_4: v4
                        field_20: *((&v0 as &char + 20) as &i128)
                        field_36: *((&v0 as &char + 36) as &i32)
                    };
                }
                goto LABEL_4d9c73;
            }
        }
    }
LABEL_4d9c69:
    if v0 != 8 {
        return struct40 {
            field_0: v5
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: v3
        };
    }
    continue;
    return struct40 {
        field_0: v5
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: v3
    };
}
