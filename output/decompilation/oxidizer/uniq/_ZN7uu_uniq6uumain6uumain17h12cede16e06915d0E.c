fn uu_uniq::uumain::uumain(a1: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x415]
    let v1: u8;  // [bp-0x414]
    let v2: u8;  // [bp-0x413]
    let v3: u8;  // [bp-0x412]
    let v4: u8;  // [bp-0x411]
    let v5: u64;  // [bp-0x410]
    let v6: u8;  // [bp-0x408]
    let v7: u8;  // [bp-0x408]
    let v8: u64;  // [bp-0x400]
    let v9: struct24;  // [bp-0x3f8], Other Possible Types: u224, Result<struct56, struct16>
    let v10: u192;  // [bp-0x3f8], Other Possible Types: struct32
    let v11: u64;  // [bp-0x3f0]
    let v12: void*;  // [bp-0x3e8]
    let v13: u128;  // [bp-0x3d0]
    let v14: u192;  // [bp-0x3c0]
    let v15: u8;  // [bp-0x3a8]
    let v16: u128;  // [bp-0x398]
    let v17: u8;  // [bp-0x388], Other Possible Types: struct24
    let v18: u64;  // [bp-0x378]
    let v19: u64;  // [bp-0x370]
    let v20: u64;  // [bp-0x368]
    let v21: u64;  // [bp-0x360]
    let v22: u8;  // [bp-0x358]
    let v23: u64;  // [bp-0x348]
    let v24: struct64;  // [bp-0x338]
    let v25: u512;  // [bp-0x338]
    let v26: struct24;  // [bp-0x2f8], Other Possible Types: u128, struct16, struct56
    let v27: u512;  // [bp-0x2f8]
    let v28: u64;  // [bp-0x2f8]
    let v29: u64;  // [bp-0x2f0]
    let v30: u64;  // [bp-0x2f0]
    let v31: u64;  // [bp-0x2e8]
    let v32: u64;  // [bp-0x2e0]
    let v33: u64;  // [bp-0x2d8]
    let v34: u64;  // [bp-0x2d0]
    let v35: i8;  // [bp-0x2c8], Other Possible Types: u8
    let v36: u8;  // [bp-0x2c7]
    let v37: u8;  // [bp-0x2c6]
    let v38: u8;  // [bp-0x2c5]
    let v39: u8;  // [bp-0x2c4]
    let v40: u8;  // [bp-0x2c3]
    let v41: u8;  // [bp-0x2c2]
    let v43: u64;  // rdi
    let v44: u64;  // rcx
    let v45: u64;  // r15
    let v46: u64;  // r12
    let v47: u64;  // r13
    let v48: u128;  // xmm1

    uu_uniq::handle_obsolete(v43, a0, v44);
    v23 = v33;
    memcpy(&v22, &v31, 16);
    v45 = v28;
    v46 = v34;
    v47 = *(&v35 as &i64);
    uu_uniq::uu_app(&v28);
    v18 = v23;
    memcpy(&v17, &v22, 16);
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v28, &v17);
    match v9 {
        Err(_) => {
            core::ops::function::FnOnce::call_once(v11);
            return;
        },
        Ok(_) => {
            memcpy(&v15, &v9, 16);
            v16 = v13;
            v14 = v10;
            v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, _ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E.field_0, g_530310.field_0);
            v24 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E.field_0, g_530310.field_0, &v26);
            if v24.field_0 as i64 {
                v27 = v25;
                v10 = uu_uniq::uumain::uumain::{{closure}}(&v27);
                v48 = *(&v10.field_16 as &i128);
                v26 = *(&v10.field_0 as &i128) as u128;
                v31 = v48;
                v30 = v29;
            } else {
                v26 = core::tuple::<impl core::default::Default for (U,T)>::default();
                v30 = v29;
            }
            v21 = v31;
            v20 = v32;
            v26 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h2bb6432963610c92E.field_0, g_530bb8.field_0, &v14);
            if v26.field_0 {
                return;
            }
            v6 = v30;
            v8 = v31;
            v26 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17hbcd8ab9768c8cda7E.field_0, g_530bc8.field_0, &v14);
            if !v26.field_0 {
                v19 = v30;
                v5 = v31;
                v1 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options8REPEATED17h6df9e3e681573764E.field_0, g_530ba8.field_0) as i8 {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE.field_0, g_530b68.field_0) as i8;
                }
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options6UNIQUE17h299064be3620c038E.field_0, g_530bd8.field_0) as i8;
                v0 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE.field_0, g_530b68.field_0) as i8 {
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN7uu_uniq7options5GROUP17h5aa12383b2ab72d4E.field_0, g_530bf8.field_0) as i8;
                }
                v3 = uu_uniq::get_delimiter(&v14) as i8;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options5COUNT17h2c22ae5cbb35dde4E.field_0, g_530b88.field_0) as i8;
                if !v6 {
                    v29 = v29;
                } else {
                    v29 = v8;
                }
                v8 = v29;
                v5 = v47;
                v9 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h70a3b944769f6e22E.field_0, g_530b78.field_0, &v14);
                if !v9.field_0 {
                    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options11IGNORE_CASE17hba75ae53dcd91b83E.field_0, g_530b98.field_0) as i8;
                    v35 = v1;
                    v36 = v4;
                    v37 = v0;
                    v41 = v3;
                    v38 = v2;
                    v26 = v45;
                    v29 = v8;
                    v31 = v46;
                    v32 = v5;
                    v33 = v11;
                    v34 = v12;
                    v39 = v7;
                    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options15ZERO_TERMINATED17he85c5d38a806ae02E.field_0, g_530be8.field_0) as i8;
                    if (v2 & v0) {
                        v17 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v9 = struct28 {
                            field_0: *(&v17.field_0 as &i128)
                            field_16: v18
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v9);
                    } else {
                        uu_uniq::open_input_file(&v9, v28, v30);
                        if !v9.field_0 {
                            v9 = uu_uniq::open_output_file(v21, v20);
                            if v9.field_0 {
                                return;
                            }
                            uu_uniq::Uniq::print_uniq(&v26, v11, v12, v11, v12);
                        }
                    }
                }
            }
            return;
        },
    }
}
