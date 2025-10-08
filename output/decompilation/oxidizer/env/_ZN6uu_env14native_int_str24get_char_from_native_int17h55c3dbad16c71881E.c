fn uu_env::native_int_str::get_char_from_native_int(a0: u8) -> long long {
    let v0: u8;  // [bp-0x21]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x20]

    v0 = a0;
    v1 = core::str::converts::from_utf8(&v0, 1);
    return 0x110000;
}
