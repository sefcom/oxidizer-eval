fn uu_wc::Settings::new(a1: &struct56) -> : struct30 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x9c]
    let v1: struct30;  // [bp-0x98]
    let v2: u8;  // [bp-0x7b]
    let v3: Result<struct24, struct9>;  // [bp-0x70]
    let v5: u64;  // [bp-0x60]
    let v6: Result<struct40, struct16>;  // [bp-0x58], Other Possible Types: u64
    let v7: u32;  // [bp-0x40]
    let v8: u16;  // [bp-0x3c]
    let v10: i64;  // rax
    let v11: core::result::Result<usize, std::io::error::Error>;  // rax
    let v12: u8;  // al
    let v13: u8;  // al
    let v14: u8;  // al
    let v15: u8;  // al
    let v16: u8;  // al

    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v10 = clap_builder::parser::error::MatchesError::unwrap(&v6);
    if v10 {
        v3 = <uu_wc::Input as core::convert::From<&T>>::from(*((v10 + 8) as &i64), *((v10 + 16) as &i64));
    }
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v11 = clap_builder::parser::error::MatchesError::unwrap(&v6);
    v0 = (!v11 ? 0 : <uu_wc::TotalWhen as core::convert::From<T>>::from(v11));
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "bytes");
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "chars");
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "lines");
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "words");
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "max-line-length");
    v1 = struct30 {
        field_0: v3 as i128
        field_16: v5
        field_24: v12
        field_25: v13
        field_26: v14
        field_27: v15
        field_28: v16
        field_29: v0 as u8
    };
    if !uu_wc::Settings::number_enabled(&v1) {
        v7 = 16842753;
        v8 = 0;
        v6 = 9223372036854775810;
        return struct32 {
            field_0: v3 as i128
            field_16: v5
            field_24: 16842753
            field_28: 0
            field_29: v2
        };
    }
    return struct32 {
        field_0: v1.field_0
        field_16: *(&v1.field_16 as &i128)
    };
}
