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
    let v11: i32;  // edx
    let v12: i64;  // r15
    let v13: i64;  // rax
    let v14: i64;  // rdx
    let v20: i128;  // xmm0
    let v21: i128;  // xmm1

    v2 = a3;
    v7 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a1, a2);
    v6 = struct16 {
        field_0: 0
        field_8: a2
    };
    v8 = 1;
    v10 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v10 {
        core::option::unwrap_failed(); /* do not return */
    }
    v4 = uu_sort::FieldSelector::split_key_options(v10, v11);
    v12 = *((&v4 as &char + 24) as &i64);
    v13 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v13 {
        v3 = 0;
        if !(!v12) {
            goto LABEL_52132b;
        }
    } else {
        v3 = core::ops::function::FnOnce::call_once(v13, v14);
        if !(!v12) {
            goto LABEL_52132b;
        }
    }
    if !v3 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v3 as &char + 16) as &i64), *((&v3 as &char + 24) as &i64), 1, 0) as i8 {
        v0 = struct32 {
            field_0: v15
            field_8: v16
            field_16: &v2
            field_24: &v3
        };
        v4 = uu_sort::FieldSelector::parse::{{closure}}(&v0);
        if *((&v4 as &char + 55) as &i8) == 2 {
            v1 = *((&v4 as &char + 16) as &i64);
            v0 = v4;
            *(a0 as &long long) = uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v0);
            *((a0 + 8) as &&i64) = &g_5ff678;
            *((a0 + 55) as &i8) = 2;
            return struct56 {
                field_0: v20
                field_16: v21
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
        }
    } else {
LABEL_52132b:
        v5 = struct32 {
            field_0: v17
            field_8: v18
            field_16: vvar_108{reg 56}
            field_24: v12
        };
        *(&v0.field_0 as &struct32) = struct32 {
            field_0: v19
            field_16: *((&v3 as &char + 16) as &i128)
        };
        v4 = uu_sort::FieldSelector::parse_with_options(&v5, &v0);
        if *((&v4 as &char + 55) as &i8) == 2 {
            vvar_268{stack -280} = *((&v4 as &char + 16) as &i64);
            v0 = v4;
            return struct17 {
                field_0:                 uu_sort::FieldSelector::parse::{{closure}}(a1, a2, &v0)
                field_8: &g_5ff678
                field_55: <UNKNOWN>
            };
        }
    }
    v20 = v4;
    v21 = *((&v4 as &char + 16) as &i128);
    return struct56 {
        field_0: v20
        field_16: v21
        field_32: *((&v4 as &char + 32) as &i128)
        field_48: *((&v4 as &char + 48) as &i64)
    };
}
