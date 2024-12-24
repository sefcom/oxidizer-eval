fn uu_env::split_iterator::SplitIterator::state_unquoted(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i168;  // [sp-0x58], Other Possible Types: struct21, Option<struct17>, struct40, struct41
    let v1: i32;  // [sp-0x2c]
    let v3: i64;  // rdx
    let v4: i64;  // rsi
    let v5: struct21;  // rax
    let v6: i64;  // rsi
    let v7: i128;  // xmm0

    loop {
        v1 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        if v1 <= 38 {
            switch (v1) {
            case 34:
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 != 8 {
                    vvar_208{reg 224} = v0;
                    return struct40 {
                        field_0: v7
                        field_16: *((&v0 as &char + 16) as &i128)
                        field_32: *((&v0 as &char + 32) as &i64)
                    };
                }
                v0 = uu_env::split_iterator::SplitIterator::state_double_quoted(a1, v3);
                break;
            case 36:
                v0 = uu_env::split_iterator::SplitIterator::substitute_variable(a1, v3);
                break;
            default:
LABEL_4d9dca:
            }
            goto LABEL_4d9dca;
        } else {
            switch (v1) {
            case 39:
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 != 8 {
                    vvar_213{reg 224} = v0;
                    return struct40 {
                        field_0: v7
                        field_16: *((&v0 as &char + 16) as &i128)
                        field_32: *((&v0 as &char + 32) as &i64)
                    };
                }
                v0 = uu_env::split_iterator::SplitIterator::state_single_quoted(a1, v3);
                break;
            case 92:
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 != 8 {
                    vvar_218{reg 224} = v0;
                    return struct40 {
                        field_0: v7
                        field_16: *((&v0 as &char + 16) as &i128)
                        field_32: *((&v0 as &char + 32) as &i64)
                    };
                }
                v0 = uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a1, v3);
                break;
            case 1114112:
                v5 = uu_env::split_iterator::SplitIterator::push_word_to_words(a1, v4, v3);
                *(a0 as &i32) = 6;
                return v5;
            default:
LABEL_4d9dca:
                if <T as core::slice::cmp::SliceContains>::slice_contains(&v1, &g_425464, 6) as i8 {
                    goto LABEL_4d9dfe;
                }
                v0 = uu_env::split_iterator::SplitIterator::take_one(a1, v3);
                break;
            }
            if v0 != 8 {
                vvar_223{reg 224} = v0;
                return struct40 {
                    field_0: v7
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
        }
    }
LABEL_4d9dfe:
    uu_env::split_iterator::SplitIterator::push_word_to_words(a1, v6, v3);
    v5 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    match v0 {
        None => {
            return struct4 {
                field_0: 8
            };
        },
        Some(_) => {
            v5 = *((&v0 as &char + 32) as &i64);
            v7 = v0;
            return struct40 {
                field_0: v7
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v5
            };
        },
    }
}
