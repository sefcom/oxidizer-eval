fn uu_head::HeadOptions::get_from(a0: &Result<struct48, struct32>, a1: &struct56) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i64;  // [sp-0x128]
    let v2: i192;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v5: i32;  // [bp-0x108]
    let v6: i8;  // [sp-0x107]
    let v7: i8;  // [sp-0x106]
    let v8: i8;  // [sp-0x105]
    let v9: i448;  // [sp-0x100], Other Possible Types: struct24, struct25, struct56
    let v10: struct64;  // [sp-0xb8], Other Possible Types: i512
    let v11: i192;  // [bp-0x78]
    let v12: i64;  // [sp-0x68]
    let v13: i512;  // [bp-0x58]
    let v16: i64;  // rdx
    let v19: i64;  // rdx
    let v20: i64;  // r14
    let v21: i128;  // xmm0
    let v22: i128;  // xmm1

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
    v16 = v9;
    if v16 != 0x8000000000000000 {
        return struct48 {
            field_0: v21
            field_16: v22
            field_32: v4
        };
    }
    v0 = *((&v9 as &char + 8) as &i64);
    v1 = *((&v9 as &char + 16) as &i64);
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "FILE");
    v10 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v9);
    if v10 {
        v13 = v10;
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v19);
    } else {
        v20 = alloc::alloc::Global::alloc_impl(24);
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v11 = v9;
        *((v20 + 16) as &i64) = v12;
        *(v20 as &i128) = v11;
        v9 = alloc::slice::hack::into_vec(v20, 1);
    }
    v2 = v9;
    v21 = v0;
    v22 = v2;
    return struct48 {
        field_0: v21
        field_16: v22
        field_32: v4
    };
}
