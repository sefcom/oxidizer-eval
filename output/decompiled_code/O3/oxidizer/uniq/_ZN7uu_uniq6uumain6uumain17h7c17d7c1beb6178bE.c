fn uu_uniq::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x41d]
    let v1: i8;  // [sp-0x41c]
    let v2: i8;  // [sp-0x41b]
    let v3: i8;  // [sp-0x41a]
    let v4: i8;  // [sp-0x419]
    let v5: i64;  // [sp-0x418]
    let v6: i64;  // [sp-0x410]
    let v7: i128;  // [bp-0x408], Other Possible Types: struct24, struct28, struct32
    let v11: struct56;  // [sp-0x3d0], Other Possible Types: i64
    let v12: i64;  // [sp-0x3c8]
    let v13: i64;  // [bp-0x398]
    let v14: struct24;  // [bp-0x388]
    let v16: i64;  // [sp-0x370]
    let v17: i64;  // [sp-0x368]
    let v18: i64;  // [sp-0x360]
    let v19: i128;  // [sp-0x358]
    let v20: i64;  // [sp-0x348]
    let v21: struct64;  // [sp-0x338], Other Possible Types: i512
    let v22: i64;  // [sp-0x2f8], Other Possible Types: struct24, struct56, struct712, struct16
    let v23: i64;  // [bp-0x2f0]
    let v24: i64;  // [bp-0x2e8]
    let v25: i64;  // [bp-0x2e0]
    let v26: i128;  // [bp-0x2d8]
    let v27: i128;  // [bp-0x2d0]
    let v29: i64;  // rbp
    let v30: i64;  // r15
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v33: i64;  // rcx
    let v34: i64;  // rax
    let v37: i64;  // rax
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v40: i128;  // xmm1
    let v43: i64;  // r15

    v22 = uu_uniq::handle_obsolete(a0, a1);
    v20 = *((&v22 as &char + 32) as &i64);
    v19 = *((&v22 as &char + 16) as &i128);
    v29 = *((&v22 as &char + 40) as &i64);
    v30 = *((&v22 as &char + 48) as &i64);
    v22 = uu_uniq::uu_app(v31, v32);
    *(&v14.field_0 as &struct24) = struct24 {
        field_0: v19
        field_16: v20
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v22, &v14, v33);
    if v11 == 0x8000000000000000 {
        v34 = core::ops::function::FnOnce::call_once(v12);
        return v34;
    }
    *(&v11.field_0 as &struct56) = struct56 {
        field_0: v35
        field_8: v36
        field_16: v8
        field_24: v9
        field_40: v10
    };
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, _ZN7uu_uniq9ARG_FILES17hff55a0f11a77f04eE, g_530ee0);
    v21 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17hff55a0f11a77f04eE, g_530ee0, &v22);
    v37 = v21;
    if !v22 {
        v22 = core::tuple::<impl core::default::Default for (U,T)>::default();
    } else {
        v22.56 = (stack_base)[0x300] as i64;
        v38 = *((&v21 as &char + 8) as &i128);
        v39 = *((&v21 as &char + 24) as &i128);
        v27 = *((&v21 as &char + 40) as &i128);
        v25 = v39;
        v23 = v38;
        v22 = v37;
        v7 = uu_uniq::uumain::uumain::{{closure}}(&v22, v32);
        v40 = *((&v7 as &char + 16) as &i128);
        v22 = v7;
        v24 = v40;
    }
    v18 = v24;
    v17 = v25;
    v22 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h8f3a13fd37642328E, g_5317d0, &v11);
    if !(v22 || (*(&v13 as &struct24) = v22.field_8, v6 = v22.field_16, v22 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17h7a412dccd1527db1E, g_5317e0, &v11), v22)) {
        v16 = v22.field_8;
        v5 = v22.field_16;
        v1 = 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN7uu_uniq7options8REPEATED17hd7825478a50902dfE, g_5317c0) as i8 {
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, _ZN7uu_uniq7options12ALL_REPEATED17h2a907e9f7ad01b7bE, g_531780) as i8;
        }
        v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN7uu_uniq7options6UNIQUE17hbb8a134f66ad0702E, g_5317f0) as i8;
        v0 = 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, _ZN7uu_uniq7options12ALL_REPEATED17h2a907e9f7ad01b7bE, g_531780) as i8 {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, _ZN7uu_uniq7options5GROUP17haca4b905d0e1995bE, g_531810) as i8;
        }
        v3 = uu_uniq::get_delimiter(&v11) as i8;
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN7uu_uniq7options5COUNT17hfd1c293b86b67949E, g_5317a0) as i8;
        if !v13 {
            v23 = v23;
        } else {
            v23 = v6;
        }
        v6 = v23;
        if v16 {
            v29 = 1;
        }
        if v16 {
            v43 = v5;
        }
        v5 = v43;
        v7 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h4e3f0635d6525992E, g_531790, &v11);
        if v7 {
            v34 = *((&v7 as &char + 8) as &i64);
        } else {
            v13 = *((&v7 as &char + 8) as &i128);
            v22.field_64 = vvar_397{stack -1052};
            v22.49 = vvar_504{stack -1049};
            v22.50 = vvar_399{stack -1053};
            v22.54 = vvar_510{stack -1050};
            v22.51 = vvar_512{stack -1051};
            v22 = 1;
            v22.field_8 = vvar_513{stack -1040};
            v22.field_16 = vvar_55{reg 56};
            v25 = v5;
            v26 = v13;
            v22.52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -976, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE) as i32;
            v22.53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(stack_base + -976, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE, _ZN7uu_uniq7options11IGNORE_CASE17ha412fb3273f164ffE) as i8;
            if (v22.51 & v22.50) {
                v14 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v7 = struct28 {
                    field_0: v14
                    field_16: v15
                    field_24: 1
                };
                v34 = alloc::boxed::Box<T>::new(&v7);
            } else {
                v7 = uu_uniq::open_input_file(v22, v34);
                v34 = *((&v7 as &char + 8) as &i64);
                if !v7 {
                    v7 = uu_uniq::open_output_file(v18, v17);
                    v34 = *((&v7 as &char + 8) as &i64);
                    if v7 {
                        return v34;
                    }
                    v34 = uu_uniq::Uniq::print_uniq(&v22, v34, v7.field_16, v34, v7.field_16);
                }
            }
        }
    }
    return v34;
}
