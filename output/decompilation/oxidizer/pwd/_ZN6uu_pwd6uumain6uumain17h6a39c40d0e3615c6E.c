fn uu_pwd::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x370]
    let v1: u64;  // [bp-0x368]
    let v2: core::fmt::rt::Argument;  // [bp-0x360]
    let v3: core::fmt::Arguments;  // [bp-0x350]
    let v4: core::fmt::Arguments;  // [bp-0x340]
    let v5: Result<struct24, struct24>;  // [bp-0x338]
    let v6: Result<struct56, struct16>;  // [bp-0x338]
    let v7: core::fmt::Arguments;  // [bp-0x330]
    let v8: core::fmt::rt::Argument;  // [bp-0x328]
    let v9: core::fmt::Arguments;  // [bp-0x318]
    let v10: core::fmt::Arguments;  // [bp-0x308]
    let v11: u64;  // [bp-0x300]
    let v12: u64;  // [bp-0x2f8]
    let v13: u64;  // [bp-0x2f0]
    let v14: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x2e8], Other Possible Types: u8
    let v15: Result<struct24, struct16>;  // [bp-0x2e8], Other Possible Types: u640
    let v17: u64;  // rdx

    uu_pwd::uu_app(&v14);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        },
        Ok(_) => {
            v4 = v10;
            v3 = v9;
            v2 = v8;
            v0 = v6 as i64;
            v1 = v7;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "physical") as i8 || !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "logical") as i8 && !((v14 = std::env::var(a1, v17), !v14 as i64)) {
                v15 = uu_pwd::physical_path();
            } else {
                v15 = uu_pwd::logical_path();
            }
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v15);
            match v5 {
                Err(_) => {
                    return v12;
                },
                Ok(_) => {
                    v11 = v5 as i64;
                    v12 = v7;
                    v13 = *((&v5 as &char + 16) as &i64);
                    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v11));
                    return 0;
                },
            }
        },
    }
}
