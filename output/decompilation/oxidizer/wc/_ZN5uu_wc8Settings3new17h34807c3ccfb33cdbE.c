fn uu_wc::Settings::new(a1: &struct56) -> : struct32 {
    let a0: u64;  // rsi
    let v0: core::fmt::rt::Argument;  // [bp-0x9c]
    let v1: struct30;  // [bp-0x98]
    let v2: u64;  // [bp-0x88]
    let v3: core::fmt::rt::Argument;  // [bp-0x7b]
    let v4: u128;  // [bp-0x78]
    let v6: u64;  // [bp-0x68]
    let v7: Result<struct40, struct16>;  // [bp-0x58], Other Possible Types: u64
    let v8: struct56;  // [bp-0x48]
    let v9: core::fmt::Arguments;  // [bp-0x40]
    let v10: core::fmt::rt::Argument;  // [bp-0x3c]
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rdi

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "files0-from");
    v12 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v7);
    if v12 {
        v7 = core::ops::function::FnOnce::call_once(v12);
        v6 = v8;
        v4 = v7 as i128;
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "total");
    v13 = clap_builder::parser::error::MatchesError::unwrap("total", &v7);
    v0 = (!v13 ? 0 : core::ops::function::FnOnce::call_once(v13) as i32);
    v1 = struct30 {
        field_0: v4
        field_16: v6
        field_24: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "bytes") as i32 as i8
        field_25: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "chars") as i32 as i8
        field_26: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "lines") as i32 as i8
        field_27: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "words") as i32 as i8
        field_28: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "max-line-length") as i8
        field_29: v0 as u8
    };
    if !uu_wc::Settings::number_enabled(&v1) as i32 {
        *((v15 + 16) as &u64) = v2;
        *(v15 as &u128) = v1.field_0;
        v9 = 16842753;
        v10 = 0;
        v7 = 9223372036854775810;
        *((v15 + 24) as &i32) = 16842753;
        *((v15 + 28) as &i8) = 0;
        *((v15 + 29) as &core::fmt::rt::Argument) = v3;
        return;
    }
    *((v14 + 16) as &i128) = *(&v1.field_16 as &i128);
    *(v14 as &u128) = v1.field_0;
    return;
}
