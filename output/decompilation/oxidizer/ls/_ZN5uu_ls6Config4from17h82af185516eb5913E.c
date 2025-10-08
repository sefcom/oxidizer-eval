fn uu_ls::Config::from(a0: i64, a1: &struct56) -> u64 {
    let v0: u8;  // [bp-0x416]
    let v1: u8;  // [bp-0x415]
    let v2: u32;  // [sp-0x414]
    let v3: u32;  // [sp-0x410]
    let v4: u8;  // [bp-0x40b]
    let v5: u8;  // [bp-0x40a]
    let v6: u8;  // [bp-0x409]
    let v7: u32;  // [sp-0x408]
    let v8: u8;  // [bp-0x403]
    let v9: u8;  // [bp-0x402]
    let v10: u8;  // [bp-0x401]
    let v11: u8;  // [bp-0x400]
    let v12: u8;  // [bp-0x3ff]
    let v13: u8;  // [bp-0x3fe]
    let v14: u8;  // [bp-0x3fd]
    let v15: u8;  // [bp-0x3fc]
    let v16: u8;  // [bp-0x3fc]
    let v17: u8;  // [bp-0x3fc]
    let v18: u64;  // [bp-0x3f8]
    let v19: u32;  // [bp-0x3ec]
    let v20: u8;  // [bp-0x3ec]
    let v21: u8;  // [bp-0x3ec]
    let v22: u32;  // [bp-0x3e8]
    let v23: u8;  // [bp-0x3e8]
    let v24: u32;  // [bp-0x3e4]
    let v25: u64;  // [bp-0x3e0]
    let v26: struct16;  // [bp-0x3e0]
    let v27: u64;  // [bp-0x3d8]
    let v28: u32;  // [bp-0x3d0]
    let v29: u8;  // [bp-0x3d0]
    let v30: u16;  // [bp-0x3ca]
    let v31: struct16;  // [bp-0x3c8]
    let v32: Result<struct24, struct24>;  // [bp-0x3c8]
    let v33: u64;  // [bp-0x3c0]
    let v34: void*;  // [bp-0x3b8], Other Possible Types: u64
    let v35: i64;  // [bp-0x3b0]
    let v36: u64;  // [bp-0x3a8]
    let v37: u64;  // [bp-0x3a0]
    let v39: struct17;  // [bp-0x398], Other Possible Types: struct48, u64
    let v40: Result<struct40, struct16>;  // [bp-0x398], Other Possible Types: u64
    let v41: Result<struct40, struct16>;  // [bp-0x398]
    let v42: struct56;  // [bp-0x398]
    let v43: struct56;  // [bp-0x398]
    let v44: u128;  // [bp-0x398]
    let v45: u64;  // [bp-0x398]
    let v46: Result<struct40, struct16>;  // [bp-0x398]
    let v47: struct16;  // [bp-0x398]
    let v48: struct24;  // [bp-0x398], Other Possible Types: u192
    let v49: i64;  // [bp-0x390], Other Possible Types: void*, u128
    let v50: void*;  // [bp-0x388], Other Possible Types: u64
    let v51: void*;  // [bp-0x380], Other Possible Types: int, &str, u64
    let v52: &str;  // [bp-0x380]
    let v53: iNone;  // [bp-0x370], Other Possible Types: &str, u128
    let v54: void*;  // [bp-0x368]
    let v55: &str;  // [bp-0x360], Other Possible Types: u128
    let v56: void*;  // [bp-0x350], Other Possible Types: &str
    let v57: u128;  // [bp-0x348]
    let v58: &str;  // [bp-0x340]
    let v59: u128;  // [bp-0x338]
    let v60: &str;  // [bp-0x330]
    let v61: u128;  // [bp-0x328]
    let v62: &str;  // [bp-0x320]
    let v63: u64;  // [bp-0x318]
    let v64: &str;  // [bp-0x310], Other Possible Types: void*
    let v65: u128;  // [bp-0x308]
    let v66: &str;  // [bp-0x300]
    let v67: u128;  // [bp-0x2f8]
    let v68: u128;  // [bp-0x2e8]
    let v69: u128;  // [bp-0x2e0]
    let v70: u64;  // [bp-0x2d8]
    let v71: u64;  // [bp-0x2d0]
    let v72: u32;  // [bp-0x2c8]
    let v73: u32;  // [bp-0x2c4]
    let v74: u32;  // [bp-0x2c0]
    let v75: u32;  // [bp-0x2bc]
    let v77: struct16;  // [bp-0x2b8]
    let v78: struct16;  // [bp-0x2b8]
    let v79: struct16;  // [bp-0x2b8]
    let v80: struct16;  // [bp-0x2b8]
    let v83: Result<struct50, struct10>;  // [bp-0x2a0], Other Possible Types: struct56
    let v84: struct48;  // [bp-0x2a0]
    let v85: struct24;  // [bp-0x2a0], Other Possible Types: struct64
    let v86: u64;  // [bp-0x2a0]
    let v87: u64;  // [bp-0x2a0]
    let v88: &str;  // [bp-0x2a0], Other Possible Types: struct64
    let v89: struct32;  // [bp-0x2a0]
    let v90: u64;  // [bp-0x290]
    let v91: u64;  // [bp-0x290]
    let v92: &str;  // [bp-0x290]
    let v93: u64;  // [bp-0x280]
    let v94: u64;  // [bp-0x280]
    let v95: &str;  // [bp-0x280]
    let v96: &str;  // [bp-0x270]
    let v97: i8;  // [bp-0x260]
    let v98: struct24;  // [sp-0x200]
    let v99: u64;  // [bp-0x1f8]
    let v100: u64;  // [bp-0x1f0]
    let v101: struct24;  // [bp-0x1e8]
    let v102: u64;  // [bp-0x1e0]
    let v103: u64;  // [bp-0x1d8]
    let v104: struct24;  // [sp-0x1d0]
    let v105: u64;  // [bp-0x1c8]
    let v106: u64;  // [bp-0x1c0]
    let v107: u128;  // [bp-0x1b8]
    let v108: u64;  // [bp-0x1b8]
    let v109: u64;  // [bp-0x1a8]
    let v110: struct24;  // [bp-0x198]
    let v111: u128;  // [bp-0x180]
    let v112: u128;  // [bp-0x170]
    let v113: u128;  // [bp-0x160]
    let v114: u64;  // [bp-0x150]
    let v115: alloc::string::String;  // [bp-0x148], Other Possible Types: u64
    let v116: void*;  // [bp-0x148], Other Possible Types: u64
    let v117: u64;  // [bp-0x140]
    let v118: u64;  // [bp-0x138]
    let v119: u8;  // [bp-0x130]
    let v120: iNone;  // [bp-0xa0]
    let v121: u8;  // [bp-0x68]
    let v123: u8;  // al
    let v124: u8;  // bpl
    let v125: void*;  // rcx
    let v126: u64;  // rbp
    let v127: i64;  // r14
    let v128: i64;  // rax
    let v129: u8;  // r12b
    let v130: u32;  // r12d
    let v131: i64;  // rax
    let v132: i64;  // r13
    let v133: u32;  // ebx
    let v134: u8;  // bpl
    let v135: i32;  // ebp
    let v136: u64;  // r15
    let v137: u64;  // rdx
    let v138: u8;  // bpl
    let v139: u32;  // ebp
    let v140: u8;  // bl
    let v141: u32;  // eax
    let v142: u64;  // r12
    let v143: u64;  // rcx
    let v146: u16;  // dx
    let v147: u32;  // ebp
    let v148: u64;  // rbp
    let v149: i64;  // rax
    let v150: u32;  // eax
    let v151: u128;  // xmm0
    let v152: iNone;  // xmm1
    let v153: u128;  // xmm2
    let v154: core::option::Option<char>;  // r15
    let v155: u64;  // rdx
    let v156: u128;  // xmm0
    let v157: u128;  // xmm1
    let v158: iNone;  // xmm2
    let v159: core::option::Option<char>;  // r15
    let v160: u64;  // r12
    let v161: u64;  // rax
    let v162: u64;  // rsi
    let v163: u64;  // rax
    let v164: u64;  // rcx
    let v165: u64;  // rax
    let v166: u64;  // rcx
    let v167: u64;  // rbx
    let v168: u8;  // r14b
    let v170: u64;  // rcx
    let v171: u32;  // ecx
    let v172: u32;  // eax
    let v173: void*;  // rbp
    let v174: i64;  // rax
    let v175: u64;  // rsi
    let v176: void*;  // rdi
    let v177: u8;  // al
    let v178: u8;  // al
    let v179: u8;  // r13b
    let v180: iNone;  // xmm0
    let v181: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v182: u64;  // [bp-0x2a0]

    v123 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "context");
    v39 = uu_ls::extract_format(a1);
    v6 = uu_ls::extract_files(a1);
    v0 = 1;
    if v124 != 1 {
        v116 = v125;
        v88 = "g";
        v92 = "o";
        v95 = "numeric-uid-gid";
        v96 = "full-time";
        v44 = &v88 as u64;
        *(&v49 as &&char) = &v97;
        v50 = a1;
        v51 = 0;
        v54 = 0;
        v0 = 1;
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::adapters::flatten::FlattenCompat<I,U>::iter_try_fold(&v44, &v116) as i32, a1) {
            v85 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, "1");
            if v85.field_0 {
                v50 = v90;
                v44 = *(&v85.field_0 as &i128);
            }
