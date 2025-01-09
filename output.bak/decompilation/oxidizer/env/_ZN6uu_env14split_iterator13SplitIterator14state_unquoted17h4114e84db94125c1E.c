fn uu_env::split_iterator::SplitIterator::state_unquoted(a0: &struct40, a1: u32) -> u64 {
    let v0: struct21;  // [sp-0x58], Other Possible Types: i136, struct40, Option<struct40>, struct41
    let v1: i32;  // [sp-0x2c]
    let v5: struct21;  // rax
    let v6: i128;  // xmm0

LABEL_4d9c73:
    v1 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    if v1 <= 38 {
        switch (v1) {
        case 34:
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            return struct40 {
                field_0: v4
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v3
            };
            v0 = uu_env::split_iterator::SplitIterator::state_double_quoted(a1);
            break;
        case 36:
            v0 = uu_env::split_iterator::SplitIterator::substitute_variable(a1);
        default:
LABEL_4d9cfe:
            goto LABEL_4d9cfe;
        }
        goto LABEL_4d9c69;
    }
    switch (v1) {
    case 39:
        v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
        return struct40 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: v3
        };
        v0 = uu_env::split_iterator::SplitIterator::state_single_quoted(a1);
        break;
    case 92:
        v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
        return struct40 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: v3
        };
        v0 = uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a1);
        break;
    case 1114112:
        v5 = uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
        return struct4 {
            field_0: 6
        };
    default:
LABEL_4d9cfe:
        if <T as core::slice::cmp::SliceContains>::slice_contains(&v1, &g_425318, 6) as i8 {
            uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
            v5 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            return struct40 {
                field_0: v4
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v3
            };
        }
        v0 = uu_env::split_iterator::SplitIterator::take_one(a1) as u136;
        v5 = v0;
        if v5 as u32 != 8 {
            v6 = *((&v0 as &char + 4) as &i128);
            return struct40 {
                field_0: v5 as u32
                field_4: v6
                field_20: *((&v0 as &char + 20) as &i128)
                field_36: *((&v0 as &char + 36) as &i32)
            };
        }
        goto LABEL_4d9c73;
        goto LABEL_4d9c73;
    }
LABEL_4d9c69:
    return struct40 {
        field_0: v4
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: v3
    };
}
