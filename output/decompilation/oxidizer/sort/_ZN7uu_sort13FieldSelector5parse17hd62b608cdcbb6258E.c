fn uu_sort::FieldSelector::parse(a1: &str, a2: i64) -> : struct56 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x100]
    let v1: u64;  // [bp-0xd8]
    let v2: struct56;  // [bp-0xd0], Other Possible Types: u448
    let v3: struct32;  // [sp-0xd0]
    let v4: i64;  // [bp-0xc8]
    let v5: struct16;  // [bp-0xc0]
    let v6: u64;  // [bp-0xb8]
    let v7: struct152;  // [bp-0xb0]
    let v8: u8;  // [bp-0x99]
    let v9: struct32;  // [bp-0x98]
    let v10: struct72;  // [bp-0x98]
    let v11: u64;  // [bp-0x88]
    let v12: u32;  // [bp-0x80]
    let v13: struct16;  // [bp-0x78]
    let v14: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v15: u16;  // [bp-0x38]
    let v17: u32;  // rdx
    let v18: u64;  // rax
    let v20: i64;  // r12
    let v21: u64;  // rax

    v1 = a2;
    v14 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a1);
    v13 = struct16 {
        field_0: 0
        field_8: v17
    };
    v15 = 1;
    v18 = core::str::iter::SplitInternal<P>::next(&v13);
    core::option::unwrap(v18);
    v3 = uu_sort::FieldSelector::split_key_options(v18, v17);
    v20 = v4;
    v21 = core::str::iter::SplitInternal<P>::next(&v13);
    if v21 {
        v9 = uu_sort::FieldSelector::split_key_options(v21, v17);
LABEL_4d324b:
        v0 = struct32 {
            field_0: v3.field_0
            field_8: v20
            field_16: v5
            field_24: v6
        };
        v2 = uu_sort::FieldSelector::parse_with_options(&v0, &v9 as u8);
        if v8 == 2 {
            return struct24 {
                field_0: uu_sort::FieldSelector::parse::{{closure}}(a1, v17)
                field_8: &g_58c448
                padding_16: <UNKNOWN>
                field_55: <UNKNOWN>
            };
        }
    } else {
        v10 = 0;
        if v6 || v10 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, 1, 0) {
            goto LABEL_4d324b;
        }
        v0 = struct32 {
            field_0: v3.field_0
            field_8: v20
            field_16: &v1
            field_24: &v9 as u8
        };
        v2 = uu_sort::FieldSelector::parse::{{closure}}(&v0);
        if v8 == 2 {
            return struct24 {
                field_0: uu_sort::FieldSelector::parse::{{closure}}(a1, v17)
                field_8: &g_58c448
                padding_16: <UNKNOWN>
                field_55: <UNKNOWN>
            };
        }
    }
    return struct56 {
        field_0: v2 as i128
        field_16: *((&v2 as &char + 16) as &i128)
        field_32: v7
        field_48: *((&v2 as &char + 48) as &i64)
    };
}
