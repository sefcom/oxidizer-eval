fn uu_head::HeadOptions::get_from(a0: &Result<struct48, struct24>, a1: &struct56) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i64;  // [sp-0x128]
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v5: i32;  // [bp-0x108]
    let v6: i8;  // [sp-0x107]
    let v7: i8;  // [sp-0x106]
    let v8: i8;  // [sp-0x105]
    let v9: struct24;  // [sp-0x100], Other Possible Types: i200, struct25, struct56
    let v10: struct64;  // [sp-0xb8], Other Possible Types: i512
    let v11: i192;  // [sp-0x78]
    let v12: i64;  // [sp-0x68]
    let v13: struct64;  // [bp-0x58]
    let v21: i64;  // r14

    v5 = 0xa000000;
    v0 = 0;
    v1 = 10;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "QUIET") as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "VERBOSE") as i8;
    v8 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ZERO") as i8 ? 0 : 10);
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-PRESUME-INPUT-PIPE") as i8;
    v9 = uu_head::Mode::from(a1);
    if v9 != 0x8000000000000000 {
        return Err(struct24 {
            field_0: v16
            field_8: v0
            field_16: v1
        });
    }
    v0 = *((&v9 as &char + 8) as &i64);
    v1 = *((&v9 as &char + 16) as &i64);
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "FILE");
    v10 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v9);
    if v10 {
        v13 = struct64 {
            field_0: v10
            field_16: *((&v10 as &char + 16) as &i128)
            field_32: *((&v10 as &char + 32) as &i128)
            field_48: *((&v10 as &char + 48) as &i128)
        };
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
        return Ok(struct48 {
            field_0: v20
            field_16: v19
            field_32: v4
        });
    }
    v21 = alloc::alloc::Global::alloc_impl();
    v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v11 = v9;
    *((v21 + 16) as &i64) = v12;
    *(v21 as &i128) = v11;
    v9 = alloc::slice::hack::into_vec(v21, 1);
}
