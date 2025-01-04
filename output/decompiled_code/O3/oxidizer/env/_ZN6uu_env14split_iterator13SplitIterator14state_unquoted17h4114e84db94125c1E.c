fn uu_env::split_iterator::SplitIterator::state_unquoted(a0: &struct40, a1: u32, a2: u32) -> u64 {
    let v0: i168;  // [sp-0x58], Other Possible Types: struct21, Option<struct17>, struct40, struct41
    let v1: i32;  // [sp-0x2c]
    let v3: i64;  // rdx
    let v4: struct21;  // rax
    let v5: i64;  // rsi
    let v6: i128;  // xmm0
    let v7: i64;  // rsi
    let v8: i128;  // xmm0

    loop {
        v1 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        if v1 <= 38 {
            if v1 == 34 {
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 != 8 {
                    vvar_221{reg 224} = v0;
                    return struct40 {
                        field_0: v8
                        field_16: *((&v0 as &char + 16) as &i128)
                        field_32: *((&v0 as &char + 32) as &i64)
                    };
                }
                v0 = uu_env::split_iterator::SplitIterator::state_double_quoted(a1, v3);
                goto LABEL_4d9c69;
            } else {
                if !(v1 == 36) {
                    goto LABEL_4d9cfe;
                }
                v0 = uu_env::split_iterator::SplitIterator::substitute_variable(a1, v3);
            }
        }
        if v1 == 39 {
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                vvar_226{reg 224} = v0;
                return struct40 {
                    field_0: v8
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
            v0 = uu_env::split_iterator::SplitIterator::state_single_quoted(a1, v3);
            goto LABEL_4d9c69;
        } else if v1 != 92 {
            if v1 == 0x110000 {
                v4 = uu_env::split_iterator::SplitIterator::push_word_to_words(a1, v5, v3);
                *(a0 as &i32) = 6;
                return v4;
            }
LABEL_4d9cfe:
            if <T as core::slice::cmp::SliceContains>::slice_contains(&v1, &g_425318, 6) as i8 {
                break;
            }
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1, v3);
            v4 = v0;
            if v4 as u32 != 8 {
                v6 = *((&v0 as &char + 4) as &i128);
                return struct40 {
                    field_0: v4 as u32
                    field_4: v6
                    field_20: *((&v0 as &char + 20) as &i128)
                    field_36: *((&v0 as &char + 36) as &i32)
                };
            }
        } else {
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                vvar_231{reg 224} = v0;
                return struct40 {
                    field_0: v8
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
            v0 = uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a1, v3);
LABEL_4d9c69:
            if v0 != 8 {
                vvar_236{reg 224} = v0;
                return struct40 {
                    field_0: v8
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
        }
    }
    uu_env::split_iterator::SplitIterator::push_word_to_words(a1, v7, v3);
    v4 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    match v0 {
        None => {
            return struct4 {
                field_0: 8
            };
        },
        Some(_) => {
            v4 = *((&v0 as &char + 32) as &i64);
            v8 = v0;
            return struct40 {
                field_0: v8
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v4
            };
        },
    }
}
