fn uu_seq::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x588]
    let v1: i64;  // [sp-0x580]
    let v2: i64;  // [sp-0x578]
    let v3: i192;  // [sp-0x560], Other Possible Types: struct24
    let v4: i64;  // [sp-0x548], Other Possible Types: struct16, struct24
    let v5: i64;  // [sp-0x540]
    let v6: i64;  // [sp-0x538]
    let v7: i8;  // [bp-0x530]
    let v8: i128;  // [sp-0x520]
    let v9: i128;  // [sp-0x510]
    let v10: i64;  // [sp-0x4f8], Other Possible Types: struct24
    let v11: i64;  // [sp-0x4f0]
    let v12: i64;  // [bp-0x4e8]
    let v13: i128;  // [sp-0x4d8]
    let v14: i64;  // [sp-0x4c8]
    let v15: i64;  // [bp-0x4b8]
    let v16: i64;  // [sp-0x4b0]
    let v17: i64;  // [sp-0x4a8]
    let v18: i128;  // [sp-0x4a0]
    let v19: i64;  // [sp-0x490]
    let v20: i64;  // [sp-0x488]
    let v21: i64;  // [sp-0x480]
    let v22: i8;  // [sp-0x478]
    let v23: i456;  // [sp-0x468], Other Possible Types: struct57
    let v24: i128;  // [sp-0x458]
    let v25: i128;  // [sp-0x448]
    let v26: i64;  // [sp-0x438]
    let v27: i128;  // [sp-0x428], Other Possible Types: struct24
    let v28: i128;  // [sp-0x418]
    let v29: i456;  // [sp-0x408], Other Possible Types: struct57
    let v30: i128;  // [sp-0x3f8]
    let v31: i128;  // [sp-0x3e8]
    let v32: i64;  // [sp-0x3d8]
    let v33: i64;  // [sp-0x3d0], Other Possible Types: struct64
    let v34: i64;  // [sp-0x3c8]
    let v35: i64;  // [sp-0x390]
    let v36: i64;  // [sp-0x388]
    let v37: i64;  // [bp-0x358]
    let v38: i64;  // [sp-0x350]
    let v39: i128;  // [sp-0x348]
    let v40: i128;  // [sp-0x338]
    let v41: i128;  // [sp-0x328]
    let v42: i512;  // [sp-0x318], Other Possible Types: Enum, struct712
    let v43: i64;  // [sp-0x310]
    let v44: i64;  // [sp-0x308]
    let v45: i64;  // [sp-0x300]
    let v46: i64;  // [sp-0x2f8]
    let v47: i128;  // [sp-0x2f0]
    let v48: i128;  // [sp-0x2e0]
    let v49: i64;  // [sp-0x2d0]
    let v50: i128;  // [sp-0x2c8]
    let v51: i128;  // [sp-0x2b8]
    let v52: i64;  // [sp-0x2a8]
    let v53: i192;  // [sp-0x48], Other Possible Types: String
    let v55: i64;  // r14
    let v56: i128;  // xmm1
    let v57: i128;  // xmm2
    let v58: i128;  // xmm3
    let v59: i64;  // rax
    let v60: i128;  // xmm0
    let v61: i64;  // r15
    let v62: i64;  // r15
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // rax
    let v69: i8;  // bl
    let v70: i64;  // rax
    let v71: i64;  // rax
    let v72: i128;  // xmm0
    let v73: i8;  // bpl
    let v75: i64;  // rcx
    let v76: i128;  // xmm0
    let v77: i64;  // r14
    let v78: i64;  // r14
    let v79: i64;  // rax
    let v81: i128;  // xmm0
    let v83: i64;  // rcx
    let v85: i128;  // xmm0
    let v86: i128;  // xmm1
    let v87: i8;  // bpl
    let v91: i64;  // rax
    let v92: i64;  // rdx
    let v93: i64;  // rax
    let v94: i128;  // xmm0
    let v95: i64;  // r14
    let v96: i32;  // eax
    let v97: i64;  // rsi
    let v98: i64;  // rdi
    let v99: i64;  // rdx
    let v100: i64;  // r15
    let v101: i64;  // rax

    v42 = uu_seq::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v42, a0, a1);
    if v35 == 0x8000000000000000 {
        v55 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36);
        if !v55 {
            uucore::mods::error::get_exit_code();
            return v96;
        }
        goto LABEL_444c30;
    }
    v35 = v4;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v42, &v35, &g_4131e7, 7);
    v33 = clap_builder::parser::error::MatchesError::unwrap(&g_4131e7, 7, &v42);
    if !v33 {
        v42 = 9223372036854775809;
        v55 = __rust_alloc(32, 8);
        v60 = v42;
        *((v55 + 16) as &i128) = *((&v42 as &char + 16) as &i128);
        *(v55 as &i128) = v60;
        v61 = &g_504630;
LABEL_445639:
        if !v55 {
            uucore::mods::error::get_exit_code();
            return v96;
        }
    } else {
        v56 = *((&v33 as &char + 16) as &i128);
        v57 = *((&v33 as &char + 32) as &i128);
        v58 = *((&v33 as &char + 48) as &i128);
        v37 = v33;
        v39 = v56;
        v40 = v57;
        v41 = v58;
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v37);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, &v35, &g_4131ee, 9);
        v59 = clap_builder::parser::error::MatchesError::unwrap(&g_4131ee, 9, &v42);
        if v59 {
            v62 = *((v59 + 8) as &i64);
            v59 = *((v59 + 16) as &i64);
        } else {
            v62 = 0;
        }
        if !v62 {
            v59 = 1;
        }
        if !v62 {
            v62 = &g_4131c2;
        }
        v42 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v59, 0);
        memcpy(v11, v62, v59);
        v10 = v43;
        v11 = v44;
        v12 = v59;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, &v35, &g_4131f7, 10);
        v63 = clap_builder::parser::error::MatchesError::unwrap(&g_4131f7, 10, &v42);
        if v63 {
            v64 = *((v63 + 8) as &i64);
            v63 = *((v63 + 16) as &i64);
        } else {
            v64 = 0;
        }
        if !v64 {
            v63 = 1;
        }
        if !v64 {
            v64 = &g_4131c2;
        }
        v42 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v63, 0);
        memcpy(v5, v64, v63);
        v4 = v43;
        v5 = v44;
        v6 = v63;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v42, &v35, &g_41320c, 6);
        v66 = clap_builder::parser::error::MatchesError::unwrap(&g_41320c, 6, &v42);
        if v66 {
            v67 = *((v66 + 8) as &i64);
            v66 = *((v66 + 16) as &i64);
        } else {
            v67 = 0;
        }
        v17 = v12;
        v15 = v10;
        v18 = v4;
        v19 = v6;
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v35, &g_413201, 11) as i32;
        v20 = v67;
        v21 = v66;
        if *((&v3 as &char + 16) as &i64) <= 1 {
            v29 = uu_seq::number::PreciseNumber::one();
            if *((&v3 as &char + 16) as &i64) <= 2 {
                goto LABEL_4453f5;
            }
LABEL_4452ee:
            v70 = *((*((&v3 as &char + 8) as &i64) + 8) as &i64);
            v42 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v70 + 8) as &i64), *((v70 + 16) as &i64));
            if v42 != 9223372036854775812 {
                v26 = *((&v42 as &char + 48) as &i64);
                v25 = *((&v42 as &char + 32) as &i128);
                v24 = *((&v42 as &char + 16) as &i128);
                v23 = v42;
                goto LABEL_445445;
            } else {
                if *((&v3 as &char + 16) as &i64) <= 1 {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                v73 = *((&v42 as &char + 8) as &i8);
                v10 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v3 as &char + 8) as &i64) + 8) as &i64));
                v6 = *((&v10 as &char + 16) as &i64);
                v4 = v10;
                v7 = v73;
                v71 = __rust_alloc(32, 8);
                v76 = v4;
                *((v71 + 16) as &i128) = (&v4)[1];
                *(v71 as &i128) = v76;
                v61 = &g_504630;
                goto LABEL_4455f0;
            }
        }
        v68 = *(*((&v3 as &char + 8) as &i64) as &i64);
        v42 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v68 + 8) as &i64), *((v68 + 16) as &i64));
        if v42 == 9223372036854775812 {
            if !*((&v3 as &char + 16) as &i64) {
                core::panicking::panic_bounds_check(); /* do not return */
            }
            v69 = *((&v42 as &char + 8) as &i8);
            v10 = <alloc::string::String as core::clone::Clone>::clone(*(*((&v3 as &char + 8) as &i64) as &i64));
            v6 = *((&v10 as &char + 16) as &i64);
            v4 = v10;
            v7 = v69;
            v71 = __rust_alloc(32, 8);
            v72 = v4;
            *((v71 + 16) as &i128) = (&v4)[1];
            *(v71 as &i128) = v72;
            v61 = &g_504630;
LABEL_445618:
            goto LABEL_445639;
        }
        v32 = *((&v42 as &char + 48) as &i64);
        v31 = *((&v42 as &char + 32) as &i128);
        v30 = *((&v42 as &char + 16) as &i128);
        v29 = v42;
        if !(*((&v3 as &char + 16) as &i64) <= 2) {
            goto LABEL_4452ee;
        }
