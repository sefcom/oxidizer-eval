fn uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(a0: &struct41, a1: void*) -> u64 {
    let v0: Result<struct40, struct1>;  // [sp-0x40]
    let v3: i32;  // eax

    v3 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    switch (v3) {
    case 10:
        uu_env::split_iterator::SplitIterator::skip_one(a1);
        return struct40 {
            field_0: v6
            field_16: v1
            field_32: v4
        };
    case 34: case 36:
        break;
    case 92:
        uu_env::split_iterator::SplitIterator::take_one(a1);
        return struct40 {
            field_0: v6
            field_16: v1
            field_32: v4
        };
    case 99:
        return struct12 {
            field_0: 2
            field_8: <UNKNOWN>
        };
    case 1114112:
        return struct16 {
            field_0: 0x2200000000
            field_8: v4
        };
    default:
        v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v3) as u320;
    }
    match v0 {
        Err(_) => {
            return struct4 {
                field_0: 8
            };
            return struct16 {
                field_0: 3
                field_4: v3
                field_8: v4
            };
        },
        Ok(_) => {
            return struct41 {
                field_0: v7
                field_4: v4 as i8
                field_5: v8
                field_21: *((&v0 as &char + 21) as &i128)
                field_36: <UNKNOWN>
            };
        },
    }
}
