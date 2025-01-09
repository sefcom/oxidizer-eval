fn uu_numfmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x478], Other Possible Types: struct32
    let v1: i128;  // [sp-0x468]
    let v2: i64;  // [sp-0x450]
    let v3: i64;  // [sp-0x448]
    let v4: i256;  // [sp-0x418], Other Possible Types: struct32
    let v5: i8;  // [bp-0x3f8]
    let v6: i128;  // [bp-0x3f0]
    let v7: i128;  // [sp-0x3e0]
    let v8: struct64;  // [sp-0x328], Other Possible Types: i512
    let v9: i64;  // [sp-0x2e8], Other Possible Types: struct196, struct56, struct712
    let v10: i8;  // [sp-0x2e0]
    let v13: i64;  // rax
    let v14: i64;  // rbx
    let v15: i8;  // dl
    let v16: i64;  // rbx

    v9 = uu_numfmt::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v9, a0, a1);
    if v2 == 0x8000000000000000 {
        v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v13;
    }
    v2 = v5;
    v9 = uu_numfmt::parse_options(&v2);
    v14 = v9;
    if v14 == 2 {
        v0 = core::ops::function::FnOnce::call_once(&v9);
        v4 = v0;
        v9 = v4;
        v13 = alloc::boxed::Box<T>::new(&v9);
        return v13;
    }
    v1 = *((&v9 as &char + 24) as &i128);
    v0 = *((&v9 as &char + 8) as &i128);
    memcpy(&v5, &v9, 168);
    v4 = v0;
    v6 = v4;
    v7 = v1;
    v5 = v14;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "NUMBER");
    v8 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v9);
    if !v8 {
        v0 = std::io::stdio::stdin();
        v9 = std::io::stdio::Stdin::lock(&v0);
        v10 = v15 & 1;
        if !v16 {
            return v13;
        }
    } else if !uu_numfmt::handle_args(&v8, &v5) {
        return v13;
    }
    v9 = std::io::stdio::stdout();
    core::result::Result<T,E>::expect(<std::io::stdio::Stdout as std::io::Write>::flush(&v9));
    return v13;
}
