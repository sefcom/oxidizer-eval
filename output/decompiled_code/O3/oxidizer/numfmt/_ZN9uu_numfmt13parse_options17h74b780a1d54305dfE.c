fn uu_numfmt::parse_options(a0: &struct196, a1: &struct56) -> u64 {
    let v0: i8;  // [sp-0x202]
    let v1: i8;  // [sp-0x201]
    let v2: i192;  // [bp-0x1f8], Other Possible Types: Option<struct32>
    let v3: i128;  // [bp-0x1f0]
    let v4: i64;  // [sp-0x1e8]
    let v5: i128;  // [sp-0x1d8], Other Possible Types: Result<struct40, struct16>, struct24, Option<struct24>, struct88, struct48
    let v6: i64;  // [sp-0x1d0]
    let v7: i128;  // [sp-0x1c8]
    let v8: i128;  // [sp-0x1b8]
    let v9: i128;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i16;  // [bp-0x198]
    let v12: i64;  // [sp-0x188]
    let v13: i128;  // [sp-0x180]
    let v14: i64;  // [sp-0x170]
    let v15: i128;  // [sp-0x168]
    let v16: i64;  // [sp-0x158]
    let v17: i128;  // [sp-0x150]
    let v18: i64;  // [sp-0x140]
    let v19: i64;  // [sp-0x138], Other Possible Types: Result<struct24, struct9>
    let v20: i192;  // [bp-0x130]
    let v21: i64;  // [sp-0x128]
    let v22: i64;  // [sp-0x120]
    let v23: i128;  // [sp-0x118]
    let v24: i64;  // [sp-0x110]
    let v25: i128;  // [sp-0x108]
    let v26: i64;  // [sp-0xf8]
    let v27: i64;  // [sp-0xf0]
    let v28: i16;  // [bp-0xe8]
    let v29: i128;  // [sp-0xd8], Other Possible Types: struct24
    let v30: i64;  // [sp-0xc8]
    let v31: i128;  // [sp-0xb8]
    let v32: i64;  // [sp-0xa8]
    let v33: i64;  // [sp-0x98]
    let v34: i64;  // [sp-0x90]
    let v35: i128;  // [sp-0x88]
    let v36: i64;  // [sp-0x78]
    let v37: i128;  // [sp-0x68]
    let v38: i128;  // [sp-0x58]
    let v39: i8;  // [bp-0x40]
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i8;  // r13b
    let v44: i64;  // rcx
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v48: i64;  // rcx
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v52: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v60: i64;  // rax
    let v61: i64;  // r15
    let v63: i64;  // rsi
    let v64: i64;  // rdx
    let v65: i64;  // rax
    let v66: Result<struct8, struct1>;  // 4098
    let v68: i64;  // rax
    let v69: i64;  // rcx
    let v70: i128;  // xmm1
    let v72: i64;  // 4098
    let v73: i64;  // rax
    let v74: i64;  // r15
    let v75: i64;  // r12
    let v76: i64;  // r13
    let v77: i64;  // rax
    let v78: i64;  // rax
    let v80: i128;  // xmm1
    let v81: i128;  // xmm2

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v41 = clap_builder::parser::error::MatchesError::unwrap("from", &v5);
    if !v41 {
        core::option::unwrap_failed(); /* do not return */
    }
    v19 = uu_numfmt::parse_unit(*((v41 + 8) as &i64), *((v41 + 16) as &i64));
    v42 = v19;
    v43 = *((&v19 as &char + 8) as &i8);
    if v42 != 0x8000000000000000 {
        v44 = *((&v19 as &char + 9) as &i64);
        return struct33 {
            field_0: 2
            field_8: v42
            field_16: v43
            field_17: v44
            field_24: <UNKNOWN>
        };
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to");
    v45 = clap_builder::parser::error::MatchesError::unwrap("to", &v5);
    if !v45 {
        core::option::unwrap_failed(); /* do not return */
    }
    v19 = uu_numfmt::parse_unit(*((v45 + 8) as &i64), *((v45 + 16) as &i64));
    v46 = v19;
    if v46 != 0x8000000000000000 {
        v48 = *((&v19 as &char + 9) as &i64);
        return struct33 {
            field_0: 2
            field_8: v46
            field_16: v0
            field_17: v48
            field_24: <UNKNOWN>
        };
    }
    v0 = *((&v19 as &char + 8) as &i8);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from-unit");
    v49 = clap_builder::parser::error::MatchesError::unwrap("from-unit", &v5);
    if !v49 {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = uu_numfmt::parse_unit_size(*((v49 + 8) as &i64), *((v49 + 16) as &i64));
    v50 = v5;
    if v50 == 0x8000000000000000 {
        v38 = *((&v5 as &char + 8) as &i128);
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to-unit");
        v52 = clap_builder::parser::error::MatchesError::unwrap("to-unit", &v5);
        if !v52 {
            core::option::unwrap_failed(); /* do not return */
        }
        v5 = uu_numfmt::parse_unit_size(*((v52 + 8) as &i64), *((v52 + 16) as &i64));
        v50 = v5;
        if v50 == 0x8000000000000000 {
            v37 = *((&v5 as &char + 8) as &i128);
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "padding");
            v54 = clap_builder::parser::error::MatchesError::unwrap("padding", &v5);
            if v54 {
                v5 = core::num::<impl core::str::traits::FromStr for isize>::from_str(*((v54 + 8) as &i64), *((v54 + 16) as &i64));
                if v5 || (v56 = v6, !v56) {
                    v5 = uu_numfmt::parse_options::{{closure}}(*((v54 + 8) as &i64), *((v54 + 16) as &i64));
                    if v5 != 0x8000000000000000 {
                        return struct32 {
                            field_0: 2
                            field_8: v50
                            field_16: v38
                        };
                    }
                    v55 = v6;
                }
            }
            v34 = 0;
            if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "header") as i8 == 2 {
                v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "header");
                v58 = clap_builder::parser::error::MatchesError::unwrap("header", &v5);
                if !v58 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v58 + 8) as &i64), *((v58 + 16) as &i64));
                if v5 || (v59 = v6, !v59) {
                    v5 = uu_numfmt::parse_options::{{closure}}(*((v58 + 8) as &i64), *((v58 + 16) as &i64));
                    v50 = v5;
                    if v50 != 0x8000000000000000 {
                        return struct32 {
                            field_0: 2
                            field_8: v50
                            field_16: v38
                        };
                    }
                    v57 = v6;
                }
            }
            v33 = 0;
            v1 = v43;
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "field");
            v60 = clap_builder::parser::error::MatchesError::unwrap("field", &v5);
            v61 = core::option::unwrap(v60);
            v5 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v61, v10);
            v9 = 0;
            v10 = *((v60 + 16) as &i64);
            v11 = 1;
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5, v63, v64) as i32) {
                v65 = alloc::alloc::Global::alloc_impl(16);
                *(v65 as &i64) = 1;
                *((v65 + 8) as &i64) = -1;
                v29 = alloc::slice::hack::into_vec(v65, 1);
                v0 = v0;
            } else {
                v5 = uucore::features::ranges::Range::from_list(v61, v10);
                v66 = v5;
                v19 = *((&v5 as &char + 8) as &i128);
                v21 = *((&v5 as &char + 24) as &i64);
                if v66 {
                    return struct32 {
                        field_0: 2
                        field_8: v19
                        field_24: v21
                    };
                }
                v30 = v21;
                v29 = v19;
                v0 = v0;
            }
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
            v68 = clap_builder::parser::error::MatchesError::unwrap("format", &v5);
            if !v68 {
                v28 = 0;
                v19 = 0;
                v21 = 0;
                v23 = 0;
                v24 = 1;
                v25 = 0;
                v26 = 1;
                v27 = 0;
                goto LABEL_4c0a05;
            } else {
                v5 = <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(*((v68 + 8) as &i64), *((v68 + 16) as &i64));
                v2 = *((&v5 as &char + 8) as &i128);
                v4 = *((&v5 as &char + 24) as &i64);
                if v19 == 2 {
                    *((a0 + 24) as &i64) = v4;
                    *((a0 + 8) as &i128) = v2;
                    *(a0 as &i64) = 2;
                } else {
                    v69 = v12;
                    v28 = v69;
                    v70 = *((&v5 as &char + 48) as &i128);
                    v26 = *((&v5 as &char + 64) as &i128);
                    v25 = v70;
                    v23 = v8;
                    v20 = v2;
                    v22 = v4;
                    v19 = v5;
                    if !(v0 != 5) || !(v69) {
LABEL_4c0a05:
                        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
                        v6 = 0x8000000000000000;
                        v7 = v39;
                        v5 = 0;
                        v2 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap(&g_422557, 9, &v5), &v5);
                        v72 = v2;
                        v31 = *((&v2 as &char + 8) as &i128);
                        v32 = *((&v2 as &char + 24) as &i64);
                        if v72 {
                            *((a0 + 24) as &i64) = v32;
                        } else {
                            v36 = v32;
                            v35 = v31;
                            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "round");
                            v73 = clap_builder::parser::error::MatchesError::unwrap("round", &v5);
                            v74 = core::option::unwrap(v73);
                            v75 = *((v73 + 16) as &i64);
                            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v74, v75, "up") as i8 {
                                v76 = 0;
                            } else {
                                v76 = &v5 | -0x100 | 1;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v74, v75, "down") as i8 {
                                    v76 = v76 | -0x100 | 2;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v74, v75, "from-zero") as i8 {
                                        v76 = v76 | -0x100 | 3;
                                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v74, v75, "towards-zero") as i8 {
                                            v76 = v76 | -0x100 | 4;
                                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v74, v75, "nearest") as i8 {
                                                panic!("internal error: entered unreachable code: Should be restricted by clap");
                                            }
                                        }
                                    }
                                }
                            }
                            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
                            v77 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v5);
                            if !v77 {
                                v2 = 0x8000000000000000;
                                v3 = v39;
                                v4 = v4;
                            } else {
                                v5 = <alloc::string::String as core::clone::Clone>::clone(v77);
                                v2 = v5;
                                v4 = v4;
                            }
                            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "invalid");
                            v78 = clap_builder::parser::error::MatchesError::unwrap("invalid", &v5);
                            if v78 {
                                v5 = <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(*((v78 + 8) as &i64), *((v78 + 16) as &i64));
                                v14 = v30;
                                v13 = v29;
                                v15 = v35;
                                v16 = v36;
                                v17 = v2;
                                v18 = v4;
                                v80 = *((&v20 as &char + 8) as &i128);
                                v81 = v23;
                                v5 = v19;
                                v7 = v80;
                                v8 = v81;
                                v9 = v25;
                                v11 = v26;
                                v12 = v28;
                                memcpy(a0, &v5, 160);
                                *((a0 + 160) as &i64) = v37 CONCAT v38;
                                *((a0 + 176) as &i8) = v1;
                                *((a0 + 177) as &i8) = v0;
                                *((a0 + 184) as &i64) = v34;
                                *((a0 + 192) as &i64) = v33;
                                *((a0 + 200) as &u8) = core::result::Result<T,E>::unwrap(&v5);
                                *((a0 + 201) as &i8) = v76;
                                return struct32 {
                                    field_0: 2
                                    field_8: v19
                                    field_24: v21
                                };
                            }
                            core::option::unwrap_failed(); /* do not return */
                        }
                    } else {
                        v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("grouping cannot be combined with --to");
                        *((a0 + 24) as &i64) = v7;
                    }
                    *((a0 + 8) as &i192) = v5;
                    *(a0 as &i64) = 2;
                }
                return struct32 {
                    field_0: 2
                    field_8: v19
                    field_24: v21
                };
            }
        }
    }
    return struct32 {
        field_0: 2
        field_8: v50
        field_16: v38
    };
}
