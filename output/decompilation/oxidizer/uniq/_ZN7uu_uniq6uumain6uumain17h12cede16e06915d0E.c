fn uu_uniq::uumain::uumain(a1: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x415]
    let v1: u8;  // [bp-0x414]
    let v2: u8;  // [bp-0x413]
    let v3: u8;  // [bp-0x412]
    let v4: u8;  // [bp-0x411]
    let v5: u64;  // [bp-0x410]
    let v6: u64;  // [bp-0x408]
    let v7: u8;  // [bp-0x408]
    let v8: u64;  // [bp-0x400]
    let v9: Result<struct56, struct16>;  // [bp-0x3f8], Other Possible Types: struct28, struct24
    let v10: struct32;  // [bp-0x3f8], Other Possible Types: struct56
    let v11: u64;  // [bp-0x3f0]
    let v12: void*;  // [bp-0x3e8]
    let v13: struct56;  // [bp-0x3c0]
    let v14: struct24;  // [bp-0x388]
    let v15: u64;  // [bp-0x378]
    let v16: u64;  // [bp-0x370]
    let v17: u64;  // [bp-0x368]
    let v18: u64;  // [bp-0x360]
    let v19: u128;  // [bp-0x358]
    let v20: struct24;  // [bp-0x358]
    let v21: u64;  // [bp-0x348]
    let v22: struct64;  // [bp-0x338]
    let v23: struct64;  // [bp-0x338]
    let v24: struct16;  // [bp-0x2f8], Other Possible Types: struct24, struct56, u128
    let v25: struct64;  // [bp-0x2f8]
    let v26: u64;  // [bp-0x2f8]
    let v27: u64;  // [bp-0x2f0]
    let v28: u64;  // [bp-0x2f0]
    let v29: i8;  // [bp-0x2e8], Other Possible Types: u64
    let v30: u64;  // [bp-0x2e0]
    let v31: u64;  // [bp-0x2d8]
    let v32: u64;  // [bp-0x2d0]
    let v33: i8;  // [bp-0x2c8]
    let v35: u64;  // rdi
    let v36: u64;  // rcx
    let v37: u64;  // r15
    let v38: u64;  // r12
    let v39: u64;  // r13
    let v40: u128;  // xmm1

    uu_uniq::handle_obsolete(v35, a0, v36);
    v21 = v31;
    v19 = *(&v29 as &i128);
    v37 = v26;
    v38 = v32;
    v39 = *(&v33 as &i64);
    uu_uniq::uu_app(&v26);
    v14 = v20;
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v26, &v14);
    match v9 {
        Err(_) => {
            core::ops::function::FnOnce::call_once(v11);
            return;
        },
        Ok(v13) => {
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, _ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E.field_0, g_530310.field_0);
            v22 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E.field_0, g_530310.field_0, &v24);
            if v22.field_0 as i64 {
                v25 = v23;
                v10 = uu_uniq::uumain::uumain::{{closure}}(&v25);
                v40 = *(&v10.field_16 as &i128);
                v24 = *(&v10.field_0 as &i128) as u128;
                v29 = v40;
                v28 = v27;
            } else {
                v24 = core::tuple::<impl core::default::Default for (U,T)>::default();
                v28 = v27;
            }
            v18 = v29;
            v17 = v30;
            v24 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h2bb6432963610c92E.field_0, g_530bb8.field_0, &v13);
            if v24.field_0 as i64 {
                return;
            }
            v6 = v28;
            v8 = v29;
            v24 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17hbcd8ab9768c8cda7E.field_0, g_530bc8.field_0, &v13);
            if !v24.field_0 as i64 {
                v16 = v28;
                v5 = v29;
                v1 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options8REPEATED17h6df9e3e681573764E.field_0, g_530ba8.field_0) as i8 {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE.field_0, g_530b68.field_0) as i8;
                }
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options6UNIQUE17h299064be3620c038E.field_0, g_530bd8.field_0) as i8;
                v0 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE.field_0, g_530b68.field_0) as i8 {
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, _ZN7uu_uniq7options5GROUP17h5aa12383b2ab72d4E.field_0, g_530bf8.field_0) as i8;
                }
                v3 = uu_uniq::get_delimiter(&v13) as i8;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options5COUNT17h2c22ae5cbb35dde4E.field_0, g_530b88.field_0) as i8;
                if !v6 {
                    v27 = v27;
                } else {
                    v27 = v8;
                }
                v8 = v27;
                v5 = v39;
                v9 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h70a3b944769f6e22E.field_0, g_530b78.field_0, &v13);
                if !v9.field_0 as i64 {
                    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options11IGNORE_CASE17hba75ae53dcd91b83E.field_0, g_530b98.field_0) as i8;
                    v24 = struct56 {
                        field_0: v37
                        field_8: v8
                        field_16: v38
                        field_24: v5
                        field_32: v11
                        field_40: v12
                        field_48: v1
                        field_49: v4
                        field_50: v0
                        field_51: v2
                        field_52: v7
                        field_53: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options15ZERO_TERMINATED17he85c5d38a806ae02E.field_0, g_530be8.field_0) as i8
                        field_54: v3
                    };
                    if (v2 & v0) {
                        v14 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v9 = struct28 {
                            field_0: v14.field_0
                            field_16: v15
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v9);
                    } else {
                        uu_uniq::open_input_file(&v9, v24.field_0 as i64, v28);
                        if !v9.field_0 as i64 {
                            v9 = uu_uniq::open_output_file(v18, v17);
                            if v9.field_0 as i64 {
                                return;
                            }
                            uu_uniq::Uniq::print_uniq(&v24, v11, v12, v11, v12);
                        }
                    }
                }
            }
            return;
        },
    }
}
