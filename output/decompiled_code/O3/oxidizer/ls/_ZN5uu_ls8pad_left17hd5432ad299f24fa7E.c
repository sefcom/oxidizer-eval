fn uu_ls::pad_left(a0: &struct24, a1: u64, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x98]
    let v1: u64;  // [sp-0x90]
    let v2: u64;  // [sp-0x88]
    let v3: u64;  // [sp-0x80]
    let v4: u64;  // [sp-0x78]
    let v5: void*;  // [sp-0x70]
    let v6: u64;  // [sp-0x68]
    let v7: u64;  // [sp-0x60]
    let v8: u64;  // [sp-0x58]
    let v9: u64;  // [sp-0x50]
    let v10: u64;  // [sp-0x48]
    let v11: u64;  // [sp-0x40]
    let v12: u64;  // [sp-0x38]
    let v13: u64;  // [sp-0x28]
    let v14: u64;  // [sp-0x20]
    let v15: void*;  // [sp-0x18]
    let v16: u64;  // [sp-0x10]
    let v17: u8;  // [sp-0x8]

    v0 = a1;
    v1 = a2;
    v2 = &v0;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = a3;
    v5 = 0;
    v12 = 2;
    v13 = 1;
    v14 = 1;
    v15 = 0;
    v16 = 32;
    v17 = 1;
    v6 = &g_423d10;
    v7 = 1;
    v10 = &v12;
    v11 = 1;
    v8 = &v2;
    v9 = 2;
    return core::option::Option<T>::map_or_else(a0, &v6);
}
