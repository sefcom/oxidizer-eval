fn uu_csplit::CsplitOptions::new(a0: &struct100, a1: u64) -> int {
    let v0: i8;  // [sp-0x11b]
    let v1: i8;  // [sp-0x11a]
    let v2: i8;  // [sp-0x119]
    let v3: iNone;  // [sp-0x118], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0x108]
    let v5: i64;  // [sp-0xe0], Other Possible Types: struct24, int
    let v6: i64;  // [sp-0xd8]
    let v7: Result<struct40, struct8>;  // [sp-0xc8], Other Possible Types: struct24, struct48
    let v9: i8;  // [bp-0x88]
    let v10: i8;  // [bp-0x78]
    let v11: iNone;  // [bp-0x68]
    let v12: iNone;  // [bp-0x68], Other Possible Types: unsigned long
    let v13: i64;  // [bp-0x58], Other Possible Types: int
    let v14: i64;  // [sp-0x48]
    let v16: i8;  // al
    let v17: i64;  // rax
    let v18: i64;  // rax
    let v19: iNone;  // xmm0
    let v20: iNone;  // ymm0
    let v21: iNone;  // ymm0
    let v22: i64;  // rax
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm0
    let v25: iNone;  // xmm0
    let v26: iNone;  // xmm0
    let v27: iNone;  // xmm1
    let v28: iNone;  // xmm2
    let v29: iNone;  // xmm0
    let v30: i64;  // rdx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched") as i32;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v17 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v7);
    if !v17 {
        v5 = 0x8000000000000000;
    } else {
        v5 = <alloc::string::String as core::clone::Clone>::clone(v17);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v18 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v7);
    if !v18 {
        *(&v12 as &i64) = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v18);
        *(&v13 as &u64) = v7.field_16;
        v19 = *(&v7.field_0 as &i128);
        v21 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u256;
        v12 = v19;
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v22 = clap_builder::parser::error::MatchesError::unwrap("digits", &v7);
    if !v22 {
        v3 = 0x8000000000000000;
    } else {
        v7 = <alloc::string::String as core::clone::Clone>::clone(v22);
        v4 = v7.field_16;
        v23 = *(&v7.field_0 as &i128);
        v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256;
        v3 = v23;
    }
    v7 = uu_csplit::split_name::SplitName::new(&v5, &v12, &v3);
    if v7.field_0 == 0x8000000000000000 {
        v14 = *((&v7.field_32 as &char + 8) as &i64);
        v29 = *(&v7.field_8 as &i128);
        *(&v13 as &i128) = *((&v7.field_16 as &char + 8) as &i128);
        v11 = v29;
        v6 = v30;
        show_error!("{}", &v11);
        std::process::exit(1); /* do not return */
    }
    v24 = *(&v10 as &i128);
    v25 = *(&v9 as &i128);
    v26 = *(&v7.field_0 as &i128);
    v27 = v7.field_16;
    v28 = v7.field_32;
    return struct100 {
        field_0: v26
        field_16: v27
        field_32: v28
        field_48: *(&v8 as &i128)
        field_64: v25
        field_80: v24
        field_96: v2
        field_97: v1
        field_98: v0
        field_99: v16
    };
}
