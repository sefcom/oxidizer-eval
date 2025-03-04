fn uu_ls::create_hyperlink(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x108], Other Possible Types: struct24, int, Result<struct24, struct8>
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0]
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: struct24;  // [sp-0xd8], Other Possible Types: int
    let v7: i64;  // [sp-0xc8]
    let v8: struct24;  // [sp-0xc0]
    let v9: struct24;  // [sp-0xa8]
    let v10: i64;  // [sp-0x90]
    let v11: i64;  // [sp-0x88]
    let v12: struct24;  // [sp-0x80]
    let v13: struct24;  // [sp-0x68]
    let v14: struct40;  // [bp-0x50]

    v10 = a1;
    v11 = a2;
    v0 = hostname::get();
    if v0 != 0x8000000000000000 {
        v6 = v0;
    } else {
        v6 = uu_ls::create_hyperlink::{{closure}}(v1);
    }
    v12 = std::sys::os_str::bytes::Slice::to_string_lossy((&v6)[8] as i64, v7);
    v0 = std::fs::canonicalize(a3 + 24);
    v8 = core::result::Result<T,E>::unwrap_or_default(&v0);
    v9 = std::sys::os_str::bytes::Slice::to_string_lossy(*((&v8.field_0 as &char + 8) as &i64), v8.field_16);
    v0 = *((&v9.field_0 as &char + 8) as &i256);
    v13 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v0);
    v0 = &v12;
    v1 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v2 = &v13;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &v10;
    v5 = <&T as core::fmt::Display>::fmt;
    v14 = struct40 {
        field_0: "\x1b]8;;file://"
        field_8: 4
        field_16: &v0
        field_24: 3
        field_32: 0
    };
    core::option::Option<T>::map_or_else(a0, &v14);
    return;
}
