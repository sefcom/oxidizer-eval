fn uu_wc::Settings::new(a0: &struct32, a1: &struct56) -> u64 {
    let v0: i32;  // [sp-0x9c]
    let v1: iNone;  // [sp-0x98]
    let v2: i64;  // [sp-0x88]
    let v3: i8;  // [sp-0x80]
    let v4: i8;  // [sp-0x7f]
    let v5: i8;  // [sp-0x7e]
    let v6: i8;  // [sp-0x7d]
    let v7: i8;  // [sp-0x7c]
    let v8: i8;  // [sp-0x7b]
    let v9: i64;  // [bp-0x78], Other Possible Types: int, Result<struct16, struct1>
    let v10: i64;  // [sp-0x68]
    let v11: Result<struct40, struct8>;  // [sp-0x58]
    let v13: i64;  // rax
    let v14: i64;  // rax

    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files0-from");
    v13 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v11);
    if !v13 {
        *(&v9 as &i64) = 9223372036854775810;
    } else {
        v11 = core::ops::function::FnOnce::call_once(v13);
        v9 = v11;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "total");
    v14 = clap_builder::parser::error::MatchesError::unwrap("total", &v11);
    v0 = (!v14 ? 0 : core::ops::function::FnOnce::call_once(v14) as i32);
    v2 = v10;
    v1 = v9 as i128;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "bytes") as i32;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "chars") as i32;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "lines") as i32;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "words") as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "max-line-length") as i8;
    v8 = v0 as u8;
    return struct32 {
        field_0: v1
        field_16: *(&v2 as &i128)
    };
}
