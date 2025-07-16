fn uu_od::prn_int::format_item_hex16(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: i64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: void*;  // [bp-0x78]
    let v5: u448;  // [bp-0x70]
    let v6: i8;  // [bp-0x40]
    let v7: u64;  // [bp-0x30]
    let v8: u64;  // [bp-0x28]
    let v9: &[u8];  // [bp-0x20]
    let v10: u64;  // [bp-0x18]
    let v11: u8;  // [bp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::<impl core::fmt::LowerHex for isize>::fmt;
    v3 = 4;
    v4 = 0;
    v7 = 1;
    v8 = 1;
    v9 = 0;
    v10 = 34359738400;
    v11 = 3;
    v5 = struct56 {
        field_0: " "
        field_8: 1
        field_16: &v1
        field_24: 2
        field_32: &v6 as u64
        field_40: 1
        field_48: 2
    };
    core::option::Option<T>::map_or_else(a0, &v5);
    return a0;
}
