fn uu_fmt::extract_files(a1: &struct56) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x162]
    let v1: u8;  // [bp-0x161]
    let v2: u8;  // [bp-0x160]
    let v3: u64;  // [bp-0x150]
    let v4: struct24;  // [bp-0x148]
    let v5: struct24;  // [bp-0x148]
    let v6: u64;  // [bp-0x148]
    let v7: struct64;  // [bp-0x140]
    let v8: void*;  // [bp-0x100]
    let v9: void*;  // [bp-0xc0]
    let v10: void*;  // [bp-0x80]
    let v11: i64;  // [bp-0x78]
    let v12: i64;  // [bp-0x70]
    let v13: struct24;  // [bp-0x68], Other Possible Types: struct56
    let v15: u64;  // rdx
    let v17: i64;  // r14

    v0 = v15 == 1 & clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, "files");
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
    v7 = clap_builder::parser::error::MatchesError::unwrap(&v13);
    v6 = 1;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = &v1;
    v12 = &v0;
    core::iter::traits::iterator::Iterator::collect(&v2, &v6);
    if !core::result::Result<T,E>::is_ok_and(((0 ^ *(&v2 as &i64)) & (0 ^ -(*(&v2 as &i64)))) >> 63, &(&v2)[8 * (((0 ^ *(&v2 as &i64)) & (0 ^ -(*(&v2 as &i64)))) >> 63 & 255)]) {
        return struct24 {
            field_0: v2
            field_16: v3
        };
    }
    v17 = alloc::alloc::Global::alloc_impl(8, 24);
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
    v13 = v5;
    *((v17 + 16) as &u64) = v4.field_16;
    *(v17 as &i128) = *(&v13.field_0 as &i128);
    return struct24 {
        field_0: 1
        field_8: v17
        field_16: 1
    };
}