LABEL_4453f5:
        v23 = uu_seq::number::PreciseNumber::one();
LABEL_445445:
        switch (v75) {
        case 0:
            if *((&v24 as &char + 8) as &i8) == 1 {
                goto LABEL_445472;
            }
            goto LABEL_445500;
        case 3:
LABEL_445472:
            if *((&v3 as &char + 16) as &i64) < 2 {
                break;
            } else {
                v4 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v3 as &char + 8) as &i64) + 8) as &i64));
                v45 = v6;
                v43 = v4;
                v42 = 0x8000000000000000;
                v85 = v42;
                v86 = *((&v43 as &char + 8) as &i128);
                goto LABEL_4455b8;
            }
        default:
LABEL_445500:
            v77 = *((&v3 as &char + 16) as &i64);
            v78 = v77 - 1;
            if v77 < 1 {
                break;
            }
            v79 = *((*((&v3 as &char + 8) as &i64) + v78 * 8) as &i64);
            v42 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((v79 + 8) as &i64), *((v79 + 16) as &i64));
            if v42 != 9223372036854775812 {
                v14 = *((&v42 as &char + 48) as &i64);
                v81 = v42;
                v13 = *((&v42 as &char + 32) as &i128);
                v12 = *((&v42 as &char + 16) as &i128);
                v10 = v81;
                v83 = v32;
                if !v20 {
                    v93 = 0x8000000000000000;
                    goto LABEL_4457d8;
                }
                v92 = v21;
                v42 = uucore::features::format::Format<F>::parse(v20, v21);
                v93 = v42;
                v27 = *((&v42 as &char + 8) as &i128);
                v28 = *((&v42 as &char + 24) as &i128);
                if v93 != 0x8000000000000000 {
                    v9 = v48;
                    v8 = v47;
                    v5 = v27;
                    v7 = v28;
LABEL_4457d8:
                    v4 = v93;
                    v46 = *((&v29 as &char + 32) as &i64);
                    v44 = v30;
                    v42 = v29;
                    v47 = v23;
                    v48 = v24;
                    v49 = *((&v23 as &char + 32) as &i64);
                    v50 = v10;
                    v51 = v12;
                    v52 = v13;
                    v2 = &v4;
                    v1 = v91;
                    v0 = v22;
                    v95 = uu_seq::print_seq();
                    if !v95 {
LABEL_4458cc:
                        v55 = 0;
                    } else if std::io::error::Error::kind(v95) as i8 != 11 {
                        v55 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v95);
                    } else {
                        goto LABEL_4458cc;
                    }
                    v61 = &g_5046f0;
                    if !v55 {
                        v96 = uucore::mods::error::get_exit_code() as i32;
                        return v96;
                    }
                } else {
                    v44 = v28;
                    v42 = v27;
                    v71 = alloc::alloc::exchange_malloc();
                    v94 = v42;
                    *((v71 + 16) as &i128) = v44;
                    *(v71 as &i128) = v94;
                    v61 = &g_504798;
                    if v23 > 9223372036854775811 {
LABEL_4455d6:
                    }
                    goto LABEL_4455f0;
                }
            } else {
                if v78 >= *((&v3 as &char + 16) as &i64) {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                v87 = *((&v42 as &char + 8) as &i8);
                v27 = <alloc::string::String as core::clone::Clone>::clone(*((*((&v3 as &char + 8) as &i64) + v78 * 8) as &i64));
                v6 = *((&v27 as &char + 16) as &i64);
                v4 = v27;
                v7 = v87;
LABEL_4455b8:
                *((v71 + 16) as &i128) = v86;
                *(v71 as &i128) = v85;
                v61 = &g_504630;
                if !(v23 <= 9223372036854775811) {
                    goto LABEL_4455d6;
                }
LABEL_4455f0:
                goto LABEL_445618;
            }
        }
    }
