fn uu_sort::KeyPosition::new(a1: i64, a2: i64, a3: i32, a4: i32) -> Result<struct17, struct24> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0xa8], Other Possible Types: u8
    let v1: struct72;  // [bp-0x98], Other Possible Types: u64
    let v2: Result<struct24, struct16>;  // [bp-0x90]
    let v3: struct24;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: core::str::iter::SplitInternal<char>;  // [bp-0x78]
    let v6: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v7: alloc::string::String;  // [bp-0x38]
    let v9: core::option::Option<&str>;  // rax
    let v10: u64;  // r15
    let v11: core::option::Option<&str>;  // rax
    let v12: u64;  // rdx

    v6 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, a1, a2);
    v5 = core::str::iter::SplitInternal<char> {
        start: 0
        end: a2
        matcher: core::str::pattern::CharSearcher {
            haystack: &str {
                data_ptr: <UNKNOWN>
                length: <UNKNOWN>
            }
            finger: <UNKNOWN>
            finger_back: <UNKNOWN>
            utf8_encoded: <UNKNOWN>
            needle: <UNKNOWN>
            utf8_size: <UNKNOWN>
        }
        finished: <UNKNOWN>
    };
    v7 = 1;
    v9 = core::str::iter::SplitInternal<P>::next(&v5) as u64;
    match v9 {
        None => {
            uu_sort::KeyPosition::new::{{closure}}(&v0, a1, a2);
            return Err(struct24 {
                field_0: *(&v0 as &i128)
                field_16: v1
            });
        },
        Some(_) => {
            v10 = v9;
            v11 = core::str::iter::SplitInternal<P>::next(&v5) as u64;
            v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v10, v12);
            if v2 as i8 {
                uu_sort::KeyPosition::new::{{closure}}(&v0, v10, v12, *((&v2 as &char + 1) as &i8));
                return Err(struct24 {
                    field_0: *(&v0.field_0 as &i128)
                    field_16: v1
                });
            } else if v3 {
                v0 = struct16 {
                    field_0: 0x8000000000000000
                    field_8: a3
                };
                v2 = core::option::Option<T>::map_or(v11, v12, &v0);
                match v2 {
                    Ok(_) => {
                        *((a0 + 8) as &i64) = v2 as i64;
                        *((a0 + 16) as &struct24) = v3;
                        *((a0 + 24) as &u64) = v4;
                    },
                    Err(_) => {
                        return Ok(struct24 {
                            field_0: v3
                            field_8: v3
                            field_16: a4 as u8
                        });
                    },
                }
            } else {
                <T as alloc::slice::hack::ConvertVec>::to_vec("field index can not be 0", a3);
            }
        },
    }
}
