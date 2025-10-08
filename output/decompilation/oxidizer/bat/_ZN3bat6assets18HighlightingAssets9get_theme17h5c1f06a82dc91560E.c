fn bat::assets::HighlightingAssets::get_theme(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u128;  // [bp-0xe8]
    let v1: u128;  // [bp-0xe8]
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: struct40;  // [bp-0xd0]
    let v5: struct24;  // [bp-0xa0]
    let v6: u64;  // [bp-0x90]
    let v7: u64;  // [bp-0x80]
    let v8: &str;  // [bp-0x78]
    let v9: u64;  // [bp-0x68]
    let v10: void*;  // [bp-0x50]
    let v11: u8;  // [bp-0x48]
    let v12: u64;  // [bp-0x47]
    let v13: struct16;  // [bp-0x38]
    let v15: u64;  // r14
    let v16: core::fmt::rt::Argument;  // rax
    let v17: Option<struct40>;  // rax
    let v18: u64;  // rax
    let v19: u64;  // rdx

    v13 = struct16 {
        field_0: a1
        field_8: a2
    };
    v15 = a0 + 104;
    v16 = bat::assets::lazy_theme_set::LazyThemeSet::get(v15, a1, a2);
    if v16 {
        return v16;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ansi-light") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ansi-dark") {
        if a2 {
            v11 = 0;
            v10 = 0;
            v12 = 90194313222;
            v7 = 0x8000000000000000;
            v8 = "[bat warning]";
            v9 = 9223372036854775810;
            v0 = &v13;
            v2 = <&T as core::fmt::Display>::fmt;
            v4 = struct40 {
                field_0: "Unknown theme '"
                field_8: 2
                field_16: &v0 as u64
                field_24: 1
            };
            v5 = core::option::Option<T>::map_or_else(None, a2, &v4);
            v0 = v5.field_0;
            v3 = v6;
            eprintln!("{}: {}", &v7, &v0 as u64);
        }
        if *((a0 + 128) as &i64) {
            v17 = bat::assets::lazy_theme_set::LazyThemeSet::get(v15, *((a0 + 128) as &i64), *((a0 + 136) as &i64));
            if let Some(_) = v17 {
                return v17;
            }
        } else {
            v18 = bat::assets::lazy_theme_set::LazyThemeSet::get(v15, "Monokai Extended");
            if v18 {
                return v18;
            }
        }
        core::option::expect_failed("something is very wrong if the default theme is missing"); /* do not return */
    }
    v11 = 0;
    v10 = 0;
    v12 = 90194313222;
    v7 = 0x8000000000000000;
    v8 = "[bat warning]";
    v9 = 9223372036854775810;
    v1 = &v13;
    v2 = <&T as core::fmt::Display>::fmt;
    v4 = struct40 {
        field_0: "Theme '"
        field_8: 2
        field_16: &v1 as u64
        field_24: 1
    };
    v5 = core::option::Option<T>::map_or_else(None, v19, &v4);
    v1 = v5.field_0;
    v3 = v6;
    eprintln!("{}: {}", &v7, &v1 as u64);
    return bat::assets::HighlightingAssets::get_theme(a0, "ansi");
}
