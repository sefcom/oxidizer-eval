fn uu_yes::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x398]
    let v1: struct8;  // [sp-0x390], Other Possible Types: unsigned long
    let v2: i64;  // [sp-0x388]
    let v3: i64;  // [sp-0x380]
    let v4: i64;  // [sp-0x378]
    let v5: i64;  // [sp-0x370]
    let v6: iNone;  // [sp-0x368]
    let v7: iNone;  // [sp-0x358]
    let v8: i64;  // [sp-0x348]
    let v9: struct64;  // [sp-0x340], Other Possible Types: unsigned long, char
    let v10: i64;  // [sp-0x338]
    let v11: i8;  // [bp-0x330]
    let v12: i8;  // [bp-0x320]
    let v13: i8;  // [bp-0x310]
    let v14: String;  // [sp-0x300]
    let v15: Result<struct16, struct16>;  // [sp-0x2e8], Other Possible Types: String, struct712, struct56
    let v16: i64;  // [sp-0x2e0]
    let v17: i64;  // [sp-0x2d8]
    let v18: i32;  // [bp-0x2d0]
    let v20: i64;  // r14
    let v21: i64;  // rbx

    v15 = uu_yes::uu_app() as u6296;
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v15, a0, a1);
    if v4 == 0x8000000000000000 {
        v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v20;
    }
    v8 = *(&v13 as &i64);
    v7 = *(&v12 as &i128);
    v6 = *(&v11 as &i128);
    v4 = v9;
    v5 = v10;
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x4000, 0);
    v1 = v16;
    v2 = v17;
    v3 = 0;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "STRING");
    v9 = clap_builder::parser::error::MatchesError::unwrap("STRING", &v15);
    v1 = uu_yes::args_into_buffer(&v9);
    v1 = uu_yes::prepare_buffer();
    v21 = uu_yes::exec(v2, v3);
    if !(v21 && std::io::error::Error::kind(v21) as i8 != 11) {
        return v20;
    }
    v0 = v21;
    v14 = format!("standard output: {}", &v0);
    *(&v18 as &i32) = 1;
    v15 = v14;
}
