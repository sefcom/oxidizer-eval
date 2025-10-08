fn uu_env::split_iterator::SplitIterator::state_single_quoted(a1: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x40]
    let v1: struct21;  // [bp-0x40], Other Possible Types: Option<struct17>
    let v2: struct40;  // [bp-0x40]
    let v3: u128;  // [bp-0x30]
    let v5: u32;  // eax

    loop {
        uu_env::split_iterator::SplitIterator::get_current_char(a1 as u32);
        match (v5) {
            92 => {
                v1 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                match v1 {
                    Some(_) => {
                        return struct40 {
                            field_0: v0
                            field_16: v3
                            field_32: v2.field_32
                        };
                    },
                    None => {
                        v2 = uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(a1);
                    },
                }
LABEL_470cf0:
                if v0 as i32 != 12 {
                    return struct40 {
                        field_0: v0
                        field_16: v3
                        field_32: v2.field_32
                    };
                }
                break;
            }
            39 => {
                v1 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                goto LABEL_470d63;
            }
            1114112 => {
                return struct16 {
                    field_0: 0x2700000000
                    field_8: *((a1 + 56) as &i64)
                };
            }
            _ => {
                v1 = uu_env::split_iterator::SplitIterator::take_one(a1);
                goto LABEL_470cf0;
            }
        }
    }
LABEL_470d63:
    match v1 {
        Some(_) => {
            return struct40 {
                field_0: v0
                field_16: v3
                field_32: v2.field_32
            };
        },
        None => {
            return struct4 {
                field_0: 12
            };
        },
    }
}
