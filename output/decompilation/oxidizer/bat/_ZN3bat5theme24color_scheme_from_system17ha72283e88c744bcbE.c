fn bat::theme::color_scheme_from_system() -> int {
    let v0: struct24;  // [bp-0xb8]
    let v1: struct24;  // [bp-0xb0]
    let v2: struct16;  // [bp-0xa8]
    let v3: u128;  // [bp-0xa0]
    let v4: struct24;  // [bp-0x88]
    let v5: i64;  // [bp-0x78]
    let v6: core::option::Option<&str>;  // [bp-0x68]
    let v7: struct24;  // [bp-0x58]
    let v8: Result<struct24, struct16>;  // [bp-0x50]
    let v9: &str;  // [bp-0x48]
    let v10: u64;  // [bp-0x38]
    let v11: alloc::string::String;  // [bp-0x20]
    let v12: &std::ffi::os_str::OsStr;  // [bp-0x18]
    let v13: struct24;  // [bp-0x17]

    v12 = 0;
    v11 = 0;
    v13 = 90194313222;
    v8 = 0x8000000000000000;
    v9 = "[bat warning]";
    v10 = 9223372036854775810;
    v0 = "Theme 'auto:system' is only supported on macOS, using default.";
    v1 = 1;
    v2 = 8;
    v3 = 0;
    v4 = core::option::Option<T>::map_or_else("Theme 'auto:system' is only supported on macOS, using default.", &v0);
    v6 = *(&v4.field_0 as &i128);
    v7 = v5;
    eprintln!("{}: {}", &v8, &v6);
    return;
}
