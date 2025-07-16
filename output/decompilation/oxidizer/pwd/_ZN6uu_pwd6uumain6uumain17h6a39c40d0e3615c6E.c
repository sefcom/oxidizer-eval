fn uu_pwd::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x370]
    let v1: u64;  // [bp-0x368]
    let v2: u128;  // [bp-0x360]
    let v3: u8;  // [bp-0x350]
    let v4: u64;  // [bp-0x340]
    let v5: struct24;  // [bp-0x338]
    let v6: Result<struct56, struct16>;  // [bp-0x338]
    let v7: u64;  // [bp-0x330]
    let v8: u128;  // [bp-0x328]
    let v9: u64;  // [bp-0x308]
    let v10: u64;  // [bp-0x300]
    let v11: u64;  // [bp-0x2f8]
    let v12: u64;  // [bp-0x2f0]
    let v13: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x2e8], Other Possible Types: u8
    let v14: Result<struct24, struct16>;  // [bp-0x2e8], Other Possible Types: u640
    let v16: u64;  // rdx

    uu_pwd::uu_app(&v13);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        },
        Ok(_) => {
            v4 = v9;
            memcpy(&v3, &v6 as u128, 16);
            v2 = v8;
            v0 = v6 as i64;
            v1 = v7;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "physical") as i8 || !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "logical") as i8 && !((v13 = std::env::var(a1, v16), !v13 as i64)) {
                v14 = uu_pwd::physical_path();
            } else {
                v14 = uu_pwd::logical_path();
            }
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v14);
            if v5.field_0 as i64 == 0x8000000000000000 {
                return v11;
            }
            v10 = v5.field_0 as i64;
            v11 = v7;
            v12 = v5.field_16;
            v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v10));
            return 0;
        },
    }
}
