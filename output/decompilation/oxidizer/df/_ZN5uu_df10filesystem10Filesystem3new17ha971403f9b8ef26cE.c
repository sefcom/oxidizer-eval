fn uu_df::filesystem::Filesystem::new(a1: i64, a2: &struct24) -> Option<struct232> {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x1e8]
    let v1: alloc::string::String;  // [bp-0x1d0]
    let v2: struct24;  // [bp-0x1d0]
    let v3: struct49;  // [bp-0x1b8]
    let v4: core::fmt::rt::Argument;  // [bp-0x1a8]
    let v5: u128;  // [bp-0x198]
    let v6: u64;  // [bp-0x188]
    let v7: Result<struct120, struct24>;  // [bp-0x180]
    let v8: struct120;  // [bp-0x178]
    let v9: core::fmt::Arguments;  // [bp-0xe8]
    let v10: u64;  // [bp-0xd8]
    let v11: u128;  // [bp-0xd0]
    let v12: core::fmt::rt::Argument;  // [bp-0xc0]
    let v13: u128;  // [bp-0xb0]
    let v14: u64;  // [bp-0xa0]
    let v15: struct120;  // [bp-0x98]
    let v17: u64;  // rsi
    let v18: u64;  // rax
    let v19: u64;  // rax
    let v20: i64;  // rdi
    let v21: u64;  // rdi

    v17 = a0 + 96;
    v18 = a0 + 24;
    if !*((a0 + 112) as &i64) {
        v19 = v18;
    } else {
        v19 = v17;
    }
    v1 = <alloc::string::String as core::clone::Clone>::clone(v19);
    v0 = v2;
    v7 = uucore::features::fsext::statfs(&v0);
    match v7 {
        Ok(v15) => {
            v3 = uucore::features::fsext::FsUsage::new(&v15);
            v10 = *((a1 + 16) as &i64);
            v9 = *(a1 as &i128);
            memcpy(&v7, a0, 152);
            v11 = v3.field_0;
            v12 = v4;
            v13 = v5;
            v14 = v6;
            memcpy(v21, &v7, 232);
            return;
        },
        Err(_) => {
            *(v20 as &i64) = 0x8000000000000000;
            return;
        },
    }
}
