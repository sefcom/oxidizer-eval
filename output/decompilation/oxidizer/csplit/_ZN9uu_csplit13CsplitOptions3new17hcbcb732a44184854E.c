fn uu_csplit::CsplitOptions::new(a1: i64) -> : struct100 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x10b]
    let v1: u8;  // [bp-0x10a]
    let v2: core::fmt::Arguments;  // [bp-0x109]
    let v3: Result<struct40, struct16>;  // [bp-0x108]
    let v5: alloc::string::String;  // [bp-0x108], Other Possible Types: Result<struct40, struct16>
    let v6: iNone;  // [bp-0xf8]
    let v7: u64;  // [bp-0xe8]
    let v12: struct16;  // [bp-0xa8]
    let v13: struct96;  // [bp-0x90]
    let v14: iNone;  // [bp-0x88]
    let v15: iNone;  // [bp-0x78]
    let v16: u64;  // [bp-0x68]
    let v17: u128;  // [bp-0x60]
    let v18: u128;  // [bp-0x50]
    let v20: u8;  // al
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: alloc::string::String;  // [bp-0x108], Other Possible Types: u128
    let v25: core::fmt::Arguments;  // [bp-0xd8]

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "keep-files");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "elide-empty-files");
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "suppress-matched");
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v21 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v5);
    if v21 {
        v3 as u192 = <alloc::string::String as core::clone::Clone>::clone(v21);
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-format");
    v22 = clap_builder::parser::error::MatchesError::unwrap("suffix-format", &v5);
    if v22 {
        v5 = <alloc::string::String as core::clone::Clone>::clone(v22);
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "digits");
    v23 = clap_builder::parser::error::MatchesError::unwrap("digits", &v3);
    if v23 {
        v24 = <alloc::string::String as core::clone::Clone>::clone(v23);
    }
    v13 = uu_csplit::split_name::SplitName::new(&v3 as u192, &v25, &v12);
    v7 = v16;
    v24 = v14;
    v6 = v15;
    if v13.field_0 as i64 != 0x8000000000000000 {
        *((a0 + 80) as &i128) = *(&v13.field_80 as &i128);
        *((a0 + 64) as &u128) = v18;
        *((a0 + 48) as &u128) = v17;
        *((a0 + 40) as &u64) = v7;
        *((a0 + 24) as void*) = v6;
        *((a0 + 8) as &u128) = v24;
        *((a0 + 96) as &core::fmt::Arguments) = v2;
        *((a0 + 97) as &u8) = v1;
        *((a0 + 98) as &u8) = v0;
        *((a0 + 99) as &u8) = v20;
    }
    return struct48 {
        field_0: v13.field_0 as i64
        field_8: v24
        field_24: v6
        field_40: v7
    };
}
