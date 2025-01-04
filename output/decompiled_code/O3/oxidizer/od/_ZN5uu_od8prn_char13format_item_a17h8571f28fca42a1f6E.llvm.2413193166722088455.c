fn uu_od::prn_char::format_item_a(a0: &struct24, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: &u8;  // [sp-0x80]
    let v2: u64;  // [sp-0x78]
    let v3: u64;  // [sp-0x70]
    let v4: u64;  // [sp-0x68]
    let v5: &&struct_0;  // [sp-0x60]
    let v6: u64;  // [sp-0x58]
    let v7: &u8;  // [sp-0x50]
    let v8: u64;  // [sp-0x48]
    let v9: u64;  // [sp-0x40]
    let v10: void*;  // [sp-0x30]
    let v11: u64;  // [sp-0x28]
    let v12: void*;  // [sp-0x20]
    let v13: u64;  // [sp-0x18]
    let v14: u8;  // [sp-0x10]

    v0 = "nul" + ((a1 & 127) * 16 & 4294967295);
    v1 = &v0;
    v2 = <&T as core::fmt::Display>::fmt;
    v9 = 2;
    v10 = 0;
    v11 = 4;
    v12 = 0;
    v13 = 32;
    v14 = 1;
    v3 = &g_40dad0;
    v4 = 1;
    v7 = &v9;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    core::option::Option<T>::map_or_else(a0, &v3);
    return a0;
}
