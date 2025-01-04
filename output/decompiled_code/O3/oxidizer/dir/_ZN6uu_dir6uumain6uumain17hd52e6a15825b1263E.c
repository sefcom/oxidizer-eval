fn uu_dir::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct56;  // [sp-0x5a0], Other Possible Types: i448
    let v1: i192;  // [sp-0x568], Other Possible Types: struct24
    let v2: struct24;  // [sp-0x550], Other Possible Types: i192
    let v3: struct64;  // [sp-0x538], Other Possible Types: i512
    let v4: i64;  // [sp-0x4f8], Other Possible Types: struct64, struct56, Result<struct43, struct24>
    let v5: i64;  // [sp-0x4f0]
    let v6: i64;  // [sp-0x3f0]
    let v7: i64;  // [sp-0x3e8]
    let v8: i64;  // [sp-0x3e0]
    let v9: i8;  // [bp-0x3d8]
    let v10: i8;  // [sp-0x2fb]
    let v11: i8;  // [sp-0x2f9]
    let v12: i8;  // [sp-0x2f8]
    let v13: struct712;  // [sp-0x2f0], Other Possible Types: i5696
    let v15: i8;  // bl
    let v17: i64;  // rdx
    let v18: i8;  // bpl
    let v20: i64;  // rcx
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v23: i64;  // r12
    let v24: i64;  // r14
    let v27: i64;  // rdx

    v13 = uu_dir::uu_app(a1, a2);
    v0 = clap_builder::builder::command::Command::get_matches_from(&v13, a0, a1);
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE, g_60f408) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E, g_60f9a0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E, g_60f980) as i8 {
        v15 = 0;
    } else {
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E, g_60f990) as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E, g_60f990) as i32 ^ 1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E, g_60f418) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE, g_60f2f0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE, g_60f2e0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E, g_60f300) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format4LONG17h88813a22b172323aE, g_60f2d0) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E, g_60f320) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E, g_60f310) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E, g_60f330) as i8 {
        v18 = 0;
    } else {
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE, g_60f2c0) as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE, g_60f2c0) as i32 ^ 1;
    }
    v4 = uu_ls::Config::from(&v0, v17, v20, v21, v22);
    v23 = v4;
    v24 = v5;
    if v23 == 0x8000000000000000 {
        return v24;
    }
    memcpy(&v9, &v4, 232);
    v6 = v23;
    v7 = v24;
    v8 = *((&v4 as &char + 16) as &i64);
    if v15 {
        v10 = 0;
        v11 = 2;
    }
    if v18 {
        v12 = 0;
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_60f428);
    v3 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_60f428, &v4);
    if !v3 {
        v1 = uu_dir::uumain::uumain::{{closure}}();
    } else {
        v4 = struct64 {
            field_0: v26
            field_16: *((&v3 as &char + 16) as &i128)
            field_32: *((&v3 as &char + 32) as &i128)
            field_48: *((&v3 as &char + 48) as &i128)
        };
        v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v4, v27);
        v1 = v2;
    }
    v4 = v1;
    v24 = uu_ls::list(&v4, &v6);
    return v24;
}
