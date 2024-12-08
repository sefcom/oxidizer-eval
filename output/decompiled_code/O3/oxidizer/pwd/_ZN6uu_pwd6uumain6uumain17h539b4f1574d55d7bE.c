fn uu_pwd::uumain::uumain(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: i128;  // [sp-0x360]
    let v3: i128;  // [sp-0x350]
    let v4: i64;  // [sp-0x340]
    let v5: i8;  // [bp-0x338], Other Possible Types: struct24
    let v6: i8;  // [bp-0x330]
    let v7: i8;  // [bp-0x328]
    let v8: i8;  // [bp-0x318]
    let v9: i8;  // [bp-0x308]
    let v10: i64;  // [sp-0x300]
    let v12: i64;  // [sp-0x2f0]
    let v13: i192;  // [sp-0x2e8], Other Possible Types: Result<struct24, struct8>, struct24, struct712
    let v17: i64;  // rax
    let v18: i64;  // rsi
    let v19: i64;  // rdx

    v13 = uu_pwd::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v13, a0, a1);
    if v0 == 0x8000000000000000 {
        v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        return v17;
    }
    v4 = v9;
    v3 = v8;
    v2 = v7;
    v0 = v5;
    v1 = v6;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "physical") as i8 {
LABEL_46086f:
        v13 = uu_pwd::physical_path();
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, "logical") as i8 {
LABEL_46088c:
        v13 = uu_pwd::logical_path();
    } else {
        v13 = std::env::var(v18, v19);
        if !v13 {
            goto LABEL_46088c;
        }
        goto LABEL_46086f;
    }
    v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13);
    if v10 != 0x8000000000000000 {
        v10 = v5;
        v17 = *((&v5 as &char + 8) as &i64);
        v12 = *((&v5 as &char + 16) as &i64);
        v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v10, v18, v19));
        if !v17 {
            return 0;
        }
    }
    return v17;
}
