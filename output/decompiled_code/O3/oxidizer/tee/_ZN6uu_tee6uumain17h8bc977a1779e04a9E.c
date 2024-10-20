fn uu_tee::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x3c9]
    let v1: i64;  // [sp-0x3c8]
    let v2: i64;  // [sp-0x3c0]
    let v3: i64;  // [sp-0x3b8]
    let v4: i64;  // [sp-0x3a8], Other Possible Types: struct24
    let v5: i64;  // [sp-0x3a0]
    let v6: i64;  // [sp-0x390]
    let v7: i64;  // [sp-0x388]
    let v8: i128;  // [sp-0x380]
    let v9: i128;  // [sp-0x370]
    let v10: i64;  // [sp-0x360]
    let v11: i128;  // [sp-0x358], Other Possible Types: struct16, struct64
    let v12: i64;  // [sp-0x350]
    let v13: i64;  // [bp-0x348]
    let v14: i8;  // [bp-0x338]
    let v15: i8;  // [bp-0x328]
    let v16: String;  // [sp-0x310], Other Possible Types: i192
    let v17: i64;  // [sp-0x2f8], Other Possible Types: Arguments, struct712
    let v18: i64;  // [sp-0x2f0]
    let v19: i128;  // [sp-0x2e8]
    let v20: i64;  // [bp-0x2e0]
    let v21: i64;  // [sp-0x2d8]
    let v22: i64;  // [bp-0x2c8]
    let v23: i64;  // [sp-0x2b8]
    let v25: i64;  // r15
    let v26: i64;  // r15
    let v27: i64;  // r12
    let v28: i64;  // rdx
    let v30: i128;  // xmm0
    let v31: i128;  // xmm1
    let v32: i128;  // xmm2
    let v33: i64;  // r13
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v37: i64;  // rax
    let v38: i64;  // r15
    let v39: i64;  // rcx
    let v40: i64;  // rcx
    let v41: i64;  // r12
    let v42: i64;  // r12
    let v43: i32;  // eax
    let v44: i64;  // rsi
    let v45: i64;  // rdi
    let v46: i64;  // r15
    let v47: i64;  // rax

    v17 = uu_tee::uu_app();
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    if v6 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        if !v25 {
            vvar_877{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v43;
        }
LABEL_43a53c:
        v1 = v25;
        v2 = v42;
        v11 = &v1;
        v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v17 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: &[&Argument] {
                ptr: &v11
                len: v0
            }
            fmt: None
        };
        v20 = 1;
        v16 = alloc::fmt::format::format_inner(&v17);
        v11 = v16;
        v44 = *((&v16 as &char + 16) as &i64);
        v13 = *((&v16 as &char + 16) as &i64);
        v45 = v12;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, *((&v16 as &char + 16) as &i64), 1, 0) as i8 {
            v6 = uucore::util_name();
            v7 = v28;
            v4 = &v6;
            v5 = <&T as core::fmt::Display>::fmt;
            v17 = Arguments {
                pieces: [&g_4e5190, ": "]
                args: &[&Argument] {
                    ptr: &v4
                    len: v0
                }
                fmt: None
            };
            v20 = 1;
            std::io::stdio::_eprint(&v17);
            v6 = &v11;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v17 = Arguments {
                pieces: [&g_4e51b0, "\n"]
                args: &[&Argument] {
                    ptr: &v6
                    len: v0
                }
                fmt: None
            };
            v20 = 1;
            std::io::stdio::_eprint(&v17);
        }
        if *((v2 + 104) as &i64)() {
            v6 = uucore::execution_phrase();
            v7 = v28;
            v4 = &v6;
            v5 = <&T as core::fmt::Display>::fmt;
            v17 = Arguments {
                pieces: ["Try '", " --help' for more information.\n"]
                args: &[&Argument] {
                    ptr: &v4
                    len: v0
                }
                fmt: None
            };
            v19 = &v4;
            v20 = 1;
            std::io::stdio::_eprint(&v17);
        }
        v43 = *((v2 + 96) as &i64)();
        v46 = v2;
        if *(v46 as &i64) {
            v47();
        }
        if *((v46 + 8) as &i64) {
            return v43;
        }
        return v43;
    }
    v10 = v15;
    v9 = v14;
    v8 = v13;
    v6 = v11;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, &g_410df7, 6) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, &g_410dfd, 17);
    v26 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v6, &g_410eb4, 4);
    if !v26 {
        v17 = 0;
    } else {
        v27 = 15398537441398644645;
        v4 = 9479156756246622757;
        v5 = 15398537441398644645;
        v17 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v26, 9479156756246622757);
        v18 = v28;
        if !<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v4, &v17) as i8 {
            v18 = 0;
            v19 = v17;
            v20 = v28;
            v21 = 9479156756246622757;
            v17 = 1;
        } else {
            v18 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}};
            v19 = *((v26 + 56) as &i64);
            v20 = v19 + *((v26 + 64) as &i64) * 24;
            v21 = 0;
            v22 = 0;
            v23 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v26);
            v17 = 0;
        }
    }
    v11 = clap_builder::parser::error::MatchesError::unwrap(&g_410eb4, 4, &v17);
    if !v11 {
        v1 = 0;
        v2 = 8;
        v3 = 0;
    } else {
        v30 = v11;
        v31 = *((&v11 as &char + 16) as &i128);
        v32 = *((&v11 as &char + 32) as &i128);
        v22 = *((&v11 as &char + 48) as &i128);
        v21 = v32;
        v19 = v31;
        v17 = v30;
        v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v17);
        v1 = v4;
        v3 = *((&v4 as &char + 16) as &i64);
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v6, &g_410ec8, 18) as i8 {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v6, &g_410eda, 12) as i8 {
LABEL_43abd9:
            v17 = v1;
            v19 = v3;
            if !uu_tee::tee(&v17) {
                v25 = 0;
            } else {
                v25 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                v41 = v28;
            }
            if !v25 {
                v43 = uucore::mods::error::get_exit_code() as i32;
                return v43;
            }
            goto LABEL_43a53c;
        }
        v33 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v6, &g_410eda, 12);
        if !v33 {
LABEL_43aaef:
            v18 = 0;
            goto LABEL_43aafb;
        } else {
            v27 = 9479156756246622757;
            v11 = 9479156756246622757;
            v12 = 15398537441398644645;
            v17 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v33, 9479156756246622757);
            v18 = v28;
            if !<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v11, &v17) as i8 {
                v17 = 0;
                v18 = v17;
                v19 = v28;
                v20 = 9479156756246622757;
                v21 = 15398537441398644645;
                goto LABEL_43ab35;
            }
            v34 = clap_builder::parser::matches::matched_arg::MatchedArg::first(v33);
            if !v34 {
                goto LABEL_43aaef;
            }
            v36 = *(v34 as &i64) + (*((*((v34 + 8) as &i64) + 16) as &i64) - 1 & -0x10) + 16;
            if !(*((v35 + 24) as &i64)() == 9479156756246622757) || !(v28 == 15398537441398644645) {
                core::option::expect_failed(); /* do not return */
            }
            v18 = v36;
LABEL_43aafb:
            v17 = 2;
LABEL_43ab35:
            v37 = clap_builder::parser::error::MatchesError::unwrap(&g_410eda, 12, &v17);
            if v37 {
                v38 = *((v37 + 8) as &i64);
                v27 = *((v37 + 16) as &i64);
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v27, &g_410e14, 4) as i8 {
                    goto LABEL_43abd9;
                } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v27, &g_410ee6, 11) as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v27, &g_410ec4, 4) as i8 {
                    v40 = v39 | -0x100 | 3;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v27, &g_410ef1, 11) as i8 {
                        core::panicking::panic(); /* do not return */
                    }
                }
            }
        }
    }
    goto LABEL_43abd9;
}
