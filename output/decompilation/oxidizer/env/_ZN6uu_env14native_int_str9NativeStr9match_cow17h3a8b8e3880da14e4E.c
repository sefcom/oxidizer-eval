fn uu_env::native_int_str::NativeStr::match_cow(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x58]
    let v1: u8;  // [bp-0x40]
    let v2: struct24;  // [bp-0x28]
    let v3: u64;  // rax
    let v4: i64;  // rdi
    let v5: u64;  // rdx
    let v6: i64;  // rdi
    let v7: u64;  // rdi

    if *(a0 as &i64) == 0x8000000000000000 {
        v3 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a1, a2, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        if v3 {
            *(v4 as &i64) = 0x8000000000000000;
            *((v4 + 8) as &u64) = v3;
            *((v4 + 16) as &u64) = v5;
            return;
        }
    } else {
        v0 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a3, a4, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        if v0.field_0 as i64 != 0x8000000000000000 {
            core::ops::function::FnOnce::call_once(&v1, &v0);
            v2 = v1;
            core::ops::function::FnOnce::call_once(v7, &v2);
            return;
        }
    }
    *(v6 as &i64) = 9223372036854775809;
    return;
}
