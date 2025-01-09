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
    let v9: i64;  // [bp-0x340], Other Possible Types: struct64
    let v10: i64;  // [sp-0x338]
    let v11: i8;  // [bp-0x330]
    let v12: i8;  // [bp-0x320]
    let v13: i8;  // [bp-0x310]
    let v14: i8;  // [bp-0x300]
    let v15: i224;  // [sp-0x2e8], Other Possible Types: struct56, Result<struct16, struct16>, struct28, struct712
    let v16: i64;  // [sp-0x2e0]
    let v17: i64;  // [sp-0x2d8]
    let v18: i64;  // [bp-0x2d0]
    let v19: i64;  // [sp-0x2c8]
    let v21: i64;  // rax
    let v22: i64;  // rbx

    v15 = uu_yes::uu_app() as u6296;
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v15, a0, a1);
    if v4 == 0x8000000000000000 {
        v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v21;
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
    v1 = uu_yes::args_into_buffer(&v9);
    v1 = uu_yes::prepare_buffer();
    v22 = uu_yes::exec(v2, v3);
    if !(v22 && std::io::error::Error::kind(v22) as i8 != 11) {
        return v21;
    }
    v0 = v22;
    v9 = &v0;
    v10 = <std::io::error::Error as core::fmt::Display>::fmt;
    v15 = struct28 {
        field_0: "standard output: "
        field_16: &v9
        field_24: <UNKNOWN>
    };
    v19 = 0;
    v18 = 1;
    core::option::Option<T>::map_or_else();
    v15 = v14;
    alloc::boxed::Box<T>::new(&v15);
}
