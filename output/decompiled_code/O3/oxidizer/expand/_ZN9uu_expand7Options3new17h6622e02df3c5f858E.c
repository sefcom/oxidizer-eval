fn uu_expand::Options::new(a0: &Result<struct75, struct57>, a1: &struct56) -> u64 {
    let v0: i192;  // [sp-0x1c8], Other Possible Types: struct24
    let v1: i64;  // [sp-0x1b8]
    let v2: i192;  // [bp-0x1a8], Other Possible Types: struct24
    let v3: i128;  // [bp-0x199]
    let v4: i64;  // [sp-0x198]
    let v5: i192;  // [sp-0x188], Other Possible Types: struct24
    let v6: i64;  // [sp-0x178]
    let v7: i192;  // [sp-0x168], Other Possible Types: struct56, struct24
    let v8: i64;  // [sp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i128;  // [sp-0x150]
    let v11: i64;  // [sp-0x140]
    let v12: i192;  // [bp-0x138]
    let v14: i192;  // [bp-0x118]
    let v15: i192;  // [sp-0x100], Other Possible Types: struct24
    let v16: struct64;  // [sp-0xe8], Other Possible Types: i512
    let v17: i512;  // [bp-0xa8]
    let v18: i512;  // [bp-0x68]
    let v20: i64;  // rdx
    let v21: i64;  // rcx
    let v22: i64;  // 4098
    let v23: i8;  // r12b
    let v26: i64;  // rsi
    let v27: i64;  // r14
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v16 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v7);
    if !v16 {
        v5 = vec![8];
        v23 = 0;
    } else {
        v17 = v16;
        v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17, v20);
        v0 = alloc::str::join_generic_copy(*((&v15 as &char + 8) as &i64), *((&v15 as &char + 16) as &i64), ",");
        v14 = v0;
        v7 = uu_expand::tabstops_parse(*((&v14 as &char + 8) as &i64), v1, v21);
        v22 = v7;
        v23 = *((&v7 as &char + 8) as &i8);
        v2 = *((&v7 as &char + 9) as &i128);
        v3 = v10;
        if v22 {
            return struct57 {
                field_0: 0x8000000000000000
                field_8: v23
                field_9: v2
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
            };
        }
        v5 = *((&v2 as &char + 7) as &i128);
        v6 = *((&v3 as &char + 8) as &i64);
    }
    v1 = v6;
    v0 = v5;
    v7 = *((&v0 as &char + 8) as &i64);
    v8 = v7 + v1 * 8;
    v9 = 0;
    if !core::iter::traits::iterator::Iterator::reduce(v26, v20) {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = alloc::str::<impl str>::repeat(" ", v20);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "FILES");
    v16 = clap_builder::parser::error::MatchesError::unwrap("FILES", &v7);
    if v16 {
        v18 = v16;
        v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18, v20);
    } else {
        v27 = alloc::alloc::Global::alloc_impl(8, 24);
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v4 = v9;
        v28 = v7;
        v2 = v28;
        *((v27 + 16) as &i64) = v4;
        *(v27 as &i128) = v28;
        alloc::slice::hack::into_vec(&v2, v27, 1);
    }
    v9 = v4;
    v29 = v2;
    v7 = v29;
    v11 = v1;
    v10 = v0;
    v12 = v5;
    return struct57 {
        field_0: 0x8000000000000000
        field_8: v23
        field_9: v2
        field_24: <UNKNOWN>
        field_40: <UNKNOWN>
    };
}
