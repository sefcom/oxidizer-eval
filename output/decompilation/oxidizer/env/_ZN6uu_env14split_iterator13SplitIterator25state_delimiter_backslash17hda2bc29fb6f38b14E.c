fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a1: i64) -> : struct41 {
    let a0: i64;  // rsi
    let v0: u32;  // [bp-0x40]
    let v1: struct16;  // [bp-0x3c]
    let v2: i8;  // [bp-0x3b]
    let v3: i8;  // [bp-0x30]
    let v4: i8;  // [bp-0x2b]
    let v5: i8;  // [bp-0x20]
    let v6: i8;  // [bp-0x1c]
    let v8: u32;  // r15d
    let v9: i64;  // ecx
    let v10: i64;  // rdi
    let v11: u64;  // r14
    let v12: i64;  // rdi
    let v13: i64;  // rdi
    let v14: i64;  // rdi
    let v15: u128;  // xmm0
    let v16: i64;  // rdi
    let v17: u128;  // xmm0
    let v18: u64;  // rdx
    let v19: u64;  // rax
    let v20: i64;  // rdi

    v8 = uu_env::split_iterator::SplitIterator::get_current_char(a0 as u32) as i32;
    match (v8) {
        34 | 35 | 36 | 39 | 92 => {
            uu_env::split_iterator::SplitIterator::take_one(a0, a1);
            if v0 == 8 {
                uu_env::split_iterator::SplitIterator::state_unquoted(a0, v18);
                return;
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
            *(v10 as &i32) = 6;
            return;
        }
        _ => {
            match (v8) {
                10 => {
LABEL_4d9b72:
                    uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                    if v0 == 8 {
                        *(v13 as &i32) = 8;
                        return;
                    }
                }
                1114112 => {
                    v11 = *((a0 + 56) as &i64);
                    <T as alloc::slice::hack::ConvertVec>::to_vec(v12 + 16, "Delimiter");
                    *(v12 as &i32) = 1;
                    *((v12 + 8) as &u64) = v11;
                    return;
                }
                _ => {
                    uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a0, v8, v9);
                    if v0 != 8 {
                        *((v16 + 36) as &i32) = *(&v6 as &i32);
                        v17 = *(&v2 as &i128);
                        *((v16 + 21) as &i128) = *(&v4 as &i128);
                        *((v16 + 5) as &u128) = v17;
                        *(v16 as &u32) = v0;
                        *((v16 + 4) as &struct16) = v1;
                        return;
                    } else if v1 {
                        uu_env::split_iterator::SplitIterator::state_unquoted(a0, v18);
                        return;
                    } else {
                        v19 = *((a0 + 56) as &i64);
                        *(v20 as &i32) = 3;
                        *((v20 + 4) as &u32) = v8;
                        *((v20 + 8) as &u64) = v19;
                        return;
                    }
                }
            }
        }
    }
    *((v14 + 32) as &i64) = *(&v5 as &i64);
    v15 = *(&v0 as &i128);
    *((v14 + 16) as &i128) = *(&v3 as &i128);
    *(v14 as &u128) = v15;
    return;
}
