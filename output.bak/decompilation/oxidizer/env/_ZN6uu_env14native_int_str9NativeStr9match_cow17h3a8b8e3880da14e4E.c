fn uu_env::native_int_str::NativeStr::match_cow(a0: &Option<struct24>, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v6: struct24;  // rax

    if *(a1 as &i64) == 0x8000000000000000 {
        v6 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a2, a3);
    } else {
        v6 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a4, a5, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
