fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a0: &struct41, a1: void*, a2: u32) -> u64 {
    let v0: i136;  // [sp-0x40], Other Possible Types: Result<struct40, struct5>, Option<struct17>
    let v1: i8;  // [bp-0x20]
    let v3: i64;  // r15
    let v6: struct21;  // rax
    let v7: i64;  // rdx
    let v8: i64;  // r14
    let v9: i32;  // ecx
    let v10: i128;  // xmm0
    let v11: i128;  // xmm0
    let v12: i64;  // rdx

    v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    switch (v3 - 34 & 4294967295) {
    case 0: case 1: case 2: case 5: case 58:
        v0 = uu_env::split_iterator::SplitIterator::take_one(a1, v7);
        if v0 == 8 {
            goto LABEL_4d9b27;
        }
        break;
    case 3: case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 59: case 60: case 62: case 63: case 64:
        v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v3 & 4294967295);
        v9 = v0;
        v6 = *((&v0 as &char + 4) as &i8);
        if v9 != 8 {
            v11 = *((&v0 as &char + 5) as &i128);
            return struct41 {
                field_0: v9
                field_4: v6 as u8
                field_5: v11
                field_21: *((&v0 as &char + 21) as &i128)
                field_36: <UNKNOWN>
            };
        } else if !v6 as u8 {
            v6 = *((a1 + 56) as &i64);
            return struct16 {
                field_0: 3
                field_4: v3 as i32
                field_8: v6
            };
        }
LABEL_4d9b27:
        return uu_env::split_iterator::SplitIterator::state_unquoted(a0, a1, v12);
    case 61:
LABEL_4d9b72:
        v6 = uu_env::split_iterator::SplitIterator::skip_one(a1);
        if v0 == 8 {
            return struct4 {
                field_0: 8
            };
        }
    case 65:
        return struct4 {
            field_0: 6
        };
    default:
        if v3 == 10 {
            goto LABEL_4d9b72;
        }
        if v3 == 0x110000 {
            v8 = *((a1 + 56) as &i64);
            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 16, "Delimiter");
            *(a0 as &i32) = 1;
            *((a0 + 8) as &i64) = v8;
            return v6;
        }
    }
    v6 = v1;
    v10 = v0;
    return struct40 {
        field_0: v10
        field_16: v0
        field_32: v6
    };
}
