fn uu_dir::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x5a0]
    let v1: struct24;  // [sp-0x568], Other Possible Types: int
    let v2: i64;  // [sp-0x568]
    let v3: struct24;  // [sp-0x550]
    let v4: struct64;  // [sp-0x538]
    let v5: i64;  // [sp-0x4f8], Other Possible Types: struct64, Result<struct208, struct16>, struct56
    let v6: i64;  // [sp-0x4f0]
    let v7: i64;  // [bp-0x4e8]
    let v8: i64;  // [sp-0x3f0]
    let v9: i64;  // [sp-0x3e8]
    let v10: i64;  // [sp-0x3e0]
    let v11: i8;  // [bp-0x3d8]
    let v12: i8;  // [sp-0x2fb]
    let v13: i8;  // [sp-0x2f9]
    let v14: i8;  // [sp-0x2f8]
    let v15: struct712;  // [sp-0x2f0]
    let v17: i8;  // bl
    let v19: i8;  // bpl
    let v21: i64;  // r12
    let v24: i64;  // r14

    v15 = uu_dir::uu_app();
    clap_builder::builder::command::Command::get_matches_from(&v0, &v15, a0, a1);
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE, g_60f408) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E, g_60f9a0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E, g_60f980) as i8 {
        v17 = 0;
    } else {
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E, g_60f990) as i32 & 0xffffffffffffff00 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E, g_60f990) as i32 ^ 1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E, g_60f418) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE, g_60f2f0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE, g_60f2e0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E, g_60f300) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format4LONG17h88813a22b172323aE, g_60f2d0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E, g_60f320) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E, g_60f310) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E, g_60f330) as i8 {
        v19 = 0;
    } else {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE, g_60f2c0) as i32 & 0xffffffffffffff00 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE, g_60f2c0) as i32 ^ 1;
    }
    v5 = uu_ls::Config::from(&v0);
    v21 = v5;
    if v21 == 0x8000000000000000 {
        return v24;
    }
    memcpy(&v11, &v5, 232);
    v8 = v21;
    v9 = v6;
    v10 = *((&v5 as &char + 16) as &i64);
    if v17 {
        v12 = 0;
        v13 = 2;
    }
    if v19 {
        v14 = 0;
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_60f428);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_60f428, &v5);
    if !v4.field_0 as i64 {
        v1 = uu_dir::uumain::uumain::{{closure}}();
    } else {
        v5 = struct64 {
            field_0: v23
            field_16: v4.field_16
            field_32: v4.field_32
            field_48: v4.field_48
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v5);
        v1 = v3;
    }
    *(&v7 as &i64) = (&v1)[16] as i64;
    v5 = v2;
    v6 = (&v1)[8] as i64;
    return v24;
}
