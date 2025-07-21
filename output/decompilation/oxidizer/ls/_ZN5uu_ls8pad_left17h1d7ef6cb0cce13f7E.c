fn uu_ls::pad_left(a0: i32, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: i64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: void*;  // [bp-0x70]
    let v6: struct40;  // [bp-0x68]
    let v7: u64;  // [bp-0x40]
    let v8: u64;  // [bp-0x38]
    let v9: u64;  // [bp-0x28]
    let v10: u64;  // [bp-0x20]
    let v11: void*;  // [bp-0x18]
    let v12: u64;  // [bp-0x10]
    let v13: u8;  // [bp-0x8]

    v0 = a1;
    v1 = a2;
    v2 = &v0;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = a3;
    v5 = 0;
    v8 = 2;
    v9 = 1;
    v10 = 1;
    v11 = 0;
    v12 = 32;
    v13 = 1;
    v7 = 1;
    v6 = struct40 {
        field_0: &g_423c10
        field_8: 1
        field_16: &v2
        field_24: 2
        field_32: &v8
    };
    return core::option::Option<T>::map_or_else(a0, &v6);
}
