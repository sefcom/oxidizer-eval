fn uu_expand::Options::new(a0: &Result<struct75, struct49>, a1: &struct56) -> u64 {
    let v0: i128;  // [sp-0x1c8], Other Possible Types: struct24
    let v1: i64;  // [sp-0x1b8]
    let v2: i128;  // [bp-0x1a8], Other Possible Types: struct24
    let v3: i128;  // [bp-0x199]
    let v4: i64;  // [sp-0x198]
    let v5: i128;  // [sp-0x188], Other Possible Types: struct24, Vec<u64>
    let v6: i64;  // [sp-0x178]
    let v7: i448;  // [sp-0x168], Other Possible Types: struct56, struct24
    let v8: i64;  // [sp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i128;  // [sp-0x150]
    let v14: i192;  // [sp-0x118], Other Possible Types: struct24
    let v15: struct24;  // [sp-0x100], Other Possible Types: i192
    let v16: struct64;  // [sp-0xe8], Other Possible Types: i512
    let v17: struct64;  // [bp-0xa8]
    let v18: struct64;  // [bp-0x68]
    let v20: i64;  // 4098
    let v21: i8;  // r12b
    let v22: i8;  // al
    let v23: i8;  // al
    let v24: i64;  // rdx
    let v26: i64;  // r14
    let v27: i128;  // xmm0

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v16 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v7);
    if !v16 {
        v5 = vec![8];
        v21 = 0;
    } else {
        v17 = struct64 {
            field_0: v16
            field_16: *((&v16 as &char + 16) as &i128)
            field_32: *((&v16 as &char + 32) as &i128)
            field_48: *((&v16 as &char + 48) as &i128)
        };
        v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
        v0 = alloc::str::join_generic_copy(*((&v15 as &char + 8) as &i64), *((&v15 as &char + 16) as &i64), ",");
        v14 = v0;
        v7 = uu_expand::tabstops_parse(*((&v14 as &char + 8) as &i64), v1);
        v20 = v7;
        v21 = *((&v7 as &char + 8) as &i8);
        v2 = *((&v7 as &char + 9) as &i128);
        v3 = v10;
        if v20 {
            return Err(struct49 {
                field_0: v21
                field_1: v2
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
            });
        }
        v5 = *((&v2 as &char + 7) as &i128);
        v6 = *((&v3 as &char + 8) as &i64);
    }
    v1 = v6;
    v0 = v5;
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "initial");
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-utf8");
    v7 = *((&v0 as &char + 8) as &i64);
    v8 = v7 + v1 * 8;
    v9 = 0;
    if !core::iter::traits::iterator::Iterator::reduce() {
        core::option::unwrap_failed("src/uu/expand/src/expand.rs"); /* do not return */
    }
    v5 = alloc::str::<impl str>::repeat(" ", v24);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "FILES");
    v16 = clap_builder::parser::error::MatchesError::unwrap("FILES", &v7);
    if v16 {
        v18 = struct64 {
            field_0: v16
            field_16: *((&v16 as &char + 16) as &i128)
            field_32: *((&v16 as &char + 32) as &i128)
            field_48: *((&v16 as &char + 48) as &i128)
        };
        v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
        return Ok(struct75 {
            field_0: v25
            field_16: *((&v7 as &char + 16) as &i128)
            field_32: *((&v7 as &char + 32) as &i64)
            field_40: v11
            field_48: v12
            field_64: v13
            field_72: v22
            field_73: v23 ^ 1
            field_74: v21
        });
    }
    v26 = alloc::alloc::Global::alloc_impl(8, 24);
    v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v4 = v9;
    v27 = v7;
    v2 = v27;
    *((v26 + 16) as &i64) = v4;
    *(v26 as &i128) = v27;
    alloc::slice::hack::into_vec(&v2, v26, 1);
}
