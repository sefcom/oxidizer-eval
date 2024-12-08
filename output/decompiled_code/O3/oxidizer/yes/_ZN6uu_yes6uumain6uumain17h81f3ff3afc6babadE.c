fn uu_yes::uumain::uumain(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x398]
    let v1: struct8;  // [sp-0x390], Other Possible Types: i64, struct16
    let v2: i64;  // [sp-0x388]
    let v3: i64;  // [sp-0x380]
    let v4: i64;  // [sp-0x378]
    let v5: i64;  // [sp-0x370]
    let v6: i128;  // [sp-0x368]
    let v7: i128;  // [sp-0x358]
    let v8: i64;  // [sp-0x348]
    let v9: i8;  // [bp-0x340], Other Possible Types: struct64
    let v10: i64;  // [sp-0x338]
    let v11: i8;  // [bp-0x330]
    let v12: i8;  // [bp-0x320]
    let v13: i8;  // [bp-0x310]
    let v14: i192;  // [sp-0x300]
    let v15: i448;  // [sp-0x2e8], Other Possible Types: Result<struct16, struct24>, struct56, struct28, struct712
    let v16: i64;  // [sp-0x2e0]
    let v17: i64;  // [sp-0x2d8]
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rbx

    v15 = uu_yes::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v15, a0, a1);
    if v4 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v19;
    }
    v8 = v13;
    v7 = v12;
    v6 = v11;
    v4 = v9;
    v5 = v10;
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x4000, 0);
    v1 = v16;
    v2 = v17;
    v3 = 0;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "STRING");
    v9 = clap_builder::parser::error::MatchesError::unwrap("STRING", &v15);
    v1 = uu_yes::args_into_buffer(&v9, v20);
    v1 = uu_yes::prepare_buffer();
    v21 = uu_yes::exec(v1.field_8, v3, v20);
    if !v21 {
        v19 = 0;
    } else if std::io::error::Error::kind(v21) as i8 == 11 {
        v19 = 0;
    } else {
        v0 = v21;
        v14 = format!("standard output: {:?}", &v0);
        v15 = struct28 {
            field_0: v14
            field_16: *((&v14 as &char + 16) as &i64)
            field_24: 1
        };
        v19 = alloc::boxed::Box<T>::new(&v15);
    }
    return v19;
}
