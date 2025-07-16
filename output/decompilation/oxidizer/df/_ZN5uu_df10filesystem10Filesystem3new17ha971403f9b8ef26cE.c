fn uu_df::filesystem::Filesystem::new(a1: i64, a2: i64) -> Option<struct232> {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x1e8]
    let v1: u64;  // [bp-0x1d8]
    let v2: alloc::string::String;  // [bp-0x1d0]
    let v3: u64;  // [bp-0x1c0]
    let v4: struct49;  // [bp-0x1b8]
    let v5: u128;  // [bp-0x1a8]
    let v6: u128;  // [bp-0x198]
    let v7: u64;  // [bp-0x188]
    let v8: Result<struct120, struct24>;  // [bp-0x180]
    let v9: u384;  // [bp-0x178]
    let v10: u128;  // [bp-0x138]
    let v11: u128;  // [bp-0x128]
    let v12: struct16;  // [bp-0x118]
    let v13: u128;  // [bp-0xe8]
    let v14: u64;  // [bp-0xd8]
    let v15: u8;  // [bp-0xd0]
    let v16: u128;  // [bp-0xc0]
    let v17: u128;  // [bp-0xb0]
    let v18: u64;  // [bp-0xa0]
    let v19: u384;  // [bp-0x98]
    let v20: u8;  // [bp-0x68]
    let v21: Option<struct152>;  // [bp-0x58]
    let v22: u128;  // [bp-0x48]
    let v23: struct16;  // [bp-0x38]
    let v24: alloc::string::String;  // [bp-0x28]
    let v26: u64;  // rsi
    let v27: u64;  // rax
    let v28: u64;  // rax
    let v29: i64;  // rdi
    let v30: u64;  // rdi

    v26 = a0 + 96;
    v27 = a0 + 24;
    if !*((a0 + 112) as &i64) {
        v28 = v27;
    } else {
        v28 = v26;
    }
    v2 = <alloc::string::String as core::clone::Clone>::clone(v28);
    v1 = v3;
    memcpy(&v0, &v2, 16);
    v8 = uucore::features::fsext::statfs(&v0);
    match v8 {
        Ok(_) => {
            v24 = *((&v8 as &char + 120) as &i64);
            v23 = v12;
            v22 = v11;
            v21 = v10;
            memcpy(&v20, &v8 as u128, 16);
            v19 = v9;
            v4 = uucore::features::fsext::FsUsage::new(&v19);
            v14 = *((a1 + 16) as &i64);
            v13 = *(a1 as &i128);
            memcpy(&v8, a0, 152);
            memcpy(&v15, &v4, 16);
            v16 = v5;
            v17 = v6;
            v18 = v7;
            memcpy(v30, &v8, 232);
            return;
        },
        Err(_) => {
            *(v29 as &i64) = 0x8000000000000000;
            return;
        },
    }
}
