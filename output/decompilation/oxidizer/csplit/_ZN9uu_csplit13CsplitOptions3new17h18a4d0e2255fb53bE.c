fn uu_csplit::CsplitOptions::new(a1: i64) -> : struct100 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x11b]
    let v1: u8;  // [bp-0x11a]
    let v2: u8;  // [bp-0x119]
    let v3: u128;  // [bp-0x118]
    let v4: u64;  // [bp-0x108]
    let v5: u64;  // [bp-0xe0], Other Possible Types: struct96
    let v6: alloc::string::String;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: alloc::string::String;  // [bp-0xc8]
    let v9: u64;  // [bp-0xb8]
    let v10: u64;  // [bp-0xa0]
    let v11: u128;  // [bp-0x98]
    let v12: u128;  // [bp-0x88]
    let v13: u128;  // [bp-0x78]
    let v14: u128;  // [bp-0x68]
    let v15: u64;  // [bp-0x68]
    let v16: u64;  // [bp-0x58]
    let v17: u64;  // [bp-0x48]
    let v19: u8;  // al
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: void*;  // r8
    let v24: u128;  // xmm0
    let v25: u128;  // xmm1
    let v27: u64;  // rdx
    let v28: Result<struct40, struct16>;  // [bp-0xc8], Other Possible Types: alloc::string::String

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files") as i8;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched") as i32;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v20 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v28);
    if v20 {
        v6 = <alloc::string::String as core::clone::Clone>::clone(v20);
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v21 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v28);
    if v21 {
        v28 = <alloc::string::String as core::clone::Clone>::clone(v21);
        v16 = v9;
        memcpy(&v15, &v28, 16);
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v22 = clap_builder::parser::error::MatchesError::unwrap("digits", &v28);
    if v22 {
        v8 = <alloc::string::String as core::clone::Clone>::clone(v22);
        v4 = v9;
        v3 = *(&v8.vec.buf.cap as &i128);
    }
    v5 = uu_csplit::split_name::SplitName::new(&v14, &v3, v23);
    if v5.field_24 == 0x8000000000000000 {
        v17 = v10;
        memcpy(&v16, &v5 as u8, 16);
        memcpy(&v14, &v5, 16);
        v5 = uucore::util_name();
        v7 = v27;
        eprint!("{}: ", &v5);
        eprintln!("{}", &v14);
        std::process::exit(1); /* do not return */
    }
    v24 = *(&v5.field_24 as &i128);
    v25 = *((&v5.field_32 as &char + 8) as &i128);
    return struct100 {
        field_0: v24
        field_16: v25
        field_32: *((&v5.field_48 as &char + 8) as &i128)
        field_48: v11
        field_64: v12
        field_80: v13
        field_96: v2
        field_97: v1
        field_98: v0
        field_99: v19
    };
}
