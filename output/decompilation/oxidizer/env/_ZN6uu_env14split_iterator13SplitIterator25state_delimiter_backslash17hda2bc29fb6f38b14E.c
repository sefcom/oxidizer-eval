fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a0: &struct41, a1: void*) -> u64 {
    let v0: i320;  // [sp-0x40], Other Possible Types: Result<struct40, struct1>, Option<struct17>
    let v3: i64;  // r15

    v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    match (v3 - 34 & 4294967295) {
        0 | 1 | 2 | 5 | 58 => {
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1);
            if !(v0 == 8) {
                goto LABEL_4d9b8e;
            }
            break;
        }
        3 | 4 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 | 32 | 33 | 34 | 35 | 36 | 37 | 38 | 39 | 40 | 41 | 42 | 43 | 44 | 45 | 46 | 47 | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 | 57 | 59 | 60 | 62 | 63 | 64 => {
            v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v3 & 4294967295);
            if v0 != 8 {
                return struct41 {
                    field_0: v8
                    field_4: v6 as i8
                    field_5: v10
                    field_21: *((&v0 as &char + 21) as &i128)
                    field_36: <UNKNOWN>
                };
            } else if !*((&v0 as &char + 4) as &i8) {
                return struct16 {
                    field_0: 3
                    field_4: v3 as i32
                    field_8: v6
                };
            }
        }
        61 => {
LABEL_4d9b72:
            uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
LABEL_4d9b8e:
                return struct40 {
                    field_0: v9
                    field_16: v0
                    field_32: v6
                };
            }
            return struct4 {
                field_0: 8
            };
        }
        65 => {
            return struct4 {
                field_0: 6
            };
        }
        _ => {
            if v3 == 10 {
                goto LABEL_4d9b72;
            }
            if v3 == 0x110000 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Delimiter");
                return struct12 {
                    field_0: 1
                    field_8: <UNKNOWN>
                };
            }
        }
    }
    return uu_env::split_iterator::SplitIterator::state_unquoted(a0, a1);
}
