fn uu_pr::build_options(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Result<struct324, struct40> {
    let a0: void*;  // rdi
    let v0: u8;  // [bp-0x333]
    let v1: u8;  // [bp-0x332]
    let v2: u8;  // [bp-0x331]
    let v3: u32;  // [bp-0x330]
    let v4: u32;  // [bp-0x32c]
    let v5: struct32;  // [sp-0x328], Other Possible Types: struct40, struct60, struct640, struct72, struct24, Result<struct40, struct16>, u64
    let v6: Result<struct40, struct16>;  // [bp-0x328], Other Possible Types: u640
    let v7: Result<struct24, struct24>;  // [bp-0x328], Other Possible Types: alloc::string::String, struct32, struct72, struct24
    let v8: struct32;  // [bp-0x328]
    let v9: u64;  // [bp-0x328]
    let v10: struct32;  // [bp-0x328]
    let v11: struct40;  // [bp-0x328]
    let v12: struct24;  // [bp-0x328]
    let v13: Result<struct32, struct16>;  // [bp-0x328]
    let v14: Result<struct32, struct16>;  // [bp-0x328]
    let v15: Result<struct32, struct16>;  // [bp-0x328]
    let v16: u64;  // [bp-0x320]
    let v17: u64;  // [bp-0x320]
    let v18: struct640;  // [bp-0x318], Other Possible Types: u64
    let v19: u64;  // [bp-0x318]
    let v20: u64;  // [bp-0x308]
    let v21: u128;  // [bp-0x308]
    let v22: u8;  // [bp-0x300]
    let v23: iNone;  // [bp-0x2f8]
    let v24: u64;  // [bp-0x2e8]
    let v25: u64;  // [bp-0x2c8]
    let v26: u64;  // [bp-0x2c0]
    let v27: u8;  // [bp-0x2c0]
    let v28: struct33;  // [bp-0x2b8], Other Possible Types: struct24, struct32, u64
    let v29: struct24;  // [bp-0x2b8], Other Possible Types: Result<struct24, struct24>, u128
    let v30: alloc::string::String;  // [bp-0x2b8], Other Possible Types: struct32
    let v31: Option<struct72>;  // [bp-0x2b8]
    let v32: iNone;  // [bp-0x2b8], Other Possible Types: u128
    let v33: Option<struct72>;  // [bp-0x2b8]
    let v34: Option<struct72>;  // [bp-0x2b8]
    let v36: u64;  // [bp-0x2b0]
    let v37: void*;  // [bp-0x2b0], Other Possible Types: u128
    let v39: u64;  // [bp-0x2a8]
    let v40: u128;  // [bp-0x2a8]
    let v41: i64;  // [bp-0x2a0], Other Possible Types: struct_5 *
    let v42: i64;  // [bp-0x298], Other Possible Types: u64
    let v43: iNone;  // [bp-0x288]
    let v44: iNone;  // [sp-0x268], Other Possible Types: struct16, u128
    let v45: u64;  // [bp-0x268]
    let v46: u128;  // [bp-0x268]
    let v47: u64;  // [bp-0x268]
    let v48: Result<struct32, struct16>;  // [bp-0x268]
    let v49: struct32;  // [bp-0x268]
    let v50: void*;  // [bp-0x260]
    let v51: u64;  // [bp-0x240]
    let v52: u8;  // [bp-0x238]
    let v53: u8;  // [bp-0x238]
    let v54: u64;  // [bp-0x228]
    let v55: u64;  // [bp-0x218]
    let v56: u32;  // [bp-0x20c]
    let v57: iNone;  // [bp-0x208]
    let v58: u64;  // [bp-0x1f8]
    let v59: u128;  // [bp-0x1e8]
    let v60: u64;  // [bp-0x1e8]
    let v61: u128;  // [bp-0x1e0]
    let v62: u64;  // [bp-0x1d8]
    let v63: struct640;  // [bp-0x1d0]
    let v64: iNone;  // [bp-0x1c8]
    let v65: u64;  // [bp-0x1b8]
    let v66: iNone;  // [bp-0x1a8], Other Possible Types: struct24
    let v67: u64;  // [bp-0x198]
    let v68: iNone;  // [bp-0x188]
    let v69: Option<struct40>;  // [bp-0x188]
    let v70: u128;  // [bp-0x178]
    let v71: u64;  // [bp-0x158]
    let v72: iNone;  // [bp-0x150], Other Possible Types: struct24, u8
    let v73: u64;  // [bp-0x140]
    let v74: iNone;  // [bp-0x138]
    let v75: u64;  // [bp-0x128]
    let v76: struct24;  // [bp-0x118]
    let v77: u64;  // [bp-0x108]
    let v78: struct32;  // [bp-0x100]
    let v79: struct24;  // [bp-0xe0]
    let v80: struct32;  // [bp-0xc8]
    let v81: iNone;  // [bp-0xa8]
    let v82: iNone;  // [bp-0x98]
    let v83: iNone;  // [bp-0x88]
    let v84: iNone;  // [bp-0x78]
    let v85: iNone;  // [bp-0x68]
    let v86: iNone;  // [bp-0x58]
    let v87: alloc::string::String;  // [bp-0x48]
    let v89: void*;  // rsi
    let v90: i64;  // rdi
    let v91: u64;  // rdx
    let v93: struct16;  // r15
    let v97: Option<struct24>;  // r12
    let v100: u64;  // r12
    let v102: i64;  // rax
    let v103: u128;  // xmm0
    let v104: u32;  // eax
    let v105: struct640;  // r12
    let v106: struct640;  // rcx
    let v107: struct640;  // xmm0
    let v108: struct640;  // rdi
    let v109: struct640;  // xmm0
    let v110: struct640;  // xmm1
    let v111: u64;  // rsi
    let v112: struct640;  // rax
    let v113: i64;  // rax
    let v114: i64;  // rax
    let v115: u64;  // rax
    let v116: u64;  // r12
    let v118: u64;  // r14
    let v119: i64;  // rax
    let v120: u64;  // rax
    let v121: u64;  // rax
    let v122: u64;  // rdx
    let v125: u64;  // r12
    let v126: u64;  // rbp
    let v128: u64;  // r15
    let v130: u64;  // r14
    let v131: i64;  // rax
    let v132: iNone;  // xmm0
    let v133: void*;  // rcx
    let v134: u8;  // bpl
    let v136: u8;  // bpl
    let v137: u64;  // r14
    let v139: &mut [u8];  // rax:rdx
    let v140: u64;  // [bp-0x310]
    let v141: u64;  // [bp-0x2b8]
    let v142: u64;  // [bp-0x2a8]

    v25 = a5;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "form-feed");
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "merge");
    if v26 && (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "column") || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "across")) {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v90, v89, v91);
        return struct40 {
            field_0: 2
            field_8: 9223372036854775809
            field_16: *(&v5 as &i128)
            field_32: v18
        };
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "merge");
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "header");
    if clap_builder::parser::error::MatchesError::unwrap("header", &v5) {
        if !v27 {
            goto LABEL_533d84;
        }
    } else {
        if !v27 {
LABEL_533d84:
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a2 as &i64), *((a2 + 8) as &i64), "-");
        }
    }
    if !v93 {
        if !v93 {
            goto LABEL_533da1;
        }
LABEL_533da0:
    } else {
        if v93 {
            goto LABEL_533da0;
        }
LABEL_533da1:
    }
    v76 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v93, v97);
    v5 = <uu_pr::NumberingMode as core::default::Default>::default();
    v100 = v20;
    v28 = uu_pr::parse_usize(a1, "first-line-number");
    v17 = v100;
    v9 = 9223372036854775813;
    if v28.field_0 as i64 != 9223372036854775814 {
        v68 = v28.field_16;
        if v28.field_0 as i64 != 9223372036854775813 {
            return struct40 {
                field_0: 2
                field_8: v28.field_0 as i64
                field_16: v37
                field_24: v68
            };
        }
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number-lines");
    v102 = clap_builder::parser::error::MatchesError::unwrap("number-lines", &v5);
    if v102 {
        v11 = uu_pr::build_options::{{closure}}(v100, *((v102 + 8) as &i64), *((v102 + 16) as &i64));
        v42 = v20;
        v103 = v11.field_0;
        v40 = *(&v11.field_16 as &i128);
        v28 = v103;
    } else {
        v28 = 0x8000000000000000;
    }
    vvar_2492{stack -696} = struct24 OrderedDict([(0, 𝜙@64b [((5455534, None), vvar_2252{stack -696}), ((5455493, None), vvar_2242{stack -696})]), (8, 𝜙@64b [((5455534, None), vvar_2243{stack -688}), ((5455493, None), vvar_2243{stack -688})]), (16, 𝜙@64b [((5455534, None), vvar_1725{stack -680}), ((5455493, None), vvar_1725{stack -680})])])
    v69 = core::option::Option<T>::or_else(&v29, a1);
    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "double-space");
    if v53 {
        v7 = alloc::slice::<impl [T]>::repeat("\n ");
    } else {
        v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("\n");
    }
    v58 = v19;
    v57 = v7 as i128;
    v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("\n");
    v65 = v19;
    v64 = *(&v5.field_0 as &i128);
    if v27 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a2 as &i64), *((a2 + 8) as &i64), "-") {
        v44 = chrono::offset::local::Local::now();
        v28 = struct33 {
            field_0: "%b %d %H:%M %Y"
            field_16: ""
            field_32: 0
        };
        v5 = chrono::datetime::DateTime<Tz>::format_with_items(&v44, &v28);
        v72 = <T as alloc::string::SpecToString>::spec_to_string(&v5);
    } else {
        uu_pr::file_last_modified_time(&v72, *(a2 as &i64), *((a2 + 8) as &i64));
    }
    v4 = v104 & -0x100 | 1;
    v5 = regex::regex::string::Regex::new("\\s*\\+(\\d+:*\\d*)\\s*");
    v78 = core::result::Result<T,E>::unwrap(&v5, "src/uu/pr/src/pr.rs");
    v33 = regex::regex::string::Regex::captures_at(&v78, a4, v25);
    if let Some(_) = v33 {
        v5 = struct72 {
            field_0: v33 as i128
            field_16: *((&v33 as &char + 16) as &i128)
            field_32: *((&v33 as &char + 32) as &i128)
            field_48: v43
            field_64: *((&v33 as &char + 64) as &i64)
        };
        v48 = uu_pr::build_options::{{closure}}(&v5);
        v81 = *((&v48 as &char + 16) as &i128);
        if v48 as i64 == 9223372036854775813 {
            v105 = v50;
        } else if v48 as i64 != 9223372036854775814 {
            v107 = v81;
            return struct40 {
                field_0: 2
                field_8: v106
                field_16: v115
                field_24: v107
            };
        }
    }
    v34 = regex::regex::string::Regex::captures_at(&v78, a4, v25);
    if let Some(_) = v34 {
        v24 = *((&v34 as &char + 64) as &i64);
        v109 = v34 as i128;
        v110 = *((&v34 as &char + 16) as &i128);
        v23 = v43;
        v21 = *((&v34 as &char + 32) as &i128) as u128;
        v18 = v110;
        v5 = v109;
        uu_pr::build_options::{{closure}}(&v5 as u64);
    }
    v112 = core::option::Option<T>::filter(v108, v111);
    if v112 {
        v13 = uu_pr::build_options::{{closure}}(v112, a2);
        v51 = v17;
        v82 = *((&v13 as &char + 16) as &i128);
        if false {
            a0[24] = v82;
            *(&a0[8] as &i64) = 9223372036854775813;
        }
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pages");
    v113 = clap_builder::parser::error::MatchesError::unwrap("pages", &v5);
    if v113 {
        v7 = uu_pr::build_options::{{closure}}(*((v113 + 8) as &i64), *((v113 + 16) as &i64));
        v44 = *(&v17 as &i128);
        v28 = struct24 {
            field_0: 9223372036854775813
            field_8: v44
        };
        v14 = core::ops::function::FnOnce::call_once(a1, &v28);
        v83 = *((&v14 as &char + 16) as &i128);
        if !(false) {
            v105 = v17;
        } else if true {
            v107 = v83;
            return struct40 {
                field_0: 2
                field_8: v106
                field_16: v115
                field_24: v107
            };
        }
    }
    v63 = v105;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pages");
    v114 = core::option::Option<T>::filter(clap_builder::parser::error::MatchesError::unwrap("pages", &v5));
    if v114 {
        v7 = uu_pr::build_options::{{closure}}(*((v114 + 8) as &i64), *((v114 + 16) as &i64));
        v44 = *(&v17 as &i128);
        v28 = struct24 {
            field_0: 9223372036854775813
            field_8: v44
        };
        v15 = core::ops::function::FnOnce::call_once(a1, &v28);
        v84 = *((&v15 as &char + 16) as &i128);
        if !(false) {
            v26 = 1;
            v51 = v17;
            v45 = v51;
            if v105 > v51 {
                v87 = format!("invalid --pages argument '{}:{}'", &v63, &v45);
                *(&a0[32] as &u64) = v87.vec.len;
                *(&a0[16] as &i128) = *(&v87.vec.buf.inner.cap as &i128);
                *(&a0[8] as &i64) = 9223372036854775809;
            }
LABEL_534510:
            v28 = uu_pr::parse_usize(a1, "length");
            v16 = v116;
            v5 = 9223372036854775813;
            if v28.field_0 as i64 != 9223372036854775814 {
                v116 = v36;
                *(&v44 as &i128) = *(&v142 as &i128);
                if v28.field_0 as i64 != 9223372036854775813 {
                    *(&a0[24] as &i128) = *(&v45 as &i128);
                    *(&a0[8] as &i64) = v28.field_0;
                    *(&a0[16] as &u64) = v116;
                }
                if v116 < 10 {
                    goto LABEL_53458e;
                }
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "omit-header");
LABEL_53458e:
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "form-feed") {
                v119 = alloc::alloc::Global::alloc_impl(1, 1);
                *(v119 as &i8) = 12;
                v79 = struct24 {
                    field_0: 1
                    field_8: v119
                    field_16: 1
                };
                v5 = alloc::string::String::from_utf8(&v79);
                v66 = core::result::Result<T,E>::unwrap(&v5, "src/uu/pr/src/pr.rs");
            } else {
                v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("\n");
                v67 = v19;
                v66 = *(&v5.field_0 as &i128);
            }
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "across");
            v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sep-string");
            clap_builder::parser::error::MatchesError::unwrap("sep-string", &v6);
            v71 = v116;
            v56 = v118;
            if !v120 {
                v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "separator");
                clap_builder::parser::error::MatchesError::unwrap("separator", &v6);
                if !v120 {
                    goto LABEL_534725;
                }
            }
            v7 = <alloc::string::String as core::clone::Clone>::clone(v120);
            v29 = *(&v7.vec.buf.inner.ptr as &i128);
            if v121 == 0x8000000000000000 {
LABEL_534725:
                v46 = 0;
                v139 = core::char::methods::encode_utf8_raw(9, &v46, v122);
                v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v139.data_ptr, 1);
                v121 = v19;
                v62 = v121;
                v59 = *(&v5.field_0 as &i128);
                v44 = v47;
            } else {
                v61 = v29;
                v60 = v121;
                v44 = v45;
            }
            v3 = v121 & -0x100 | 1;
            v125 = a1;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "width") {
                v126 = (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v125, "separator") ? 0x200 : 72);
            }
            v30 = uu_pr::parse_usize(v125, "width");
            v16 = v126;
            v5 = 9223372036854775813;
            if v30.field_0 as i64 != 9223372036854775814 {
                v126 = v36;
                v46 = *(&v142 as &i128);
                if v30.field_0 as i64 != 9223372036854775813 {
                    return struct40 {
                        field_0: 2
                        field_8: v30.field_0 as i64
                        field_16: v36
                        field_24: v46
                    };
                }
            }
            v55 = v126;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v125, "join-lines") {
                v8 = uu_pr::parse_usize(v125, "page-width");
                if v8.field_0 as i64 != 9223372036854775814 {
                    v128 = v16;
                    v54 = 1;
                    if v8.field_0 as i64 != 9223372036854775813 {
                        return struct40 {
                            field_0: 2
                            field_8: v8.field_0 as i64
                            field_16: v16
                            field_24: v8.field_16
                        };
                    }
                }
            }
            v7 = regex::regex::string::Regex::new("\\s*-(\\d+)\\s*");
            v80 = core::result::Result<T,E>::unwrap(&v7, "src/uu/pr/src/pr.rs");
            v31 = regex::regex::string::Regex::captures_at(&v80, a4, v25);
            if let Some(_) = v31 {
                v7 = struct72 {
                    field_0: v31 as i128
                    field_16: *((&v31 as &char + 16) as &i128)
                    field_32: *((&v31 as &char + 32) as &i128)
                    field_48: v43
                    field_64: *((&v31 as &char + 64) as &i64)
                };
                v48 = uu_pr::build_options::{{closure}}(&v7);
                v130 = v50;
                v85 = *((&v48 as &char + 16) as &i128);
                if let Ok(_) = v48 {
                    if let Ok(_) = v48 {
                        v132 = v85;
                        v133 = a0;
                        v133[24] = v132;
                        *(&v133[8] as &unsigned long) = v131;
                        *(&v133[16] as &u64) = v130;
                        *(v133 as &i64) = 2;
                    }
                }
            }
            v10 = uu_pr::parse_usize(v125, "column");
            if v10.field_0 as i64 == 9223372036854775814 {
                v41 = &v55;
                v32 = v59;
                v39 = v62;
                v42 = &v1;
                if v134 {
                    goto LABEL_534a71;
                }
                v25 = v128;
                v5 = 0x8000000000000000;
            } else {
                v130 = v16;
                v133 = a0;
                if v10.field_0 as i64 != 9223372036854775813 {
                    v133[24] = v132;
                    *(&v133[8] as &unsigned long) = v131;
                    *(&v133[16] as &u64) = v130;
                    *(v133 as &i64) = 2;
                }
                v41 = &v55;
                *(&v32 as &u128) = v59;
                v39 = v62;
LABEL_534a71:
                v25 = v128;
                v18 = v39;
                v5 = *(&v141 as &i128);
                v140 = v55;
                v20 = v130;
                v22 = v1;
            }
            v49 = uu_pr::parse_usize(v125, "indent");
            v37 = 0;
            v28 = 9223372036854775813;
            if v49.field_0 as i64 != 9223372036854775814 {
                v86 = v49.field_16;
                if v49.field_0 as i64 != 9223372036854775813 {
                    return struct40 {
                        field_0: 2
                        field_8: v49.field_0 as i64
                        field_16: v50
                        field_24: v86
                    };
                }
            }
            v29 = alloc::slice::<impl [T]>::repeat(&g_458296, v50);
            v75 = v39;
            v74 = v29 as i128;
            v136 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v125, "join-lines");
            v137 = v2;
            if v5 != 0x8000000000000000 {
                v30 = <alloc::string::String as core::clone::Clone>::clone(&v5);
                v44 = *(&v30.vec.buf.inner.ptr as &i128);
                if v30.vec.buf.inner.cap.__0 == 0x8000000000000000 {
                    goto LABEL_534c04;
                }
                v37 = v44;
                v28 = v30.vec.buf.inner.cap.__0;
                if v136 {
                    v29 = v28;
                    return Ok(struct328 {
                        field_0: v26
                        field_8: v51
                        field_16: v137
                        field_24: a3
                        field_32: 0
                        field_40: v25
                        field_48: *(&v76.field_0 as &i128)
                        field_64: v77
                        field_72: v64
                        field_88: v65
                        field_96: v57
                        field_112: v58
                        field_120: v72
                        field_136: v73
                        field_144: v66
                        field_160: v67
                        field_168: v74
                        field_184: v75
                        field_192: v29 as i128
                        field_208: v39
                        field_216: v69 as i128
                        field_232: v70
                        field_248: *((&v69 as &char + 32) as &i64)
                        field_256: v10.field_0
                        field_272: v10.field_16
                        field_288: *((&v6 as &char + 32) as &i128)
                        field_304: v63
                        field_312: v71
                        field_320: v53
                        field_321: v56 as u8
                        field_322: v0
                        field_323: v136
                    });
                }
            } else {
LABEL_534c04:
                v29 = uu_pr::build_options::{{closure}}(v137);
                if v136 {
                    v29 = v28;
                    return Ok(struct328 {
                        field_0: v26
                        field_8: v51
                        field_16: v137
                        field_24: a3
                        field_32: 0
                        field_40: v25
                        field_48: *(&v76.field_0 as &i128)
                        field_64: v77
                        field_72: v64
                        field_88: v65
                        field_96: v57
                        field_112: v58
                        field_120: v72
                        field_136: v73
                        field_144: v66
                        field_160: v67
                        field_168: v74
                        field_184: v75
                        field_192: v29 as i128
                        field_208: v39
                        field_216: v69 as i128
                        field_232: v70
                        field_248: *((&v69 as &char + 32) as &i64)
                        field_256: v10.field_0
                        field_272: v10.field_16
                        field_288: *((&v6 as &char + 32) as &i128)
                        field_304: v63
                        field_312: v71
                        field_320: v53
                        field_321: v56 as u8
                        field_322: v0
                        field_323: v136
                    });
                }
            }
            if a3 < 2 {
                v29 = v28;
                return Ok(struct328 {
                    field_0: v26
                    field_8: v51
                    field_16: v137
                    field_24: a3
                    field_32: v54
                    field_40: v25
                    field_48: *(&v76.field_0 as &i128)
                    field_64: v77
                    field_72: v64
                    field_88: v65
                    field_96: v57
                    field_112: v58
                    field_120: v72
                    field_136: v73
                    field_144: v66
                    field_160: v67
                    field_168: v74
                    field_184: v75
                    field_192: v29 as i128
                    field_208: v39
                    field_216: v69 as i128
                    field_232: v70
                    field_248: *((&v69 as &char + 32) as &i64)
                    field_256: v10.field_0
                    field_272: v10.field_16
                    field_288: *((&v6 as &char + 32) as &i128)
                    field_304: v63
                    field_312: v71
                    field_320: v53
                    field_321: v56 as u8
                    field_322: v0
                    field_323: v136
                });
            }
            v25 = 72;
            if v5 != 0x8000000000000000 {
                v25 = v140;
            }
            v29 = v28;
            return Ok(struct328 {
                field_0: v26
                field_8: v51
                field_16: v137
                field_24: a3
                field_32: 1
                field_40: v25
                field_48: *(&v76.field_0 as &i128)
                field_64: v77
                field_72: v64
                field_88: v65
                field_96: v57
                field_112: v58
                field_120: v72
                field_136: v73
                field_144: v66
                field_160: v67
                field_168: v74
                field_184: v75
                field_192: v29 as i128
                field_208: v39
                field_216: v69 as i128
                field_232: v70
                field_248: *((&v69 as &char + 32) as &i64)
                field_256: v10.field_0
                field_272: v10.field_16
                field_288: *((&v6 as &char + 32) as &i128)
                field_304: v63
                field_312: v71
                field_320: v53
                field_321: v56 as u8
                field_322: v0
                field_323: v136
            });
        } else if true {
            v107 = v84;
            return struct40 {
                field_0: 2
                field_8: v106
                field_16: v115
                field_24: v107
            };
        }
    }
    if v26 {
        v45 = v51;
        if v105 > v51 {
            v87 = format!("invalid --pages argument '{}:{}'", &v63, &v45);
            *(&a0[32] as &u64) = v87.vec.len;
            *(&a0[16] as &i128) = *(&v87.vec.buf.inner.cap as &i128);
            *(&a0[8] as &i64) = 9223372036854775809;
        }
    }
    goto LABEL_534510;
}
