fn uu_od::prn_int::format_item_dec_u64(a0: &struct24, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: u64;  // [sp-0x90]
    let v2: u64;  // [sp-0x88]
    let v3: u64;  // [sp-0x80]
    let v4: void*;  // [sp-0x78]
    let v5: u64;  // [sp-0x70]
    let v6: u64;  // [sp-0x68]
    let v7: u64;  // [sp-0x60]
    let v8: u64;  // [sp-0x58]
    let v9: u64;  // [sp-0x50]
    let v10: u64;  // [sp-0x48]
    let v11: u64;  // [sp-0x40]
    let v12: u64;  // [sp-0x30]
    let v13: u64;  // [sp-0x28]
    let v14: void*;  // [sp-0x20]
    let v15: u64;  // [sp-0x18]
    let v16: u8;  // [sp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v3 = 20;
    v4 = 0;
    v11 = 2;
    v12 = 1;
    v13 = 1;
    v14 = 0;
    v15 = 32;
    v16 = 3;
    v5 = " ";
    v6 = 1;
    v9 = &v11;
    v10 = 1;
    v7 = &v1;
    v8 = 2;
    core::option::Option<T>::map_or_else(a0, &v5);
    return a0;
}
