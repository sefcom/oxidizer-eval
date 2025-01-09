fn uu_df::blocks::read_block_size(a0: &Option<Result<struct32, struct8>>, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x80], Other Possible Types: Option<Result<struct32, struct8>>, Result<struct40, struct8>
    let v1: i64;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x50]
    let v6: i64;  // [sp-0x48]
    let v7: i64;  // [sp-0x40]
    let v8: i64;  // [sp-0x38]
    let v9: i64;  // [sp-0x30]
    let v10: i8;  // [sp-0x28]
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // r14
    let v15: i64;  // r15
    let v17: i64;  // rax

    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "blocksize") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "blocksize");
        v12 = clap_builder::parser::error::MatchesError::unwrap("blocksize", &v0);
        v14 = core::option::unwrap(v12);
        v15 = *((v12 + 16) as &i64);
        v0 = uucore::parser::parse_size::parse_size_u64(v14, v15);
        v13 = v1;
        if v0 == 3 {
            return struct16 {
                field_0: 3
                field_8: v13
            };
            v7 = 0;
            v8 = v14;
            v9 = v15;
            v10 = 1;
            v5 = &v7;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_40ba30;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            core::option::Option<T>::map_or_else();
            return struct8 {
                field_0: 1
            };
        }
        return struct32 {
            field_0: v16
            field_8: v13
            field_16: *((&v0 as &char + 16) as &i128)
        };
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "portability") as i8 {
        v13 = <uu_df::blocks::BlockSize as core::default::Default>::default();
    } else {
        v17 = <uu_df::blocks::BlockSize as core::default::Default>::default();
        return struct16 {
            field_0: 3
            field_8: v17
        };
    }
}
