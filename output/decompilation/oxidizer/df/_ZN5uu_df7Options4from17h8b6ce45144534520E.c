fn uu_df::Options::from(a1: &struct56) -> Result<struct86, struct40> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x1bb]
    let v1: u8;  // [bp-0x1ba]
    let v2: u8;  // [bp-0x1b9]
    let v3: iNone;  // [bp-0x1b8], Other Possible Types: u64
    let v5: u64;  // [bp-0x1b0]
    let v6: u64;  // [bp-0x1a8]
    let v7: u8;  // [bp-0x198]
    let v8: u64;  // [bp-0x198]
    let v9: u32;  // [bp-0x190]
    let v10: u64;  // [bp-0x188]
    let v11: u64;  // [bp-0x180]
    let v12: iNone;  // [bp-0x178]
    let v13: u64;  // [bp-0x168]
    let v14: struct56;  // [bp-0x158], Other Possible Types: u128
    let v15: struct56;  // [bp-0x158]
    let v16: u64;  // [bp-0x148]
    let v17: u128;  // [bp-0x140]
    let v18: u64;  // [bp-0x138]
    let v19: u64;  // [bp-0x130]
    let v20: iNone;  // [bp-0x128]
    let v21: u64;  // [bp-0x118]
    let v22: Result<struct24, struct24>;  // [bp-0x108], Other Possible Types: u64
    let v23: u64;  // [bp-0x100]
    let v24: i8;  // [bp-0xf8]
    let v25: u64;  // [bp-0xf0]
    let v26: struct32;  // [bp-0xe8]
    let v27: struct64;  // [bp-0xc8]
    let v28: struct64;  // [bp-0x88]
    let v30: u8;  // r12b
    let v31: u8;  // r13b
    let v32: u8;  // al

    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "type");
    v27 = clap_builder::parser::error::MatchesError::unwrap("type", &v14);
    if v27.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v7, &v27);
    }
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-type");
    v28 = clap_builder::parser::error::MatchesError::unwrap("exclude-type", &v15);
    if v28.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v15, &v28);
        v6 = v16;
        *(&v3 as &i128) = *(&v15.field_0 as &i128);
        if v8 != 0x8000000000000000 && v3 != 0x8000000000000000 {
            uu_df::Options::get_intersected_types(&v15, v9, v10, v5, v6);
            if v15.field_0 != 0x8000000000000000 {
                *((a0 + 32) as &u64) = v16;
                *((a0 + 16) as &i128) = *(&v15.field_0 as &i128);
                *((a0 + 8) as &i64) = 4;
            }
        }
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "local");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sync");
    v26 = uu_df::blocks::read_block_size(a1);
    if v26.field_0 as i32 != 4 {
        uu_df::Options::from::{{closure}}(&v22, a1, &v26);
        v12 = *(&v24 as &i128);
        if v22 != 5 {
            return struct40 {
                field_0: 0x8000000000000000
                field_8: v22
                field_16: v23
                field_24: v12
            };
        }
        v11 = v23;
    }
    v30 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-binary") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-decimal") {
        v30 = 2;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "portability") {
            clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "output");
        }
    }
    v31 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-binary") {
        v31 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-decimal") ^ 1) * 2;
    }
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "total");
    v22 = uu_df::columns::Column::from_matches(a1);
    v12 = *((&v22 as &char + 8) as &i128);
    v13 = v25;
    match v22 {
        Ok(_) => {
            v16 = v13;
            v14 = v12;
            v19 = v10;
            v17 = *(&v8 as &i128) as u128;
            v21 = v6;
            v20 = v3 as i128;
            return Ok(struct88 {
                field_0: v12
                field_16: v16
                field_24: v17 as i64
                field_32: v18
                field_40: v19
                field_48: v20
                field_64: v6
                field_72: v11
                field_80: v2
                field_81: v1
                field_82: v0
                field_83: v32
                field_84: v31
                field_85: v30
            });
        },
        Err(_) => {
            *((a0 + 32) as &u64) = v13;
            *((a0 + 16) as void*) = v12;
            *((a0 + 8) as &i64) = 3;
        },
    }
}
