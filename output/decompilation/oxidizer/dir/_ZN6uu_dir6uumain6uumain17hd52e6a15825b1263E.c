fn uu_dir::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct56;  // [bp-0x5a0]
    let v1: struct24;  // [bp-0x568], Other Possible Types: u64
    let v2: struct24;  // [bp-0x568]
    let v3: u128;  // [bp-0x560]
    let v4: Result<struct24, struct24>;  // [bp-0x550]
    let v5: u128;  // [bp-0x548]
    let v6: struct64;  // [bp-0x538]
    let v7: struct64;  // [bp-0x538]
    let v8: struct24;  // [bp-0x4f8], Other Possible Types: struct56, struct64, u64
    let v9: u64;  // [bp-0x4f0]
    let v10: u64;  // [bp-0x4e8]
    let v11: u8;  // [bp-0x4e0]
    let v12: struct24;  // [bp-0x3f0]
    let v13: u8;  // [bp-0x3d8]
    let v17: u8;  // [bp-0x2f0]
    let v19: u8;  // bl
    let v20: u8;  // bpl
    let v21: u64;  // r14

    uu_dir::uu_app(&v17);
    v0 = clap_builder::builder::command::Command::get_matches_from(&v17, a0, a1);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options13QUOTING_STYLE17h9bdc8a31bb79b8cdE.field_0, g_60f408.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting1C17hc109e26eb7f151f2E.field_0, g_60f9a0.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting6ESCAPE17h368215d4cb9bc296E.field_0, g_60f980.field_0) as i8 {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h7385bf214193a8a8E.field_0, g_60f990.field_0) as i32 ^ 1;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options6FORMAT17h7274b106b2ba33e5E.field_0, g_60f418.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6ACROSS17h671846789e2112eaE.field_0, g_60f2f0.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format7COLUMNS17h4dccf0756e3b7d4fE.field_0, g_60f2e0.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6COMMAS17h7feeca4e639ca720E.field_0, g_60f300.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format4LONG17h88813a22b172323aE.field_0, g_60f2d0.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h2e687fcc136dc471E.field_0, g_60f320.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17h5cdbd26e40a124d6E.field_0, g_60f310.field_0) as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17he1e52fd646432ed3E.field_0, g_60f330.field_0) as i8 {
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17hbdf1d5605899220dE.field_0, g_60f2c0.field_0) as i32 ^ 1;
    }
    uu_ls::Config::from(&v8, &v0);
    v21 = v9;
    if v8 == 0x8000000000000000 {
        return v21;
    }
    memcpy(&v13, &v11, 232);
    v12 = struct24 {
        field_0: v8
        field_8: v21
        field_16: v10
    };
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E.field_0, g_60f428.field_0);
    v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E.field_0, g_60f428.field_0, &v8);
    if v6.field_0 as i64 {
        v8 = v7;
        v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8);
        v3 = v5;
        v1 = v4 as i64;
    } else {
        v1 = uu_dir::uumain::uumain::{{closure}}();
    }
    v8 = v2;
    v21 = uu_ls::list(&v8, &v12);
    return v21;
}
