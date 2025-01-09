fn uu_env::native_int_str::NativeStr::contains(a0: u32, a1: u32) -> u8 {
    let v1: i32;  // edx

    if (uu_env::native_int_str::get_single_native_int_value(a1) & 255 & 4294967295 & 1) {
        core::slice::memchr::memchr(v1, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        return 2;
    }
    return 2;
}
