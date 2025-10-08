fn uu_stat::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct56;  // [bp-0x620]
    let v1: u64;  // [bp-0x618]
    let v2: struct16;  // [bp-0x5e8]
    let v3: struct56;  // [bp-0x5e8], Other Possible Types: u64
    let v4: u64;  // [bp-0x5e0]
    let v5: struct104;  // [bp-0x5b0], Other Possible Types: struct712
    let v6: struct712;  // [bp-0x2e8]
    let v7: Result<struct99, struct24>;  // [bp-0x2e8]
    let v8: u64;  // [bp-0x2e0]
    let v9: u64;  // [bp-0x2d8]
    let v10: u128;  // [bp-0x2d0]
    let v11: u128;  // [bp-0x2c0]
    let v12: u128;  // [bp-0x2b0]
    let v13: u128;  // [bp-0x2a0]
    let v15: u64;  // rdi
    let v16: u64;  // rbx
    let v17: u32;  // eax

    v6 = uu_stat::uu_app();
    v5 = clap_builder::builder::command::Command::after_help(&v6);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v5, a0, a1);
    v15 = v4;
    if (((0 ^ v2.field_0) & (0 ^ -(v3))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    v0 = v3;
    v7 = uu_stat::Stater::new(&v0);
    v16 = v8;
    if let Err(_) = v7 {
        return v16;
    }
    v5 = struct104 {
        field_0: v7 as i64
        field_8: v16
        field_16: v9
        field_24: v10
        field_40: v11
        field_56: v12
        field_72: v13
        field_88: *((&v7 as &char + 88) as &i128)
    };
    v17 = uu_stat::Stater::exec(&v5);
    v16 = (!v17 ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17));
    return v16;
}
