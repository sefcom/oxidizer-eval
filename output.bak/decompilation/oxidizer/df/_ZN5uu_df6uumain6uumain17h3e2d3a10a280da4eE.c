fn uu_df::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x450], Other Possible Types: i64
    let v1: i64;  // [sp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: i128;  // [bp-0x438], Other Possible Types: struct24
    let v4: i64;  // [sp-0x430]
    let v5: i64;  // [bp-0x428]
    let v6: i64;  // [sp-0x418]
    let v7: i64;  // [sp-0x410]
    let v8: i64;  // [sp-0x408]
    let v9: struct32;  // [sp-0x3f8], Other Possible Types: i64, struct64, struct24
    let v10: i64;  // [sp-0x3b8], Other Possible Types: Result<struct56, struct8>
    let v11: i128;  // [sp-0x3b0]
    let v12: i128;  // [sp-0x3a0]
    let v13: i128;  // [sp-0x390]
    let v14: i128;  // [sp-0x380]
    let v15: i128;  // [sp-0x370]
    let v16: i64;  // [sp-0x360], Other Possible Types: struct56
    let v17: i64;  // [sp-0x358]
    let v18: struct64;  // [bp-0x328]
    let v19: i192;  // [sp-0x2e8], Other Possible Types: struct24, Result<struct86, struct32>, struct712, struct56, struct32, struct72, struct28
    let v20: i64;  // [sp-0x2d8]
    let v22: i64;  // rax
    let v24: i64;  // rax
    let v25: i128;  // xmm0
    let v26: i128;  // xmm1
    let v33: i64;  // rsi

    v19 = uu_df::uu_app();
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if v16 == 0x8000000000000000 {
        v22 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v22;
    }
    v16 = struct56 {
        field_0: v10
        field_8: v23
        field_16: *((&v10 as &char + 16) as &i128)
        field_32: *((&v10 as &char + 32) as &i128)
        field_48: *((&v10 as &char + 48) as &i64)
    };
    v19 = uu_df::Options::from(&v16);
    v24 = v19;
    match v19 {
        Err(_) => {
            v9 = core::ops::function::FnOnce::call_once(&v19);
            v19 = struct32 {
                field_0: v28
                field_16: v27
            };
            v22 = alloc::boxed::Box<T>::new(&v19);
            return v22;
        },
        Ok(_) => {
            v25 = *((&v19 as &char + 8) as &i128);
            v26 = *((&v19 as &char + 24) as &i128);
            v13 = *((&v19 as &char + 40) as &i128);
            v14 = *((&v19 as &char + 56) as &i128);
            v15 = *((&v19 as &char + 72) as &i128);
            v3 = v25;
            v11 = v25;
            v12 = v26;
            v10 = v24;
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958);
            v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958, &v19);
            if !v9 {
                v19 = uu_df::get_all_filesystems(&v10);
                if v0 == 0x8000000000000000 {
                    v22 = uu_df::uumain::uumain::{{closure}}(v1, v2);
                } else {
                    v0 = v19;
                    v1 = *((&v19 as &char + 8) as &i64);
                    v2 = v20;
                    if v2 {
                        v8 = v2;
                        v6 = v0;
                        v7 = v1;
                        v9 = struct24 {
                            field_0: v6
                            field_8: v7
                            field_16: v8
                        };
                        v19 = uu_df::table::Table::new(&v10, &v9);
                        println!("{:?}", &v19);
                        return 0;
                    }
                    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v19 = struct28 {
                        field_0: v3
                        field_16: *((&v3 as &char + 16) as &i64)
                        field_24: 1
                    };
                    v22 = alloc::boxed::Box<T>::new(&v19);
                }
            } else {
                v18 = struct64 {
                    field_0: v9
                    field_16: *((&v9 as &char + 16) as &i128)
                    field_32: *((&v9 as &char + 32) as &i128)
                    field_48: *((&v9 as &char + 48) as &i128)
                };
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
                v19 = uu_df::get_named_filesystems(v1);
                v33 = v20;
                if v3 == 0x8000000000000000 {
                    v22 = uu_df::uumain::uumain::{{closure}}(v4, v33);
                } else {
                    v3 = v19;
                    v4 = *((&v19 as &char + 8) as &i64);
                    v5 = v33;
                    if v33 {
                        v8 = v5;
                        v6 = v3;
                        v7 = v4;
                        v9 = struct24 {
                            field_0: v6
                            field_8: v7
                            field_16: v8
                        };
                        vvar_488{stack -744} = uu_df::table::Table::new(&v10, &v9);
                        println!("{:?}", &v19);
                        return 0;
                    }
                    v22 = 0;
                }
            }
            return v22;
        },
    }
}
