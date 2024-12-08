fn uu_numfmt::parse_options(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x202]
    let v1: i8;  // [sp-0x201]
    let v2: i128;  // [bp-0x1f8], Other Possible Types: Option<struct32>
    let v3: i128;  // [bp-0x1f0]
    let v4: i64;  // [sp-0x1e8]
    let v5: i64;  // [sp-0x1d8], Other Possible Types: Result<struct40, struct16>, struct24, Option<struct24>, struct48, struct88
    let v6: i64;  // [sp-0x1d0]
    let v7: i128;  // [bp-0x1c8]
    let v8: i128;  // [sp-0x1b8]
    let v9: i128;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i16;  // [bp-0x198]
    let v12: i128;  // [sp-0x180]
    let v13: i64;  // [sp-0x170]
    let v14: i128;  // [sp-0x168]
    let v15: i64;  // [sp-0x158]
    let v16: i128;  // [sp-0x150]
    let v17: i64;  // [sp-0x140]
    let v18: i64;  // [sp-0x138], Other Possible Types: Result<struct24, struct9>
    let v19: i128;  // [bp-0x130]
    let v20: i64;  // [sp-0x128]
    let v21: i64;  // [sp-0x120]
    let v22: i64;  // [sp-0x118]
    let v23: i64;  // [sp-0x110]
    let v24: i128;  // [sp-0x108]
    let v25: i128;  // [sp-0xf8]
    let v26: i64;  // [sp-0xf0]
    let v27: i16;  // [bp-0xe8]
    let v28: struct24;  // [sp-0xd8], Other Possible Types: i128
    let v29: i64;  // [sp-0xc8]
    let v30: i128;  // [sp-0xb8]
    let v31: i64;  // [sp-0xa8]
    let v32: i64;  // [sp-0x98]
    let v33: i64;  // [sp-0x90]
    let v34: i128;  // [sp-0x88]
    let v35: i64;  // [sp-0x78]
    let v36: i128;  // [sp-0x68]
    let v37: i128;  // [sp-0x58]
    let v38: i8;  // [bp-0x40]
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i8;  // r13b
    let v43: i64;  // rcx
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v47: i64;  // rcx
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v51: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v60: i64;  // r15
    let v62: i64;  // rsi
    let v63: i64;  // rdx
    let v64: i64;  // rax
    let v65: Result<struct8, struct1>;  // 4098
    let v67: i64;  // rax
    let v68: i64;  // rcx
    let v69: i128;  // xmm1
    let v71: i64;  // 4098
    let v72: i64;  // rax
    let v73: i64;  // r15
    let v74: i64;  // r12
    let v75: i64;  // r13
    let v76: i64;  // rax
    let v77: i64;  // rax
    let v79: i128;  // xmm1
    let v80: i128;  // xmm2

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v40 = clap_builder::parser::error::MatchesError::unwrap("from", &v5);
    if !v40 {
        core::option::unwrap_failed(); /* do not return */
    }
    v18 = uu_numfmt::parse_unit(*((v40 + 8) as &i64), *((v40 + 16) as &i64));
    v41 = v18;
    v42 = *((&v18 as &char + 8) as &i8);
    if v41 != 0x8000000000000000 {
        v43 = *((&v18 as &char + 9) as &i64);
        return struct33 {
            field_0: 2
            field_8: v41
            field_16: v42
            field_17: v43
            field_24: <UNKNOWN>
        };
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to");
    v44 = clap_builder::parser::error::MatchesError::unwrap("to", &v5);
    if !v44 {
        core::option::unwrap_failed(); /* do not return */
    }
    v18 = uu_numfmt::parse_unit(*((v44 + 8) as &i64), *((v44 + 16) as &i64));
    v45 = v18;
    if v45 != 0x8000000000000000 {
        v47 = *((&v18 as &char + 9) as &i64);
        return struct33 {
            field_0: 2
            field_8: v45
            field_16: v0
            field_17: v47
            field_24: <UNKNOWN>
        };
    }
    v0 = *((&v18 as &char + 8) as &i8);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from-unit");
    v48 = clap_builder::parser::error::MatchesError::unwrap("from-unit", &v5);
    if !v48 {
        core::option::unwrap_failed(); /* do not return */
    }
    uu_numfmt::parse_unit_size(&v5, *((v48 + 8) as &i64), *((v48 + 16) as &i64));
    v49 = v5;
    if v49 == 0x8000000000000000 {
        v37 = *((&v5 as &char + 8) as &i128);
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "to-unit");
        v51 = clap_builder::parser::error::MatchesError::unwrap("to-unit", &v5);
        if !v51 {
            core::option::unwrap_failed(); /* do not return */
        }
        uu_numfmt::parse_unit_size(&v5, *((v51 + 8) as &i64), *((v51 + 16) as &i64));
        v49 = v5;
        if v49 == 0x8000000000000000 {
            v36 = *((&v5 as &char + 8) as &i128);
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "padding");
            v53 = clap_builder::parser::error::MatchesError::unwrap("padding", &v5);
            if v53 {
                v5 = core::num::<impl core::str::traits::FromStr for isize>::from_str(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
                if v5 || (v55 = v6, !v55) {
                    v5 = uu_numfmt::parse_options::{{closure}}(*((v53 + 8) as &i64), *((v53 + 16) as &i64));
                    if v5 != 0x8000000000000000 {
                        return struct32 {
                            field_0: 2
                            field_8: v49
                            field_16: v37
                        };
                    }
                    v54 = v6;
                }
            }
            v33 = 0;
            if clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "header") as i8 == 2 {
                v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "header");
                v57 = clap_builder::parser::error::MatchesError::unwrap("header", &v5);
                if !v57 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v57 + 8) as &i64), *((v57 + 16) as &i64));
                if v5 || (v58 = v6, !v58) {
                    v5 = uu_numfmt::parse_options::{{closure}}(*((v57 + 8) as &i64), *((v57 + 16) as &i64));
                    v49 = v5;
                    if v49 != 0x8000000000000000 {
                        return struct32 {
                            field_0: 2
                            field_8: v49
                            field_16: v37
                        };
                    }
                    v56 = v6;
                }
            }
            v32 = 0;
            v1 = v42;
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "field");
            v59 = clap_builder::parser::error::MatchesError::unwrap("field", &v5);
            v60 = core::option::unwrap(v59);
            v5 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v60, v10);
            v9 = 0;
            v10 = *((v59 + 16) as &i64);
            v11 = 1;
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5, v62, v63) as i32) {
                v64 = alloc::alloc::Global::alloc_impl(16);
                *(v64 as &i64) = 1;
                *((v64 + 8) as &i64) = -1;
                v28 = alloc::slice::hack::into_vec(v64, 1);
                v0 = v0;
            } else {
                v5 = uucore::features::ranges::Range::from_list(v60, v10);
                v65 = v5;
                v18 = *((&v5 as &char + 8) as &i128);
                v20 = *((&v5 as &char + 24) as &i64);
                if v65 {
                    return struct32 {
                        field_0: 2
                        field_8: v18
                        field_24: v20
                    };
                }
                v29 = v20;
                v28 = v18;
                v0 = v0;
            }
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
            v67 = clap_builder::parser::error::MatchesError::unwrap("format", &v5);
            if !v67 {
                v27 = 0;
                v18 = 0;
                v20 = 0;
                v22 = 0;
                v23 = 1;
                v24 = 0;
                v25 = 1;
                v26 = 0;
                goto LABEL_4c0e55;
            } else {
                v5 = <uu_numfmt::options::FormatOptions as core::str::traits::FromStr>::from_str(*((v67 + 8) as &i64), *((v67 + 16) as &i64));
                v2 = *((&v5 as &char + 8) as &i128);
                v4 = *((&v5 as &char + 24) as &i64);
                if v18 == 2 {
                    *((a0 + 24) as &i64) = v4;
                    *((a0 + 8) as &i128) = v2;
                    *(a0 as &i64) = 2;
                } else {
                    v68 = v5.field_80;
                    v27 = v68;
                    v69 = *((&v5 as &char + 48) as &i128);
                    v25 = *((&v5 as &char + 64) as &i128);
                    v24 = v69;
                    *(&v22 as &struct88) = v5.field_32;
                    v19 = v2;
                    v21 = v4;
                    v18 = v5;
                    if !(v0 != 5) || !(v68) {
LABEL_4c0e55:
                        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "delimiter");
                        v6 = 0x8000000000000000;
                        v7 = v38;
                        v5 = 0;
                        v2 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap(&g_4226b2, 9, &v5), &v5);
                        v71 = v2;
                        v30 = *((&v2 as &char + 8) as &i128);
                        v31 = *((&v2 as &char + 24) as &i64);
                        if v71 {
                            *((a0 + 24) as &i64) = v31;
                        } else {
                            v35 = v31;
                            v34 = v30;
                            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "round");
                            v72 = clap_builder::parser::error::MatchesError::unwrap("round", &v5);
                            v73 = core::option::unwrap(v72);
                            v74 = *((v72 + 16) as &i64);
                            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v73, v74, "up") as i8 {
                                v75 = 0;
                            } else {
                                v75 = &v5 | -0x100 | 1;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v73, v74, "down") as i8 {
                                    v75 = v75 | -0x100 | 2;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v73, v74, "from-zero") as i8 {
                                        v75 = v75 | -0x100 | 3;
                                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v73, v74, "towards-zero") as i8 {
                                            v75 = v75 | -0x100 | 4;
                                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v73, v74, "nearest") as i8 {
                                                panic!("internal error: entered unreachable code: Should be restricted by clap");
                                            }
                                        }
                                    }
                                }
                            }
                            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
                            v76 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v5);
                            if !v76 {
                                v2 = 0x8000000000000000;
                                v3 = v38;
                            } else {
                                v5 = <alloc::string::String as core::clone::Clone>::clone(v76);
                                v4 = v5.field_16;
                                v2 = v5;
                            }
                            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "invalid");
                            v77 = clap_builder::parser::error::MatchesError::unwrap("invalid", &v5);
                            if v77 {
                                v5 = <uu_numfmt::options::InvalidModes as core::str::traits::FromStr>::from_str(*((v77 + 8) as &i64), *((v77 + 16) as &i64));
                                v13 = v29;
                                v12 = v28;
                                v14 = v34;
                                v15 = v35;
                                v16 = v2;
                                v17 = v4;
                                v79 = *((&v18 as &char + 16) as &i128);
                                v80 = v22;
                                v5 = v18;
                                v7 = v79;
                                v8 = v80;
                                v9 = v24;
                                v11 = v25;
                                v5.field_80 = (stack_base)[232] as i64;
                                memcpy(a0, &v5, 160);
                                *((a0 + 160) as &i64) = v36 CONCAT v37;
                                *((a0 + 176) as &i8) = v1;
                                *((a0 + 177) as &i8) = v0;
                                *((a0 + 184) as &i64) = v33;
                                *((a0 + 192) as &i64) = v32;
                                *((a0 + 200) as &i8) = core::result::Result<T,E>::unwrap(&v5) as i32;
                                *((a0 + 201) as &i8) = v75;
                                return struct32 {
                                    field_0: 2
                                    field_8: v18
                                    field_24: v20
                                };
                            }
                            core::option::unwrap_failed(); /* do not return */
                        }
                    } else {
                        v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("grouping cannot be combined with --to");
                        *((a0 + 24) as &struct24) = v5.field_16;
                    }
                    *((a0 + 8) as &i192) = v5;
                    *(a0 as &i64) = 2;
                }
                return struct32 {
                    field_0: 2
                    field_8: v18
                    field_24: v20
                };
            }
        }
    }
    return struct32 {
        field_0: 2
        field_8: v49
        field_16: v37
    };
}
