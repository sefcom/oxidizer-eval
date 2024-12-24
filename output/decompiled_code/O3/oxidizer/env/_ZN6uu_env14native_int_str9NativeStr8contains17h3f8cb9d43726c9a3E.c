fn uu_env::native_int_str::NativeStr::contains(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: i64;  // rax
    let v2: i64;  // rax
    let v3: i32;  // edx
    let v4: i64;  // rax

    v1 = uu_env::native_int_str::get_single_native_int_value(a1);
    v2 = v1 | -0x100 | 2;
    if (v1 & 4294967295 & 1) {
        v4 = core::slice::memchr::memchr(v3, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        v2 = v4 | -0x100 | v4 == 1;
        return v2;
    }
    return v2;
}
