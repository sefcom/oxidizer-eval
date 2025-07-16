fn uu_env::native_int_str::NativeStr::match_cow(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x58]
    let v1: u64;  // [bp-0x40]
    let v2: u8;  // [bp-0x38]
    let v3: u64;  // [bp-0x28]
    let v4: u8;  // [bp-0x20]
    let v5: u64;  // rax
    let v6: i64;  // rdi
    let v7: u64;  // rdx
    let v8: i64;  // rdi
    let v9: u64;  // rdi

    if *(a0 as &i64) == 0x8000000000000000 {
        v5 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a1, a2, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        if v5 {
            *(v6 as &i64) = 0x8000000000000000;
            *((v6 + 8) as &u64) = v5;
            *((v6 + 16) as &u64) = v7;
            return;
        }
    } else {
        v0 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a3, a4, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
        if v0.field_0 as i64 != 0x8000000000000000 {
            core::ops::function::FnOnce::call_once(&v1, &v0);
            memcpy(&v4, &v2, 16);
            v3 = v1;
            core::ops::function::FnOnce::call_once(v9, &v3);
            return;
        }
    }
    *(v8 as &i64) = 9223372036854775809;
    return;
}
