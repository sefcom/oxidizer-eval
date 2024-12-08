fn uu_env::split_iterator::SplitIterator::state_unquoted_backslash(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i168;  // [sp-0x40], Other Possible Types: Result<struct40, struct5>, struct21
    let v1: i8;  // [bp-0x20]
    let v3: i32;  // eax
    let v4: i64;  // r15
    let v5: Option<struct17>;  // rax
    let v6: i64;  // rdx
    let v7: i64;  // rsi
    let v8: i64;  // rdx
    let v9: i64;  // r14
    let v10: i32;  // ecx
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i128;  // xmm0
    let v14: i128;  // xmm0

    v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    v4 = v3;
    if v3 > 91 {
        if v4 > 98 {
            switch (v4) {
            case 99:
                v5 = uu_env::split_iterator::SplitIterator::push_word_to_words(a1, v7, v8);
                *(a0 as &i32) = 6;
                return v5;
            case 1114112:
                v9 = *((a1 + 56) as &i64);
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Unquoted");
                *(a0 as &i32) = 1;
                *((a0 + 8) as &i64) = v9;
                return v5;
            default:
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295);
            }
        } else {
            switch (v4) {
            case 92:
                break;
            case 95:
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 != 8 {
                    v5 = v1;
                    v13 = v0;
                    return struct40 {
                        field_0: v13
                        field_16: v0
                        field_32: v5
                    };
                }
                v5 = uu_env::split_iterator::SplitIterator::push_word_to_words(a1, v11, v12);
                *(a0 as &i32) = 7;
                return v5;
            default:
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295);
            }
        }
        v10 = v0;
        v5 = *((&v0 as &char + 4) as &i8);
        if v10 != 8 {
            v14 = *((&v0 as &char + 5) as &i128);
            return struct41 {
                field_0: v10
                field_4: v5 as u8
                field_5: v14
                field_21: *((&v0 as &char + 21) as &i128)
                field_36: <UNKNOWN>
            };
        } else if !v5 as u8 {
            v5 = *((a1 + 56) as &i64);
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
            if v0 != 8 {
                vvar_217{reg 224} = v0;
                return struct40 {
                    field_0: v13
                    field_16: v0
                    field_32: v1
                };
            }
        case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 35: case 37: case 38:
            v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295);
            break;
        case 34: case 36: case 39:
            v5 = uu_env::split_iterator::SplitIterator::take_one(a1, v6);
            if v0 != 8 {
                vvar_222{reg 224} = v0;
                return struct40 {
                    field_0: v13
                    field_16: v0
                    field_32: v1
                };
            }
        default:
            v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4 & 4294967295);
            break;
        }
    }
    return struct4 {
        field_0: 8
    };
}
