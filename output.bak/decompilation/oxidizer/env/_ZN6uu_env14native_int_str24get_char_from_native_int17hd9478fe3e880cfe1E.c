fn uu_env::native_int_str::get_char_from_native_int(a0: u8) -> u64 {
    let v0: i8;  // [sp-0x21]
    let v1: Result<struct16, struct10>;  // [sp-0x20], Other Possible Types: i136

    v0 = a0;
    v1 = core::str::converts::from_utf8(&v0, 1);
    return (!v1 ? uu_env::native_int_str::get_char_from_native_int::{{closure}}(*((&v1 as &char + 8) as &i64), v1) : 0x110000);
}
