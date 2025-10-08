fn uu_head::HeadOptions::get_from(a1: &struct56) -> Result<struct48, struct32> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0xe0], Other Possible Types: core::fmt::rt::Argument
    let v1: u64;  // [bp-0xd8]
    let v2: iNone;  // [bp-0xd0]
    let v3: void*;  // [bp-0xd0]
    let v4: u64;  // [bp-0xc8]
    let v5: void*;  // [bp-0xc0], Other Possible Types: u64
    let v6: u8;  // [bp-0xb8]
    let v7: u8;  // [bp-0xb7]
    let v8: core::fmt::rt::Argument;  // [bp-0xb6]
    let v10: Result<struct25, struct24>;  // [bp-0xb0], Other Possible Types: struct56
    let v11: struct24;  // [bp-0xb0], Other Possible Types: u64
    let v12: u192;  // [bp-0xb0]
    let v13: core::fmt::Arguments;  // [bp-0xb0]
    let v14: struct25;  // [bp-0xa8], Other Possible Types: u64
    let v15: u64;  // [bp-0xa0]
    let v16: struct24;  // [bp-0x68]
    let v17: struct64;  // [bp-0x50]
    let v19: u8;  // al
    let v21: i64;  // r14
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm1

    v6 = 0xa000000;
    v0 = 0;
    v1 = 10;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "QUIET");
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "VERBOSE");
    v19 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "ZERO") ? 0 : 10);
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-PRESUME-INPUT-PIPE");
    v10 = uu_head::Mode::from(a1);
    if !((((0 ^ v10 as i64) & (0 ^ -(v11))) >> 63) as char) {
        return struct32 {
            field_0: 4
            field_8: v10 as i64
            field_16: v14
            field_24: v15
        };
    }
    v0 = v14;
    v1 = v15;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
    v17 = clap_builder::parser::error::MatchesError::unwrap(&v10);
    if v17.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v10, &v17);
    } else {
        v21 = alloc::alloc::Global::alloc_impl(8, 24);
        v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v16 = v12;
        *((v21 + 16) as &u64) = v15;
        *(v21 as &i128) = *(&v16.field_0 as &i128);
        v13 = 1;
        v14 = v21;
        v15 = 1;
    }
    v5 = v15;
    *(&v2 as &i128) = *(&v10.field_0 as &i128);
    v22 = v0.ty;
    v23 = v2 as i128;
    return Ok(struct48 {
        field_0: v22
        field_16: v23
        field_32: *(&v5 as &i128)
    });
}
