fn uu_csplit::CsplitOptions::new(a0: &struct100, a1: u64) -> int {
    let v0: i8;  // [sp-0x11b]
    let v1: i8;  // [sp-0x11a]
    let v2: i8;  // [sp-0x119]
    let v3: i128;  // [sp-0x118]
    let v4: i64;  // [sp-0x108]
    let v5: i64;  // [sp-0xe0], Other Possible Types: struct24
    let v6: i64;  // [sp-0xd8]
    let v7: i320;  // [sp-0xc8], Other Possible Types: Result<struct40, struct8>, struct24, struct48
    let v9: i8;  // [bp-0x88]
    let v10: i8;  // [bp-0x78]
    let v11: i128;  // [bp-0x68]
    let v12: i64;  // [bp-0x58]
    let v13: i64;  // [sp-0x48]
    let v15: i8;  // al
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v19: i256;  // ymm0
    let v20: i256;  // ymm0
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i128;  // xmm0
    let v24: i128;  // xmm0
    let v25: i128;  // xmm0
    let v26: i128;  // xmm1
    let v27: i128;  // xmm2
    let v28: i128;  // xmm0
    let v29: i64;  // rdx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched") as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v16 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v7);
    if !v16 {
        v5 = 0x8000000000000000;
    } else {
        v5 = <alloc::string::String as core::clone::Clone>::clone(v16);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v17 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v7);
    if !v17 {
        v11 = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v17);
        v12 = *((&v7 as &char + 16) as &i64);
        v18 = v7;
        v20 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
        v11 = v18;
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v21 = clap_builder::parser::error::MatchesError::unwrap("digits", &v7);
    if !v21 {
        v3 = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v21);
        v4 = *((&v7 as &char + 16) as &i64);
        v22 = v7;
        v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
        v3 = v22;
    }
    v7 = uu_csplit::split_name::SplitName::new(&v5, &v11, &v3);
    if v7 == 0x8000000000000000 {
        v13 = *((&v7 as &char + 40) as &i64);
        v28 = *((&v7 as &char + 8) as &i128);
        v12 = *((&v7 as &char + 24) as &i128);
        v11 = v28;
        v5 = uucore::util_name();
        v6 = v29;
        eprint!("{}: ", &v5);
        eprintln!("{}", &v11);
        std::process::exit(1); /* do not return */
    }
    v23 = v10;
    v24 = v9;
    v25 = v7;
    v26 = *((&v7 as &char + 16) as &i128);
    v27 = *((&v7 as &char + 32) as &i128);
    return struct100 {
        field_0: v25
        field_16: v26
        field_32: v27
        field_48: v8
        field_64: v24
        field_80: v23
        field_96: v2
        field_97: v1
        field_98: v0
        field_99: v15
    };
}
