fn uu_unexpand::Options::new(a0: &struct50, a1: &struct56) -> u64 {
    let v0: struct24;  // [sp-0x1b8], Other Possible Types: int
    let v1: i64;  // [sp-0x1a8]
    let v2: struct24;  // [sp-0x198], Other Possible Types: struct56, int
    let v3: i64;  // [sp-0x188]
    let v4: iNone;  // [sp-0x180]
    let v5: i64;  // [sp-0x170]
    let v6: Vec<u64>;  // [sp-0x148], Other Possible Types: int
    let v7: i64;  // [sp-0x138]
    let v8: iNone;  // [sp-0x128]
    let v9: i64;  // [sp-0x118]
    let v10: iNone;  // [sp-0x108]
    let v11: struct64;  // [sp-0xe8]
    let v12: struct64;  // [sp-0xa8]
    let v13: struct64;  // [sp-0x68]
    let v15: i64;  // 4098
    let v16: i32;  // eax
    let v20: i64;  // r14

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v11 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v2);
    if !v11.field_0 as i64 {
        v6 = vec![8];
    } else {
        v12 = v11;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
        v2 = alloc::str::join_generic_copy(v0.field_8, v1, ",");
        v10 = v2;
        v2 = uu_unexpand::tabstops_parse((&v10)[8] as i64, v3);
        v15 = v2.field_0;
        v8 = *(&v2.field_8 as &i128);
        v9 = v2.field_24;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tabs") as i8 {
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-utf8");
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v2);
    if v11.field_0 as i64 {
        v13 = v11;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
    } else {
        v20 = alloc::alloc::Global::alloc_impl(8, 24);
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v0 = v2;
        *((v20 + 16) as &unsigned long) = v1;
        *(v20 as void*) = v0;
        alloc::slice::hack::into_vec(&v0, v20, 1);
    }
    v3 = v1;
    v2 = v0;
    v5 = v7;
    v4 = v6;
    return struct50 {
        field_0: v2
        field_16: v3
        field_24: v4 as i64
        field_32: (&v4)[8] as i64
        field_40: v5
        field_48: v17
        field_49: v18 ^ 1
    };
}
