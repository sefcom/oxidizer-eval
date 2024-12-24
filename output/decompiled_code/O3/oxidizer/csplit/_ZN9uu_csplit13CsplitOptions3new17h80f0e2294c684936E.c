fn uu_csplit::CsplitOptions::new(a0: u64, a1: u64) -> int {
    let v0: i8;  // [sp-0x11b]
    let v1: i8;  // [sp-0x11a]
    let v2: i8;  // [sp-0x119]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x108]
    let v5: i64;  // [sp-0xe0], Other Possible Types: struct24
    let v6: i768;  // [sp-0xc8], Other Possible Types: Result<struct40, struct16>, struct24, struct96
    let v7: i64;  // [bp-0x68]
    let v8: i128;  // [bp-0x58]
    let v9: i64;  // [sp-0x48]
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i128;  // xmm0
    let v15: i256;  // ymm0
    let v16: i256;  // ymm0
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v19: i128;  // xmm0
    let v20: i128;  // xmm0
    let v21: i128;  // xmm0
    let v22: i128;  // xmm1
    let v23: i128;  // xmm2
    let v24: i128;  // xmm0

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v12 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v6);
    if !v12 {
        v5 = 0x8000000000000000;
    } else {
        v5 = <alloc::string::String as core::clone::Clone>::clone(v12);
    }
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v13 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v6);
    if !v13 {
        v7 = 0x8000000000000000;
    } else {
        v6 = <alloc::string::String as core::clone::Clone>::clone(v13);
        v8 = *((&v6 as &char + 16) as &i64);
        v14 = v6;
        v16 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14;
        v7 = v14;
    }
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v17 = clap_builder::parser::error::MatchesError::unwrap("digits", &v6);
    if !v17 {
        v3 = 0x8000000000000000;
    } else {
        v6 = <alloc::string::String as core::clone::Clone>::clone(v17);
        v4 = *((&v6 as &char + 16) as &i64);
        v18 = v6;
        v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
        v3 = v18;
    }
    v6 = uu_csplit::split_name::SplitName::new(&v5, &v7, &v3);
    if v6 == 0x8000000000000000 {
        v9 = *((&v6 as &char + 40) as &i64);
        v24 = *((&v6 as &char + 8) as &i128);
        v8 = *((&v6 as &char + 24) as &i128);
        v7 = v24;
        v5 = uucore::util_name();
        v5.field_8 = vvar_179{reg 32};
        eprint!("{:?}: ", &v5);
        eprintln!("{:?}", &v7);
        std::process::exit(1); /* do not return */
    }
    v19 = *((&v6 as &char + 80) as &i128);
    v20 = *((&v6 as &char + 64) as &i128);
    v21 = v6;
    v22 = *((&v6 as &char + 16) as &i128);
    v23 = *((&v6 as &char + 32) as &i128);
    return struct100 {
        field_0: v21
        field_16: v22
        field_32: v23
        field_48: *((&v6 as &char + 48) as &i128)
        field_64: v20
        field_80: v19
        field_96: v2
        field_97: v1
        field_98: v0
        field_99: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched") as i32 as i8
    };
}
