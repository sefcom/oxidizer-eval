fn uu_env::native_int_str::NativeStr::match_cow(a0: &u64, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x58]
    let v1: struct24;  // [sp-0x40]
    let v2: struct24;  // [bp-0x28]
    let v4: i64;  // rcx
    let v5: i64;  // rax
    let v6: struct24;  // rax

    v4 = *((a1 + 8) as &i64);
    v5 = *((a1 + 16) as &i64);
    if *(a1 as &i64) != 0x8000000000000000 {
        v6 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a4, a5, v4, v5);
        if v0 != 0x8000000000000000 {
            v1 = core::ops::function::FnOnce::call_once(&v0);
            *(&v2.field_0 as &struct24) = struct24 {
                field_0: v1
                field_8: *((&v1 as &char + 8) as &i128)
            };
            v6 = core::ops::function::FnOnce::call_once(a0, &v2);
            return v6;
        }
    } else {
        v6 = uu_env::native_int_str::NativeStr::slice::{{closure}}(a2, a3, v4, v5);
        if v6 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v6
                field_16: v7
            };
        }
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
