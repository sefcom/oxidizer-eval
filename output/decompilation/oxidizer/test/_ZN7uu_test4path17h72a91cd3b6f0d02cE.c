fn uu_test::path(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: u8;  // [bp-0x188]
    let v1: u128;  // [bp-0x178]
    let v2: struct24;  // [bp-0x168]
    let v3: u64;  // [bp-0x158]
    let v4: u32;  // [bp-0x150]
    let v5: u32;  // [bp-0x14c]
    let v6: u32;  // [bp-0x148]
    let v7: u64;  // [bp-0x144]
    let v8: u32;  // [bp-0x13c]
    let v9: u64;  // [bp-0x138]
    let v10: u128;  // [bp-0x130]
    let v11: u128;  // [bp-0x120]
    let v12: u8;  // [bp-0x110]
    let v13: u8;  // [bp-0x100]
    let v14: u8;  // [bp-0xf0]
    let v15: i8;  // [bp-0xe0]
    let v16: u8;  // [bp-0xd8]
    let v17: u128;  // [bp-0xc8]
    let v18: struct24;  // [bp-0xb8]
    let v19: u64;  // [bp-0xa8]
    let v20: u32;  // [bp-0xa0]
    let v21: u32;  // [bp-0x9c]
    let v22: u32;  // [bp-0x98]
    let v23: u64;  // [bp-0x94]
    let v24: u32;  // [bp-0x8c]
    let v25: u64;  // [bp-0x88]
    let v26: u128;  // [bp-0x80]
    let v27: u128;  // [bp-0x70]
    let v28: u8;  // [bp-0x60]
    let v29: u8;  // [bp-0x50]
    let v30: u8;  // [bp-0x40]
    let v31: u64;  // [bp-0x30]
    let v33: i64;  // rdi

    v33 = &v0;
    if a2 == 8 {
        std::fs::symlink_metadata(v33, a0, a1);
        if *(&v0 as &i32) == 2 {
            return 0;
        }
    } else {
        std::fs::metadata(v33, a0, a1);
        if *(&v0 as &i32) == 2 {
            return 0;
        }
    }
    memcpy(&v16, &v0, 16);
    v17 = v1;
    v18 = v2;
    v19 = v3;
    v20 = v4;
    v21 = v5;
    v22 = v6;
    v23 = v7;
    v24 = v8;
    v25 = v9;
    v31 = *(&v15 as &i64);
    memcpy(&v30, &v14, 16);
    memcpy(&v29, &v13, 16);
    memcpy(&v28, &v12, 16);
    v27 = v11;
    v26 = v10;
    goto ((&g_41c358.field_0)[a2] + &g_41c358.field_0) as i64;
}
