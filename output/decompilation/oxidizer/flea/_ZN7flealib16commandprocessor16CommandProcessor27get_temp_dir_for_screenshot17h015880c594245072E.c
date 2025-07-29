fn flealib::commandprocessor::CommandProcessor::get_temp_dir_for_screenshot(a0: u64) -> void {
    let v0: std::path::PathBuf;  // [bp-0xe8], Other Possible Types: struct33, u64
    let v1: u64;  // [bp-0xe0]
    let v2: i64;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd0]
    let v4: void*;  // [bp-0xc8]
    let v5: struct24;  // [bp-0xb8], Other Possible Types: u64
    let v6: i64;  // [bp-0xb8]
    let v7: u64;  // [bp-0xb0]
    let v8: core::fmt::rt::Argument;  // [bp-0xa8]
    let v9: std::sys::os_str::bytes::Buf;  // [bp-0xa0]
    let v10: struct12;  // [bp-0x84]
    let v11: struct24;  // [bp-0x78], Other Possible Types: struct60
    let v13: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u64;  // r8

    v10 = chrono::offset::utc::Utc::now();
    v0 = struct33 {
        field_0: "%Y-%m-%d_%H-%M-%S"
        field_16: ""
        field_32: 0
    };
    v11 = chrono::datetime::DateTime<Tz>::format_with_items(&v10, &v0);
    v6 = &v11;
    v7 = <chrono::format::formatting::DelayedFormat<I> as core::fmt::Display>::fmt;
    v0 = "screenshot";
    v1 = 2;
    v4 = 0;
    v2 = &v6;
    v3 = 1;
    v9 = core::option::Option<T>::map_or_else(&v0, v13, v14, v15);
    *(&v5 as &i128) = *(&v9.inner.buf.inner.cap as &i128);
    v8 = v9.inner.len;
    v0 = std::env::temp_dir();
    v11 = v5;
    std::path::Path::join(a0, 2, v2, &v11, v15);
    return;
}
