fn uu_pwd::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x348]
    let v1: struct24;  // [bp-0x348]
    let v2: struct16;  // [bp-0x348]
    let v3: u64;  // [bp-0x348]
    let v4: u64;  // [bp-0x340]
    let v5: iNone;  // [bp-0x338]
    let v6: iNone;  // [bp-0x328]
    let v7: core::fmt::Arguments;  // [bp-0x318]
    let v8: struct24;  // [bp-0x310]
    let v9: u64;  // [bp-0x308]
    let v10: u64;  // [bp-0x300]
    let v11: u64;  // [bp-0x2f8]
    let v12: u64;  // [bp-0x2f0]
    let v13: u64;  // [bp-0x2e8]
    let v14: struct712;  // [bp-0x2e0], Other Possible Types: u64
    let v15: u64;  // [bp-0x2d8]
    let v16: iNone;  // [bp-0x2d0]
    let v17: iNone;  // [bp-0x2c0]
    let v18: core::fmt::Arguments;  // [bp-0x2b0]
    let v20: u64;  // rdx

    v14 = uu_pwd::uu_app();
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    if (((0 ^ v2.field_0) & (0 ^ -(v3))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
    }
    v18 = v7;
    v17 = v6;
    v16 = v5;
    v14 = v2.field_0;
    v15 = v4;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "physical") {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "logical") {
            v0 = std::env::var(a1, v20);
            if let Err(_) = v0 {
                goto LABEL_44ec6a;
            }
        }
        v1 = uu_pwd::logical_path();
    } else {
LABEL_44ec6a:
        uu_pwd::physical_path(&v2);
    }
    v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2);
    if v8.field_0 == 0x8000000000000000 {
        return v12;
    }
    v11 = v8.field_0;
    v12 = v9;
    v13 = v10;
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v11));
    return 0;
}
