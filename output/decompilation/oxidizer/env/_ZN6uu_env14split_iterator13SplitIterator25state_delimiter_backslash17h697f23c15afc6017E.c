fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1: i64) -> : struct41 {
    let a0: u64;  // rdi
    let v0: Result<struct40, struct5>;  // [bp-0x40], Other Possible Types: struct21
    let v1: Option<struct17>;  // [bp-0x40]
    let v2: u8;  // [bp-0x3c]
    let v3: i8;  // [bp-0x20]
    let v5: u32;  // r15d

    v5 = uu_env::split_iterator::SplitIterator::get_current_char(a1 as u32);
    match (v5) {
        34 | 35 | 36 | 39 | 92 => {
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1);
            if v0.field_0 != 12 {
                return struct40 {
                    field_0: v1 as i128
                    field_16: *((&v1 as &char + 16) as &i128)
                    field_32: *(&v3 as &i64)
                };
            }
            break;
        }
        37 | 38 | 40 | 41 | 42 | 43 | 44 | 45 | 46 | 47 | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 | 57 | 58 | 59 | 60 | 61 | 62 | 63 | 64 | 65 | 66 | 67 | 68 | 69 | 70 | 71 | 72 | 73 | 74 | 75 | 76 | 77 | 78 | 79 | 80 | 81 | 82 | 83 | 84 | 85 | 86 | 87 | 88 | 89 | 90 | 91 | 93 | 94 | 96 | 97 | 98 => {
            break;
        }
        95 => {
            goto LABEL_470922;
        }
        99 => {
            return struct4 {
                field_0: 9
            };
        }
        _ => {
            match (v5) {
                10 => {
LABEL_470922:
                    v1 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                    match v1 {
                        Some(_) => {
                            return struct40 {
                                field_0: v1 as i128
                                field_16: *((&v1 as &char + 16) as &i128)
                                field_32: *(&v3 as &i64)
                            };
                        },
                        None => {
                            return struct4 {
                                field_0: 12
                            };
                        },
                    }
                }
                1114112 => {
                    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 16, "Delimiter");
                    return struct16 {
                        field_0: 1
                        padding_4: <UNKNOWN>
                        field_8: *((a1 + 56) as &i64)
                    };
                }
                _ => {
                    v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v5);
                    if v0 as i32 != 12 {
                        return struct48 {
                            field_0: v0 as i32
                            field_4: v2
                            field_5: <UNKNOWN>
                            field_21: <UNKNOWN>
                            field_36: <UNKNOWN>
                        };
                    } else if !(v2 & 1) {
                        return struct16 {
                            field_0: 3
                            field_4: v5
                            field_8: *((a1 + 56) as &i64)
                        };
                    }
                }
            }
        }
    }
    uu_env::split_iterator::SplitIterator::state_unquoted(a0, a1);
    return;
}
