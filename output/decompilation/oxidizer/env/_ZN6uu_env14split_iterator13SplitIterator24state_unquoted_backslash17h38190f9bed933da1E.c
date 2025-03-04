fn uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a0: &struct41, a1: void*) -> u64 {
    let v0: Result<struct40, struct1>;  // [sp-0x40], Other Possible Types: int, struct21
    let v1: Result<struct40, struct1>;  // [bp-0x40]
    let v4: i32;  // eax
    let v5: i64;  // r15
    let v6: Option<struct17>;  // rax

    v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    v5 = v4 as u64;
    if v4 > 91 {
        if v5 as u32 > 98 {
            match (v5 as u32) {
                99 => {
                    uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
                    return struct4 {
                        field_0: 6
                    };
                }
                1114112 => {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Unquoted");
                    return struct12 {
                        field_0: 1
                        field_8: <UNKNOWN>
                    };
                }
                _ => {
                    v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v5 & 4294967295);
                }
            }
        } else {
            match (v5 as u32) {
                92 => {
                    break;
                }
                95 => {
                    v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                    if v0.field_0 == 8 {
                        uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
                        return struct4 {
                            field_0: 7
                        };
                    }
                    return struct40 {
                        field_0: v9
                        field_16: v0 as i128
                        field_32: v6
                    };
                }
                _ => {
                    v1 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v5 & 4294967295);
                }
            }
        }
        v6 = (&v0)[4] as i8;
        if v0 as i32 != 8 {
            return struct41 {
                field_0: v8
                field_4: v6 as u8
                field_5: v10
                field_21: (&v0)[21] as i128
                field_36: <UNKNOWN>
            };
        } else if !v6 as u8 {
            return struct16 {
                field_0: 3
                field_4: v5 as u32
                field_8: v6
            };
        } else {
            return struct4 {
                field_0: 8
            };
        }
    } else {
        match (v5 as u32) {
            10 => {
                v6 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 as i32 == 8 {
                    return struct4 {
                        field_0: 8
                    };
                }
            }
            11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 | 32 | 33 | 35 | 37 | 38 => {
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v5 & 4294967295);
                break;
            }
            34 | 36 | 39 => {
                v6 = uu_env::split_iterator::SplitIterator::take_one(a1);
                if v0 as i32 == 8 {
                    return struct4 {
                        field_0: 8
                    };
                }
            }
            _ => {
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v5 & 4294967295);
                break;
            }
        }
        return struct40 {
            field_0: v9
            field_16: v0 as i128
            field_32: v6
        };
    }
}
