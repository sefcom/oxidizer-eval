fn uu_ls::create_hyperlink(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: i64;  // [sp-0xf8], Other Possible Types: Argument, Enum, struct24
    let v2: i64;  // [sp-0xf0], Other Possible Types: Argument
    let v3: Argument;  // [bp-0xe8]
    let v4: i64;  // [sp-0xd8]
    let v5: i64;  // [sp-0xd0]
    let v6: i64;  // [sp-0xc8]
    let v7: i64;  // [sp-0xc0], Other Possible Types: struct24
    let v8: struct24;  // [sp-0xa0]
    let v9: i192;  // [sp-0x88], Other Possible Types: struct24
    let v10: Arguments;  // [sp-0x70], Other Possible Types: Enum, i64
    let v11: i64;  // [sp-0x68]
    let v12: i64;  // [sp-0x60]
    let v13: i64;  // [sp-0x40]
    let v14: i64;  // [sp-0x38]
    let v16: i64;  // rbx
    let v17: i64;  // rbx

    v13 = a1;
    v14 = a2;
    v10 = hostname::get();
    v16 = v10;
    if v16 != 0x8000000000000000 {
        v7 = v7;
        v17 = v16;
    } else {
        v7 = v11;
        v1 = std::sys::os_str::bytes::Slice::to_owned(1, 0);
        v7 = v2;
        v17 = v1;
    }
    v0 = v17;
    v6 = v7;
    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(v6, v12);
    v1 = std::sys::pal::unix::fs::canonicalize(*((a3 + 32) as &i64), *((a3 + 40) as &i64));
    v9 = std::sys::os_str::bytes::Slice::to_string_lossy(1, 0);
    v1 = *((&v9 as &char + 8) as &i256);
    v7 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v1);
    v1 = Argument {
        value: &v8
        formatter: <alloc::borrow::Cow<B> as core::fmt::Display>::fmt
    };
    v2 = Argument {
        value: <alloc::borrow::Cow<B> as core::fmt::Display>::fmt
        formatter: &v7
    };
    v3 = Argument {
        value: &v7
        formatter: <alloc::string::String as core::fmt::Display>::fmt
    };
    v4 = &v13;
    v5 = <&T as core::fmt::Display>::fmt;
    v10 = Arguments {
        pieces: ["\x1b]8;;file://", &g_5acb88, "\x07", "\x1b]8;;\x07"]
        args: [&v1, &v2, &v3]
        fmt: None
    };
    alloc::fmt::format::format_inner(a0, &v10);
    return 0x8000000000000000;
}
