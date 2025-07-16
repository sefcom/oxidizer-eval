fn uu_head::HeadOptions::get_from(a1: &struct32) -> Result<struct48, struct32> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x130], Other Possible Types: void*
    let v1: u64;  // [bp-0x128]
    let v2: u64;  // [bp-0x128]
    let v3: void*;  // [bp-0x120]
    let v4: u64;  // [bp-0x118]
    let v5: u64;  // [bp-0x110], Other Possible Types: struct32
    let v6: u32;  // [bp-0x108], Other Possible Types: Result<struct40, struct16>
    let v7: u8;  // [bp-0x107]
    let v8: u8;  // [bp-0x106]
    let v10: struct56;  // [bp-0x100], Other Possible Types: u64
    let v11: Result<struct24, struct24>;  // [bp-0x100]
    let v12: struct24;  // [bp-0x100]
    let v13: struct24;  // [bp-0x100]
    let v14: u64;  // [bp-0xf8]
    let v15: i8;  // [bp-0xf0]
    let v16: struct64;  // [bp-0xb8]
    let v17: u512;  // [bp-0xb8]
    let v18: u8;  // [bp-0x78]
    let v19: u64;  // [bp-0x68]
    let v20: u512;  // [bp-0x58]
    let v22: u8;  // al
    let v23: i64;  // rdi
    let v25: i64;  // r14
    let v26: u128;  // xmm0
    let v27: u128;  // xmm1
    let v28: i64;  // rdi

    v6 = 0xa000000;
    v0 = 0;
    v2 = 10;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "QUIET") as i8;
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "VERBOSE") as i8;
    v22 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ZERO") as i8 ? 0 : 10);
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "-PRESUME-INPUT-PIPE") as i8;
    uu_head::Mode::from(a0, a1);
    if v10 != 0x8000000000000000 {
        *((v23 + 8) as &u64) = v10;
        *((v23 + 16) as &u64) = v14;
        *((v23 + 24) as &u64) = v1;
        *(v23 as &i64) = 4;
        return;
    }
    v0 = v14;
    v1 = *(&v15 as &i64);
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "FILE");
    v16 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v10);
    if v16.field_0 as i64 {
        v20 = v17;
        v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20);
    } else {
        v25 = alloc::alloc::Global::alloc_impl(0x18, a0, a1) as u64;
        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v19 = v12.field_16;
        memcpy(&v18, &v12, 16);
        *((v25 + 16) as &u64) = v12.field_16;
        *(v25 as &u128) = v18;
        v13 = alloc::slice::hack::into_vec(v25, 1);
    }
    v5 = *((&v11 as &char + 16) as &i64);
    memcpy(&v3, &v13, 16);
    v26 = *(&v0 as &i128);
    v27 = *(&v3 as &i128);
    *((v28 + 32) as &u128) = v5.field_0;
    *((v28 + 16) as &u128) = v27;
    *(v28 as &u128) = v26;
    return;
}
