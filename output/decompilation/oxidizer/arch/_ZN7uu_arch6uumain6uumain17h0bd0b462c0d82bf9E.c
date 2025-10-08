fn uu_arch::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x540]
    let v1: u64;  // [bp-0x538]
    let v2: Result<struct24, struct24>;  // [bp-0x538]
    let v3: u64;  // [bp-0x530]
    let v4: u128;  // [bp-0x528]
    let v5: iNone;  // [bp-0x518]
    let v6: u64;  // [bp-0x508]
    let v7: struct16;  // [bp-0x500], Other Possible Types: u64
    let v8: u64;  // [bp-0x500]
    let v9: u64;  // [bp-0x4f8]
    let v10: i8;  // [bp-0x4f0], Other Possible Types: u64
    let v11: iNone;  // [bp-0x4e0]
    let v12: i8;  // [bp-0x4d0]
    let v13: u64;  // [bp-0x498]
    let v14: u8;  // [bp-0x490]
    let v15: struct700;  // [bp-0x2e8]
    let v16: Result<struct536, struct24>;  // [bp-0x2e8]
    let v17: u64;  // [bp-0x2e0]
    let v18: u64;  // [bp-0x2d8]
    let v20: u64;  // rdx
    let v21: &str;  // rax:rdx

    v15 = uu_arch::uu_app();
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if (((0 ^ v7.field_0) & (0 ^ -(v8))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    }
    v6 = *(&v12 as &i64);
    v5 = v11;
    v4 = *(&v10 as &i128);
    v1 = v7.field_0;
    v3 = v9;
    v16 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    match v16 {
        Err(_) => {
            return uu_arch::uumain::uumain::{{closure}}(v17, v18);
        },
        Ok(_) => {
            memcpy(&v10, &v16 as u8, 0x200);
            v7 = v16 as i64;
            v9 = v17;
            v10 = v18;
            v2 = alloc::string::String::from_utf8_lossy(v13, *(&v14 as &i64));
            v21 = core::str::<impl str>::trim_matches(v3, *((&v2 as &char + 16) as &i64), v20);
            v0 = v21.length;
            println!("{}", &vvar_96{reg 16});
            return 0;
        },
    }
}
