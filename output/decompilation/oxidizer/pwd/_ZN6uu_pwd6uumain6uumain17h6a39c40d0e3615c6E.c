fn uu_pwd::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: iNone;  // [sp-0x360]
    let v3: iNone;  // [sp-0x350]
    let v4: i64;  // [sp-0x340]
    let v5: struct24;  // [sp-0x338], Other Possible Types: char
    let v6: i8;  // [bp-0x330]
    let v7: i8;  // [bp-0x328]
    let v8: i8;  // [bp-0x318]
    let v9: i8;  // [bp-0x308]
    let v10: i64;  // [sp-0x300]
    let v11: i64;  // [sp-0x2f8]
    let v12: i64;  // [sp-0x2f0]
    let v13: struct712;  // [sp-0x2e8], Other Possible Types: Result<struct24, struct8>
    let v14: struct24;  // [sp-0x2e8], Other Possible Types: int, Result<struct24, struct8>
    let v18: i64;  // rax
    let v22: i64;  // r14

    v13 = uu_pwd::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v13, a0, a1);
    if v0 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        return v18;
    }
    v4 = *(&v9 as &i64);
    v3 = *(&v8 as &i128);
    v2 = *(&v7 as &i128);
    v0 = *(&v5 as &i64);
    v1 = *(&v6 as &i64);
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "physical") as i8 || !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "logical") as i8 && !((v13 = std::env::var(), !v13 as i64)) {
        v14 = uu_pwd::physical_path();
    } else {
        v14 = uu_pwd::logical_path();
    }
    v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v14);
    if v10 != 0x8000000000000000 {
        v10 = v5.field_0;
        v11 = v5.field_8;
        v12 = v5.field_16;
        if !<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v10)) {
            return 0;
        }
    }
    v18 = v22;
    return v18;
}
