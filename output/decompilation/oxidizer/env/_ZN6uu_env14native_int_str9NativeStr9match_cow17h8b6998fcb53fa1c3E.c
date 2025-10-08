fn uu_env::native_int_str::NativeStr::match_cow(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v6: u64;  // rax

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v0 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a4, a5, a1[8] as i64, a1[16] as i64);
        return struct24 {
            field_0: v6
            field_8: *((&v0.field_0 as &char + 8) as &i128)
        };
    }
    v2 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a2, a3, a1[8] as i64, a1[16] as i64);
    if !v2 {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v2
        field_16: v3
    };
}
