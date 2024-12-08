fn uu_ls::create_hyperlink(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x108], Other Possible Types: Result<struct24, struct16>, struct32
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0]
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i128;  // [bp-0xd8]
    let v7: i64;  // [sp-0xc8]
    let v8: i192;  // [sp-0xc0], Other Possible Types: struct24
    let v9: struct24;  // [sp-0xa8]
    let v10: i64;  // [sp-0x90]
    let v11: i64;  // [sp-0x88]
    let v12: struct24;  // [sp-0x80], Other Possible Types: i192
    let v13: struct24;  // [sp-0x68], Other Possible Types: i192
    let v14: i64;  // [sp-0x50]
    let v15: i64;  // [sp-0x48]
    let v16: i64;  // [sp-0x40]
    let v17: i64;  // [sp-0x38]
    let v18: i64;  // [sp-0x30]
    let v20: i64;  // rdx

    v10 = a1;
    v11 = a2;
    v0 = hostname::get(a1, a2);
    if v0 != 0x8000000000000000 {
        v7 = v2;
        v6 = v0;
    } else {
        uu_ls::create_hyperlink::{{closure}}(&v6, v1);
    }
    v12 = std::sys::os_str::bytes::Slice::to_string_lossy(*((&v6 as &char + 8) as &i64), v7);
    v0 = std::fs::canonicalize(a3 + 24, v20);
    v8 = core::result::Result<T,E>::unwrap_or_default(&v0);
    v9 = std::sys::os_str::bytes::Slice::to_string_lossy(*((&v8 as &char + 8) as &i64), *((&v8 as &char + 16) as &i64));
    v0 = struct32 {
        field_0: *((&v9 as &char + 8) as &i64)
        field_8: *((&v9 as &char + 16) as &i64) + v0
        field_16: &g_4364bb
        field_24: 6
    };
    v13 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v0, v20);
    v0 = &v12;
    v1 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v2 = &v13;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &v10;
    v5 = <&T as core::fmt::Display>::fmt;
    v14 = "\x1b]8;;file://";
    v15 = 4;
    v18 = 0;
    v16 = &v0;
    v17 = 3;
    core::option::Option<T>::map_or_else(a0, &v14);
}
