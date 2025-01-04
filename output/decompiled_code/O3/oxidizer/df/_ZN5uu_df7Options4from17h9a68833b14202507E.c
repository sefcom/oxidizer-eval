fn uu_df::Options::from(a0: &Result<struct86, struct40>, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x18d]
    let v1: i32;  // [sp-0x18c]
    let v2: i192;  // [bp-0x188]
    let v3: i64;  // [sp-0x178]
    let v4: i64;  // [sp-0x170], Other Possible Types: struct24
    let v5: i128;  // [sp-0x158], Other Possible Types: Option<Result<struct32, struct16>>
    let v6: i64;  // [sp-0x148]
    let v7: i512;  // [sp-0x138], Other Possible Types: struct56, Option<struct24>
    let v8: i64;  // [sp-0x128]
    let v9: i128;  // [bp-0x120]
    let v10: i64;  // [sp-0x110]
    let v11: i128;  // [sp-0x108]
    let v12: i64;  // [sp-0xf8]
    let v13: i64;  // [sp-0xf0]
    let v14: i192;  // [sp-0xe8], Other Possible Types: Option<struct24>, struct24, struct32
    let v15: i512;  // [sp-0xc8], Other Possible Types: struct64, struct32
    let v16: i128;  // [sp-0x88]
    let v17: i64;  // [sp-0x78]
    let v18: i128;  // [sp-0x68]
    let v19: i64;  // [sp-0x58]
    let v20: i128;  // [sp-0x48]
    let v21: i64;  // [sp-0x38]
    let v23: i64;  // rdx
    let v24: i8;  // al
    let v25: i8;  // al
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rcx
    let v30: i8;  // al
    let v31: i64;  // rax

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "type");
    v15 = clap_builder::parser::error::MatchesError::unwrap("type", &v7);
    if !v15 {
        v4 = 0x8000000000000000;
    } else {
        v7 = v15;
        v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7, v23);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-type");
    v15 = clap_builder::parser::error::MatchesError::unwrap("exclude-type", &v7);
    if !v15 {
        v2 = 0x8000000000000000;
        goto LABEL_4c6064;
    }
    v7 = v15;
    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7, v23);
    v2 = v14;
    if !(v4 != 0x8000000000000000) || !(v2 != 0x8000000000000000) {
LABEL_4c6064:
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "local") as i32;
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i32;
        v5 = uu_df::blocks::read_block_size(a1);
        if v5 == 3 {
            v13 = *((&v5 as &char + 8) as &i64);
            goto LABEL_4c6132;
        }
        v15 = v5;
        v14 = uu_df::Options::from::{{closure}}(a1, &v15);
        v27 = v14;
        v28 = *((&v14 as &char + 8) as &i64);
        v20 = *((&v14 as &char + 16) as &i128);
        if v27 != 5 {
            *((a0 + 24) as &i128) = v20;
            *((a0 + 8) as &i64) = v27;
            *((a0 + 16) as &i64) = v13;
            *(a0 as &i64) = 0x8000000000000000;
            goto LABEL_4c6404;
        } else {
            v13 = v28;
LABEL_4c6132:
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
            v17 = *((&v4 as &char + 16) as &i64);
            v16 = v4;
            v19 = v3;
            v18 = v2;
            v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "total") as i32;
            v14 = uu_df::columns::Column::from_matches(a1);
            match v14 {
                None => {
                    v6 = *((&v14 as &char + 24) as &i64);
                    v5 = *((&v14 as &char + 8) as &i128);
                    vvar_565{stack -56} = v6;
                    vvar_566{stack -72} = v5;
                    vvar_567{stack -312} = v20;
                    vvar_568{stack -296} = v21;
                    v9 = v16;
                    vvar_569{stack -272} = v17;
                    vvar_570{stack -264} = v18;
                    vvar_571{stack -248} = v19;
                    return struct86 {
                        field_0: v20
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
                    };
                },
                Some(_) => {
                    v15 = core::ops::function::FnOnce::call_once(&v14);
                    v31 = v15;
                    v5 = *((&v15 as &char + 8) as &i128);
                    v6 = *((&v15 as &char + 24) as &i64);
                },
            }
            if v31 == 5 {
                v21 = v6;
                v20 = v5;
                v7 = v20;
                v8 = v21;
                v9 = v16;
                v10 = v17;
                v11 = v18;
                v12 = v19;
                return struct86 {
                    field_0: v20
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
                };
            }
            v21 = v6;
            v20 = v5;
            *((a0 + 32) as &i64) = v21;
            *((a0 + 16) as &i128) = v20;
            *((a0 + 8) as &i64) = v31;
            *(a0 as &i64) = 0x8000000000000000;
        }
    } else {
        v7 = uu_df::Options::get_intersected_types(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), *((&v2 as &char + 8) as &i64), v3);
        if v7 == 0x8000000000000000 {
            goto LABEL_4c6064;
        } else {
            *((a0 + 32) as &i64) = v8;
            *((a0 + 16) as &i128) = v7;
            *((a0 + 8) as &i64) = 4;
            *(a0 as &i64) = 0x8000000000000000;
LABEL_4c6404:
        }
    }
    return struct86 {
        field_0: v20
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
    };
}
