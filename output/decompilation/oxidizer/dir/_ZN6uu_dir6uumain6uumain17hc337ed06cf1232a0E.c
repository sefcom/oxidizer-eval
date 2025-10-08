fn uu_dir::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct56;  // [bp-0x598]
    let v1: struct24;  // [bp-0x560], Other Possible Types: u64
    let v2: struct24;  // [bp-0x560]
    let v3: u128;  // [bp-0x558]
    let v4: struct24;  // [bp-0x548], Other Possible Types: struct56, u64
    let v5: u64;  // [bp-0x540]
    let v6: u64;  // [bp-0x538]
    let v7: u8;  // [bp-0x530]
    let v8: struct64;  // [bp-0x438]
    let v9: struct24;  // [bp-0x3f8]
    let v10: u8;  // [bp-0x3e0]
    let v13: u8;  // [bp-0x2f0]
    let v15: u8;  // bl
    let v16: u8;  // bpl
    let v17: u64;  // r14

    uu_dir::uu_app(&v13);
    v0 = clap_builder::builder::command::Command::get_matches_from(&v13, a0, a1);
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options13QUOTING_STYLE17h16f26274bec2219cE.field_0, g_682d50.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting1C17hd587cbb08c1af7d0E.field_0, g_682d40.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting6ESCAPE17he30ec2e55b9bdfacE.field_0, g_682d20.field_0) {
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options7quoting7LITERAL17h567c390bbb33a38fE.field_0, g_682d30.field_0) ^ 1;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v0, _ZN5uu_ls7options6FORMAT17h41818ba09e12d5b4E.field_0, g_682d60.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6ACROSS17h570ef376038bfa19E.field_0, g_682cd0.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format7COLUMNS17hbf207e8365dce655E.field_0, g_682cc0.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format6COMMAS17h4a9843686f3e3fe2E.field_0, g_682ce0.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format4LONG17hb0ee7ed3f258c1fcE.field_0, g_682cb0.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_GROUP17h5b339f6fa29a5d21E.field_0, g_682d00.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format13LONG_NO_OWNER17ha86266a3188cca4cE.field_0, g_682cf0.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h28a041cb006d8268E.field_0, g_682d10.field_0) {
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v0, _ZN5uu_ls7options6format8ONE_LINE17h3ac9917a7db01231E.field_0, g_682ca0.field_0) ^ 1;
    }
    uu_ls::Config::from(&v4, &v0);
    v17 = v5;
    if (((0 ^ v4) & (0 ^ -(v4))) >> 63) as char {
        return v17;
    }
    memcpy(&v10, &v7, 240);
    v9 = struct24 {
        field_0: v4
        field_8: v17
        field_16: v6
    };
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, _ZN5uu_ls7options5PATHS17h978caca964396fddE.field_0, g_682d70.field_0);
    v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17h978caca964396fddE.field_0, g_682d70.field_0, &v4);
    if v8.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v4, &v8);
        v3 = *((&v4.field_0 as &char + 8) as &i128);
        v1 = v4.field_0;
    } else {
        v1 = uu_dir::uumain::uumain::{{closure}}();
    }
    v4 = v2;
    v17 = uu_ls::list(&v4, &v9);
    return v17;
}
