fn uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(a1: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x44]
    let v1: Option<struct17>;  // [bp-0x40], Other Possible Types: struct16
    let v2: iNone;  // [bp-0x30]
    let v3: i8;  // [bp-0x20]
    let v7: u64;  // rax
    let v9: struct21;  // [bp-0x40]

    v0 = uu_env::split_iterator::SplitIterator::get_current_char(a1 as u32);
    match (v0) {
        92 => {
            v9 = uu_env::split_iterator::SplitIterator::take_one(a1);
            if v9.field_0 != 12 {
                return struct40 {
                    field_0: v1 as i128
                    field_16: v2
                    field_32: *(&v3 as &i64)
                };
            }
            break;
        }
        1114112 => {
            return struct8 {
                field_0: 0x2700000000
            };
        }
        10 => {
            v1 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if let Some(_) = v1 {
                return struct40 {
                    field_0: v1 as i128
                    field_16: v2
                    field_32: *(&v3 as &i64)
                };
            }
            break;
        }
        39 => {
            break;
        }
        _ => {
            v1 = struct16 {
                field_0: &g_41e7c0
                field_8: &g_41e808
            };
            if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1, &v0) {
                return struct16 {
                    field_0: 3
                    field_4: v0
                    field_8: v7
                };
            }
            uu_env::split_iterator::SplitIterator::push_char_to_word(a1, 92);
        }
    }
    return struct4 {
        field_0: 12
    };
}
