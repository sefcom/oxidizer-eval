fn uu_arch::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: alloc::borrow::Cow<str>;  // [bp-0x558]
    let v1: u64;  // [bp-0x558]
    let v2: u64;  // [bp-0x550]
    let v3: u8;  // [bp-0x548]
    let v4: u8;  // [bp-0x538]
    let v5: u64;  // [bp-0x528]
    let v6: u64;  // [bp-0x508]
    let v7: Result<struct56, struct16>;  // [bp-0x500], Other Possible Types: u64
    let v8: u64;  // [bp-0x4f8]
    let v9: u64;  // [bp-0x4f0]
    let v10: u64;  // [bp-0x498]
    let v11: u8;  // [bp-0x490]
    let v12: struct536;  // [bp-0x2e8]
    let v13: Result<struct536, struct24>;  // [bp-0x2e8]
    let v14: u32;  // [bp-0x2e0]
    let v15: u32;  // [bp-0x2d8]
    let v18: &str;  // rax:rdx

    v12 = uu_arch::uu_app();
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v12, a0, a1);
    match v7 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        },
        Ok(_) => {
            v5 = *((&v7 as &char + 48) as &i64);
            memcpy(&v4, &v7 as u128, 16);
            memcpy(&v3, &v7, 16);
            v1 = v7 as i64;
            v2 = v8;
            v13 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
            match v13 {
                Err(_) => {
                    return uu_arch::uumain::uumain::{{closure}}(v14, v15);
                },
                Ok(_) => {
                    memcpy(&v7 as u8, &v13 as u8, 0x200);
                    v7 = v13 as i64;
                    v8 = v14;
                    v9 = v15;
                    v0 = std::sys::os_str::bytes::Slice::to_string_lossy(v10, *(&v11 as &i64));
                    v18 = core::str::<impl str>::trim_matches(v2, *((&v0 as &char + 16) as &i64));
                    v6 = v18.length;
                    println!("{}", &vvar_91{reg 16});
                    return 0;
                },
            }
        },
    }
}
