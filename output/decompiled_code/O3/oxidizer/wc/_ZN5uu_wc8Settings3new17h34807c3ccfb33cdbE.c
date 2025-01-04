fn uu_wc::Settings::new(a0: &struct32, a1: &struct56) -> u64 {
    let v0: i32;  // [sp-0x9c]
    let v1: i128;  // [sp-0x98]
    let v2: i64;  // [sp-0x88]
    let v3: i8;  // [sp-0x80]
    let v4: i8;  // [sp-0x7f]
    let v5: i8;  // [sp-0x7e]
    let v6: i8;  // [sp-0x7d]
    let v7: i8;  // [sp-0x7c]
    let v8: i8;  // [sp-0x7b]
    let v9: i128;  // [bp-0x78]
    let v10: i64;  // [sp-0x68]
    let v11: i320;  // [sp-0x58], Other Possible Types: Result<struct16, struct1>
    let v12: i32;  // [sp-0x40]
    let v13: i16;  // [sp-0x3c]
    let v15: i64;  // rax
    let v16: i64;  // rdx
    let v17: i64;  // rax
    let v18: i64;  // rsi

    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files0-from");
    v15 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v11);
    if !v15 {
        v9 = 9223372036854775810;
    } else {
        v11 = core::ops::function::FnOnce::call_once(v15, v16);
        v10 = *((&v11 as &char + 16) as &i64);
        v9 = v11;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "total");
    v17 = clap_builder::parser::error::MatchesError::unwrap("total", &v11);
    v0 = (!v17 ? 0 : core::ops::function::FnOnce::call_once(v17, v18, v16) as i32);
    v2 = v10;
    v1 = v9;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "bytes") as i32;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "chars") as i32;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "lines") as i32;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "words") as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "max-line-length") as i8;
    v8 = v0;
    if !uu_wc::Settings::number_enabled(&v1, v18, v16) as i32 {
        v12 = 16842753;
        v13 = 0;
        v11 = 9223372036854775810;
        return struct32 {
            field_0: v1
            field_16: v2
        };
    }
    return struct32 {
        field_0: v1
        field_16: v2
    };
}
