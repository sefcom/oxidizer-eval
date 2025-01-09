fn uu_pwd::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: i128;  // [sp-0x360]
    let v3: i128;  // [sp-0x350]
    let v4: i64;  // [sp-0x340]
    let v5: i192;  // [sp-0x338], Other Possible Types: Result<struct56, struct8>, struct24
    let v6: i64;  // [sp-0x300]
    let v8: i64;  // [sp-0x2f0]
    let v9: i200;  // [sp-0x2e8], Other Possible Types: Result<struct24, struct8>, struct712, struct24
    let v13: i64;  // rax

    v9 = uu_pwd::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v9, a0, a1);
    match v5 {
        Err(_) => {
            v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
            return v13;
        },
        Ok(_) => {
            v4 = *((&v5 as &char + 48) as &i64);
            v3 = *((&v5 as &char + 32) as &i128);
            v2 = *((&v5 as &char + 16) as &i128);
            v0 = v5;
            v1 = *((&v5 as &char + 8) as &i64);
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "physical") as i8 {
LABEL_46027f:
                v9 = uu_pwd::physical_path();
            } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "logical") as i8 {
LABEL_46029c:
                v9 = uu_pwd::logical_path();
            } else {
                v9 = std::env::var();
                if !v9 {
                    goto LABEL_46029c;
                }
                goto LABEL_46027f;
            }
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v9);
            if v6 != 0x8000000000000000 {
                v6 = v5;
                v13 = *((&v5 as &char + 8) as &i64);
                v8 = *((&v5 as &char + 16) as &i64);
                v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v6));
                if !v13 {
                    return 0;
                }
            }
            return v13;
        },
    }
}
