fn uu_env::split_iterator::SplitIterator::state_unquoted(a1: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: struct8;  // [bp-0x58]
    let v1: struct40;  // [bp-0x58]
    let v2: struct40;  // [bp-0x58]
    let v3: struct41;  // [bp-0x58]
    let v4: u32;  // [bp-0x2c]
    let v6: i64;  // rdi
    let v7: u128;  // xmm0
    let v8: i64;  // rdi
    let v9: i64;  // rdi
    let v10: i64;  // rdi
    let v11: struct40;  // xmm0

    loop {
        v4 = uu_env::split_iterator::SplitIterator::get_current_char(a0) as i32;
        if v4 <= 38 {
            match (v4) {
                34 => {
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 != 8 {
                        *((v10 + 32) as &i64) = v3.field_21;
                        v11 = *(&v3.field_0 as &i128);
                        *((v10 + 16) as &u128) = v3.field_5;
                        *(v10 as &struct40) = v11;
                        return;
                    }
                    v1 = uu_env::split_iterator::SplitIterator::state_double_quoted(a0);
LABEL_4d9c69:
                    if v0 != 8 {
                        *((v10 + 32) as &i64) = v3.field_21;
                        v11 = *(&v3.field_0 as &i128);
                        *((v10 + 16) as &u128) = v3.field_5;
                        *(v10 as &struct40) = v11;
                        return;
                    }
                    continue;
                }
                36 => {
                    uu_env::split_iterator::SplitIterator::substitute_variable(a0, a1);
                    goto LABEL_4d9c69;
                }
                _ => {
                    if <T as core::slice::cmp::SliceContains>::slice_contains(&v4, &g_425318, 6) {
                        goto LABEL_4d9d56;
                    }
                    uu_env::split_iterator::SplitIterator::take_one(a0, a1);
                    if v0 != 8 {
                        *((v6 + 36) as &i32) = *((&v3.field_21 as &char + 4) as &i32);
                        v7 = *(&v3.field_4 as &i128);
                        *((v6 + 20) as &i128) = *((&v3.field_5 as &char + 4) as &i128);
                        *((v6 + 4) as &u128) = v7;
                        *(v6 as &struct8) = v0;
                        return;
                    }
                    break;
                }
            }
        } else {
            match (v4) {
                39 => {
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 != 8 {
                        *((v10 + 32) as &i64) = v3.field_21;
                        v11 = *(&v3.field_0 as &i128);
                        *((v10 + 16) as &u128) = v3.field_5;
                        *(v10 as &struct40) = v11;
                        return;
                    }
                    v2 = uu_env::split_iterator::SplitIterator::state_single_quoted(a0);
                }
                92 => {
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 != 8 {
                        *((v10 + 32) as &i64) = v3.field_21;
                        v11 = *(&v3.field_0 as &i128);
                        *((v10 + 16) as &u128) = v3.field_5;
                        *(v10 as &struct40) = v11;
                        return;
                    }
                    v3 = uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a0);
                }
                1114112 => {
                    uu_env::split_iterator::SplitIterator::push_word_to_words(a0);
                    *(v8 as &i32) = 6;
                    return;
                }
                _ => {
                    if <T as core::slice::cmp::SliceContains>::slice_contains(&v4, &g_425318, 6) {
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
        *((v10 + 32) as &i64) = v3.field_21;
        v11 = *(&v3.field_0 as &i128);
        *((v10 + 16) as &u128) = v3.field_5;
        *(v10 as &struct40) = v11;
        return;
    }
    *(v9 as &i32) = 8;
    return;
}
