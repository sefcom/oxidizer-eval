fn uu_env::split_iterator::SplitIterator::state_double_quoted(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i168;  // [sp-0x40], Other Possible Types: Option<struct40>, struct21, struct41
    let v2: i32;  // eax
    let v3: i64;  // rdx
    let v4: struct21;  // rax
    let v5: i128;  // xmm0

    do {
        v2 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        switch (v2) {
        case 36:
            v0 = uu_env::split_iterator::SplitIterator::substitute_variable(a1, v3);
        case 34:
            v4 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 == 8 {
                return struct4 {
                    field_0: 8
                };
            }
            break;
        case 92:
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                break;
            }
            v0 = uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(a1, v3);
            continue;
        case 1114112:
            v4 = *((a1 + 56) as &i64);
            return struct16 {
                field_0: 0x2200000000
                field_8: v4
            };
        default:
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1, v3);
        }
    } while (v0 == 8);
    v4 = *((&v0 as &char + 32) as &i64);
    v5 = v0;
    return struct40 {
        field_0: v5
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: v4
    };
}
