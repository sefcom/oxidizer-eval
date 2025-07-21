fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1: i64) -> : struct41 {
    let a0: u64;  // rdi
    let v0: Result<struct40, struct5>;  // [bp-0x40], Other Possible Types: struct21, u32
    let v1: u8;  // [bp-0x3c]
    let v2: i8;  // [bp-0x20]
    let v4: u32;  // r15d
    let v10: u32;  // ecx

    v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    match (v4) {
        34 | 35 | 36 | 39 | 92 => {
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1);
            if v0.field_0 == 8 {
                return uu_env::split_iterator::SplitIterator::state_unquoted(a0, a1) as u64;
            }
            break;
        }
        37 | 38 | 40 | 41 | 42 | 43 | 44 | 45 | 46 | 47 | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 | 57 | 58 | 59 | 60 | 61 | 62 | 63 | 64 | 65 | 66 | 67 | 68 | 69 | 70 | 71 | 72 | 73 | 74 | 75 | 76 | 77 | 78 | 79 | 80 | 81 | 82 | 83 | 84 | 85 | 86 | 87 | 88 | 89 | 90 | 91 | 93 | 94 | 96 | 97 | 98 => {
            break;
        }
        95 => {
            goto LABEL_4d9b72;
        }
        99 => {
            return struct4 {
                field_0: 6
            };
        }
        _ => {
            match (v4) {
                10 => {
LABEL_4d9b72:
                    uu_env::split_iterator::SplitIterator::skip_one(&v0 as u8, a1);
                    if v0 == 8 {
                        return struct4 {
                            field_0: 8
                        };
                    }
                }
                1114112 => {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Delimiter");
                    return struct16 {
                        field_0: 1
                        padding_4: <UNKNOWN>
                        field_8: *((a1 + 56) as &i64)
                    };
                }
                _ => {
                    v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4);
                    v10 = v0 as i32;
                    if v0 as i32 != 8 {
                        return struct48 {
                            field_0: v0 as i32
                            field_4: v1
                            field_5: <UNKNOWN>
                            field_21: <UNKNOWN>
                            field_36: <UNKNOWN>
                        };
                    } else if !v1 {
                        return struct16 {
                            field_0: 3
                            field_4: v4
                            field_8: *((a1 + 56) as &i64)
                        };
                    } else {
                        return uu_env::split_iterator::SplitIterator::state_unquoted(a0, a1) as u64;
                    }
                }
            }
        }
    }
    return struct40 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v0 as i128
        field_32: *(&v2 as &i64)
    };
}
