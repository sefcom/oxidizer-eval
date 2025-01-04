fn uu_unexpand::Options::new(a0: &Result<struct50, struct32>, a1: &struct56) -> u64 {
    let v0: i192;  // [sp-0x1b8], Other Possible Types: struct24
    let v1: i64;  // [sp-0x1a8]
    let v2: i256;  // [sp-0x198], Other Possible Types: struct56, struct24, struct32
    let v3: i64;  // [sp-0x188]
    let v4: i128;  // [sp-0x180]
    let v5: i64;  // [sp-0x170]
    let v6: i128;  // [sp-0x148]
    let v7: i64;  // [sp-0x138]
    let v8: i128;  // [sp-0x128]
    let v9: i64;  // [sp-0x118]
    let v10: i192;  // [bp-0x108]
    let v11: struct64;  // [sp-0xe8], Other Possible Types: i512
    let v12: i512;  // [bp-0xa8]
    let v13: i512;  // [bp-0x68]
    let v15: i64;  // rdx
    let v16: i64;  // 4098
    let v18: i8;  // bpl
    let v20: i64;  // r14

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v11 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v2);
    if !v11 {
        v6 = vec![8];
    } else {
        v12 = v11;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12, v15);
        v2 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), v1, ",");
        v10 = v2;
        v2 = uu_unexpand::tabstops_parse(*((&v10 as &char + 8) as &i64), v3);
        v16 = v2;
        v8 = *((&v2 as &char + 8) as &i128);
        v9 = *((&v2 as &char + 24) as &i64);
        if v16 {
            return struct32 {
                field_0: 0x8000000000000000
                field_8: v8
                field_24: v9
            };
        }
        v7 = v9;
        v6 = v8;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tabs") as i8 {
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 ^ 1;
    } else {
        v18 = 0;
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v2);
    if v11 {
        v13 = v11;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v15);
    } else {
        v20 = alloc::alloc::Global::alloc_impl(8, 24);
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v0 = v2;
        *((v20 + 16) as &i64) = v1;
        *(v20 as &i128) = v0;
        alloc::slice::hack::into_vec(&v0, v20, 1);
    }
    v3 = v1;
    v2 = v0;
    v5 = v7;
    v4 = v6;
    return struct32 {
        field_0: 0x8000000000000000
        field_8: v8
        field_24: v9
    };
}
