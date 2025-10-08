fn uu_df::filesystem::Filesystem::new(a0: u64, a1: i64, a2: i64) -> int {
    let v0: struct49;  // [bp-0x1e0]
    let v4: alloc::string::String;  // [bp-0x1a8]
    let v5: Result<struct120, struct24>;  // [bp-0x190]
    let v6: struct120;  // [bp-0x188]
    let v13: struct120;  // [bp-0xa8]
    let v15: i64;  // rsi
    let v16: i64;  // rax
    let v17: i64;  // rax

    v15 = a1 + 96;
    v16 = a1 + 24;
    if !*((a1 + 112) as &i64) {
        v17 = v16;
    } else {
        v17 = v15;
    }
    v4 = <alloc::string::String as core::clone::Clone>::clone(v17);
    v5 = uucore::features::fsext::statfs(&v4);
    match v5 {
        Ok(v13) => {
            v0 = uucore::features::fsext::FsUsage::new(&v13);
            memcpy(&v5, a1, 152);
            memcpy(a0, &v5, 232);
            return;
        },
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
