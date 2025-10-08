fn uu_ls::pad_left(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct48;  // [bp-0x60]
    let v1: struct16;  // [bp-0x30]
    let v2: i64;  // [bp-0x20]
    let v3: u64;  // [bp-0x18]
    let v4: void*;  // [bp-0x10]
    let v5: u16;  // [bp-0x8]

    v1 = struct16 {
        field_0: a1
        field_8: a2
    };
    if a3 > 65535 {
        panic!("Formatting argument out of range");
    }
    v2 = &v1;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = 0;
    v5 = a3;
    v0 = struct48 {
        field_0: "\x01"
        field_16: &v2
        field_24: 2
        field_32: "\x02"
    };
    return core::option::Option<T>::map_or_else(a0, &v0);
}
