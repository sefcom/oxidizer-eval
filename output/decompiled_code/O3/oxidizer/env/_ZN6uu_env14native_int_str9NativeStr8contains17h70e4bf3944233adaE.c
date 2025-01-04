fn uu_env::native_int_str::NativeStr::contains(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u32;  // edx
    let v4: u64;  // rax

    v1 = uu_env::native_int_str::get_single_native_int_value(a1);
    v2 = v1 | -0x100 | 2;
    if (v1 & 4294967295 & 1) {
        v4 = core::slice::memchr::memchr(v3, a0->field_8, *(&a0->field_10 as &i64));
        v2 = v4 | -0x100 | v4 == 1;
        return v2;
    }
    return v2;
}
