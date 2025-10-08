fn uu_logname::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u128;  // [bp-0x358]
    let v1: struct16;  // [bp-0x358]
    let v2: struct56;  // [bp-0x358], Other Possible Types: u64
    let v3: u64;  // [bp-0x350]
    let v4: core::fmt::Arguments;  // [bp-0x348]
    let v5: struct56;  // [bp-0x320]
    let v6: u64;  // [bp-0x318]
    let v7: struct700;  // [bp-0x2e8]
    let v9: u64;  // rdx

    v7 = uu_logname::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v7, a0, a1);
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v5 = v2;
    uu_logname::get_userlogin(&v5);
    if v5.field_0 == 0x8000000000000000 {
        v0 = uucore::util_name();
        v3 = v9;
        eprint!("{}: ", &v0);
        eprintln!("no login name");
    } else {
        v4 = v5.field_16 as i64;
        v0 = *(&v5.field_0 as &i128);
        println!("{}", &v0);
    }
    return 0;
}
