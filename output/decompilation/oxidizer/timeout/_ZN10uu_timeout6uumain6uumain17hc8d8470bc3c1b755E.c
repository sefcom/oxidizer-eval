fn uu_timeout::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x360], Other Possible Types: u64
    let v1: struct56;  // [bp-0x360], Other Possible Types: u64
    let v2: &u64;  // [bp-0x358]
    let v3: u64;  // [bp-0x350]
    let v4: u128;  // [bp-0x348]
    let v5: u32;  // [bp-0x340]
    let v6: u128;  // [bp-0x338]
    let v7: u64;  // [bp-0x330]
    let v8: u128;  // [bp-0x328]
    let v9: u8;  // [bp-0x320]
    let v10: u8;  // [bp-0x31f]
    let v11: struct56;  // [bp-0x318]
    let v12: u32;  // [bp-0x310]
    let v13: struct700;  // [bp-0x2e0]
    let v14: Result<struct35, struct24>;  // [bp-0x2e0]
    let v15: &u64;  // [bp-0x2d8]
    let v16: u64;  // [bp-0x2d0]
    let v17: u128;  // [bp-0x2c8]
    let v18: u128;  // [bp-0x2b8]
    let v20: &u64;  // rax
    let v21: &u64;  // r14

    v13 = uu_timeout::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return alloc::boxed::Box<T>::new(v12);
    }
    v11 = v1;
    v14 = uu_timeout::Config::from(&v11);
    v20 = v15;
    match v14 {
        Err(_) => {
            v21 = v20;
        },
        Ok(_) => {
            v8 = *((&v14 as &char + 56) as &i128) as u128;
            v6 = v18;
            v4 = v17;
            v0 = v14 as i64;
            v2 = v20;
            v3 = v16;
            v21 = uu_timeout::timeout(v20, v16, v4 as i64, v5 as u64, v8 as i64, v6 as i64, v7, v9, v10, *((&v8 as &char + 10) as &i8));
        },
    }
    return v21;
}
