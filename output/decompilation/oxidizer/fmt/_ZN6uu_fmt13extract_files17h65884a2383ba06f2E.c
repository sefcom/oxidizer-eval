fn uu_fmt::extract_files(a0: &struct24, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x17a]
    let v1: i8;  // [bp-0x179]
    let v2: struct24;  // [sp-0x178]
    let v3: struct24;  // [sp-0x160], Other Possible Types: Vec<u192>, struct56
    let v4: iNone;  // [sp-0x118]
    let v5: struct8;  // [bp-0x100]
    let v6: struct64;  // [sp-0xf8]
    let v7: i64;  // [sp-0xb8]
    let v8: i64;  // [sp-0x78]
    let v9: i64;  // [sp-0x38]
    let v10: i64;  // [sp-0x30]
    let v11: i64;  // [sp-0x28]
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // r14

    v0 = v13 == 1 & clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "files");
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "files");
    v6 = clap_builder::parser::error::MatchesError::unwrap("files", &v3);
    v5 = struct8 {
        field_0: 1
    };
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = &v1;
    v11 = &v0;
    v2 = core::iter::adapters::try_process(&v5);
    if !core::result::Result<T,E>::is_ok_and(v2.field_0 == 0x8000000000000000, &(&v2.field_0)[v2.field_0 == 0x8000000000000000] as &struct24) as i8 {
        return v2;
    }
    v15 = v14;
    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v4 = v3;
    v3 = vec![v4 as i192];
}
