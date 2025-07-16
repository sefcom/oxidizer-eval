fn uu_wc::Settings::new(a1: &struct16) -> : struct32 {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x9c]
    let v1: u8;  // [bp-0x98]
    let v2: alloc::string::String;  // [bp-0x88]
    let v3: u8;  // [bp-0x80]
    let v4: u8;  // [bp-0x7f]
    let v5: u8;  // [bp-0x7e]
    let v6: u8;  // [bp-0x7d]
    let v7: u8;  // [bp-0x7c]
    let v8: u8;  // [bp-0x7b]
    let v9: u128;  // [bp-0x78]
    let v11: u64;  // [bp-0x68]
    let v12: Result<struct40, struct16>;  // [bp-0x58], Other Possible Types: u64
    let v13: u64;  // [bp-0x48]
    let v14: u32;  // [bp-0x40]
    let v15: u16;  // [bp-0x3c]
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v19: u8;  // al
    let v20: u8;  // al
    let v21: u8;  // al
    let v22: u8;  // al
    let v23: u8;  // al
    let v24: i64;  // rdi
    let v25: i64;  // rdi

    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "files0-from");
    v17 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v12);
    if v17 {
        v12 = core::ops::function::FnOnce::call_once(v17);
        v11 = v13;
        memcpy(&v9, &v12, 16);
    }
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "total");
    v18 = clap_builder::parser::error::MatchesError::unwrap("total", &v12);
    v0 = (!v18 ? 0 : core::ops::function::FnOnce::call_once(v18) as i32);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "bytes") as i32;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "chars") as i32;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "lines") as i32;
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "words") as i32;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "max-line-length") as i8;
    v2 = v11;
    memcpy(&v1, &v9, 16);
    v3 = v19;
    v4 = v20;
    v5 = v21;
    v6 = v22;
    v7 = v23;
    v8 = v0;
    if !uu_wc::Settings::number_enabled(&v1) as i32 {
        *((v25 + 16) as &alloc::string::String) = v2;
        *(v25 as &u128) = v1;
        v14 = 16842753;
        v15 = 0;
        v12 = 9223372036854775810;
        *((v25 + 24) as &i32) = 16842753;
        *((v25 + 28) as &i8) = 0;
        *((v25 + 29) as &u8) = v8;
        return;
    }
    *((v24 + 16) as &i128) = *(&v2.vec.buf.cap as &i128);
    *(v24 as &u128) = v1;
    return;
}
