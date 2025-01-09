fn uu_sort::FieldSelector::parse(a0: &struct56, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct32;  // [bp-0x128], Other Possible Types: i128
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0], Other Possible Types: struct32
    let v4: i448;  // [sp-0xd0], Other Possible Types: struct56, struct32
    let v5: struct32;  // [bp-0x98]
    let v6: struct16;  // [bp-0x78]
    let v7: struct41;  // [sp-0x68]
    let v8: i16;  // [sp-0x38]
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v15: i64;  // r15
    let v16: i64;  // rax

    v2 = a3;
    v7 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a1, a2);
    v6 = struct16 {
        field_0: 0
        field_8: a2
    };
    v8 = 1;
    v10 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v10 {
        core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
    }
    v4 = uu_sort::FieldSelector::split_key_options(v10, v11);
    v15 = *((&v4 as &char + 24) as &i64);
    v16 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v16 {
        v3 = 0;
        if !(!v15) {
            goto LABEL_52132b;
        }
    } else {
        v3 = core::ops::function::FnOnce::call_once(v16, v11);
        if !(!v15) {
            goto LABEL_52132b;
        }
    }
    if !v3 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v3 as &char + 16) as &i64), *((&v3 as &char + 24) as &i64), 1, 0) as i8 {
        *(&v0.field_0 as &struct32) = struct32 {
            field_0: v12
            field_8: v13
            field_16: &v2
            field_24: &v3
        };
        v4 = uu_sort::FieldSelector::parse::{{closure}}(&v0);
        if *((&v4 as &char + 55) as &i8) != 2 {
            return struct56 {
                field_0: v18
                field_16: v19
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
        }
    } else {
LABEL_52132b:
        *(&v5.field_0 as &struct32) = struct32 {
            field_0: v12
            field_8: v13
            field_16: v14
            field_24: v15
        };
        v0 = struct32 {
            field_0: v17
            field_16: *((&v3 as &char + 16) as &i128)
        };
        v4 = uu_sort::FieldSelector::parse_with_options(&v5, &v0);
        if *((&v4 as &char + 55) as &i8) != 2 {
            return struct56 {
                field_0: v18
                field_16: v19
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
        }
    }
    v1 = *((&v4 as &char + 16) as &i64);
    v0 = v4;
    *(a0 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v0);
    *((a0 + 8) as &&i64) = &g_5ff678;
    *((a0 + 55) as &i8) = 2;
}
