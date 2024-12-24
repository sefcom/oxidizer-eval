fn uu_numfmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x478], Other Possible Types: struct32
    let v1: i128;  // [sp-0x468]
    let v2: i64;  // [sp-0x450]
    let v3: i64;  // [sp-0x448]
    let v4: i128;  // [bp-0x418]
    let v5: i448;  // [sp-0x3f8], Other Possible Types: Result<struct56, struct16>
    let v6: i128;  // [sp-0x3f0]
    let v7: i128;  // [sp-0x3e0]
    let v8: struct64;  // [sp-0x328], Other Possible Types: i512
    let v9: i128;  // [sp-0x2e8], Other Possible Types: struct712, struct56, struct196
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rbx
    let v14: i64;  // rsi

    v9 = uu_numfmt::uu_app(a1, v11);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v9, a0, a1);
    if v2 == 0x8000000000000000 {
        v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v12;
    }
    v2 = v5;
    v9 = uu_numfmt::parse_options(&v2);
    v13 = v9;
    if v13 == 2 {
        v0 = core::ops::function::FnOnce::call_once(&v9);
        v4 = v0;
        v9.16 = vvar_248{stack -1032};
        v9 = v4;
        v12 = alloc::boxed::Box<T>::new(&v9);
        return v12;
    }
    v1 = *((&v9 as &char + 24) as &i128);
    v0 = *((&v9 as &char + 8) as &i128);
    memcpy(&v5, &v9, 168);
    v4 = v0;
    v6 = v4;
    v7 = v1;
    v5 = v13;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "NUMBER");
    v8 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v9);
    if !v8 {
        *(&v0 as &long long) = std::io::stdio::stdin();
        v9 = std::io::stdio::Stdin::lock(&v0);
        v9.field_8 = v11 & 1;
        v12 = uu_numfmt::handle_buffer(&v9, &v5, v11 | -0x100 | v11 & 1);
        if !(!v12) {
            goto LABEL_471f3e;
        }
LABEL_471f64:
        v12 = 0;
    } else {
        v12 = uu_numfmt::handle_args(&v8, &v5, v11);
        if !v12 {
            goto LABEL_471f64;
        }
LABEL_471f3e:
        v9 = std::io::stdio::stdout();
        core::result::Result<T,E>::expect(<std::io::stdio::Stdout as std::io::Write>::flush(&v9, v14, v11));
    }
    return v12;
}
