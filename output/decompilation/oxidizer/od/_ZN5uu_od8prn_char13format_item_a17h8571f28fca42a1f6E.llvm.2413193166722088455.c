fn uu_od::prn_char::format_item_a(a0: i64, a1: i32) -> long long {
    let v0: u64;  // [bp-0x88]
    let v1: i64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u448;  // [bp-0x70]
    let v4: i8;  // [bp-0x40]
    let v5: void*;  // [bp-0x30]
    let v6: &[u8];  // [bp-0x28]
    let v7: void*;  // [bp-0x20]
    let v8: u64;  // [bp-0x18]
    let v9: u8;  // [bp-0x10]

    v0 = "nul" + (a1 & 127) * 16;
    v1 = &v0;
    v2 = <&T as core::fmt::Display>::fmt;
    v5 = 0;
    v6 = 4;
    v7 = 0;
    v8 = 32;
    v9 = 1;
    v3 = struct56 {
        field_0: &g_40dad0
        field_8: 1
        field_16: &v1
        field_24: 1
        field_32: &v4 as u64
        field_40: 1
        field_48: 2
    };
    core::option::Option<T>::map_or_else(a0, &v3);
    return a0;
}
