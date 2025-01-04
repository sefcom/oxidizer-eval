fn uu_env::native_int_str::NativeStr::split_once(a0: &Option<struct48>, a1: &struct24, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x89]
    let v1: i64;  // [sp-0x88]
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i192;  // [bp-0x70]
    let v5: i64;  // [sp-0x60]
    let v6: struct24;  // [sp-0x50], Other Possible Types: i192
    let v7: i192;  // [sp-0x38], Other Possible Types: struct24
    let v9: i8;  // dl
    let v10: i64;  // r15
    let v11: i64;  // rdx
    let v12: i128;  // xmm0

    if (uu_env::native_int_str::get_single_native_int_value(a2) as i8 & 1) {
        v0 = v9;
        v10 = *((a1 + 16) as &i64);
        v1 = *((a1 + 8) as &i64);
        v2 = v1 + v10;
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) {
            v6 = uu_env::native_int_str::NativeStr::slice(a1, 0, v11);
            v7 = uu_env::native_int_str::NativeStr::slice(a1, v11 + 1, v10);
            v3 = *((&v6 as &char + 16) as &i64);
            v12 = v6;
            v1 = v12;
            v4 = v7;
            *(a0 as &i128) = v12;
            *((a0 + 32) as &i64) = *((&v4 as &char + 8) as &i64);
            *((a0 + 40) as &i64) = v5;
            *((a0 + 16) as &i64) = v3;
            *((a0 + 24) as &i192) = v4;
            return struct8 {
                field_0: 9223372036854775809
            };
        }
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
