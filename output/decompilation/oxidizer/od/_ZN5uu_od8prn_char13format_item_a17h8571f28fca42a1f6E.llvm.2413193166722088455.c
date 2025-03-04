fn uu_od::prn_char::format_item_a(a0: &struct24, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: &u8;  // [sp-0x80]
    let v2: u64;  // [sp-0x78]
    let v3: struct56;  // [bp-0x70]
    let v5: void*;  // [sp-0x30]
    let v6: u64;  // [sp-0x28]
    let v7: void*;  // [sp-0x20]
    let v8: u64;  // [sp-0x18]
    let v9: u8;  // [sp-0x10]

    v0 = "nul" + ((a1 & 127) * 16 & 4294967295);
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
        field_32: &v4
        field_40: 1
        field_48: 2
    };
    core::option::Option<T>::map_or_else(a0, &v3);
    return a0;
}
