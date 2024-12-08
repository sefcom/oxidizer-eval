fn uu_numfmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x478], Other Possible Types: struct32
    let v1: i128;  // [sp-0x468]
    let v2: struct56;  // [sp-0x450], Other Possible Types: i64
    let v3: i64;  // [sp-0x448]
    let v4: i128;  // [sp-0x418]
    let v5: i128;  // [sp-0x408]
    let v6: i64;  // [bp-0x3f8]
    let v7: i128;  // [sp-0x3f0]
    let v9: i128;  // [sp-0x3e0]
    let v10: i8;  // [bp-0x3d8]
    let v12: i512;  // [sp-0x328], Other Possible Types: struct64
    let v13: i64;  // [sp-0x2e8], Other Possible Types: struct56, struct196, struct712
    let v15: i64;  // rdx
    let v16: i64;  // rax
    let v18: i64;  // rbx
    let v19: i64;  // rsi

    v13 = uu_numfmt::uu_app(a1, v15);
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v13, a0, a1);
    if v2 == 0x8000000000000000 {
        v16 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v16;
    }
    v2 = struct56 {
        field_0: v6
        field_8: v17
        field_16: v8
        field_32: v10
        field_48: v11
    };
    v13 = uu_numfmt::parse_options(&v2);
    v18 = v13;
    if v18 == 2 {
        v0 = core::ops::function::FnOnce::call_once(&v13);
        v4 = v0;
        v5 = v0.16;
        *(&v13.field_0 as &struct56) = struct56 {
            field_0: v4
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
        v16 = alloc::boxed::Box<T>::new(&v13);
        return v16;
    }
    v1 = *((&v13 as &char + 24) as &i128);
    v0 = *((&v13 as &char + 8) as &i128);
    memcpy(&v10, &v13, 168);
    v4 = v0;
    v7 = v4;
    v9 = v1;
    v6 = v18;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "NUMBER");
    v12 = clap_builder::parser::error::MatchesError::unwrap("NUMBER", &v13);
    if !v12 {
        *(&v0 as &long long) = std::io::stdio::stdin();
        v13 = std::io::stdio::Stdin::lock(&v0);
        v13.field_8 = v15 & 1;
        v16 = uu_numfmt::handle_buffer(&v13, &v6, v15 | -0x100 | v15 & 1);
        if !(!v16) {
            goto LABEL_471f3e;
        }
LABEL_471f64:
        v16 = 0;
    } else {
        v16 = uu_numfmt::handle_args(&v12, &v6, v15);
        if !v16 {
            goto LABEL_471f64;
        }
LABEL_471f3e:
        v13 = std::io::stdio::stdout();
        core::result::Result<T,E>::expect(<std::io::stdio::Stdout as std::io::Write>::flush(&v13, v19, v15));
    }
    return v16;
}
