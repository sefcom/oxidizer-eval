fn bat::main() -> void {
    let v0: &str;  // [bp-0xb8]
    let v1: core::fmt::rt::Argument;  // [bp-0xb0]
    let v2: u8;  // [bp-0xa8]
    let v3: u8;  // [bp-0xa7]
    let v4: u128;  // [bp-0x98]
    let v5: core::fmt::Arguments;  // [bp-0x88]
    let v6: iNone;  // [bp-0x78]
    let v7: u128;  // [bp-0x68]
    let v8: core::fmt::rt::Argument;  // [bp-0x58]
    let v9: core::fmt::rt::Argument;  // [bp-0x48]
    let v10: core::fmt::Arguments;  // [bp-0x38]
    let v11: iNone;  // [bp-0x28]
    let v12: struct24;  // [bp-0x18]
    let v13: u64;  // [bp-0x8]
    let v15: u64;  // rbx

    v13 = v15;
    bat::run(&v2);
    if v2 != 13 {
        v12 = v7;
        v11 = v6;
        v10 = v5;
        v9 = v4;
        v8 = *(&v2 as &i128);
        v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.ty;
        v0 = std::io::stdio::Stdout::lock(&v1);
        bat::error::default_error_handler(&v8, &v0, &g_ac8b00);
        std::process::exit(1); /* do not return */
    } else if v3 {
        std::process::exit(0); /* do not return */
    } else {
        std::process::exit(1); /* do not return */
    }
}
