fn uu_env::native_int_str::NativeStr::slice(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Option<struct24>;  // [sp-0x28]

    v0 = uu_env::native_int_str::NativeStr::match_cow(a1, a2, a3, a2, a3);
    core::result::Result<T,E>::unwrap(a0, &v0);
    return a0;
}
