fn uu_unexpand::Options::new(a0: void*, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x1b8], Other Possible Types: struct24
    let v1: i256;  // [sp-0x198], Other Possible Types: struct56, struct24, struct32
    let v2: struct24;  // [sp-0x148], Other Possible Types: i128
    let v3: i64;  // [sp-0x138]
    let v4: i128;  // [sp-0x128]
    let v5: i64;  // [sp-0x118]
    let v6: i192;  // [bp-0x108]
    let v7: i512;  // [sp-0xe8], Other Possible Types: struct64
    let v8: i512;  // [bp-0xa8]
    let v9: i512;  // [bp-0x68]
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // 4098
    let v15: i8;  // bpl
    let v17: i64;  // r14

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v7 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v1);
    if !v7 {
        v12 = alloc::alloc::Global::alloc_impl(8, 8);
        *(v12 as &i64) = 8;
        v2 = alloc::slice::hack::into_vec(v12, 1);
    } else {
        v8 = v7;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v8, v11);
        v1 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), v0.field_16, ",");
        v6 = v1;
        v1 = uu_unexpand::tabstops_parse(*((&v6 as &char + 8) as &i64), v1.field_16);
        v13 = v1;
        v4 = *((&v1 as &char + 8) as &i128);
        v5 = *((&v1 as &char + 24) as &i64);
        if v13 {
            return struct32 {
                field_0: 0x8000000000000000
                field_8: v4
                field_24: v5
            };
        }
        v3 = v5;
        v2 = v4;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tabs") as i8 {
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 ^ 1;
    } else {
        v15 = 0;
    }
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v7 = clap_builder::parser::error::MatchesError::unwrap("file", &v1);
    if v7 {
        v9 = v7;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v11);
    } else {
        v17 = alloc::alloc::Global::alloc_impl(8, 24);
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v0 = v1;
        *((v17 + 16) as &struct24) = v0.field_16;
        *(v17 as &i128) = v0;
        alloc::slice::hack::into_vec(&v0, v17, 1);
    }
    v1.field_16 = vvar_319{stack -424};
    v1 = v0;
    v1.field_48 = vvar_330{stack -312};
    v1.field_24 = vvar_331{stack -328};
    return struct32 {
        field_0: 0x8000000000000000
        field_8: v4
        field_24: v5
    };
}
