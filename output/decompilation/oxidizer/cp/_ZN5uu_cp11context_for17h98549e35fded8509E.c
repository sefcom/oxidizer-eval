fn uu_cp::context_for(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: i64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: i64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: u64;  // [bp-0x68]
    let v7: u8;  // [bp-0x60]
    let v8: u64;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: u64;  // [bp-0x48]
    let v11: u8;  // [bp-0x40]
    let v12: struct24;  // [bp-0x38], Other Possible Types: u64
    let v13: u64;  // [bp-0x30]
    let v14: i64;  // [bp-0x28]
    let v15: u64;  // [bp-0x20]
    let v16: void*;  // [bp-0x18]

    v4 = 1;
    v5 = a1;
    v6 = a2;
    v7 = 1;
    v8 = 1;
    v9 = a3;
    v10 = a4;
    v11 = 1;
    v0 = &v4;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v2 = &v8;
    v3 = <os_display::Quoted as core::fmt::Display>::fmt;
    v12 = &g_5b5e68;
    v13 = 2;
    v16 = 0;
    v14 = &v0;
    v15 = 2;
    v12 = core::option::Option<T>::map_or_else(a2);
    return a0;
}
