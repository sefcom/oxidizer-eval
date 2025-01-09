fn uu_uniq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x415]
    let v1: i8;  // [sp-0x414]
    let v2: i8;  // [sp-0x413]
    let v3: i8;  // [sp-0x412]
    let v4: i8;  // [sp-0x411]
    let v5: i64;  // [sp-0x410]
    let v6: i64;  // [bp-0x408]
    let v7: i64;  // [sp-0x400]
    let v8: i192;  // [sp-0x3f8], Other Possible Types: struct24, struct32, struct28, Result<struct56, struct8>
    let v9: i64;  // [sp-0x3e8]
    let v10: struct56;  // [sp-0x3c0]
    let v11: i64;  // [sp-0x3b8]
    let v12: struct24;  // [bp-0x388]
    let v14: i64;  // [sp-0x370]
    let v15: i64;  // [sp-0x368]
    let v16: i64;  // [sp-0x360]
    let v17: i128;  // [sp-0x358]
    let v18: i64;  // [sp-0x348]
    let v19: struct64;  // [sp-0x338]
    let v20: i64;  // [sp-0x2f8], Other Possible Types: struct56, struct24, struct32, struct712, struct16, struct64
    let v21: i64;  // [sp-0x2f0]
    let v22: i64;  // [sp-0x2e8]
    let v23: i64;  // [sp-0x2e0]
    let v24: i64;  // [sp-0x2d8]
    let v25: i64;  // [sp-0x2d0]
    let v26: i8;  // [sp-0x2c8]
    let v27: i8;  // [sp-0x2c7]
    let v28: i8;  // [sp-0x2c6]
    let v29: i8;  // [sp-0x2c5]
    let v30: i8;  // [sp-0x2c4]
    let v31: i8;  // [sp-0x2c3]
    let v32: i8;  // [sp-0x2c2]
    let v34: i64;  // r13
    let v35: i64;  // rax
    let v44: i64;  // r13
    let v45: i64;  // r13

    v20 = uu_uniq::handle_obsolete(a0, a1);
    v18 = v24;
    v17 = *((&v20 as &char + 16) as &i128);
    v34 = *((&v20 as &char + 48) as &i64);
    v20 = uu_uniq::uu_app();
    v12 = struct24 {
        field_0: v17
        field_16: v18
    };
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v20, &v12);
    match v8 {
        Err(_) => {
            v35 = core::ops::function::FnOnce::call_once(v11);
            return v35;
        },
        Ok(_) => {
            *(&v10.field_0 as &struct56) = struct56 {
                field_0: v36
                field_8: v37
                field_16: v9
                field_24: *((&v8 as &char + 24) as &i128)
                field_40: *((&v8 as &char + 40) as &i128)
            };
            v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E, g_530310);
            v19 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E, g_530310, &v20);
            if !v20 {
                v20 = core::tuple::<impl core::default::Default for (U,T)>::default();
            } else {
                *(&v20.field_0 as &struct64) = struct64 {
                    field_0: v36
                    field_8: v38
                    field_24: v39
                    field_40: *((&v19 as &char + 40) as &i128)
                    field_56: *((&v19 as &char + 56) as &i64)
                };
                v8 = uu_uniq::uumain::uumain::{{closure}}(&v20);
                v20 = v8;
            }
            v16 = v22;
            v15 = v23;
            v20 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h2bb6432963610c92E, g_530bb8, &v10);
            if v20 || (v6 = v21, v7 = v22, v20 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17hbcd8ab9768c8cda7E, g_530bc8, &v10), v20) {
                v35 = v21;
            } else {
                v14 = v21;
                v5 = v22;
                v1 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_uniq7options8REPEATED17h6df9e3e681573764E, g_530ba8) as i8 {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v10, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE, g_530b68) as i8;
                }
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_uniq7options6UNIQUE17h299064be3620c038E, g_530bd8) as i8;
                v0 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v10, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE, g_530b68) as i8 {
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v10, _ZN7uu_uniq7options5GROUP17h5aa12383b2ab72d4E, g_530bf8) as i8;
                }
                v3 = uu_uniq::get_delimiter(&v10) as i8;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_uniq7options5COUNT17h2c22ae5cbb35dde4E, g_530b88) as i8;
                if !v6 {
                    v21 = v21;
                } else {
                    v21 = v7;
                }
                v7 = v21;
                if !v14 {
                    v44 = v34;
                } else {
                    v44 = v5;
                }
                v5 = v44;
                v8 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h70a3b944769f6e22E, g_530b78, &v10);
                v45 = *((&v8 as &char + 8) as &i64);
                v35 = v45;
                if !v8 {
                    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_uniq7options11IGNORE_CASE17hba75ae53dcd91b83E, g_530b98) as i8;
                    v26 = v1;
                    v27 = v4;
                    v28 = v0;
                    v32 = v3;
                    v29 = v2;
                    v20 = 1;
                    v21 = v7;
                    v22 = 1;
                    v23 = v5;
                    v24 = v45;
                    v25 = v9;
                    v30 = v6;
                    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_uniq7options15ZERO_TERMINATED17he85c5d38a806ae02E, g_530be8) as i8;
                    if (v29 & v28) {
                        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v8 = struct28 {
                            field_0: v12
                            field_16: v13
                            field_24: 1
                        };
                        v35 = alloc::boxed::Box<T>::new(&v8);
                    } else {
                        v8 = uu_uniq::open_input_file(v20, v21);
                        v35 = *((&v8 as &char + 8) as &i64);
                        if !v8 {
                            v8 = uu_uniq::open_output_file(v16, v15);
                            v35 = *((&v8 as &char + 8) as &i64);
                            if v8 {
                                return v35;
                            }
                            v35 = uu_uniq::Uniq::print_uniq(&v20, v35, v9, v35, v9);
                        }
                    }
                }
            }
            return v35;
        },
    }
}
