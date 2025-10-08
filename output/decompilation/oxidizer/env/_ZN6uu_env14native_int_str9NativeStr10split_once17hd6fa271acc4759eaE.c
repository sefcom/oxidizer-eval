fn uu_env::native_int_str::NativeStr::split_once(a0: i64, a1: i64, a2: void*) -> long long {
    let v0: struct16;  // [bp-0x88], Other Possible Types: u128
    let v1: u64;  // [bp-0x78]
    let v2: u128;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: u64;  // [bp-0x60]
    let v5: struct24;  // [bp-0x58]
    let v6: u64;  // [bp-0x48]
    let v7: struct24;  // [bp-0x40]
    let v9: u64;  // rdx

    if (uu_env::native_int_str::get_single_native_int_value(a2) & 1) {
        v0 = struct16 {
            field_0: *((a1 + 8) as &i64)
            field_8: *((a1 + 8) as &i64) + *((a1 + 16) as &i64)
        };
        if (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0, &vvar_56{reg 32}) & 1) {
            v5 = uu_env::native_int_str::NativeStr::slice(a1, None, v9);
            v7 = uu_env::native_int_str::NativeStr::slice(a1, v9 + 1, *((a1 + 16) as &i64));
            v1 = v6;
            v0 = v5.field_0;
            v4 = v7.field_16;
            v2 = v7.field_0;
            return struct48 {
                field_0: v5.field_0
                field_16: v1
                field_24: v2 as i64
                field_32: v3
                field_40: v4
            };
        }
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
