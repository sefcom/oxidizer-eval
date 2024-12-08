fn uu_df::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x450], Other Possible Types: i64
    let v1: i64;  // [sp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: i128;  // [bp-0x438], Other Possible Types: struct24
    let v4: i64;  // [sp-0x430]
    let v5: i128;  // [bp-0x428]
    let v6: i64;  // [sp-0x418]
    let v7: i64;  // [sp-0x410]
    let v8: i64;  // [sp-0x408]
    let v9: i64;  // [sp-0x3f8], Other Possible Types: struct32, struct24, struct64
    let v10: i64;  // [bp-0x3b8]
    let v11: i128;  // [sp-0x3b0]
    let v13: i128;  // [sp-0x3a0]
    let v15: i128;  // [sp-0x390]
    let v17: i128;  // [sp-0x380]
    let v18: i128;  // [sp-0x370]
    let v19: i64;  // [sp-0x360], Other Possible Types: struct56
    let v20: i64;  // [sp-0x358]
    let v21: struct64;  // [bp-0x328]
    let v22: i192;  // [sp-0x2e8], Other Possible Types: struct24, struct28, struct712, struct56, Result<struct86, struct40>, struct32, struct72
    let v24: i64;  // rax
    let v26: i64;  // rax
    let v27: i128;  // xmm0
    let v28: i128;  // xmm1
    let v29: i128;  // xmm1
    let v31: i64;  // rdx
    let v32: i64;  // r8
    let v33: i64;  // r9
    let v38: i64;  // rsi

    v22 = uu_df::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v22, a0, a1);
    if v19 == 0x8000000000000000 {
        v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        return v24;
    }
    *(&v19.field_0 as &struct56) = struct56 {
        field_0: v10
        field_8: v25
        field_16: v12
        field_32: v14
        field_48: v16
    };
    v22 = uu_df::Options::from(&v19);
    v26 = v22;
    match v22 {
        Err(_) => {
            v9 = core::ops::function::FnOnce::call_once(&v22);
            v29 = *((&v9 as &char + 16) as &i128);
            v3 = v9;
            v5 = v29;
            v22 = struct32 {
                field_0: v30
                field_16: v29
            };
            v24 = alloc::boxed::Box<T>::new(&v22);
            return v24;
        },
        Ok(_) => {
            v27 = *((&v22 as &char + 8) as &i128);
            v28 = *((&v22 as &char + 24) as &i128);
            v15 = *((&v22 as &char + 40) as &i128);
            v17 = *((&v22 as &char + 56) as &i128);
            v18 = *((&v22 as &char + 72) as &i128);
            v3 = v27;
            v11 = v27;
            v13 = v28;
            v10 = v26;
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, _ZN5uu_df9OPT_PATHS17h855dc56a7d86c290E, g_542638);
            v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_df9OPT_PATHS17h855dc56a7d86c290E, g_542638, &v22);
            if !v9 {
                v22 = uu_df::get_all_filesystems(&v10);
                if v0 == 0x8000000000000000 {
                    v24 = uu_df::uumain::uumain::{{closure}}(v1, v2);
                } else {
                    v0 = v22;
                    v1 = *((&v22 as &char + 8) as &i64);
                    v2 = v22.field_16;
                    if v2 {
                        v8 = v2;
                        v6 = v0;
                        v7 = v1;
                        v9 = struct24 {
                            field_0: v6
                            field_8: v7
                            field_16: v8
                        };
                        v22 = uu_df::table::Table::new(&v10, &v9);
                        println!("{:?}", &v22);
                        return 0;
                    }
                    v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v22 = struct28 {
                        field_0: v3
                        field_16: *((&v3 as &char + 16) as &i64)
                        field_24: 1
                    };
                    v24 = alloc::boxed::Box<T>::new(&v22);
                }
            } else {
                v21 = struct64 {
                    field_0: v9
                    field_16: *((&v9 as &char + 16) as &i128)
                    field_32: *((&v9 as &char + 32) as &i128)
                    field_48: *((&v9 as &char + 48) as &i128)
                };
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21, v31);
                v22 = uu_df::get_named_filesystems(v0.field_8, v0.field_16, &v10, v32, v33);
                v38 = v22.field_16;
                if v3 == 0x8000000000000000 {
                    v24 = uu_df::uumain::uumain::{{closure}}(v4, v38);
                } else {
                    v3 = v22;
                    v4 = *((&v22 as &char + 8) as &i64);
                    v5 = v38;
                    if v38 {
                        v8 = v5;
                        v6 = v3;
                        v7 = v4;
                        v9 = struct24 {
                            field_0: v6
                            field_8: v7
                            field_16: v8
                        };
                        vvar_495{stack -744} = uu_df::table::Table::new(&v10, &v9);
                        println!("{:?}", &v22);
                        return 0;
                    }
                    v24 = 0;
                }
            }
            return v24;
        },
    }
}
