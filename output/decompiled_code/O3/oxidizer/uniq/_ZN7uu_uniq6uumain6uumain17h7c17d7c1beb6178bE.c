fn uu_uniq::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x41d]
    let v1: i8;  // [sp-0x41c]
    let v2: i8;  // [sp-0x41b]
    let v3: i8;  // [sp-0x41a]
    let v4: i8;  // [sp-0x419]
    let v5: i64;  // [sp-0x418]
    let v6: i64;  // [sp-0x410]
    let v7: i192;  // [sp-0x408], Other Possible Types: struct24, struct32, Result<struct56, struct16>
    let v9: struct56;  // [sp-0x3d0]
    let v10: i64;  // [sp-0x3c8]
    let v11: i64;  // [bp-0x398]
    let v12: i192;  // [bp-0x388], Other Possible Types: struct24
    let v13: i64;  // [sp-0x370]
    let v14: i64;  // [sp-0x368]
    let v15: i64;  // [sp-0x360]
    let v16: i128;  // [sp-0x358]
    let v17: i64;  // [sp-0x348]
    let v18: i512;  // [sp-0x338], Other Possible Types: struct64
    let v19: i448;  // [sp-0x2f8], Other Possible Types: struct56, struct24, struct16, struct712
    let v20: i64;  // [bp-0x2f0]
    let v21: i64;  // [sp-0x2e8]
    let v22: i64;  // [bp-0x2e0]
    let v23: i128;  // [bp-0x2d8]
    let v24: i128;  // [bp-0x2d0]
    let v26: i64;  // rbp
    let v27: i64;  // r15
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v34: i64;  // rax
    let v35: i128;  // xmm0
    let v36: i128;  // xmm1
    let v39: i64;  // r15

    v19 = uu_uniq::handle_obsolete(a0, a1);
    v17 = *((&v19 as &char + 32) as &i64);
    v16 = *((&v19 as &char + 16) as &i128);
    v26 = *((&v19 as &char + 40) as &i64);
    v27 = *((&v19 as &char + 48) as &i64);
    v19 = uu_uniq::uu_app(v28, v29);
    v12 = v16;
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v19, &v12, v30);
    match v7 {
        Err(_) => {
            v31 = core::ops::function::FnOnce::call_once(v10);
            return v31;
        },
        Ok(_) => {
            *(&v9.field_0 as &struct56) = struct56 {
                field_0: v32
                field_8: v33
                field_16: v8
                field_24: *((&v7 as &char + 24) as &i128)
                field_40: *((&v7 as &char + 40) as &i128)
            };
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN7uu_uniq9ARG_FILES17hff55a0f11a77f04eE, g_530ee0);
            v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17hff55a0f11a77f04eE, g_530ee0, &v19);
            v34 = v18;
            if !v19 {
                v19 = core::tuple::<impl core::default::Default for (U,T)>::default();
            } else {
                v19.56 = (stack_base)[0x300] as i64;
                v35 = *((&v18 as &char + 8) as &i128);
                v36 = *((&v18 as &char + 24) as &i128);
                v24 = *((&v18 as &char + 40) as &i128);
                v22 = v36;
                v20 = v35;
                v19 = v34;
                v7 = uu_uniq::uumain::uumain::{{closure}}(&v19, v29);
                v19 = v7;
            }
            v15 = v21;
            v14 = v22;
            v19 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h8f3a13fd37642328E, g_5317d0, &v9);
            if !(v19 || (*(&v11 as &struct24) = v19.field_8, v6 = v19.field_16, v19 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17h7a412dccd1527db1E, g_5317e0, &v9), v19)) {
                v13 = v19.field_8;
                v5 = v19.field_16;
                v1 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options8REPEATED17hd7825478a50902dfE, g_5317c0) as i8 {
                    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN7uu_uniq7options12ALL_REPEATED17h2a907e9f7ad01b7bE, g_531780) as i8;
                }
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options6UNIQUE17hbb8a134f66ad0702E, g_5317f0) as i8;
                v0 = 1;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN7uu_uniq7options12ALL_REPEATED17h2a907e9f7ad01b7bE, g_531780) as i8 {
                    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN7uu_uniq7options5GROUP17haca4b905d0e1995bE, g_531810) as i8;
                }
                v3 = uu_uniq::get_delimiter(&v9) as i8;
                v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options5COUNT17hfd1c293b86b67949E, g_5317a0) as i8;
                if !v11 {
                    v20 = v20;
                } else {
                    v20 = v6;
                }
                v6 = v20;
                if v13 {
                    v26 = 1;
                }
                if v13 {
                    v39 = v5;
                }
                v5 = v39;
                v7 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h4e3f0635d6525992E, g_531790, &v9);
                if v7 {
                    v31 = *((&v7 as &char + 8) as &i64);
                } else {
                    v11 = *((&v7 as &char + 8) as &i128);
                    v19.field_64 = vvar_397{stack -1052};
                    v19.49 = vvar_504{stack -1049};
                    v19.50 = vvar_399{stack -1053};
                    v19.54 = vvar_510{stack -1050};
                    v19.51 = vvar_512{stack -1051};
                    v19 = 1;
                    v19.field_8 = vvar_513{stack -1040};
                    v19.field_16 = vvar_55{reg 56};
                    v22 = v5;
                    v23 = v11;
                    v19.52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -976, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE) as i32 as i8;
                    v19.53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -976, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE) as i8;
                    if (v19.51 & v19.50) {
                        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v7 = v12;
                        v31 = alloc::boxed::Box<T>::new(&v7);
                    } else {
                        v7 = uu_uniq::open_input_file(v19, v31);
                        v31 = *((&v7 as &char + 8) as &i64);
                        if !v7 {
                            v7 = uu_uniq::open_output_file(v15, v14);
                            v31 = *((&v7 as &char + 8) as &i64);
                            if v7 {
                                return v31;
                            }
                            v31 = uu_uniq::Uniq::print_uniq(&v19, v31, v7.field_16, v31, v7.field_16);
                        }
                    }
                }
            }
            return v31;
        },
    }
}
