fn uu_fmt::extract_files(a0: void*, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x17a]
    let v1: i8;  // [bp-0x179]
    let v2: struct24;  // [sp-0x178], Other Possible Types: i192
    let v3: i448;  // [sp-0x160], Other Possible Types: struct24, struct56
    let v4: i128;  // [sp-0x118]
    let v5: i64;  // [sp-0x108]
    let v6: struct8;  // [bp-0x100]
    let v7: struct64;  // [sp-0xf8]
    let v8: i64;  // [sp-0xb8]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x38]
    let v11: i64;  // [sp-0x30]
    let v12: i64;  // [sp-0x28]
    let v14: i64;  // rdx
    let v15: i64;  // r14

    v0 = v14 == 1 & clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, &g_41d9ad);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "files");
    v7 = clap_builder::parser::error::MatchesError::unwrap("files", &v3);
    v6 = struct8 {
        field_0: 1
    };
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = &v1;
    v12 = &v0;
    v2 = core::iter::adapters::try_process(&v6);
    if !core::result::Result<T,E>::is_ok_and(-0x100 | v2 == 0x8000000000000000, (&v2 as &u8 + 8 * (-0x100 | v2 == 0x8000000000000000)) as &i192) as i8 {
        return struct24 {
            field_0: v2
            field_16: *((&v2 as &char + 16) as &i64)
        };
    }
    v15 = alloc::alloc::Global::alloc_impl(8, 24);
    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v5 = *((&v3 as &char + 16) as &i64);
    v4 = v3;
    *((v15 + 16) as &i64) = v5;
    *(v15 as &i128) = v4;
    v3 = alloc::slice::hack::into_vec(v15, 1);
    *((a0 + 16) as &i64) = *((&v3 as &char + 16) as &i64);
    *(a0 as &i192) = v3;
    return struct24 {
        field_0: v2
        field_16: *((&v2 as &char + 16) as &i64)
    };
}
