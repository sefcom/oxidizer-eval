fn uu_ls::create_hyperlink(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x118]
    let v1: struct32;  // [bp-0x118], Other Possible Types: u64
    let v2: u128;  // [bp-0x118]
    let v3: u32;  // [bp-0x110]
    let v4: u64;  // [bp-0x108]
    let v5: struct24;  // [bp-0xe8], Other Possible Types: u128
    let v6: u64;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: Result<struct24, struct24>;  // [bp-0xc8]
    let v9: u64;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb8]
    let v11: Result<struct24, struct24>;  // [bp-0xb0]
    let v12: u64;  // [bp-0xa8]
    let v13: u64;  // [bp-0xa0]
    let v14: Result<struct24, struct24>;  // [bp-0x78]
    let v15: struct24;  // [bp-0x60]
    let v16: alloc::string::String;  // [bp-0x48]

    v0 = hostname::get();
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v5 = uu_ls::create_hyperlink::{{closure}}(v3);
    } else {
        v7 = v4;
        v5 = v0 as i128;
    }
    v14 = alloc::string::String::from_utf8_lossy(v6, v7);
    v0 = std::fs::canonicalize(a3 + 24, a2);
    v8 = core::result::Result<T,E>::unwrap_or_default(&v0);
    v11 = alloc::string::String::from_utf8_lossy(v9, v10);
    v1 = struct32 {
        field_0: v12
        field_8: v13 + v12
        field_16: "_-.:~/"
    };
    v15 = core::iter::traits::iterator::Iterator::collect(&v1);
    v16 = format!("\x1b]8;;file://{}{}\x07", &v14, &v15);
    v2 = *(&v16.vec.buf.inner.cap as &i128);
    v4 = v16.vec.len;
    std::ffi::os_str::OsString::push(&v2, a1, a2);
    std::ffi::os_str::OsString::push(&v2, &g_4d422e, 6);
    return struct24 {
        field_0: v2
        field_16: v4
    };
}
