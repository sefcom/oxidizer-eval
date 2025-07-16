fn uu_fmt::extract_files(a1: &struct16) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x17a]
    let v1: u64;  // [bp-0x179]
    let v2: core::result::Result<alloc::string::String, core::char::decode::DecodeUtf16Error>;  // [bp-0x178]
    let v3: u64;  // [bp-0x168]
    let v4: struct24;  // [bp-0x160]
    let v5: struct56;  // [bp-0x160]
    let v6: u128;  // [bp-0x118]
    let v7: u64;  // [bp-0x108]
    let v8: u64;  // [bp-0x100]
    let v9: struct64;  // [bp-0xf8]
    let v10: void*;  // [bp-0xb8]
    let v11: void*;  // [bp-0x78]
    let v12: void*;  // [bp-0x38]
    let v13: i64;  // [bp-0x30]
    let v14: i64;  // [bp-0x28]
    let v16: u64;  // rdx
    let v18: i64;  // rdi
    let v19: i64;  // r14
    let v20: void*;  // rcx
    let v21: i64;  // rdi

    v0 = v16 == 1 & clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a0, "files");
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "files");
    v9 = clap_builder::parser::error::MatchesError::unwrap("files", &v5);
    v8 = 1;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = &v1;
    v14 = &v0;
    v2 = core::iter::adapters::try_process(&v8);
    if !core::result::Result<T,E>::is_ok_and(v2 as i64 == 0x8000000000000000) {
        *((v18 + 16) as &u64) = v3;
        *(v18 as &i128) = v2 as i128;
        return;
    }
    v19 = alloc::alloc::Global::alloc_impl(0x8, 24, a1) as u64;
    <T as alloc::slice::hack::ConvertVec>::to_vec("-", v20);
    v7 = v5.field_16;
    v6 = *(&v5.field_0 as &i128);
    *((v19 + 16) as &u64) = v5.field_16;
    *(v19 as &i128) = *(&v5.field_0 as &i128);
    v4 = alloc::slice::hack::into_vec(v19, 1);
    *((v21 + 16) as &u64) = v4.field_16;
    *(v21 as &i128) = *(&v4.field_0 as &i128);
    return;
}
