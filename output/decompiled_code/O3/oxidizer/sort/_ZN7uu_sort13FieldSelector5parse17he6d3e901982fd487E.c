fn uu_sort::FieldSelector::parse(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct32;  // [bp-0x128], Other Possible Types: i128
    let v1: i64;  // [sp-0x118]
    let v2: i64;  // [sp-0xf8]
    let v3: i256;  // [sp-0xf0], Other Possible Types: struct32
    let v4: i256;  // [sp-0xd0], Other Possible Types: struct56, struct32
    let v5: struct32;  // [bp-0x98]
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: struct41;  // [sp-0x68]
    let v9: i16;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // rdx
    let v13: i64;  // r15
    let v14: i64;  // rax
    let v20: i128;  // xmm0
    let v21: i128;  // xmm1

    v2 = a3;
    v8 = <char as core::str::pattern::Pattern>::into_searcher(44, a1, a2);
    v6 = 0;
    v7 = a2;
    v9 = 1;
    v11 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v11 {
        core::option::unwrap_failed(); /* do not return */
    }
    v4 = uu_sort::FieldSelector::split_key_options(v11, v12);
    v13 = *((&v4 as &char + 24) as &i64);
    v14 = core::str::iter::SplitInternal<P>::next(&v6);
    if !v14 {
        v3 = 0;
        if !(!v13) {
            goto LABEL_52039b;
        }
    } else {
        v3 = core::ops::function::FnOnce::call_once(v14, v12);
        if !(!v13) {
            goto LABEL_52039b;
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
            *((a0 + 8) as &&i64) = &g_5feb50;
            *((a0 + 55) as &i8) = 2;
            return struct56 {
                field_0: v20
                field_16: v21
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
        }
    } else {
LABEL_52039b:
        v5 = struct32 {
            field_0: v17
            field_8: v18
            field_16: vvar_108{reg 56}
            field_24: v13
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
                field_8: &g_5feb50
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
