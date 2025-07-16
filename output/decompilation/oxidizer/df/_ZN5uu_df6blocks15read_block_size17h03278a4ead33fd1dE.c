fn uu_df::blocks::read_block_size(a1: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x80], Other Possible Types: Result<struct40, struct16>, u64
    let v1: struct32;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: i64;  // [bp-0x70]
    let v4: u64;  // [bp-0x68]
    let v5: void*;  // [bp-0x60]
    let v6: struct32;  // [bp-0x50]
    let v7: u64;  // [bp-0x48]
    let v8: void*;  // [bp-0x40]
    let v9: u64;  // [bp-0x38]
    let v10: Option<struct152>;  // [bp-0x30]
    let v11: struct16;  // [bp-0x28]
    let v13: i64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: i64;  // rdi
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "blocksize") as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "blocksize");
        v13 = clap_builder::parser::error::MatchesError::unwrap("blocksize", &v0);
        if !v13 {
            core::option::unwrap_failed(); /* do not return */
        }
        v1 = uucore::parser::parse_size::parse_size_u64(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        if v1.field_0 as i64 != 3 {
            *((v16 + 16) as &u128) = v1.field_16;
            *(v16 as &i64) = v1.field_0;
            *((v16 + 8) as &u64) = v14;
            return;
        } else if !v14 {
            v8 = 0;
            v9 = *((v13 + 8) as &i64);
            v10 = *((v13 + 16) as &i64);
            v11 = 1;
            v6 = &v8;
            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_40ba30;
            v2 = 1;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            v0 = core::option::Option<T>::map_or_else(a1);
            *(v18 as &i64) = 1;
            return;
        }
        goto LABEL_4d4ac0;
    } else {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "portability") as i8 {
            v14 = <uu_df::blocks::BlockSize as core::default::Default>::default();
LABEL_4d4ac0:
            *((v17 + 8) as &u64) = v14;
        } else {
            if uu_df::blocks::block_size_from_env() != 1 {
                v15 = <uu_df::blocks::BlockSize as core::default::Default>::default();
            }
            *((v17 + 8) as &u64) = v15;
        }
        *(v17 as &i64) = 3;
        return;
    }
}
