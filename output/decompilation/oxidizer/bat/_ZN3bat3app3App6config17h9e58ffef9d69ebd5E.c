fn bat::app::App::config(a0: i64, a1: i64, a2: u64) -> int {
    let v0: i64;  // [bp-0x440]
    let v1: i8;  // [bp-0x438]
    let v2: u8;  // [bp-0x434]
    let v3: u8;  // [bp-0x433]
    let v4: u8;  // [bp-0x432]
    let v5: u8;  // [bp-0x431]
    let v6: u32;  // [bp-0x430]
    let v7: u32;  // [bp-0x42c]
    let v8: u32;  // [bp-0x428]
    let v9: u32;  // [bp-0x428]
    let v10: u32;  // [bp-0x420]
    let v11: Result<struct81, struct49>;  // [bp-0x418], Other Possible Types: u64
    let v12: struct56;  // [bp-0x418], Other Possible Types: struct16, struct24, Result<struct40, struct16>, u64
    let v13: Result<struct40, struct16>;  // [bp-0x418], Other Possible Types: struct56, struct72, struct24
    let v14: struct9;  // [bp-0x418]
    let v15: struct56;  // [bp-0x418]
    let v16: struct48;  // [bp-0x418]
    let v17: struct56;  // [bp-0x418]
    let v18: Option<struct80>;  // [bp-0x418], Other Possible Types: Result<struct40, struct16>, u640
    let v19: struct48;  // [bp-0x418]
    let v20: Result<struct40, struct16>;  // [bp-0x418]
    let v21: Result<struct40, struct16>;  // [bp-0x418]
    let v22: void*;  // [bp-0x418]
    let v23: alloc::string::String;  // [bp-0x418]
    let v24: u64;  // [bp-0x410]
    let v25: u64;  // [bp-0x410]
    let v26: u64;  // [bp-0x410]
    let v27: core::str::pattern::CharSearcher;  // [bp-0x408], Other Possible Types: u128
    let v28: u128;  // [bp-0x3f8]
    let v29: u64;  // [bp-0x3f0]
    let v30: u128;  // [bp-0x3e8]
    let v31: u8;  // [bp-0x3c7]
    let v32: void*;  // [bp-0x3c0]
    let v33: u8;  // [bp-0x3b8]
    let v34: void*;  // [bp-0x3b0]
    let v35: u64;  // [bp-0x3a8]
    let v36: u128;  // [bp-0x3a0]
    let v37: u32;  // [bp-0x384]
    let v38: u64;  // [bp-0x380]
    let v39: u64;  // [bp-0x378]
    let v40: u64;  // [bp-0x368]
    let v41: u64;  // [bp-0x360]
    let v42: iNone;  // [bp-0x358]
    let v43: struct64;  // [bp-0x358]
    let v44: iNone;  // [bp-0x348], Other Possible Types: u128
    let v45: u128;  // [bp-0x338]
    let v46: u64;  // [bp-0x329]
    let v47: iNone;  // [bp-0x328], Other Possible Types: u64
    let v48: u64;  // [bp-0x328]
    let v49: u32;  // [bp-0x310]
    let v50: u32;  // [bp-0x30d]
    let v51: iNone;  // [bp-0x308], Other Possible Types: u32
    let v52: u32;  // [bp-0x305]
    let v53: iNone;  // [bp-0x2f8], Other Possible Types: u8
    let v54: i64;  // [bp-0x2f0]
    let v55: iNone;  // [bp-0x2e8]
    let v56: u64;  // [bp-0x2d8]
    let v57: u128;  // [bp-0x2c8]
    let v58: u64;  // [bp-0x2c0]
    let v59: iNone;  // [bp-0x2b8]
    let v60: iNone;  // [bp-0x2a8]
    let v61: u128;  // [bp-0x298]
    let v62: struct48;  // [bp-0x298]
    let v63: u64;  // [bp-0x298]
    let v64: struct24;  // [bp-0x298]
    let v65: u128;  // [bp-0x290]
    let v66: u128;  // [bp-0x288]
    let v67: iNone;  // [bp-0x280]
    let v68: u64;  // [bp-0x278]
    let v69: u64;  // [bp-0x270]
    let v70: void*;  // [bp-0x268]
    let v71: struct24;  // [bp-0x260]
    let v72: u64;  // [bp-0x250]
    let v73: struct48;  // [bp-0x248]
    let v74: iNone;  // [bp-0x248]
    let v75: struct64;  // [bp-0x248]
    let v76: u128;  // [bp-0x240]
    let v77: iNone;  // [bp-0x238]
    let v78: u128;  // [bp-0x230]
    let v79: u128;  // [bp-0x228]
    let v80: u64;  // [bp-0x220]
    let v81: iNone;  // [bp-0x218]
    let v82: struct16;  // [bp-0x208]
    let v83: iNone;  // [bp-0x1f8]
    let v84: iNone;  // [bp-0x1e8]
    let v85: iNone;  // [bp-0x1d8]
    let v86: u64;  // [bp-0x1c8]
    let v87: u64;  // [bp-0x1b8]
    let v88: struct56;  // [bp-0x1b0]
    let v89: iNone;  // [bp-0x1a0]
    let v90: iNone;  // [bp-0x190]
    let v91: u64;  // [bp-0x180]
    let v92: iNone;  // [bp-0x178]
    let v93: iNone;  // [bp-0x168]
    let v94: iNone;  // [bp-0x158]
    let v95: u64;  // [bp-0x148]
    let v96: u64;  // [bp-0x140]
    let v97: u8;  // [bp-0x138]
    let v98: struct24;  // [bp-0x118]
    let v99: struct24;  // [bp-0xf8]
    let v100: struct24;  // [bp-0xe0]
    let v101: struct24;  // [bp-0xc8]
    let v102: struct64;  // [bp-0xb0]
    let v103: struct64;  // [bp-0x70]
    let v105: u64;  // rax
    let v106: u64;  // rcx
    let v107: iNone;  // xmm1
    let v108: iNone;  // xmm2
    let v109: u64;  // rbp
    let v110: u64;  // rdx
    let v111: void*;  // r13
    let v112: void*;  // r12
    let v113: void*;  // rax
    let v114: void*;  // rbx
    let v115: u64;  // r14
    let v117: u64;  // rax
    let v118: i64;  // rdi
    let v119: i64;  // rbx
    let v121: u128;  // xmm2
    let v122: i64;  // rax
    let v123: iNone;  // xmm0
    let v124: iNone;  // xmm1
    let v125: i64;  // rax
    let v127: i64;  // r15
    let v137: i64;  // rax
    let v138: void*;  // rbp
    let v140: void*;  // rdi
    let v141: u64;  // rsi
    let v142: i64;  // r12
    let v143: i64;  // rax
    let v144: void*;  // rax
    let v145: u64;  // r14
    let v146: u8;  // r13b
    let v147: void*;  // rax
    let v148: void*;  // rbx
    let v150: i64;  // rax
    let v151: void*;  // rbx
    let v155: i64;  // rax
    let v156: i64;  // rax
    let v157: u64;  // rax
    let v158: u64;  // rax
    let v162: void*;  // rax
    let v163: void*;  // rbx
    let v164: u64;  // r14
    let v165: i64;  // rax
    let v167: u64;  // rdx
    let v168: u64;  // rax
    let v170: u64;  // rcx
    let v171: u128;  // xmm0
    let v173: i64;  // rax
    let v174: u8;  // bl
    let v175: u64;  // rdx
    let v176: u64;  // rax
    let v180: u64;  // rax
    let v181: u128;  // xmm0
    let v182: i64;  // r14
    let v183: u8;  // al
    let v184: u8;  // al
    let v185: Option<struct24>;  // rax
    let v187: Option<struct24>;  // rcx
    let v191: iNone;  // xmm0
    let v192: iNone;  // xmm1
    let v193: core::result::Result<core::num::nonzero::NonZero<usize>, std::io::error::Error>;  // rax:rdx
    let v194: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v195: u24;  // [bp-0x417]
    let v196: u32;  // [bp-0x414]
    let v200: u16;  // [bp-0x3d8]

    v11 = bat::app::App::style_components(a1);
    v105 = v11 as i8;
    if v105 != 13 {
        v46 = *((&v11 as &char + 48) as &i64);
        v191 = *((&v11 as &char + 1) as &i128);
        v192 = *((&v11 as &char + 17) as &i128);
        v45 = *((&v11 as &char + 33) as &i128);
        v44 = v192;
        v42 = v191;
        return struct96 {
            field_0: 2
            field_8: v105 as u8
            field_9: <UNKNOWN>
            field_25: <UNKNOWN>
            field_41: <UNKNOWN>
            field_56: *((&v11 as &char + 56) as &i128)
            field_64: <UNKNOWN>
            field_80: <UNKNOWN>
        };
    }
    v8 = v106;
    v107 = *((&v11 as &char + 24) as &i128);
    v108 = *((&v11 as &char + 40) as &i128);
    v57 = *((&v11 as &char + 8) as &i128);
    v59 = v107;
    v60 = v108;
    v109 = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(a1, "plain");
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "plain");
    if v12.field_0 {
        v98 = v13;
        v111 = ((core::iter::traits::iterator::Iterator::reduce(&v98) & 1) ? v110 : 0);
    }
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "paging");
    if v12.field_0 {
        v99 = v13;
        v112 = ((core::iter::traits::iterator::Iterator::reduce(&v99) & 1) ? v110 : 0);
    }
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "paging");
    v113 = clap_builder::parser::error::MatchesError::unwrap("paging", &v18);
    if v113 {
        v114 = v113[8] as i64;
        v115 = v113[16] as i64;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "always") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "never") {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v114, v115, "auto");
            if !v113 as u8 {
                panic!("internal error: entered unreachable code: other values for --paging are not allowed");
            }
            goto LABEL_7a668b;
        }
    } else {
LABEL_7a668b:
        v7 = v113 as u32 & -0x100 | 2;
        v10 = v7 & 0xffffffffffffff00 | 1;
        if (v109 & 255) <= 1 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-paging") {
            v12 = struct16 {
                field_0: a2
                field_8: v8 * 160 + a2
            };
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v12);
            if v117 {
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v118, "list-themes");
                if !v117 && *((a1 + 56) as &i8) == 1 {
                    std::io::stdio::stdin();
                    v10 = std::sys::io::is_terminal::isatty::is_terminal();
                    v7 = v10 & -0x100 | v10 + 1;
                }
            }
        }
    }
    v88 = bat::syntax_mapping::SyntaxMapping::new();
    v193 = std::thread::available_parallelism();
    match v193 {
        Err(_) => {
            return struct24 {
                field_0: 2
                field_8: 0
                field_16: *((&v193 as &char + 8) as &i64)
            };
        },
        Ok(_) => {
            if *((&v193 as &char + 8) as &i64) >= 2 {
                bat::syntax_mapping::SyntaxMapping::start_offload_build_all(&v88);
            }
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "ignored-suffix");
            v43 = clap_builder::parser::error::MatchesError::unwrap("ignored-suffix", &v13);
            if v43.field_0 as i64 {
                v121 = v43.field_32;
                v30 = v47;
                v28 = v121;
                v27 = v44;
                v12 = v43.field_0;
                loop {
                    v122 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v13);
                    if !v122 {
                        break;
                    }
                    bat::syntax_mapping::SyntaxMapping::insert_ignored_suffix(&v88, *((v122 + 8) as &i64), *((v122 + 16) as &i64));
                }
            }
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "map-syntax");
            v75 = clap_builder::parser::error::MatchesError::unwrap("map-syntax", &v12);
            if v75.field_0 as i64 {
                v123 = v75.field_0;
                v124 = v75.field_16;
                v47 = v81;
                v45 = v75.field_32;
                v44 = v124;
                v42 = v123;
                v24 = v25;
                loop {
                    v25 = v24;
                    v125 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v42);
                    if !v125 {
                        break;
                    }
                    v27 = <char as core::str::pattern::Pattern>::into_searcher(0x3a, *((v125 + 8) as &i64), *((v125 + 16) as &i64));
                    v12 = struct16 {
                        field_0: 0
                        field_8: *((v125 + 16) as &i64)
                    };
                    v200 = 1;
                    core::iter::traits::iterator::Iterator::collect(&v53, &v12);
                    if v55 as i64 != 2 {
                        <bat::error::Error as core::convert::From<&str>>::from(&v12, "Invalid syntax mapping. The format of the -m/--map-syntax option is '<glob-pattern>:<syntax-name>'. For example: '*.cpp:C++'.");
                        return struct88 {
                            field_0: 2
                            field_8: *(&v12.field_0 as &i128)
                            field_24: *(&v27.haystack.data_ptr as &i128)
                            field_40: *(&v27.finger as &i128)
                            field_56: *((&v18 as &char + 48) as &i128)
                            field_72: *((&v18 as &char + 64) as &i128)
                        };
                    }
                    v127 = v54;
                    v64 = struct24 {
                        field_0: 0
                        field_8: *((v127 + 16) as &i128)
                    };
                    v18 = bat::syntax_mapping::SyntaxMapping::insert(&v88, *(v127 as &i64), *((v127 + 8) as &i64), &v64);
                    match v18 {
                        Some(_) => {
                            return struct96 {
                                field_0: 2
                                field_8: v18 as i8
                                field_9: <UNKNOWN>
                                field_25: <UNKNOWN>
                                field_41: <UNKNOWN>
                                field_57: <UNKNOWN>
                                field_72: <UNKNOWN>
                            };
                        },
                        None => {
                            v24 = v26;
                            v63 = v61;
                        },
                    }
                }
            }
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v119, "terminal-width");
            v137 = clap_builder::parser::error::MatchesError::unwrap("terminal-width", &v12);
            if v137 {
                v8 = v110;
                bat::app::App::config::{{closure}}(*((v137 + 8) as &i64), *((v137 + 16) as &i64));
            }
            v5 = bat::app::is_truecolor_terminal();
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v119, "language");
            clap_builder::parser::error::MatchesError::unwrap("language", &v12);
            v87 = core::option::Option<T>::or_else(v140, v141, v119);
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v119, "show-all") as u8;
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v119, "nonprintable-notation");
            v143 = clap_builder::parser::error::MatchesError::unwrap("nonprintable-notation", &v12);
            if v143 {
                v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v143 + 8) as &i64), *((v143 + 16) as &i64), "unicode") as u8;
                if v3 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v143 + 8) as &i64), *((v143 + 16) as &i64), "caret") as u8 {
                    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "binary");
                    v144 = clap_builder::parser::error::MatchesError::unwrap("binary", &v12);
                    if v144 {
                        v2 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v144[8] as i64, v144[16] as i64, "as-text") as u8;
                        if v2 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v144[8] as i64, v144[16] as i64, "no-printing") as u8 {
                            v146 = *((v0 + 56) as &i8);
                            if v146 || v138 == 1 {
                                v6 = v106 as u32 & -0x100 | 1;
                                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v0, "chop-long-lines") as u8 {
                                    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v0, "wrap");
                                    v147 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v20);
                                    if v147 {
                                        v148 = v147[8] as i64;
                                        v145 = v147[16] as i64;
                                        v6 = v106 as u32 & -0x100 | 2;
                                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v148, v145, "character") as u8 {
                                            v6 = v106 as u32 & -0x100 | 1;
                                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v148, v145, "never") as u8 {
                                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v148, v145, "auto") as u8 {
                                                    *(&v11 as &&str) = "internal error: entered unreachable code: other values for --wrap are not allowed";
                                                    *((v142 + 8) as &i64) = 1;
                                                    *((v142 + 16) as &&char) = &v1;
                                                    *((v142 + 24) as &i128) = 0;
                                                    core::panicking::panic_fmt(v142); /* do not return */
                                                }
                                                goto LABEL_7a6c2a;
                                            }
                                        }
                                    } else {
LABEL_7a6c2a:
                                        bat::style::StyleComponents::plain(&v57 as u8);
                                    }
                                }
                            }
                            v37 = v106 as u32 & -0x100 | 1;
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "force-colorization") as u8 {
                                v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "color");
                                v150 = clap_builder::parser::error::MatchesError::unwrap("color", &v21);
                                if !v150 {
                                    *(&v11 as &&str) = "internal error: entered unreachable code: other values for --color are not allowed";
                                    *((v142 + 8) as &i64) = 1;
                                    *((v142 + 16) as &&char) = &v1;
                                    *((v142 + 24) as &i128) = 0;
                                    core::panicking::panic_fmt(v142); /* do not return */
                                }
                                v151 = *((v150 + 8) as &i64);
                                v145 = *((v150 + 16) as &i64);
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v151, v145, "always") as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v151, v145, "never") as u8 {
                                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v151, v145, "auto") as u8 {
                                        v37 = (!bat::app::env_no_color() as u8 ? v146 as u32 : 0);
                                    } else {
                                        *(&v11 as &&str) = "internal error: entered unreachable code: other values for --color are not allowed";
                                        *((v142 + 8) as &i64) = 1;
                                        *((v142 + 16) as &&char) = &v1;
                                        *((v142 + 24) as &i128) = 0;
                                        core::panicking::panic_fmt(v142); /* do not return */
                                    }
                                }
                            }
                            v31 = 2;
                            v22 = 0 as void*;
                            v32 = 0;
                            v33 = 0;
                            v34 = 0;
                            v35 = 1;
                            v36 = 0;
                            v82 = console::term::Term::with_inner(&v12);
                            console::unix_term::terminal_size(&v82);
                            if !v146 {
                                v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "color");
                                v155 = clap_builder::parser::error::MatchesError::unwrap("color", &v12);
                                if !v155 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v155 + 8) as &i64), *((v155 + 16) as &i64), "always") as u8 {
                                    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "decorations");
                                    v156 = clap_builder::parser::error::MatchesError::unwrap("decorations", &v12);
                                    if !v156 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v156 + 8) as &i64), *((v156 + 16) as &i64), "always") as u8 {
                                        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "force-colorization") as u32;
                                        v8 = v9 & -0x100 | (v9 as u8 ^ 1) as u32;
                                    }
                                }
                            }
                            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tabs");
                            v157 = clap_builder::parser::error::MatchesError::unwrap("tabs", &v12);
                            if v157 {
                                v12 as u192 = <alloc::string::String as core::clone::Clone>::clone(v157);
                                v158 = v23.vec.buf.inner.cap.__0;
                                v42 = *(&v23.vec.buf.inner.ptr as &i128);
                                if v158 != 0x8000000000000000 {
                                    *(&v24 as void*) = v42;
                                    v12 = v158;
                                    bat::app::App::config::{{closure}}(&v12 as u192);
                                }
                            }
                            bat::style::StyleComponents::plain(&v57 as u8);
                            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "strip-ansi");
                            v162 = clap_builder::parser::error::MatchesError::unwrap("strip-ansi", &v12);
                            if !v162 {
                                panic!("internal error: entered unreachable code: other values for --strip-ansi are not allowed");
                            }
                            v163 = v162[8] as i64;
                            v164 = v162[16] as i64;
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v163, v164, "never") as u8 {
                                v10 = v106 as u32 & -0x100 | 1;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v163, v164, "always") as u8 {
                                    v10 = v106 as u32 & -0x100 | 2;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v163, v164, "auto") as u8 {
                                        panic!("internal error: entered unreachable code: other values for --strip-ansi are not allowed");
                                    }
                                }
                            }
                            v13 = bat::app::App::theme_options(a1);
                            bat::theme::theme(&v97, &v13);
                            v71 = <T as alloc::string::SpecToString>::spec_to_string(&v97);
                            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(a1, "diff");
                            if core::result::Result<T,E>::unwrap_or_default(v14.field_0, *(&v14.field_8 as &i32) as i8) && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "diff") as u8 {
                                v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "diff-context");
                                v165 = clap_builder::parser::error::MatchesError::unwrap("diff-context", &v12);
                                if v165 {
                                    v194 = core::num::<impl usize>::from_ascii_radix(&v12, *((v165 + 8) as &i64), *((v165 + 16) as &i64) as i32);
                                }
                                v38 = v25;
                                v39 = 0x8000000000000000;
                            } else {
                                v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "line-range");
                                v102 = clap_builder::parser::error::MatchesError::unwrap("line-range", &v15);
                                if v102.field_0 as i64 {
                                    core::iter::traits::iterator::Iterator::collect(&v15, &v102);
                                    v168 = v15.field_0 as i8 as u8 as u64;
                                    v51 = *(&v195 as &i32) as u32;
                                    v52 = v196;
                                    *(&v53 as &i128) = *(&v15.field_16 as &i128);
                                    v42 = *((&v15.field_24 as &char + 8) as &i128);
                                    v44 = v13.field_48;
                                    v45 = *(&v200 as &i128) as u128;
                                    if v168 as u32 != 14 {
                                        if v168 as u32 == 13 {
                                            v83 = v53 as i128;
                                            v167 = v25;
                                        } else {
                                            v83 = v53 as i128;
                                            return struct96 {
                                                field_0: 2
                                                field_8: v168 as u8
                                                field_9: v52
                                                field_12: v25
                                                field_16: v83
                                                field_24: <UNKNOWN>
                                                field_40: <UNKNOWN>
                                                field_56: <UNKNOWN>
                                                field_72: <UNKNOWN>
                                            };
                                        }
                                    }
                                }
                                v92 = v83;
                                if v167 != 0x8000000000000000 {
                                    v100 = struct24 {
                                        field_0: v167
                                        field_8: v92
                                        field_16: <UNKNOWN>
                                    };
                                    v16 = bat::line_range::LineRanges::from(&v100);
                                    v61 = *((&v16.field_0 as &char + 8) as &i128) as u128;
                                    v66 = *(&v16.field_24 as &i128) as u128;
                                    v68 = v29;
                                    if v170 == 0x8000000000000000 {
                                        goto LABEL_7a72f4;
                                    }
                                    v80 = v68;
                                    v171 = v61;
                                    v78 = v66;
                                    v76 = v171;
                                } else {
LABEL_7a72f4:
                                    v73 = <bat::line_range::LineRanges as core::default::Default>::default();
                                }
                                v39 = v170;
                                v38 = *((&v75.field_0 as &char + 8) as &i64);
                                v94 = v75.field_16;
                                v95 = v75.field_32 as i64;
                                v96 = v80;
                            }
                            v40 = v57 as i64;
                            v41 = v58;
                            v83 = v59;
                            v84 = v60;
                            v47 = v91;
                            *(&v45 as void*) = v90;
                            v44 = v89;
                            v42 = v88.field_0;
                            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "pager");
                            clap_builder::parser::error::MatchesError::unwrap("pager", &v12);
                            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "italic-text");
                            v173 = clap_builder::parser::error::MatchesError::unwrap("italic-text", &v13);
                            v174 = (!v173 ? 0 : <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v173 + 8) as &i64), *((v173 + 16) as &i64), "always") as u32 as u8);
                            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "highlight-line");
                            v103 = clap_builder::parser::error::MatchesError::unwrap("highlight-line", &v17);
                            if v103.field_0 as i64 {
                                core::iter::traits::iterator::Iterator::collect(&v17, &v103);
                                v176 = v17.field_0 as i8 as u8 as u64;
                                v49 = *(&v195 as &i32) as u32;
                                v50 = v196;
                                *(&v51 as &i128) = *(&v17.field_16 as &i128);
                                *(&v74 as &i128) = *((&v17.field_24 as &char + 8) as &i128);
                                *(&v77 as &i128) = *((&v13 as &char + 48) as &i128);
                                v79 = *(&v200 as &i128) as u128;
                                if v176 as u32 != 14 {
                                    if v176 as u32 == 13 {
                                        v85 = v51 as i128;
                                        v175 = v25;
                                    } else {
                                        v85 = v51 as i128;
                                        return struct96 {
                                            field_0: 2
                                            field_8: v176 as u8
                                            field_9: v50
                                            field_12: v25
                                            field_16: v85
                                            field_24: <UNKNOWN>
                                            field_40: <UNKNOWN>
                                            field_56: <UNKNOWN>
                                            field_72: <UNKNOWN>
                                        };
                                    }
                                }
                            }
                            v93 = v85;
                            if v175 != 0x8000000000000000 {
                                v101 = struct24 {
                                    field_0: v175
                                    field_8: v93
                                    field_16: <UNKNOWN>
                                };
                                v19 = bat::line_range::LineRanges::from(&v101);
                                v180 = v19.field_0 as i64;
                                v53 = *((&v19.field_0 as &char + 8) as &i128) as u128;
                                v55 = *(&v19.field_24 as &i128);
                                v56 = v29;
                                if v180 == 0x8000000000000000 {
                                    goto LABEL_7a76e2;
                                }
                                v69 = v56;
                                v181 = v53;
                                v67 = v55;
                                v65 = v181;
                                v63 = v180;
                            } else {
LABEL_7a76e2:
                                v62 = <bat::line_range::HighlightedLineRanges as core::default::Default>::default();
                            }
                            v182 = a1;
                            v183 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v182, "no-custom-assets") as u32 as u8;
                            v184 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v182, "set-terminal-title") as u32 as u8;
                            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v182, "squeeze-blank");
                            if !v185 as u8 {
                                return struct304 {
                                    field_0: v187
                                    field_8: v185
                                    field_16: *(&v71.field_0 as &i128)
                                    field_32: v72
                                    field_40: v42
                                    field_56: v44
                                    field_72: v45
                                    field_88: v48
                                    field_96: v62.field_0
                                    field_112: *(&v62.field_16 as &i128)
                                    field_128: *(&v62.field_32 as &i128)
                                    field_144: v39
                                    field_152: v38
                                    field_160: v94
                                    field_176: *(&v95 as &i128)
                                    field_192: v40
                                    field_200: v41
                                    field_208: v83
                                    field_224: v84
                                    field_240: v87
                                    field_248: v110
                                    field_256: v8
                                    field_264: v110
                                    field_272: v70
                                    field_280: v86
                                    field_288: v4
                                    field_289: v3
                                    field_290: v2
                                    field_291: v8 as u8
                                    field_292: v37 as u8
                                    field_293: v5
                                    field_294: v174
                                    field_295: v183 ^ 1
                                    field_296: v184
                                    field_297: v6 as u8
                                    field_298: v7 as u8
                                    field_299: v10 as u8
                                };
                            }
                            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
                            clap_builder::parser::error::MatchesError::unwrap(&v11);
                            return struct304 {
                                field_0: v187
                                field_8: v185
                                field_16: *(&v71.field_0 as &i128)
                                field_32: v72
                                field_40: v42
                                field_56: v44
                                field_72: v45
                                field_88: v48
                                field_96: v62.field_0
                                field_112: *(&v62.field_16 as &i128)
                                field_128: *(&v62.field_32 as &i128)
                                field_144: v39
                                field_152: v38
                                field_160: v94
                                field_176: *(&v95 as &i128)
                                field_192: v40
                                field_200: v41
                                field_208: v83
                                field_224: v84
                                field_240: v87
                                field_248: v110
                                field_256: v8
                                field_264: v110
                                field_272: v70
                                field_280: v86
                                field_288: v4
                                field_289: v3
                                field_290: v2
                                field_291: v8 as u8
                                field_292: v37 as u8
                                field_293: v5
                                field_294: v174
                                field_295: v183 ^ 1
                                field_296: v184
                                field_297: v6 as u8
                                field_298: v7 as u8
                                field_299: v10 as u8
                            };
                        }
                    }
                    *(&v11 as &&str) = "internal error: entered unreachable code: other values for --binary are not allowed";
                    *((v142 + 8) as &i64) = 1;
                    *((v142 + 16) as &&char) = &v1;
                    *((v142 + 24) as &i128) = 0;
                    core::panicking::panic_fmt(v142); /* do not return */
                }
            }
            *(&v11 as &&str) = "internal error: entered unreachable code: other values for --nonprintable-notation are not allowed";
            *((v142 + 8) as &i64) = 1;
            *((v142 + 16) as &&char) = &v1;
            *((v142 + 24) as &i128) = 0;
            core::panicking::panic_fmt(v142); /* do not return */
        },
    }
}
