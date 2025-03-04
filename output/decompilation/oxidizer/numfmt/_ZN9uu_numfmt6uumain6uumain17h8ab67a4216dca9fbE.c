fn uu_numfmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct32;  // [bp-0x478], Other Possible Types: unsigned long, int
    let v1: iNone;  // [sp-0x468]
    let v2: i64;  // [sp-0x450], Other Possible Types: int
    let v3: i64;  // [sp-0x448]
    let v4: iNone;  // [sp-0x418], Other Possible Types: struct32
    let v5: iNone;  // [sp-0x408]
    let v6: i64;  // [bp-0x3f8], Other Possible Types: char
    let v7: iNone;  // [sp-0x3f0]
    let v8: iNone;  // [sp-0x3e0]
    let v9: struct64;  // [sp-0x328]
    let v10: i64;  // [sp-0x2e8], Other Possible Types: struct712, int, struct196, struct56
    let v11: i8;  // [sp-0x2e0]
    let v12: iNone;  // [sp-0x2d8]
    let v15: i64;  // rbx
    let v16: i64;  // rbx
    let v17: i8;  // dl

    v10 = uu_numfmt::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v10, a0, a1);
    if v2 == 0x8000000000000000 {
        v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v15;
    }
    v2 = *(&v6 as &i448);
    v10 = uu_numfmt::parse_options(&v2);
    v16 = v10;
    if v16 == 2 {
        v0 = core::ops::function::FnOnce::call_once(&v10);
        v4 = v0;
        v12 = v5;
        v10 = v4;
        return v15;
    }
    v1 = *((&v10.field_0 as &char + 24) as &i128);
    *(&v0 as &i128) = *((&v10.field_0 as &char + 8) as &i128);
    memcpy(&v6, &v10, 168);
    v4 = v0 as i128;
    v7 = v4;
    v8 = v1;
    v6 = v16;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "NUMBER");
    v9 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v10);
    if !v9.field_0 as i64 {
        *(&v0 as &u64) = std::io::stdio::stdin();
        v10 = std::io::stdio::Stdin::lock(&v0);
        v11 = v17 & 1;
        if !v15 {
            return 0;
        }
    } else {
        v15 = uu_numfmt::handle_args(&v9, &v6);
        if !v15 {
            return 0;
        }
    }
    v10 = std::io::stdio::stdout();
    core::result::Result<T,E>::expect(<std::io::stdio::Stdout as std::io::Write>::flush(&v10));
    return v15;
}
