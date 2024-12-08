fn uu_df::Options::from(a0: void*, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x18d]
    let v1: i32;  // [sp-0x18c]
    let v2: i128;  // [bp-0x188]
    let v3: i64;  // [sp-0x178]
    let v4: i64;  // [sp-0x170], Other Possible Types: struct24
    let v5: i256;  // [sp-0x158], Other Possible Types: Option<Result<struct32, struct16>>
    let v6: i64;  // [sp-0x148]
    let v7: i448;  // [sp-0x138], Other Possible Types: struct56, struct64, Option<struct24>
    let v8: i64;  // [sp-0x128]
    let v9: i128;  // [bp-0x120]
    let v10: i64;  // [sp-0xf8]
    let v11: i64;  // [sp-0xf0]
    let v12: i192;  // [sp-0xe8], Other Possible Types: struct32, struct24, Option<struct24>
    let v13: i256;  // [sp-0xc8], Other Possible Types: struct32, struct64
    let v15: i128;  // [sp-0x88]
    let v16: i64;  // [sp-0x78]
    let v17: i128;  // [sp-0x68]
    let v18: i64;  // [sp-0x58]
    let v19: i128;  // [sp-0x48]
    let v20: i64;  // [sp-0x38]
    let v22: i64;  // rdx
    let v23: i8;  // al
    let v24: i8;  // al
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rcx
    let v29: i8;  // al
    let v30: i64;  // rax

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "type");
    v13 = clap_builder::parser::error::MatchesError::unwrap("type", &v7);
    if !v13 {
        v4 = 0x8000000000000000;
    } else {
        v7 = struct64 {
            field_0: v13
            field_16: v14
            field_32: *((&v13 as &char + 32) as &i128)
            field_48: *((&v13 as &char + 48) as &i128)
        };
        v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7, v22);
    }
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "exclude-type");
    v13 = clap_builder::parser::error::MatchesError::unwrap("exclude-type", &v7);
    if !v13 {
        v2 = 0x8000000000000000;
        goto LABEL_4c6504;
    }
    v7 = struct64 {
        field_0: v13
        field_16: v14
        field_32: *((&v13 as &char + 32) as &i128)
        field_48: *((&v13 as &char + 48) as &i128)
    };
    v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7, v22);
    v2 = v12;
    v3 = *((&v12 as &char + 16) as &i64);
    if !(v4 != 0x8000000000000000) || !(v2 != 0x8000000000000000) {
LABEL_4c6504:
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "local") as i32;
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "all") as i32;
        v5 = uu_df::blocks::read_block_size(a1);
        if v5 == 3 {
            v11 = *((&v5 as &char + 8) as &i64);
            goto LABEL_4c65d2;
        }
        *(&v13.field_0 as &struct32) = struct32 {
            field_0: v5
            field_16: *((&v5 as &char + 16) as &i128)
        };
        v12 = uu_df::Options::from::{{closure}}(a1, &v13);
        v26 = v12;
        v27 = *((&v12 as &char + 8) as &i64);
        v19 = *((&v12 as &char + 16) as &i128);
        if v26 != 5 {
            *((a0 + 24) as &i128) = v19;
            *((a0 + 8) as &i64) = v26;
            *((a0 + 16) as &i64) = v11;
            *(a0 as &i64) = 0x8000000000000000;
            goto LABEL_4c68a4;
        } else {
            v11 = v27;
LABEL_4c65d2:
            v1 = v28 | -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-binary") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-decimal") as i8 {
                v1 = v28 | -0x100 | 2;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "portability") as i8 {
                    v1 = (-0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "output") as i8 == 2) * 3;
                }
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-binary") as i8 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "human-readable-decimal");
            }
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "sync") as i32;
            v16 = *((&v4 as &char + 16) as &i64);
            v15 = v4;
            v18 = v3;
            v17 = v2;
            v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "total") as i32;
            v12 = uu_df::columns::Column::from_matches(a1);
            match v12 {
                None => {
                    v6 = *((&v12 as &char + 24) as &i64);
                    v5 = *((&v12 as &char + 8) as &i128);
                    vvar_565{stack -56} = v6;
                    vvar_566{stack -72} = v5;
                    vvar_567{stack -312} = v19;
                    vvar_568{stack -296} = v20;
                    v9 = v15;
                    v7.field_48 = vvar_527{stack -120};
                    v7.field_64 = vvar_530{stack -104};
                    vvar_569{stack -248} = v18;
                    return struct86 {
                        field_0: v19
                        field_16: v8
                        field_24: v9
                        field_32: *((&v9 as &char + 8) as &i64)
                        field_40: v7.field_48
                        field_48: v7.field_64
                        field_64: v10
                        field_72: v11
                        field_80: v23
                        field_81: v24
                        field_82: v0
                        field_83: v29
                        field_84: 1
                        field_85: v1 as i8
                    };
                },
                Some(_) => {
                    v13 = core::ops::function::FnOnce::call_once(&v12);
                    v30 = v13;
                    v5 = *((&v13 as &char + 8) as &i128);
                    v6 = *((&v13 as &char + 24) as &i64);
                },
            }
            if v30 == 5 {
                v20 = v6;
                v19 = v5;
                v7 = v19;
                v8 = v20;
                v9 = v15;
                v7.field_48 = vvar_527{stack -120};
                v7.field_64 = vvar_530{stack -104};
                v10 = v18;
                return struct86 {
                    field_0: v19
                    field_16: v8
                    field_24: v9
                    field_32: *((&v9 as &char + 8) as &i64)
                    field_40: v7.field_48
                    field_48: v7.field_64
                    field_64: v10
                    field_72: v11
                    field_80: v23
                    field_81: v24
                    field_82: v0
                    field_83: v29
                    field_84: 1
                    field_85: v1 as i8
                };
            }
            v20 = v6;
            v19 = v5;
            *((a0 + 32) as &i64) = v20;
            *((a0 + 16) as &i128) = v19;
            *((a0 + 8) as &i64) = v30;
            *(a0 as &i64) = 0x8000000000000000;
        }
    } else {
        v7 = uu_df::Options::get_intersected_types(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64), *((&v2 as &char + 8) as &i64), v3);
        if v7 == 0x8000000000000000 {
            goto LABEL_4c6504;
        } else {
            *((a0 + 32) as &i64) = v8;
            *((a0 + 16) as &i128) = v7;
            *((a0 + 8) as &i64) = 4;
            *(a0 as &i64) = 0x8000000000000000;
LABEL_4c68a4:
        }
    }
    return struct86 {
        field_0: v19
        field_16: v8
        field_24: v9
        field_32: *((&v9 as &char + 8) as &i64)
        field_40: v7.field_48
        field_48: v7.field_64
        field_64: v10
        field_72: v11
        field_80: v23
        field_81: v24
        field_82: v0
        field_83: v29
        field_84: 1
        field_85: v1 as i8
    };
}
