fn uu_env::native_int_str::NativeStr::split_once(a1: &struct24, a2: i64) -> Option<struct48> {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x88]
    let v1: u64;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: u128;  // [bp-0x50]
    let v6: u64;  // [bp-0x40]
    let v7: u8;  // [bp-0x38]
    let v8: i8;  // [bp-0x28]
    let v10: u64;  // rdx
    let v11: u64;  // r8
    let v12: i64;  // rdi
    let v13: i64;  // rdi

    if (uu_env::native_int_str::get_single_native_int_value(a1) & 1) {
        v0 = struct16 {
            field_0: *((a0 + 8) as &i64)
            field_8: *((a0 + 8) as &i64) + *((a0 + 16) as &i64)
        };
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0, &vvar_54{reg 32}) {
            uu_env::native_int_str::NativeStr::slice(a0, 0, v10, v11);
            uu_env::native_int_str::NativeStr::slice(a0, v10 + 1, *((a0 + 16) as &i64), v11);
            v1 = v6;
            v0 = v5;
            v4 = *(&v8 as &i64);
            memcpy(&v2, &v7, 16);
            *(v13 as &u128) = v5;
            *((v13 + 32) as &u64) = v3;
            *((v13 + 40) as &u64) = v4;
            *((v13 + 16) as &u64) = v1;
            *((v13 + 24) as &u64) = v2;
            return;
        }
    }
    *(v12 as &i64) = 9223372036854775809;
    return;
}