LABEL_592bad:
            v0 = v124;
            goto LABEL_592bad;
        }
    }
    v126 = uu_ls::extract_sort(a1);
    v12 = uu_ls::extract_time(a1);
    v17 = uu_ls::extract_color(a1);
    v11 = uu_ls::extract_hyperlink(a1);
    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
    v127 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v40);
    v18 = a1;
    v14 = v123;
    v13 = v126;
    if v127 {
        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "block-size");
        v128 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v40);
        core::option::unwrap(v128);
        v129 = 1;
        v130 = a1 & -0x100 | 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v128 + 8) as &i64), *((v128 + 16) as &i64), "si") {
            v130 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v18, "si");
        }
        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v18, "block-size");
        v131 = clap_builder::parser::error::MatchesError::unwrap("block-size", &v40);
        core::option::unwrap(v131);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v131 + 8) as &i64), *((v131 + 16) as &i64), "human-readable") {
            v132 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v18, "kibibytes");
            v133 = v130 + 1;
            v134 = 1;
            v135 = v126 & -0x100 | 1;
        } else {
            v136 = v18;
LABEL_592d5a:
            v135 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v136, "human-readable");
            v132 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v136, "kibibytes");
            if !v129 {
                v133 = v135;
            }
        }
    } else {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "si");
        v136 = a1;
        goto LABEL_592d5a;
    }
    v104 = std::env::var_os("BLOCKSIZE");
    v98 = std::env::var_os("BLOCK_SIZE");
    v101 = std::env::var_os("LS_BLOCK_SIZE");
    v110 = std::env::var_os("POSIXLY_CORRECT");
    v75 = v133;
    if v127 {
        v48 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v127 + 8) as &i64), *((v127 + 16) as &i64));
        goto LABEL_592e0e;
    }
    if v101.field_0 != 0x8000000000000000 {
        v26 = struct16 {
            field_0: v102
            field_8: v101.field_0
        };
        v137 = v103;
        v141 = v26.field_0 & -0x100 | 1;
        v7 = v141;
        v3 = 0;
        goto LABEL_592ee8;
    }
    if v98.field_0 != 0x8000000000000000 {
        v26 = struct16 {
            field_0: v99
            field_8: v98.field_0
        };
        v137 = v100;
        v141 = v26.field_0 & -0x100 | 1;
        v3 = v141;
        v7 = 0;
LABEL_592ee8:
        v2 = v141 & -0x100 | 1;
        v139 = v135 & -0x100 | v134 | v129;
        if !v134 && !v129 {
            goto LABEL_592ef9;
        }
    } else if v104.field_0 == 0x8000000000000000 {
        v48 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(0x1, 0);
LABEL_592e0e:
        v27 = v48;
        v25 = *((&v48 as &char + 8) as &i64);
        v137 = v50;
        v3 = *((&v48 as &char + 8) as &i64) & -0x100 | 1;
        v7 = v3 & 0xffffffffffffff00 | 1;
        v2 = v7 & -0x100 | 1;
        v139 = v135 & -0x100 | v134 | v129;
        if !v134 && !v129 {
            goto LABEL_592ef9;
        }
    } else {
        v26 = struct16 {
            field_0: v105
            field_8: v104.field_0
        };
        v137 = v106;
        v3 = v26.field_0 & -0x100 | 1;
        v2 = 0;
        v7 = v3 & -0x100 | 1;
        v140 = 1;
        v139 = v135 & -0x100 | v134 | v129;
        if !v134 && !v129 {
LABEL_592ef9:
            if v137 {
                v32 = alloc::string::String::from_utf8_lossy(v25, v137);
                v142 = v18;
                v89 = uucore::features::parser::parse_size::parse_size_u64(v33, v34);
                if v89.field_0 as i32 == 4 {
                    v143 = *((&v89.field_0 as &char + 8) as &i64);
                    if v140 {
                        v37 = v143;
                        v36 = 1;
                        goto LABEL_5930d7;
                    } else {
                        v36 = v143;
                        v37 = v143;
                        goto LABEL_5930d7;
                    }
                } else if v127 {
                    v115 = <alloc::string::String as core::clone::Clone>::clone(v127);
                    v51 = v118;
                    v49 = *(&v115.vec.buf.inner.cap as &i128);
                    v39 = 9223372036854775811;
                    *((v35 + 8) as &u64) = alloc::boxed::Box<T>::new(&v39) as u64;
                    *((v35 + 16) as &&u8) = &g_6869e8;
                    *(v35 as &i64) = 0x8000000000000000;
                    goto LABEL_0x5942fc;
                }
            }
        }
    }
    v36 = 1;
    v142 = v18;
