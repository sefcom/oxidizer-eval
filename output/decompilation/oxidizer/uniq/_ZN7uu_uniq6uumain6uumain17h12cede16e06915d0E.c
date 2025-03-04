fn uu_uniq::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x415]
    let v1: i8;  // [sp-0x414]
    let v2: i8;  // [sp-0x413]
    let v3: i8;  // [sp-0x412]
    let v4: i8;  // [sp-0x411]
    let v5: i64;  // [sp-0x410]
    let v6: i8;  // [bp-0x408], Other Possible Types: unsigned long
    let v7: i64;  // [sp-0x400]
    let v8: struct24;  // [sp-0x3f8], Other Possible Types: char, struct32
    let v10: i64;  // [sp-0x3e8]
    let v11: i32;  // [bp-0x3e0]
    let v13: i64;  // [sp-0x3c0], Other Possible Types: struct56
    let v14: i64;  // [sp-0x3b8]
    let v15: iNone;  // [sp-0x388], Other Possible Types: struct24
    let v16: i64;  // [sp-0x370]
    let v17: i64;  // [sp-0x368]
    let v18: i64;  // [sp-0x360]
    let v19: iNone;  // [sp-0x358]
    let v20: i64;  // [sp-0x348]
    let v21: struct64;  // [sp-0x338]
    let v22: i64;  // [sp-0x2f8], Other Possible Types: struct56, struct24, struct712, struct16, struct32, struct64
    let v23: i64;  // [sp-0x2f0]
    let v24: i64;  // [sp-0x2e8]
    let v25: i64;  // [sp-0x2e0]
    let v26: i64;  // [sp-0x2d8]
    let v27: i64;  // [sp-0x2d0]
    let v28: i8;  // [sp-0x2c8]
    let v29: i8;  // [sp-0x2c7]
    let v30: i8;  // [sp-0x2c6]
    let v31: i8;  // [sp-0x2c5]
    let v32: i8;  // [sp-0x2c4]
    let v33: i8;  // [sp-0x2c3]
    let v34: i8;  // [sp-0x2c2]
    let v36: i64;  // r15
    let v37: i64;  // r12
    let v38: i64;  // r13
    let v41: i64;  // r13
    let v47: i64;  // rcx
    let v48: i64;  // rax
    let v49: i64;  // r13
    let v50: i64;  // r13
    let v52: i64;  // r13

    v22 = uu_uniq::handle_obsolete(a0, a1);
    v20 = v26;
    v19 = v22.field_16;
    v36 = v22;
    v37 = v27;
    v38 = v22.field_48;
    v22 = uu_uniq::uu_app();
    v15 = v19 as i192;
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v22, &v15);
    if v13 == 0x8000000000000000 {
        v41 = core::ops::function::FnOnce::call_once(v14);
        return v41;
    }
    *(&v13.field_0 as &struct56) = struct56 {
        field_0: v39
        field_8: v40
        field_16: v10
        field_24: *(&v11 as &i128)
        field_40: *(&v12 as &i128)
    };
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, _ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E, g_530310);
    v21 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17h8b83ed60f9304131E, g_530310, &v22);
    if !v22 {
        v22 = core::tuple::<impl core::default::Default for (U,T)>::default();
    } else {
        *(&v22.field_0 as &struct64) = struct64 {
            field_0: v42
            field_8: v43
            field_24: v44
            field_40: *((&v21.field_32 as &char + 8) as &i128)
            field_56: *((&v21.field_48 as &char + 8) as &i64)
        };
        v8 = uu_uniq::uumain::uumain::{{closure}}(&v22);
        v22 = v8;
    }
    v18 = v24;
    v17 = v25;
    v22 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h2bb6432963610c92E, g_530bb8, &v13);
    if !v22 {
        v6 = v23;
        v7 = v24;
        v22 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17hbcd8ab9768c8cda7E, g_530bc8, &v13);
        if !v22 {
            v16 = v23;
            v5 = v24;
            v1 = 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options8REPEATED17h6df9e3e681573764E, g_530ba8) as i8 {
                v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE, g_530b68) as i8;
            }
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options6UNIQUE17h299064be3620c038E, g_530bd8) as i8;
            v0 = 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, _ZN7uu_uniq7options12ALL_REPEATED17h3af280ad36b283aeE, g_530b68) as i8 {
                v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, _ZN7uu_uniq7options5GROUP17h5aa12383b2ab72d4E, g_530bf8) as i8;
            }
            v3 = uu_uniq::get_delimiter(&v13) as i8;
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options5COUNT17h2c22ae5cbb35dde4E, g_530b88) as i8;
            if v6 {
                v36 = 1;
            }
            v47 = v7;
            if !v6 {
                v47 = v23;
            }
            v7 = v47;
            if v16 {
                v37 = 1;
            }
            v48 = v5;
            if !v16 {
                v48 = v38;
            }
            v5 = v48;
            v8 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h70a3b944769f6e22E, g_530b78, &v13);
            v49 = v8.field_8;
            v41 = v49;
            if v8.field_0 {
                return v41;
            }
            *(&v6 as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options11IGNORE_CASE17hba75ae53dcd91b83E, g_530b98) as i8;
            v28 = v1;
            v29 = v4;
            v30 = v0;
            v34 = v3;
            v31 = v2;
            v22 = v36;
            v23 = v7;
            v24 = v37;
            v25 = v5;
            v26 = v49;
            v27 = v10;
            v32 = v6;
            v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, _ZN7uu_uniq7options15ZERO_TERMINATED17he85c5d38a806ae02E, g_530be8) as i8;
            if (v31 & v30) {
                v15 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v8 = v15;
                v11 = 1;
                v41 = alloc::boxed::Box<T>::new(&v8);
                return v41;
            }
            v8 = uu_uniq::open_input_file(v22, v23);
            v50 = v8.field_8;
            v41 = v50;
            if v8.field_0 {
                return v41;
            }
            v8 = uu_uniq::open_output_file(v18, v17);
            if v8.field_0 {
                v52 = v8.field_8;
                v41 = v52;
                return v41;
            }
            v41 = uu_uniq::Uniq::print_uniq(&v22, v50, v10, v52, v10);
            return v41;
        }
    }
    v41 = v23;
    return v41;
}
