fn uu_df::Options::from(a0: &Result<struct86, struct32>, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x18d]
    let v1: i32;  // [sp-0x18c]
    let v2: i64;  // [bp-0x188], Other Possible Types: struct24
    let v3: i64;  // [sp-0x178]
    let v4: i64;  // [sp-0x170], Other Possible Types: struct24
    let v5: i264;  // [sp-0x158], Other Possible Types: Option<Result<struct32, struct8>>
    let v6: i64;  // [sp-0x148]
    let v7: i448;  // [sp-0x138], Other Possible Types: struct64, struct56, Option<struct24>
    let v8: i64;  // [sp-0x128]
    let v9: i128;  // [bp-0x120]
    let v10: i64;  // [sp-0x110]
    let v11: i128;  // [sp-0x108]
    let v12: i64;  // [sp-0xf8]
    let v13: i64;  // [sp-0xf0]
    let v14: i256;  // [sp-0xe8], Other Possible Types: Option<struct24>, struct32, struct24
    let v15: i512;  // [sp-0xc8], Other Possible Types: struct32, struct64
    let v17: i128;  // [sp-0x88]
    let v18: i64;  // [sp-0x78]
    let v19: i128;  // [sp-0x68]
    let v20: i64;  // [sp-0x58]
    let v21: i128;  // [sp-0x48]
    let v22: i64;  // [sp-0x38]
    let v29: i64;  // rcx

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "type");
    v15 = clap_builder::parser::error::MatchesError::unwrap("type", &v7);
    if !v15 {
        v4 = 0x8000000000000000;
    } else {
        v7 = struct64 {
            field_0: v15
            field_16: v16
            field_32: *((&v15 as &char + 32) as &i128)
            field_48: *((&v15 as &char + 48) as &i128)
        };
        v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-type");
    v15 = clap_builder::parser::error::MatchesError::unwrap("exclude-type", &v7);
    if !v15 {
        v2 = 0x8000000000000000;
    } else {
        v7 = struct64 {
            field_0: v15
            field_16: v16
            field_32: *((&v15 as &char + 32) as &i128)
            field_48: *((&v15 as &char + 48) as &i128)
        };
        v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7);
        v2 = v14;
        if v4 != 0x8000000000000000 && v2 != 0x8000000000000000 {
            v7 = uu_df::Options::get_intersected_types(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), *((&v2 as &char + 8) as &i64), v3);
            return Err(struct32 {
                field_0: 4
                field_8: v7
                field_24: v8
            });
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "local");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all");
    v5 = uu_df::blocks::read_block_size(a1);
    if v5 == 3 {
        v13 = *((&v5 as &char + 8) as &i64);
    } else {
        v15 = struct32 {
            field_0: v5
            field_16: *((&v5 as &char + 16) as &i128)
        };
        v14 = uu_df::Options::from::{{closure}}(a1, &v15);
        v21 = *((&v14 as &char + 16) as &i128);
        if v14 != 5 {
            return Err(struct32 {
                field_0: v27
                field_8: v13
                field_16: v21
            });
        }
        v13 = *((&v14 as &char + 8) as &i64);
    }
    v1 = v29 | -0x100 | 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-binary") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-decimal") as i8 {
        v1 = v29 | -0x100 | 2;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "portability") as i8 {
            v1 = ((-0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "output") as i8 == 2) & 4294967295) * 3;
        }
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-binary") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-decimal");
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sync") as i32;
    v18 = *((&v4 as &char + 16) as &i64);
    v17 = v4;
    v20 = v3;
    v19 = v2;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "total");
    v14 = uu_df::columns::Column::from_matches(a1);
    match v14 {
        None => {
            v6 = *((&v14 as &char + 24) as &i64);
            v5 = *((&v14 as &char + 8) as &i128);
        },
        Some(_) => {
            v15 = core::ops::function::FnOnce::call_once(&v14);
            v5 = *((&v15 as &char + 8) as &i128);
            v6 = *((&v15 as &char + 24) as &i64);
            if v15 != 5 {
                v22 = v6;
                v21 = v5;
                return Err(struct32 {
                    field_0: v31
                    field_8: v21
                    field_24: v22
                });
            }
        },
    }
    v22 = v6;
    v21 = v5;
    v7 = v21;
    v8 = v22;
    v9 = v17;
    v10 = v18;
    v11 = v19;
    v12 = v20;
    return Ok(struct86 {
        field_0: v21
        field_16: v8
        field_24: v9
        field_32: *((&v9 as &char + 8) as &i64)
        field_40: v10
        field_48: v11
        field_64: v12
        field_72: v13
        field_80: v24
        field_81: v25
        field_82: v0
        field_83: v30
        field_84: 1
        field_85: v1 as i8
    });
}
