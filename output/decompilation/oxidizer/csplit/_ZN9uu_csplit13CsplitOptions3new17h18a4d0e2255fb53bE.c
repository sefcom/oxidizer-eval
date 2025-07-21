fn uu_csplit::CsplitOptions::new(a1: i64) -> : struct100 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x11b]
    let v1: u8;  // [bp-0x11a]
    let v2: u8;  // [bp-0x119]
    let v3: u128;  // [bp-0x118]
    let v4: core::fmt::rt::Argument;  // [bp-0x108]
    let v5: struct96;  // [bp-0xe0], Other Possible Types: u64
    let v6: alloc::string::String;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: Result<struct40, struct16>;  // [bp-0xc8]
    let v9: Result<struct40, struct16>;  // [bp-0xc8], Other Possible Types: alloc::string::String
    let v11: core::fmt::rt::Argument;  // [bp-0xb8]
    let v12: u128;  // [bp-0x98]
    let v13: u128;  // [bp-0x88]
    let v14: u128;  // [bp-0x78]
    let v15: core::fmt::rt::Argument;  // [bp-0x68]
    let v18: u8;  // al
    let v19: u64;  // rax
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: void*;  // r8
    let v23: u128;  // xmm0
    let v24: u128;  // xmm1
    let v26: u64;  // rdx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched") as i32;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v19 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v9);
    if v19 {
        v6 = <alloc::string::String as core::clone::Clone>::clone(v19);
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v20 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v9);
    if v20 {
        v9 = <alloc::string::String as core::clone::Clone>::clone(v20);
    }
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v21 = clap_builder::parser::error::MatchesError::unwrap("digits", &v8);
    if v21 {
        v9 = <alloc::string::String as core::clone::Clone>::clone(v21);
        v4 = v11;
        v3 = *(&v9.vec.buf.cap as &i128);
    }
    v5 = uu_csplit::split_name::SplitName::new(&v15, &v3, v22);
    if v5.field_24 == 0x8000000000000000 {
        v5 = uucore::util_name();
        v7 = v26;
        eprint!("{}: ", &v5);
        eprintln!("{}", &v15);
        std::process::exit(1); /* do not return */
    }
    v23 = *(&v5.field_24 as &i128);
    v24 = *((&v5.field_32 as &char + 8) as &i128);
    return struct104 {
        field_0: v23
        field_16: v24
        field_32: *((&v5.field_48 as &char + 8) as &i128)
        field_48: v12
        field_64: v13
        field_80: v14
        field_96: v2
        field_97: v1
        field_98: v0
        field_99: v18
    };
}
