fn uu_yes::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x398]
    let v1: struct8;  // [sp-0x390], Other Possible Types: i64
    let v2: i64;  // [sp-0x388]
    let v3: i64;  // [sp-0x380]
    let v4: i64;  // [sp-0x378]
    let v5: i64;  // [sp-0x370]
    let v6: i128;  // [sp-0x368]
    let v7: i128;  // [sp-0x358]
    let v8: i64;  // [sp-0x348]
    let v9: i64;  // [sp-0x340], Other Possible Types: struct64, Result<struct56, struct8>
    let v10: i64;  // [sp-0x338]
    let v13: i64;  // [sp-0x2e8], Other Possible Types: struct712, Result<struct16, struct16>, struct56, struct28
    let v14: i64;  // [sp-0x2e0]
    let v15: i64;  // [sp-0x2d8]
    let v16: i64;  // [bp-0x2d0]
    let v17: i64;  // [sp-0x2c8]
    let v19: i64;  // rax
    let v20: i64;  // rbx

    v13 = uu_yes::uu_app();
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    if v4 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v19;
    }
    v8 = *((&v9 as &char + 48) as &i64);
    v7 = *((&v9 as &char + 32) as &i128);
    v6 = *((&v9 as &char + 16) as &i128);
    v4 = v9;
    v5 = v10;
    v13 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x4000, 0);
    v1 = v14;
    v2 = v15;
    v3 = 0;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "STRING");
    v9 = clap_builder::parser::error::MatchesError::unwrap("STRING", &v13);
    v1 = uu_yes::args_into_buffer(&v9);
    v1 = uu_yes::prepare_buffer();
    v20 = uu_yes::exec(v2, v3);
    if !v20 {
        v19 = 0;
    } else {
        if std::io::error::Error::kind(v20) as i8 == 11 {
            v19 = 0;
        } else {
            v0 = v20;
            v9 = &v0;
            v10 = <std::io::error::Error as core::fmt::Display>::fmt;
            v13 = "standard output: ";
            v14 = 1;
            v17 = 0;
            v15 = &v9;
            v16 = 1;
            core::option::Option<T>::map_or_else();
            v13 = struct28 {
                field_0: v11
                field_16: v12
                field_24: 1
            };
            v19 = alloc::boxed::Box<T>::new(&v13);
        }
    }
    return v19;
}
