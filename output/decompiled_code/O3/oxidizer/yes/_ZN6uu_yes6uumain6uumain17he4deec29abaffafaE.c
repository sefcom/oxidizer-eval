fn uu_yes::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x398]
    let v1: i64;  // [sp-0x390], Other Possible Types: struct8, struct16
    let v2: i64;  // [sp-0x388]
    let v3: i64;  // [sp-0x380]
    let v4: i448;  // [sp-0x378]
    let v5: i64;  // [sp-0x370]
    let v6: i512;  // [sp-0x340], Other Possible Types: Result<struct56, struct16>, struct64
    let v7: i192;  // [sp-0x300]
    let v8: i5696;  // [sp-0x2e8], Other Possible Types: Result<struct16, struct24>, struct56, struct712
    let v9: i64;  // [sp-0x2e0]
    let v10: i64;  // [sp-0x2d8]
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i64;  // rax
    let v15: i64;  // rdx
    let v16: i64;  // rbx

    v8 = uu_yes::uu_app(a1, a2);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1, v12, v13);
    if v4 == 0x8000000000000000 {
        v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v14;
    }
    v4 = v6;
    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x4000, 0);
    v1 = v9;
    v2 = v10;
    v3 = 0;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "STRING");
    v6 = clap_builder::parser::error::MatchesError::unwrap("STRING", &v8);
    v1 = uu_yes::args_into_buffer(&v6, v15);
    v1 = uu_yes::prepare_buffer();
    v16 = uu_yes::exec(v2, v3, v15);
    if !v16 {
        v14 = 0;
    } else {
        if std::io::error::Error::kind(v16) as i8 == 11 {
            v14 = 0;
        } else {
            v0 = v16;
            v7 = format!("standard output: {:?}", &v0);
            v8 = v7;
            v14 = alloc::boxed::Box<T>::new(&v8);
        }
    }
    return v14;
}
