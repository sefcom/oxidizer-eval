fn uu_unexpand::Options::new(a1: &struct56) -> Result<struct50, struct32> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x128]
    let v1: u64;  // [bp-0x120]
    let v2: u128;  // [bp-0x118]
    let v3: u64;  // [bp-0x110]
    let v4: i64;  // [bp-0x108], Other Possible Types: u32
    let v5: Result<struct24, struct24>;  // [bp-0xf8], Other Possible Types: struct24, struct56, u64
    let v6: struct32;  // [bp-0xf8]
    let v7: u64;  // [bp-0xf8]
    let v8: i64;  // [bp-0xf0], Other Possible Types: u64
    let v9: i64;  // [bp-0xe8], Other Possible Types: u64
    let v10: struct64;  // [bp-0xb0]
    let v11: struct64;  // [bp-0x70]
    let v13: i64;  // r14
    let v14: u64;  // r15
    let v15: i64;  // rax
    let v16: u8;  // bpl
    let v17: struct56;  // al
    let v19: i64;  // r15
    let v20: iNone;  // xmm0

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, &g_418004);
    v10 = clap_builder::parser::error::MatchesError::unwrap(&g_418004, &v5);
    if v10.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v2, &v10);
        v0 = v3;
        v5 = alloc::str::join_generic_copy(v3, v4);
        v6 = uu_unexpand::tabstops_parse(v8, v9);
        v13 = v9;
        v14 = v6.field_24;
        if v6.field_0 as i32 == 1 {
            return struct32 {
                field_0: 0x8000000000000000
                field_8: v8
                field_16: v9
                field_24: v14
            };
        }
        v1 = v8;
    } else {
        v15 = alloc::alloc::Global::alloc_impl(8, 8);
        v13 = v15;
        *(v15 as &i64) = 8;
        v14 = 1;
        v1 = 1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") || clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tabs") {
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "first-only") ^ 1;
    }
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-utf8");
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, &g_418084);
    v11 = clap_builder::parser::error::MatchesError::unwrap(&g_418084, &v5);
    if !v11.field_0 as i64 {
        v19 = alloc::alloc::Global::alloc_impl(8, 24);
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v4 = v9;
        v20 = *(&v5.field_0 as &i128);
        *(&v2 as void*) = v20;
        *((v19 + 16) as &struct_0 *) = v9;
        *(v19 as void*) = v20;
        v5 = 1;
        v8 = v19;
        v9 = 1;
        return Ok(struct56 {
            field_0: 1
            field_8: v8
            field_16: 1
            field_24: v1
            field_32: v13
            field_40: v14
            field_48: v16
            field_49: v17 ^ 1
        });
    }
    core::iter::traits::iterator::Iterator::collect(&v5, &v11);
    return Ok(struct56 {
        field_0: v7
        field_8: v8
        field_16: v9
        field_24: v1
        field_32: v13
        field_40: v14
        field_48: v16
        field_49: v17 ^ 1
    });
}
