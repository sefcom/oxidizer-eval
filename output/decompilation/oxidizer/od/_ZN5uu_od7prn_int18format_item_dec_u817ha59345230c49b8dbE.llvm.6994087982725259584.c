fn uu_od::prn_int::format_item_dec_u8(a0: &struct24, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: &u8;  // [sp-0x90]
    let v2: u64;  // [sp-0x88]
    let v3: u64;  // [sp-0x80]
    let v4: void*;  // [sp-0x78]
    let v5: struct56;  // [bp-0x70]
    let v7: u64;  // [sp-0x30]
    let v8: u64;  // [sp-0x28]
    let v9: void*;  // [sp-0x20]
    let v10: u64;  // [sp-0x18]
    let v11: u8;  // [sp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v3 = 3;
    v4 = 0;
    v7 = 1;
    v8 = 1;
    v9 = 0;
    v10 = 32;
    v11 = 3;
    v5 = struct56 {
        field_0: " "
        field_8: 1
        field_16: &v1
        field_24: 2
        field_32: &v6
        field_40: 1
        field_48: 2
    };
    core::option::Option<T>::map_or_else(a0, &v5);
    return a0;
}
