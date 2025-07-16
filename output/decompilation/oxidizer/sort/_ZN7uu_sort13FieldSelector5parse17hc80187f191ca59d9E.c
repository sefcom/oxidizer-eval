fn uu_sort::FieldSelector::parse(a1: i64, a2: i64, a3: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u256;  // [bp-0x128]
    let v1: u64;  // [bp-0x128]
    let v2: u64;  // [bp-0x118]
    let v3: u64;  // [bp-0xf8]
    let v4: void*;  // [bp-0xf0], Other Possible Types: u8
    let v5: void*;  // [bp-0xe0]
    let v6: u32;  // [bp-0xd8]
    let v7: u208;  // [bp-0xd0], Other Possible Types: struct25
    let v8: u64;  // [bp-0xd0]
    let v9: u64;  // [bp-0xc8]
    let v10: u64;  // [bp-0xc0]
    let v11: u64;  // [bp-0xb8]
    let v12: u128;  // [bp-0xb0]
    let v13: i8;  // [bp-0xa0]
    let v14: u8;  // [bp-0x99]
    let v15: u256;  // [bp-0x98]
    let v16: u440;  // [bp-0x78]
    let v17: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v18: u16;  // [bp-0x38]
    let v20: core::option::Option<&str>;  // rax
    let v21: u64;  // r13
    let v22: u64;  // r12
    let v23: core::option::Option<&str>;  // rax
    let v25: i64;  // rdi
    let v26: u128;  // xmm0
    let v27: u128;  // xmm1
    let v28: i64;  // rdi

    v3 = a2;
    v17 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a0, a1);
    v16 = core::str::iter::SplitInternal<char> {
        start: 0
        end: a1
        matcher: core::str::pattern::CharSearcher {
            haystack: &str {
                data_ptr: <UNKNOWN>
                length: <UNKNOWN>
            }
            finger: <UNKNOWN>
            finger_back: <UNKNOWN>
            needle: <UNKNOWN>
            utf8_size: <UNKNOWN>
            utf8_encoded: <UNKNOWN>
        }
        finished: <UNKNOWN>
    };
    v18 = 1;
    v20 = core::str::iter::SplitInternal<P>::next(&v16) as u64;
    match v20 {
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
        Some(_) => {
            uu_sort::FieldSelector::split_key_options(v20, a1, a2);
            v21 = v8;
            v22 = v9;
            v23 = core::str::iter::SplitInternal<P>::next(&v16) as u64;
            match v23 {
                Some(_) => {
                    core::ops::function::FnOnce::call_once(&v4, v23, a1);
LABEL_52132b:
                    v15 = struct32 {
                        field_0: v21
                        field_8: v22
                        field_16: v10
                        field_24: v11
                    };
                    v0 = struct32 {
                        field_0: *(&v4 as &i128)
                        field_16: *(&v5 as &i128)
                    };
                    v7 = uu_sort::FieldSelector::parse_with_options(&v15, &v0);
                    if v14 == 2 {
                        v2 = v10;
                        memcpy(&v1, &v7, 16);
                        *(v28 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a0, a1, &v1);
                        *((v28 + 8) as &&u8) = &g_5ff678;
                        *((v28 + 55) as &i8) = 2;
                        return;
                    }
                },
                None => {
                    v4 = 0;
                    if v11 || v4 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, 1, 0) as i8 {
                        goto LABEL_52132b;
                    }
                    v0 = struct32 {
                        field_0: v21
                        field_8: v22
                        field_16: &v3
                        field_24: &v4
                    };
                    v7 = uu_sort::FieldSelector::parse::{{closure}}(&v0);
                    if v14 == 2 {
                        v2 = v10;
                        memcpy(&v1, &v7, 16);
                        *(v28 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a0, a1, &v1);
                        *((v28 + 8) as &&u8) = &g_5ff678;
                        *((v28 + 55) as &i8) = 2;
                        return;
                    }
                },
            }
            *((v25 + 48) as &i64) = *(&v13 as &i64);
            v26 = v7 as i128;
            v27 = v7.field_0;
            *((v25 + 32) as &u128) = v12;
            *((v25 + 16) as &u128) = v27;
            *(v25 as &u128) = v26;
            return;
        },
    }
}
