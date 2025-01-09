fn uu_test::path(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0x188], Other Possible Types: u128
    let v1: i8;  // [bp-0x178]
    let v2: i8;  // [bp-0x168]
    let v3: i8;  // [bp-0x158]
    let v4: i8;  // [bp-0x150]
    let v5: i8;  // [bp-0x14c]
    let v6: i8;  // [bp-0x148]
    let v7: i8;  // [bp-0x144]
    let v8: i8;  // [bp-0x13c]
    let v9: i8;  // [bp-0x138]
    let v10: i8;  // [bp-0x130]
    let v11: i8;  // [bp-0x120]
    let v12: i8;  // [bp-0x110]
    let v13: i8;  // [bp-0x100]
    let v14: i8;  // [bp-0xf0]
    let v15: i8;  // [bp-0xe0]
    let v16: struct16;  // [sp-0xd8]
    let v17: u128;  // [sp-0xc8]
    let v18: u128;  // [sp-0xb8]
    let v19: u64;  // [sp-0xa8]
    let v20: u32;  // [sp-0xa0]
    let v21: u32;  // [sp-0x9c]
    let v22: u32;  // [sp-0x98]
    let v23: u64;  // [sp-0x94]
    let v24: u32;  // [sp-0x8c]
    let v25: u64;  // [sp-0x88]
    let v26: u128;  // [sp-0x80]
    let v27: u128;  // [sp-0x70]
    let v28: u128;  // [sp-0x60]
    let v29: u128;  // [sp-0x50]
    let v30: u128;  // [sp-0x40]
    let v31: u64;  // [sp-0x30]

    if a2 != 8 {
        v0 = std::fs::metadata(a0, a1);
        if v0 as i32 == 2 {
            return 0;
        }
    } else {
        v0 = std::fs::symlink_metadata(a0, a1);
        if v0 as i32 == 2 {
            return 0;
        }
    }
    v16 = v0;
    v17 = v1;
    v18 = v2;
    v19 = v3;
    v20 = v4;
    v21 = v5;
    v22 = v6;
    v23 = v7;
    v24 = v8;
    v25 = v9;
    v31 = v15;
    v30 = v14;
    v29 = v13;
    v28 = v12;
    v27 = v11;
    v26 = v10;
    goto *((4309848 + a2 * 4) as &i32) + 4309848;
}
