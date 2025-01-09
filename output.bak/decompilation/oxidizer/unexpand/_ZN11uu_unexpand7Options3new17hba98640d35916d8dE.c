fn uu_unexpand::Options::new(a0: &Result<struct50, struct24>, a1: &struct56) -> u64 {
    let v0: i128;  // [sp-0x1b8], Other Possible Types: struct24
    let v1: i64;  // [sp-0x1a8]
    let v2: i256;  // [sp-0x198], Other Possible Types: struct24, struct56, struct32
    let v3: i64;  // [sp-0x188]
    let v5: Vec<u64>;  // [sp-0x148], Other Possible Types: i128
    let v6: i64;  // [sp-0x138]
    let v7: i128;  // [sp-0x128]
    let v8: i64;  // [sp-0x118]
    let v9: struct24;  // [sp-0x108], Other Possible Types: i192
    let v10: i512;  // [sp-0xe8], Other Possible Types: struct64
    let v11: struct64;  // [bp-0xa8]
    let v12: struct64;  // [bp-0x68]
    let v14: i64;  // 4098
    let v16: i8;  // bpl
    let v17: i8;  // al
    let v18: i64;  // r14

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "tabs");
    v10 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v2);
    if !v10 {
        v5 = vec![8];
    } else {
        v11 = struct64 {
            field_0: v10
            field_16: *((&v10 as &char + 16) as &i128)
            field_32: *((&v10 as &char + 32) as &i128)
            field_48: *((&v10 as &char + 48) as &i128)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
        v2 = alloc::str::join_generic_copy(*((&v0 as &char + 8) as &i64), v1, ",");
        v9 = v2;
        v2 = uu_unexpand::tabstops_parse(*((&v9 as &char + 8) as &i64), v3);
        v14 = v2;
        v7 = *((&v2 as &char + 8) as &i128);
        v8 = *((&v2 as &char + 24) as &i64);
        if v14 {
            return Err(struct24 {
                field_0: v7
                field_16: v8
            });
        }
        v6 = v8;
        v5 = v7;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tabs") as i8 {
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") as i32 ^ 1;
    } else {
        v16 = 0;
    }
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-utf8") as i32;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "file");
    v10 = clap_builder::parser::error::MatchesError::unwrap("file", &v2);
    if v10 {
        v12 = struct64 {
            field_0: v10
            field_16: *((&v10 as &char + 16) as &i128)
            field_32: *((&v10 as &char + 32) as &i128)
            field_48: *((&v10 as &char + 48) as &i128)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
        return Ok(struct50 {
            field_0: v2
            field_16: v3
            field_24: *((&v2 as &char + 24) as &i64)
            field_32: *((&v2 as &char + 32) as &i64)
            field_40: v4
            field_48: v16
            field_49: v17 ^ 1
        });
    }
    v18 = alloc::alloc::Global::alloc_impl(8, 24);
    v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v0 = v2;
    *((v18 + 16) as &i64) = v1;
    *(v18 as &i128) = v0;
    alloc::slice::hack::into_vec(&v0, v18, 1);
}
