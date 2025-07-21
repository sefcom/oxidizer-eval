fn uu_env::split_iterator::SplitIterator::state_unquoted(a1: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: struct8;  // [bp-0x58]
    let v1: struct40;  // [bp-0x58]
    let v2: struct40;  // [bp-0x58]
    let v3: u32;  // [bp-0x2c]
    let v5: i64;  // rdi
    let v6: u128;  // xmm0
    let v7: i64;  // rdi
    let v8: i64;  // rdi
    let v9: i64;  // rdi
    let v10: struct16;  // xmm0

    loop {
        v3 = uu_env::split_iterator::SplitIterator::get_current_char(a0) as i32;
        if v3 <= 38 {
            match (v3) {
                34 => {
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 != 8 {
                        *((v9 + 32) as &u64) = v2.field_32;
                        v10 = v2.field_0;
                        *((v9 + 16) as &u128) = v2.field_16;
                        *(v9 as &struct16) = v10;
                        return;
                    }
                    v1 = uu_env::split_iterator::SplitIterator::state_double_quoted(a0);
LABEL_4d9c69:
                    if v0 != 8 {
                        *((v9 + 32) as &u64) = v2.field_32;
                        v10 = v2.field_0;
                        *((v9 + 16) as &u128) = v2.field_16;
                        *(v9 as &struct16) = v10;
                        return;
                    }
                    continue;
                }
                36 => {
                    uu_env::split_iterator::SplitIterator::substitute_variable(a0, a1);
                    goto LABEL_4d9c69;
                }
                _ => {
                    if <T as core::slice::cmp::SliceContains>::slice_contains(&v3, &g_425318, 6) {
                        goto LABEL_4d9d56;
                    }
                    uu_env::split_iterator::SplitIterator::take_one(a0, a1);
                    if v0 != 8 {
                        *((v5 + 36) as &i32) = *((&v2.field_32 as &char + 4) as &i32);
                        v6 = *((&v2.field_0 as &char + 4) as &i128);
                        *((v5 + 20) as &i128) = *((&v2.field_16 as &char + 4) as &i128);
                        *((v5 + 4) as &u128) = v6;
                        *(v5 as &struct8) = v0;
                        return;
                    }
                    break;
                }
            }
        } else {
            match (v3) {
                39 => {
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 != 8 {
                        *((v9 + 32) as &u64) = v2.field_32;
                        v10 = v2.field_0;
                        *((v9 + 16) as &u128) = v2.field_16;
                        *(v9 as &struct16) = v10;
                        return;
                    }
                    v2 = uu_env::split_iterator::SplitIterator::state_single_quoted(a0);
                }
                92 => {
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 != 8 {
                        *((v9 + 32) as &u64) = v2.field_32;
                        v10 = v2.field_0;
                        *((v9 + 16) as &u128) = v2.field_16;
                        *(v9 as &struct16) = v10;
                        return;
                    }
                    uu_env::split_iterator::SplitIterator::state_unquoted_backslash(&v0, a0);
                }
                1114112 => {
                    uu_env::split_iterator::SplitIterator::push_word_to_words(a0);
                    *(v7 as &i32) = 6;
                    return;
                }
                _ => {
                    if <T as core::slice::cmp::SliceContains>::slice_contains(&v3, &g_425318, 6) {
                        break;
                    }
                }
            }
            goto LABEL_4d9c69;
        }
    }
LABEL_4d9d56:
    uu_env::split_iterator::SplitIterator::push_word_to_words(a0);
    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
    if v0 != 8 {
        *((v9 + 32) as &u64) = v2.field_32;
        v10 = v2.field_0;
        *((v9 + 16) as &u128) = v2.field_16;
        *(v9 as &struct16) = v10;
        return;
    }
    *(v8 as &i32) = 8;
    return;
}
