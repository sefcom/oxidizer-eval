fn uu_tail::follow::watch::WatcherRx::watch(a0: u32, a1: void*) -> u64 {
    let v0: void*;  // [sp-0xe0]
    let v1: u64;  // [sp-0xd8]
    let v2: void*;  // [sp-0xd0]
    let v3: u128;  // [sp-0xc8]
    let v4: u128;  // [sp-0xb8]
    let v5: u128;  // [sp-0xa8]
    let v6: u64;  // [sp-0x98]
    let v7: void*;  // [sp-0x90]
    let v8: void*;  // [sp-0x80]
    let v9: u64;  // [sp-0x70]
    let v10: u64;  // [sp-0x68]
    let v11: u64;  // [sp-0x60]
    let v12: u8;  // [sp-0x58]
    let v13: i8;  // [bp-0x50]
    let v14: i8;  // [bp-0x40]
    let v15: i8;  // [bp-0x30]
    let v16: i8;  // [bp-0x20]
    let v18: &struct_0;  // rax

    a1->field_18();
    if v13 == 6 {
        return 0;
    }
    v6 = v16;
    v5 = v15;
    v4 = v14;
    v3 = v13;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v11 = 32;
    v12 = 3;
    v7 = 0;
    v8 = 0;
    v9 = &v0;
    v10 = &g_55c8e0;
    if !<notify::error::Error as core::fmt::Display>::fmt(&v3, &v7) as i8 {
        v18 = __rust_alloc(32, 8);
        v18->field_0 = v0;
        v18->field_8 = v1;
        v18->field_10 = v2;
        v18->field_18 = 1;
        return v18;
    }
    core::result::unwrap_failed(); /* do not return */
}
