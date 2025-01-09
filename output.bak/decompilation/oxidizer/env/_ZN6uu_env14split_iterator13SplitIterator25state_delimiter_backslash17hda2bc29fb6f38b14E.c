fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash(a0: &struct41, a1: void*) -> u64 {
    let v0: i320;  // [sp-0x40], Other Possible Types: Result<struct40, struct1>, Option<struct17>
    let v3: i64;  // r15

    v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    switch (v3 - 34 & 4294967295) {
    case 0: case 1: case 2: case 5: case 58:
        v0 = uu_env::split_iterator::SplitIterator::take_one(a1) as u136;
        if !(v0 == 8) {
            goto LABEL_4d9b8e;
        }
        break;
    case 3: case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 59: case 60: case 62: case 63: case 64:
        v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v3 & 4294967295) as u320;
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
    case 61:
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
    case 65:
        return struct4 {
            field_0: 6
        };
    default:
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
    return uu_env::split_iterator::SplitIterator::state_unquoted(a0, a1);
}
