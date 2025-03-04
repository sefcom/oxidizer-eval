fn uu_env::split_iterator::SplitIterator::state_double_quoted(a0: &struct40, a1: void*) -> u64 {
    let v0: Option<struct17>;  // [sp-0x40], Other Possible Types: int, struct21, struct40, struct41
    let v2: i32;  // eax

    do {
        v2 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        match (v2) {
            36 => {
                v0 = uu_env::split_iterator::SplitIterator::substitute_variable(a1);
            }
            34 => {
                uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0 as i32 == 8 {
                    return struct4 {
                        field_0: 8
                    };
                }
                break;
            }
            92 => {
                v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                if v0.field_0 != 8 {
                    break;
                }
                v0 = uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(a1);
                continue;
            }
            1114112 => {
                return struct16 {
                    field_0: 0x2200000000
                    field_8: v3
                };
            }
            _ => {
                v0 = uu_env::split_iterator::SplitIterator::take_one(a1);
            }
        }
    } while (v0 as i32 == 8);
    return struct40 {
        field_0: v4
        field_16: (&v0)[16] as i128
        field_32: v3
    };
}
