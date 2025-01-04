fn uu_env::native_int_str::NativeStr::slice(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: Option<struct24>;  // [sp-0x28], Other Possible Types: i192

    v0 = uu_env::native_int_str::NativeStr::match_cow(a1, a2, a3, a2, a3);
    core::result::Result<T,E>::unwrap(a0, &v0);
    return a0;
}
