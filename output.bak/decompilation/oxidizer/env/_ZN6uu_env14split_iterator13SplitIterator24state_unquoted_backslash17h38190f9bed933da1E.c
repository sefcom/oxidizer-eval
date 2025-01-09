fn uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a0: &struct41, a1: void*) -> u64 {
    let v0: i320;  // [sp-0x40], Other Possible Types: Result<struct40, struct1>, struct21
    let v3: i32;  // eax
    let v4: i64;  // r15
    let v5: Option<struct17>;  // rax

    v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    v4 = v3;
    if v3 > 91 {
        if v4 > 98 {
            switch (v4) {
            case 99:
                uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
                return struct4 {
                    field_0: 6
                };
            case 1114112:
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Unquoted");
                return struct12 {
                    field_0: 1
                    field_8: <UNKNOWN>
                };
            default:
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295) as u320;
            }
        } else {
            switch (v4) {
            case 92:
                break;
            case 95:
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 == 8 {
                    uu_env::split_iterator::SplitIterator::push_word_to_words(a1);
                    return struct4 {
                        field_0: 7
                    };
                }
                return struct40 {
                    field_0: v8
                    field_16: v0
                    field_32: v5
                };
            default:
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295) as u320;
            }
        }
        v5 = *((&v0 as &char + 4) as &i8);
        if v0 != 8 {
            return struct41 {
                field_0: v7
                field_4: v5 as u8
                field_5: v9
                field_21: *((&v0 as &char + 21) as &i128)
                field_36: <UNKNOWN>
            };
        } else if v5 as u8 {
            return struct4 {
                field_0: 8
            };
        } else {
            return struct16 {
                field_0: 3
                field_4: v4 as i32
                field_8: v5
            };
        }
    } else {
        switch (v4) {
        case 10:
            v5 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 == 8 {
                return struct4 {
                    field_0: 8
                };
            }
        case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 35: case 37: case 38:
            v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295) as u320;
            break;
        case 34: case 36: case 39:
            v5 = uu_env::split_iterator::SplitIterator::take_one(a1) as u136;
            if v0 == 8 {
                return struct4 {
                    field_0: 8
                };
            }
        default:
            v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295) as u320;
            break;
        }
        return struct40 {
            field_0: v8
            field_16: v0
            field_32: v5
        };
    }
}
