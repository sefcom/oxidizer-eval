fn uu_csplit::CsplitOptions::new(a0: &struct100, a1: u64) -> int {
    let v0: i8;  // [sp-0x11b]
    let v1: i8;  // [sp-0x11a]
    let v2: i8;  // [sp-0x119]
    let v3: i128;  // [sp-0x118]
    let v4: i64;  // [sp-0x108]
    let v5: i192;  // [sp-0xe0], Other Possible Types: struct24
    let v6: i64;  // [sp-0xd8]
    let v7: i192;  // [sp-0xc8], Other Possible Types: Result<struct40, struct8>, struct24, struct96
    let v8: i128;  // [bp-0x68]
    let v9: i128;  // [bp-0x58]
    let v10: i64;  // [sp-0x48]
    let v12: i8;  // al
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i128;  // xmm0
    let v16: i256;  // ymm0
    let v17: i256;  // ymm0
    let v18: i64;  // rax
    let v19: i128;  // xmm0
    let v22: i128;  // xmm0
    let v23: i64;  // rdx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched") as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v13 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v7);
    if !v13 {
        v5 = 0x8000000000000000;
    } else {
        v5 = <alloc::string::String as core::clone::Clone>::clone(v13);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v14 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v7);
    if !v14 {
        v8 = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v14);
        v9 = *((&v7 as &char + 16) as &i64);
        v15 = v7;
        v17 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
        v8 = v15;
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v18 = clap_builder::parser::error::MatchesError::unwrap("digits", &v7);
    if !v18 {
        v3 = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v18);
        v4 = *((&v7 as &char + 16) as &i64);
        v19 = v7;
        v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
        v3 = v19;
    }
    v7 = uu_csplit::split_name::SplitName::new(&v5, &v8, &v3);
    return struct100 {
        field_0: v16 as u128
        field_16: v21
        field_32: v20
        field_48: *((&v7 as &char + 48) as &i128)
        field_64: v16 as u128
        field_80: v16 as u128
        field_96: v2
        field_97: v1
        field_98: v0
        field_99: v12
    };
    v10 = *((&v7 as &char + 40) as &i64);
    v22 = *((&v7 as &char + 8) as &i128);
    v9 = *((&v7 as &char + 24) as &i128);
    v8 = v22;
    v5 = uucore::util_name();
    v6 = v23;
    eprint!("{:?}: ", &v5);
    eprintln!("{:?}", &v8);
    std::process::exit(1); /* do not return */
}
