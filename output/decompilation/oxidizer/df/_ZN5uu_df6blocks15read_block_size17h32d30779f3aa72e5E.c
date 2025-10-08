fn uu_df::blocks::read_block_size(a0: i64, a1: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x78]
    let v1: &str;  // [bp-0x78]
    let v2: struct32;  // [bp-0x78]
    let v3: u64;  // [bp-0x70]
    let v4: i64;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: void*;  // [bp-0x58]
    let v7: i64;  // [bp-0x48]
    let v8: u64;  // [bp-0x40]
    let v9: void*;  // [bp-0x38]
    let v10: u64;  // [bp-0x30]
    let v11: u64;  // [bp-0x28]
    let v12: u8;  // [bp-0x20]
    let v14: i64;  // rax
    let v15: i64;  // r14
    let v16: u64;  // rax
    let v18: u64;  // rdx

    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "blocksize") {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
        v14 = clap_builder::parser::error::MatchesError::unwrap(&v0);
        core::option::unwrap(v14);
        v15 = v14;
        v2 = uucore::features::parser::parse_size::parse_size_u64(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
        if v2.field_0 as i64 != 4 {
            return struct32 {
                field_0: v2.field_0 as i64
                field_8: v3
                field_16: v2.field_16
            };
        } else if !v3 {
            v9 = 0;
            v10 = *((v15 + 8) as &i64);
            v11 = *((v15 + 16) as &i64);
            v12 = 1;
            v7 = &v9;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = "\x01";
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            v16 = core::option::Option<T>::map_or_else(a0 + 8, &v1 as u64);
            return struct8 {
                field_0: 1
            };
        }
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "portability") && (uu_df::blocks::block_size_from_env() & 1) {
            return struct16 {
                field_0: 4
                field_8: v18
            };
        }
        v3 = <uu_df::blocks::BlockSize as core::default::Default>::default();
    }
    *((a0 + 8) as &u64) = v3;
}
