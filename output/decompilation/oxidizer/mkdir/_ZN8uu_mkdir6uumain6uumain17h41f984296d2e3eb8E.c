fn uu_mkdir::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x690]
    let v1: u64;  // [bp-0x688]
    let v2: u64;  // [bp-0x680]
    let v3: struct56;  // [bp-0x678]
    let v4: struct16;  // [bp-0x640], Other Possible Types: u64
    let v5: struct56;  // [bp-0x640], Other Possible Types: u64
    let v6: u32;  // [bp-0x638]
    let v7: u8;  // [bp-0x634]
    let v8: u8;  // [bp-0x633]
    let v9: u8;  // [bp-0x632]
    let v10: u64;  // [bp-0x608]
    let v11: u128;  // [bp-0x5f8]
    let v12: struct24;  // [bp-0x5e0], Other Possible Types: u8
    let v13: struct24;  // [bp-0x5c8], Other Possible Types: struct56, struct712, u128
    let v14: Result<struct40, struct16>;  // [bp-0x5c8]
    let v15: u64;  // [bp-0x5c0]
    let v16: u64;  // [bp-0x5b8]
    let v17: u32;  // [bp-0x5b0]
    let v18: iNone;  // [bp-0x5a8]
    let v19: u64;  // [bp-0x598]
    let v20: u64;  // [bp-0x590]
    let v21: Result<struct24, struct12>;  // [bp-0x2f8], Other Possible Types: struct64
    let v22: struct712;  // [bp-0x2f8]
    let v23: u64;  // [bp-0x2f0]
    let v24: iNone;  // [bp-0x2e8]
    let v25: iNone;  // [bp-0x2d8]
    let v26: u64;  // [bp-0x2c8]
    let v28: u32;  // eax
    let v29: u64;  // r13
    let v30: u8;  // al
    let v31: u8;  // al
    let v32: u8;  // al
    let v33: u64;  // r12
    let v34: core::fmt::Arguments;  // rbx

    uucore::Args::collect_lossy(&v12, a0, a1);
    v28 = uu_mkdir::strip_minus_from_mode(&v12);
    v13 = uu_mkdir::uu_app();
    v22 = clap_builder::builder::command::Command::after_help(&v13);
    v13 = v12;
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v22, &v13);
    if (((0 ^ v4.field_0) & (0 ^ -(v5))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4.field_8);
    }
    v3 = v5;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3);
    v21 = clap_builder::parser::error::MatchesError::unwrap(&v13);
    if v21.field_0 as i64 {
        v1 = v23;
        v10 = v24;
        v11 = v25;
        v2 = v26;
        v0 = *((&v21.field_48 as &char + 8) as &i64);
    }
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "verbose");
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "parents");
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, "z");
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v3);
    v33 = clap_builder::parser::error::MatchesError::unwrap(&v14);
    v21 = uu_mkdir::get_mode(&v3, v28);
    match v21 {
        Err(_) => {
            v7 = v31;
            v6 = *((&v21 as &char + 8) as &i32);
            v8 = v30;
            v9 = v32 | (v33) as u8 as u8;
            v4 = v33;
            v13 = v29;
            v15 = v1;
            v16 = v10;
            v18 = v11;
            v19 = v2;
            v20 = v0;
            v34 = uu_mkdir::exec(&v13, &v4);
        },
        Ok(_) => {
            v16 = *((&v21 as &char + 16) as &i64);
            v13 = v21 as i128 as u128;
            v17 = 1;
            v34 = alloc::boxed::Box<T>::new(&v14) as u64;
        },
    }
    return v34;
}
