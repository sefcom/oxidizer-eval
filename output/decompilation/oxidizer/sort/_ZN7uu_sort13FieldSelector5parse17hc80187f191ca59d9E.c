fn uu_sort::FieldSelector::parse(a1: i64, a2: i64, a3: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x128], Other Possible Types: struct32
    let v1: u128;  // [bp-0x128]
    let v2: u64;  // [bp-0xf8]
    let v3: void*;  // [bp-0xf0], Other Possible Types: u8
    let v4: void*;  // [bp-0xe0]
    let v5: u32;  // [bp-0xd8]
    let v6: struct25;  // [bp-0xd0], Other Possible Types: u256
    let v7: u64;  // [bp-0xd0]
    let v8: u64;  // [bp-0xc8]
    let v9: u64;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb8]
    let v11: u128;  // [bp-0xb0]
    let v12: i8;  // [bp-0xa0]
    let v13: u8;  // [bp-0x99]
    let v14: struct32;  // [bp-0x98]
    let v15: core::str::iter::SplitInternal<char>;  // [bp-0x78]
    let v16: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v17: u16;  // [bp-0x38]
    let v19: core::option::Option<&str>;  // rax
    let v20: u64;  // r13
    let v21: u64;  // r12
    let v22: core::option::Option<&str>;  // rax
    let v24: i64;  // rdi
    let v25: u128;  // xmm0
    let v26: u128;  // xmm1
    let v27: i64;  // rdi

    v2 = a2;
    v16 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a0, a1);
    v15 = core::str::iter::SplitInternal<char> {
        start: 0
        end: a1
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
    v17 = 1;
    v19 = core::str::iter::SplitInternal<P>::next(&v15) as u64;
    match v19 {
        None => {
            core::option::unwrap_failed(); /* do not return */
        },
        Some(_) => {
            uu_sort::FieldSelector::split_key_options(v19, a1, a2);
            v20 = v7;
            v21 = v8;
            v22 = core::str::iter::SplitInternal<P>::next(&v15) as u64;
            match v22 {
                Some(_) => {
                    core::ops::function::FnOnce::call_once(&v3, v22, a1);
LABEL_52132b:
                    v14 = struct32 {
                        field_0: v20
                        field_8: v21
                        field_16: v9
                        field_24: v10
                    };
                    v0 = struct32 {
                        field_0: *(&v3 as &i128)
                        field_16: *(&v4 as &i128)
                    };
                    v6 = uu_sort::FieldSelector::parse_with_options(&v14, &v0);
                    if v13 == 2 {
                        vvar_308{stack -296} = struct24 {0: 𝜙@64b [((5378931, None), None), ((5378806, None), vvar_281{stack -296})], 16: vvar_272{stack -192}}
                        v1 = v6 as i128 as u128;
                        *(v27 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a0, a1, &v0);
                        *((v27 + 8) as &&u8) = &g_5ff678;
                        *((v27 + 55) as &i8) = 2;
                        return;
                    }
                },
                None => {
                    v3 = 0;
                    if v10 || v3 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, 1, 0) as i8 {
                        goto LABEL_52132b;
                    }
                    v0 = struct32 {
                        field_0: v20
                        field_8: v21
                        field_16: &v2
                        field_24: &v3
                    };
                    v6 = uu_sort::FieldSelector::parse::{{closure}}(&v0);
                    if v13 == 2 {
                        vvar_310{stack -296} = struct24 {0: 𝜙@64b [((5378931, None), None), ((5378806, None), vvar_281{stack -296})], 16: vvar_272{stack -192}}
                        v1 = v6 as i128 as u128;
                        *(v27 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a0, a1, &v0);
                        *((v27 + 8) as &&u8) = &g_5ff678;
                        *((v27 + 55) as &i8) = 2;
                        return;
                    }
                },
            }
            *((v24 + 48) as &i64) = *(&v12 as &i64);
            v25 = v6 as i128;
            v26 = *((&v6 as &char + 16) as &i128);
            *((v24 + 32) as &u128) = v11;
            *((v24 + 16) as &u128) = v26;
            *(v24 as &u128) = v25;
            return;
        },
    }
}