LABEL_444c30:
    v33 = v55;
    v34 = v61;
    v4 = &v33;
    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v42 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v43 = 1;
    v46 = 0;
    v44 = &v4;
    v45 = 1;
    v53 = alloc::fmt::format::format_inner(&v42);
    v4 = v53;
    v97 = *((&v53 as &char + 16) as &i64);
    v6 = *((&v53 as &char + 16) as &i64);
    v98 = v5;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, *((&v53 as &char + 16) as &i64), 1, 0) as i8 {
        v15 = uucore::util_name();
        v16 = v99;
        v37 = &v15;
        v38 = <&T as core::fmt::Display>::fmt;
        v42 = &g_504580;
        v43 = 2;
        v46 = 0;
        v44 = &v37;
        v45 = 1;
        std::io::stdio::_eprint(&v42);
        v15 = &v4;
        v16 = <alloc::string::String as core::fmt::Display>::fmt;
        v42 = &g_5045a0;
        v43 = 2;
        v46 = 0;
        v44 = &v15;
        v45 = 1;
        std::io::stdio::_eprint(&v42);
    }
    if *((v34 + 104) as &i64)() {
        v15 = uucore::execution_phrase();
        v16 = v99;
        v37 = &v15;
        v38 = <&T as core::fmt::Display>::fmt;
        v42 = "Try '";
        v43 = 2;
        v46 = 0;
        v44 = &v37;
        v45 = 1;
        std::io::stdio::_eprint(&v42);
    }
    v96 = *((v34 + 96) as &i64)();
    v100 = v34;
    if *(v100 as &i64) {
        v101();
    }
    if *((v100 + 8) as &i64) {
        return v96;
    }
    return v96;
}
