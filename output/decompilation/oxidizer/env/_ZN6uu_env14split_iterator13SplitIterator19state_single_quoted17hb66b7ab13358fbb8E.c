fn uu_env::split_iterator::SplitIterator::state_single_quoted(a0: &struct40, a1: void*) -> u64 {
    let v0: Option<struct17>;  // [sp-0x40], Other Possible Types: int, struct40, struct21

LABEL_4d9f47:
    match (uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32) {
        92 => {
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0.field_0 != 8 {
                break;
            }
            v0 = uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(a1);
            if v0 as i32 == 8 {
                goto LABEL_4d9f47;
            } else {
                goto LABEL_4d9fc2;
            }
            goto LABEL_4d9f47;
        }
        39 => {
            uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 as i32 == 8 {
                return struct4 {
                    field_0: 8
                };
            }
            break;
        }
        1114112 => {
            return struct16 {
                field_0: 0x2700000000
                field_8: v3
            };
        }
        _ => {
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1);
            continue;
        }
    }
LABEL_4d9fc2:
    return struct40 {
        field_0: v4
        field_16: v0.field_16
        field_32: v3
    };
}
