fn fd::regex_helper::hir_has_uppercase_char(a0: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x38], Other Possible Types: struct16
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: struct16;  // [bp-0x20]
    let v5: i64;  // r8
    let v7: struct24;  // rbx
    let v8: core::option::Option<&str>;  // eax
    let v9: u64;  // rsi

    match (v5) {
        1 => {
            v7 = *((a0 + 8) as &i64);
            v0 = core::str::converts::from_utf8(v7, *((a0 + 16) as &i64));
            match v0 {
                Err(_) => {
                    v3 = struct16 {
                        field_0: v7
                        field_8: *((a0 + 16) as &i64) + v7
                    };
                    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v3) as u64;
                },
                Ok(_) => {
                    v3 = struct16 {
                        field_0: v1
                        field_8: v2 + v1
                    };
                    v8 = core::iter::traits::iterator::Iterator::try_fold(&v3) as u32;
                },
            }
        }
        2 => {
            if (*(a0 as &i64) & 1) {
                v0 = struct16 {
                    field_0: *((a0 + 16) as &i64)
                    field_8: *((a0 + 16) as &i64) + *((a0 + 24) as &i64) * 2
                };
                v8 = core::iter::traits::iterator::Iterator::try_fold(&v0);
            } else {
                v0 = struct16 {
                    field_0: *((a0 + 16) as &i64)
                    field_8: *((a0 + 16) as &i64) + *((a0 + 24) as &i64) * 8
                };
                v8 = core::iter::traits::iterator::Iterator::try_fold(&v0);
            }
        }
        4 => {
            break;
        }
        6 | 7 => {
            v0 = struct16 {
                field_0: *((a0 + 16) as &i64)
                field_8: *((a0 + 24) as &i64) * 48 + *((a0 + 16) as &i64)
            };
            return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
        }
        _ => {
            return 0;
        }
    }
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8 as u64, v9);
}
