fn uu_tail::args::FilterMode::from(a0: &struct24, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0xd8], Other Possible Types: Result<struct40, struct8>
    let v1: struct32;  // [sp-0xa8]
    let v2: struct32;  // [sp-0x78]
    let v3: String;  // [sp-0x58]
    let v4: String;  // [sp-0x40]
    let v6: i8;  // bpl
    let v7: i64;  // rax
    let v8: i64;  // rax

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "zero-terminated") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "bytes");
    v7 = clap_builder::parser::error::MatchesError::unwrap("bytes", &v0);
    if !v7 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "lines");
        v8 = clap_builder::parser::error::MatchesError::unwrap("lines", &v0);
        if v8 {
            v1 = uu_tail::args::parse_num(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
            if v1.field_0 as i32 != 3 {
                v2 = v1;
                v4 = format!("invalid number of lines: {}", &v2);
                v0 = *(&v4 as &i224);
                alloc::boxed::Box<T>::new(&v0);
            }
        }
    } else {
        v1 = uu_tail::args::parse_num(*((v7 + 8) as &i64), *((v7 + 16) as &i64));
        if v1.field_0 as i32 != 3 {
            v2 = v1;
            v3 = format!("invalid number of bytes: '{}'", &v2);
            v0 = *(&v3 as &i224);
            alloc::boxed::Box<T>::new(&v0);
        }
    }
    return struct24 {
        field_0: v11
        field_8: v9
        field_16: v10
    };
}
