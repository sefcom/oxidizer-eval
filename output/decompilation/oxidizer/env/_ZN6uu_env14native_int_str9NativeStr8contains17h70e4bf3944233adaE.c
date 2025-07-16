fn uu_env::native_int_str::NativeStr::contains(a0: &struct24, a1: i64) -> char {
    let v1: u8;  // dl
    let v3: core::option::Option<usize>;  // rax:rdx

    if !(uu_env::native_int_str::get_single_native_int_value(a1) & 1) {
        return 2;
    }
    v3 = core::slice::memchr::memchr(v1, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
    return v3 as i64 == 1;
}