LABEL_5930d7:
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "author");
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "no-group") {
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "o");
        v24 = v24 & -0x100 | v24 ^ 1;
    }
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "g");
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "numeric-uid-gid");
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v142, "width");
    v83 = uu_ls::parse_width(clap_builder::parser::error::MatchesError::unwrap("width", &v41));
    v146 = *((&v83 as &char + 8) as &i16);
    if let Ok(_) = v83 {
        v180 = *((&v83 as &char + 10) as &i128);
        v39 = struct48 {
            field_0: v83 as i64
            field_8: v146
            field_24: <UNKNOWN>
            field_32: <UNKNOWN>
        };
        v149 = alloc::boxed::Box<T>::new(&v39) as u64;
        goto LABEL_593227;
    }
    v30 = v146;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "hide-control-chars") {
        v138 = 1;
        v147 = v139 & -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "show-control-chars") {
            std::io::stdio::stdout();
            v148 = std::sys::io::is_terminal::isatty::is_terminal();
            v147 = v148 & -0x100 | v148 ^ 1;
        }
    }
    v22 = uu_ls::extract_quoting_style(v142, v138);
    v4 = uu_ls::extract_indicator_style(v142);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "dired");
    if !((v1 ^ 1) & v0 != 1) {
        v84 = uu_ls::parse_time_style(v142);
        v115 = *((&v84.field_0 as &char + 8) as &i128);
        v118 = v84.field_24;
        if v84.field_0 as i64 == 9223372036854775814 {
            v19 = v147;
            v107 = v115;
            v109 = v118;
            goto LABEL_5933e0;
        } else {
            v39 = struct48 {
                field_0: v84.field_0 as i64
                field_8: v115
                field_24: v118
                field_32: *(&v84.field_32 as &i128)
            };
            v149 = alloc::boxed::Box<T>::new(&v39) as u64;
LABEL_593227:
            *((v35 + 8) as &unsigned long) = v149;
            *((v35 + 16) as &&u8) = &g_6869e8;
            *(v35 as &i64) = 0x8000000000000000;
        }
    } else {
        v19 = v147;
        v108 = 9223372036854775810;
LABEL_5933e0:
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v142, "ignore-backups") {
            glob::Pattern::new(&v41, "*~");
            v83 = core::result::Result<T,E>::unwrap(&v41, "src/uu/ls/src/ls.rs");
            v77 = alloc::vec::Vec<T,A>::push(&v83, "src/uu/ls/src/ls.rs");
            glob::Pattern::new(&v41, ".*~");
            v83 = core::result::Result<T,E>::unwrap(&v41, "src/uu/ls/src/ls.rs");
            v78 = alloc::vec::Vec<T,A>::push(&v83, "src/uu/ls/src/ls.rs");
        }
        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v142, "ignore");
        v85 = clap_builder::parser::error::MatchesError::unwrap("ignore", &v42);
        v5 ^= 1;
        v150 = v22;
        v28 = v150 >> 8;
        v74 = v150 >> 16;
        v151 = v85.field_0;
        v152 = v85.field_16;
        v153 = v85.field_32;
        v55 = v85.field_48;
        v53 = v153;
        v51 = v152;
        v49 = v151;
        v57 = v111;
        v59 = v112;
        v61 = v113;
        v63 = v114;
        v65 = v111;
        v67 = v112;
        v68 = v113;
        v70 = v114;
        v40 = 1;
        v56 = 0;
        v64 = 0;
        v86 = v182;
        loop {
            v154 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v40) as u64;
            if !v154 {
                break;
            }
            uucore::features::parser::parse_glob::from_str(&v120, *((v154 + 8) as &i64), *((v154 + 16) as &i64));
            if v120 as i64 != 0x8000000000000000 {
                v79 = alloc::vec::Vec<T,A>::push(&v120, "src/uu/ls/src/ls.rs");
            } else {
                v115 = uucore::util_name();
                v117 = v155;
                eprint!("{}: warning: ", &v115);
                v116 = 0;
                v117 = *((v154 + 8) as &i64);
                v118 = *((v154 + 16) as &i64);
                v119 = 1;
                eprintln!("Invalid pattern for ignore: {}", &v116);
                v86 = v87;
                v90 = v91;
                v93 = v94;
            }
        }
        if v6 == 2 {
            v43 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v18, "hide");
            v88 = clap_builder::parser::error::MatchesError::unwrap("hide", &v43);
            v156 = v88.field_0;
            v157 = v88.field_16;
            v158 = v88.field_32;
            v55 = v88.field_48;
            v53 = v158;
            v51 = v157;
            v49 = v156;
            v57 = v111;
            v59 = v112;
            v61 = v113;
            v63 = v114;
            v65 = v111;
            v67 = v112;
            v68 = v113;
            v70 = v114;
            v40 = 1;
            v56 = 0;
            v64 = 0;
            loop {
                v159 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v40) as u64;
                if !v159 {
                    break;
                }
                uucore::features::parser::parse_glob::from_str(&v121, *((v159 + 8) as &i64), *((v159 + 16) as &i64));
                if *(&v121 as &i64) != 0x8000000000000000 {
                    v80 = alloc::vec::Vec<T,A>::push(&v121, "src/uu/ls/src/ls.rs");
                } else {
                    v115 = uucore::util_name();
                    v117 = v155;
                    eprint!("{}: warning: ", &v115);
                    v116 = 0;
                    v117 = *((v159 + 8) as &i64);
                    v118 = *((v159 + 16) as &i64);
                    v119 = 1;
                    eprintln!("Invalid pattern for hide: {}", &v116);
                    v86 = v87;
                }
            }
        }
        v160 = v18;
        v161 = uu_ls::Config::from::{{closure}}(v160, "zero");
        v49 = 0;
        v50 = 9;
        v51 = "x";
        v53 = "C";
        v55 = "m";
        v56 = "long";
        v58 = "o";
        v60 = "g";
        v62 = "numeric-uid-gid";
        v64 = "1";
        v66 = "format";
        v40 = v160;
        v162 = ((core::iter::traits::iterator::Iterator::reduce(&v40) & 1) ? v155 : 0);
        v163 = uu_ls::Config::from::{{closure}}(v160, "zero");
        v49 = 0;
        v50 = 1;
        v51 = "color";
        v40 = v160;
        v164 = ((core::iter::traits::iterator::Iterator::reduce(&v40) & 1) ? v155 : 0);
        v165 = uu_ls::Config::from::{{closure}}(v160, "zero");
        v49 = 0;
        v50 = 2;
        v51 = "hide-control-chars";
        v53 = "show-control-chars";
        v40 = v160;
        v166 = ((core::iter::traits::iterator::Iterator::reduce(&v40) & 1) ? v155 : 0);
        v167 = uu_ls::Config::from::{{closure}}(v160, "zero");
        v49 = 0;
        v50 = 4;
        v52 = "quoting-style";
        v53 = "quote-name";
        v55 = "escape";
        v56 = "literal";
        v45 = v160;
        v168 = v15 & v163 <= v164;
        v170 = ((core::iter::traits::iterator::Iterator::reduce(&v45) & 1) ? v155 : 0);
        if v168 {
            lscolors::LsColors::from_env(&v45);
            if v45 == 0x8000000000000000 {
                v86 = <lscolors::LsColors as core::default::Default>::default();
            } else {
                memcpy(&v86, &v45, 160);
            }
            memcpy(&v116, &v86, 160);
            if !v1 {
                goto LABEL_593e99;
            }
        } else {
            v116 = 0x8000000000000000;
            if !v1 {
LABEL_593e99:
                v172 = (!uu_ls::dired::is_dired_arg_present() ? (v161 > v162 ? 2 - (v0 == 1) : v0) : 1);
                v15 = v172;
LABEL_593ec0:
                v0 = 3;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "dereference") {
                    v0 = 2;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "dereference-command-line") {
                        v0 = 1;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "dereference-command-line-symlink-to-dir") {
                            v0 = ~(clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "directory")) & v4 != 3 & v16 != 1;
                        }
                    }
                }
                if !v168 {
                    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v160, "tabsize");
                    v174 = clap_builder::parser::error::MatchesError::unwrap("tabsize", &v46);
                    if v174 {
                        v181 = core::num::<impl usize>::from_ascii_radix(&v46, *((v174 + 8) as &i64), *((v174 + 16) as &i64));
                    }
                    v173 = ((core::option::Option<T>::or_else(v176, v175) & 1) ? v155 : 8);
                }
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "recursive");
                v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "reverse");
                v34 = 0;
                *(&v31.field_0 as &i128) = *(&v80.field_0 as &i128);
                v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "directory");
                memcpy(&v86, &v116, 160);
                v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "inode");
                v177 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "size");
                v73 = (v167 > v170 ? v19 | v165 > v166 : v29);
                v72 = (v167 <= v170 ? v23 : 3);
                v178 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "group-directories-first");
                v179 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "zero") ? 0 : 10);
                v50 = 0;
                *(&v47.field_0 as &i128) = *(&v31.field_0 as &i128);
                memcpy(&v46 as u8, &v86, 160);
                v69 = v107;
                v71 = v109;
                memcpy(v35, &v46, 208);
                *((v35 + 208) as &u64) = v36;
                *((v35 + 216) as &u64) = v37;
                *((v35 + 224) as &void*) = v173;
                *((v35 + 232) as &u8) = v10;
                *((v35 + 233) as &u8) = v24;
                *((v35 + 234) as &u8) = v5;
                *((v35 + 235) as &u8) = v9;
                *((v35 + 236) as &u16) = v30;
                *((v35 + 238) as &u8) = v23;
                *((v35 + 239) as &u8) = v21;
                *((v35 + 240) as &u8) = v29;
                *((v35 + 241) as &u8) = v8;
                *((v35 + 242) as &u8) = v177;
                *((v35 + 243) as &u8) = v14;
                *((v35 + 244) as &i8) = 0;
                *((v35 + 245) as &u8) = v178;
                *((v35 + 246) as &u8) = v1;
                *((v35 + 247) as &u8) = v11;
                *((v35 + 248) as &u8) = v6;
                *((v35 + 249) as &u8) = v75;
                *((v35 + 250) as &u8) = v0;
                *((v35 + 251) as &u8) = v12;
                *((v35 + 252) as &u8) = v72;
                *((v35 + 253) as &u8) = v73;
                *((v35 + 254) as &u8) = v74;
                *((v35 + 255) as &u8) = v4;
                *((v35 + 0x100) as &u8) = v15;
                *((v35 + 257) as &u8) = v13;
                *((v35 + 258) as &u8) = v179;
                return a0;
            }
        }
        v15 = v171 & -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v160, "zero") {
            goto LABEL_593ec0;
        }
        v39 = 9223372036854775812;
        *((v35 + 8) as &u64) = alloc::boxed::Box<T>::new(&v39) as u64;
        *((v35 + 16) as &&u8) = &g_6869e8;
        *(v35 as &i64) = 0x8000000000000000;
    }
    return a0;
}
