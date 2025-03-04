fn uu_sort::FieldSelector::parse(a0: &struct56, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct32;  // [bp-0x128], Other Possible Types: int
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0xf8]
    let v3: struct32;  // [sp-0xf0], Other Possible Types: unsigned long
    let v4: struct56;  // [sp-0xd0], Other Possible Types: int
    let v5: struct32;  // [sp-0xd0]
    let v6: struct32;  // [bp-0x98]
    let v7: struct16;  // [bp-0x78]
    let v8: struct41;  // [sp-0x68]
    let v9: i16;  // [sp-0x38]
    let v11: i64;  // rax
    let v15: i64;  // r15
    let v16: i64;  // rax

    v2 = a3;
    v8 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a1, a2);
    v7 = struct16 {
        field_0: 0
        field_8: a2
    };
    v9 = 1;
    v11 = core::str::iter::SplitInternal<P>::next(&v7);
    if !v11 {
        core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
    }
    v5 = uu_sort::FieldSelector::split_key_options(v11, a2);
    v15 = v5.field_24;
    v16 = core::str::iter::SplitInternal<P>::next(&v7);
    if !v16 {
        v3 = 0;
        if !(!v15) {
            goto LABEL_52132b;
        }
    } else {
        v3 = core::ops::function::FnOnce::call_once(v16, a2);
        if !(!v15) {
            goto LABEL_52132b;
        }
    }
    if !v3 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3.field_16, v3.field_24, 1, 0) as i8 {
        v0 = struct32 {
            field_0: v12
            field_8: v13
            field_16: &v2
            field_24: &v3
        };
        v4 = uu_sort::FieldSelector::parse::{{closure}}(&v0);
        if v4.field_55 != 2 {
            return struct56 {
                field_0: v18
                field_16: v19
                field_32: (&v4)[32] as i128
                field_48: (&v4)[48] as i64
            };
        }
    } else {
LABEL_52132b:
        v6 = struct32 {
            field_0: v12
            field_8: v13
            field_16: v14
            field_24: v15
        };
        *(&v0.field_0 as &struct32) = struct32 {
            field_0: v17
            field_16: *(&v3.field_16 as &i128)
        };
        v4 = uu_sort::FieldSelector::parse_with_options(&v6, &v0);
        if v4.field_55 != 2 {
            return struct56 {
                field_0: v18
                field_16: v19
                field_32: (&v4)[32] as i128
                field_48: (&v4)[48] as i64
            };
        }
    }
    v1 = (&v4)[16] as i64;
    *(&v0 as &i128) = v4 as i128;
    *(a0 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v0);
    *((a0 + 8) as &&i64) = &g_5ff678;
    *((a0 + 55) as &i8) = 2;
}
