fn uu_env::native_int_str::NativeStr::slice(a0: u64, a1: &u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x28]

    v0 = uu_env::native_int_str::NativeStr::match_cow(a1, a2, a3, a2, a3);
    core::result::Result<T,E>::unwrap(a0, &v0);
    return a0;
}
