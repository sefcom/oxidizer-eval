fn uu_head::HeadOptions::get_from(a1: &struct56) -> Result<struct48, struct32> {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0x130], Other Possible Types: u64
    let v1: u64;  // [bp-0x128]
    let v2: u64;  // [bp-0x128]
    let v3: u128;  // [bp-0x120]
    let v4: void*;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: void*;  // [bp-0x110], Other Possible Types: u64
    let v7: struct32;  // [bp-0x108], Other Possible Types: u32
    let v8: Result<struct40, struct16>;  // [bp-0x107]
    let v9: struct32;  // [bp-0x106]
    let v11: struct56;  // [bp-0x100], Other Possible Types: u64
    let v12: struct24;  // [bp-0x100], Other Possible Types: u192
    let v13: struct24;  // [bp-0x100]
    let v14: struct24;  // [bp-0x100]
    let v15: struct32;  // [bp-0xf8]
    let v16: i8;  // [bp-0xf0]
    let v17: struct64;  // [bp-0xb8]
    let v18: struct64;  // [bp-0xb8]
    let v19: struct24;  // [bp-0x78]
    let v20: struct64;  // [bp-0x58]
    let v22: struct32;  // al
    let v23: i64;  // rdi
    let v25: i64;  // r14
    let v26: u128;  // xmm0
    let v27: u128;  // xmm1
    let v28: i64;  // rdi

    v7 = 0xa000000;
    v0 = 0;
    v2 = 10;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "QUIET") as i8;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "VERBOSE") as i8;
    v22 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ZERO") as i8 ? 0 : 10);
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "-PRESUME-INPUT-PIPE") as i8;
    uu_head::Mode::from(a0, a1);
    if v11 != 0x8000000000000000 {
        *((v23 + 8) as &u64) = v11;
        *((v23 + 16) as &struct32) = v15;
        *((v23 + 24) as &u64) = v1;
        *(v23 as &i64) = 4;
        return;
    }
    v0 = v15;
    v1 = *(&v16 as &i64);
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "FILE");
    v17 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v11);
    if v17.field_0 as i64 {
        v20 = v18;
        v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20);
    } else {
        v25 = alloc::alloc::Global::alloc_impl(0x18, a0, a1) as u64;
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v19 = v14;
        *((v25 + 16) as &u64) = v13.field_16;
        *(v25 as &u128) = v19.field_0;
        v12 = alloc::slice::hack::into_vec(v25, 1);
    }
    v6 = *((&v12 as &char + 16) as &i64);
    v3 = v12;
    v26 = *(&v0 as &i128);
    v27 = v3;
    *((v28 + 32) as &i128) = *(&v6 as &i128);
    *((v28 + 16) as &u128) = v27;
    *(v28 as &u128) = v26;
    return;
}
