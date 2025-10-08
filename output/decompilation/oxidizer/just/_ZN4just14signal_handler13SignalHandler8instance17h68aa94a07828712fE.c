fn just::signal_handler::SignalHandler::instance() -> u64 {
    let v0: struct16;  // [bp-0x118]
    let v1: struct24;  // [bp-0x110]
    let v2: struct18;  // [bp-0x108]
    let v3: struct17;  // [bp-0xd8]
    let v4: struct80;  // [bp-0xd0], Other Possible Types: u64
    let v5: alloc::string::String;  // [bp-0xb0]
    let v6: i64;  // [bp-0xa0]
    let v7: u8;  // [bp-0x98]
    let v8: u128;  // [bp-0x90]
    let v9: struct81;  // [bp-0x80]
    let v10: core::fmt::rt::Argument;  // [bp-0x30]
    let v11: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x28]
    let v12: struct18;  // [bp-0x20]

    v3 = std::sync::poison::mutex::Mutex<T>::lock();
    if v3.field_0 as i32 == 1 {
        v0 = v4;
        v1 = v3.field_16;
        v5 = format!("signal handler mutex poisoned: {}", &v0);
        v8 = *(&v5.vec.buf.inner.cap as &i128);
        v9 = v6;
        v7 = 29;
        v2 = struct18 {
            field_0: 0
            field_16: <UNKNOWN>
        };
        v12 = just::color::Color::stderr(&v2);
        v10 = &v7;
        v11 = &g_830f00;
        eprintln!("{}", &v10);
        std::process::exit(1); /* do not return */
    }
    return v4;
}
