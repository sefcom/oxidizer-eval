fn uu_sort::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u192;  // [bp-0x618], Other Possible Types: void*, struct16, struct56, struct24
    let v1: u128;  // [bp-0x618], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v2: Result<struct56, struct16>;  // [bp-0x618]
    let v3: struct64;  // [bp-0x618]
    let v4: Result<struct28, struct24>;  // [bp-0x618]
    let v5: struct64;  // [bp-0x618]
    let v6: struct64;  // [bp-0x618]
    let v7: std::sys::os_str::bytes::Buf;  // [bp-0x618]
    let v8: u64;  // [bp-0x610]
    let v9: u64;  // [bp-0x610], Other Possible Types: struct_5 *
    let v10: u64;  // [bp-0x608]
    let v11: u64;  // [bp-0x608]
    let v12: u8;  // [bp-0x600]
    let v13: u128;  // [bp-0x5f8]
    let v14: u128;  // [bp-0x5e8]
    let v15: u8;  // [bp-0x5c8]
    let v16: u128;  // [bp-0x5b8]
    let v17: u64;  // [bp-0x5a8]
    let v18: i64;  // [bp-0x598], Other Possible Types: u64, struct16, struct56
    let v19: u64;  // [bp-0x590]
    let v20: u8;  // [bp-0x588]
    let v21: u64;  // [bp-0x588]
    let v22: u64;  // [bp-0x580]
    let v23: u64;  // [bp-0x569]
    let v24: struct16;  // [bp-0x558], Other Possible Types: void*
    let v25: u64;  // [bp-0x550]
    let v26: void*;  // [bp-0x548]
    let v27: u64;  // [bp-0x540]
    let v28: u128;  // [bp-0x538]
    let v29: void*;  // [bp-0x530]
    let v30: void*;  // [bp-0x528], Other Possible Types: u64
    let v31: struct16;  // [bp-0x528]
    let v32: u64;  // [bp-0x520]
    let v33: void*;  // [bp-0x518]
    let v34: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x510]
    let v36: u384;  // [bp-0x510]
    let v40: u64;  // [bp-0x508]
    let v42: u64;  // [bp-0x500]
    let v43: struct16;  // [bp-0x4f8], Other Possible Types: struct25
    let v44: void*;  // [bp-0x4f8]
    let v45: u64;  // [bp-0x4f0]
    let v46: u128;  // [bp-0x4e8]
    let v47: u64;  // [bp-0x4e0]
    let v48: u64;  // [bp-0x4d8]
    let v49: void*;  // [bp-0x4d0]
    let v50: u64;  // [bp-0x4c8]
    let v51: u8;  // [bp-0x4c0]
    let v52: u128;  // [bp-0x4b0]
    let v53: u128;  // [bp-0x4a7]
    let v54: u64;  // [bp-0x490]
    let v55: u64;  // [bp-0x488]
    let v56: u32;  // [bp-0x480]
    let v57: u8;  // [bp-0x47c], Other Possible Types: void*
    let v58: u8;  // [bp-0x47b]
    let v59: u8;  // [bp-0x47a]
    let v60: u8;  // [bp-0x479]
    let v61: u8;  // [bp-0x478]
    let v62: u8;  // [bp-0x477]
    let v63: u8;  // [bp-0x476]
    let v64: u8;  // [bp-0x475]
    let v65: u32;  // [bp-0x474]
    let v66: u8;  // [bp-0x473]
    let v67: u8;  // [bp-0x473]
    let v68: u8;  // [bp-0x471]
    let v69: u8;  // [bp-0x470]
    let v70: u16;  // [bp-0x460], Other Possible Types: alloc::raw_vec::Cap
    let v72: struct64;  // [bp-0x458], Other Possible Types: u128
    let v73: struct24;  // [bp-0x458]
    let v74: struct24;  // [bp-0x458]
    let v75: u192;  // [bp-0x458]
    let v77: u64;  // [bp-0x410]
    let v78: u64;  // [bp-0x408]
    let v79: i64;  // [bp-0x400]
    let v80: Result<struct40, struct16>;  // [bp-0x3f8], Other Possible Types: u64, struct24, struct56, struct16, struct_5 *
    let v81: u64;  // [bp-0x3f8], Other Possible Types: struct24
    let v82: struct24;  // [bp-0x3f8]
    let v83: struct24;  // [bp-0x3f8]
    let v84: u64;  // [bp-0x3f8]
    let v85: u64;  // [bp-0x3f8]
    let v86: struct56;  // [bp-0x3f8], Other Possible Types: u64
    let v87: u64;  // [bp-0x3f8]
    let v88: u128;  // [bp-0x3f0]
    let v91: u64;  // [bp-0x3f0]
    let v92: i64;  // [bp-0x3e8], Other Possible Types: u128
    let v93: u64;  // [bp-0x3e8]
    let v94: u64;  // [bp-0x3e8]
    let v95: u64;  // [bp-0x3e0]
    let v96: void*;  // [bp-0x3d8], Other Possible Types: u128
    let v97: u128;  // [bp-0x3c8]
    let v102: u128;  // [bp-0x130]
    let v103: u64;  // [bp-0x120]
    let v104: u128;  // [bp-0x118]
    let v105: u64;  // [bp-0x108]
    let v106: struct24;  // [bp-0x100]
    let v107: u192;  // [bp-0x100]
    let v108: u64;  // [bp-0xe8]
    let v109: u64;  // [bp-0xe0]
    let v110: u128;  // [bp-0xd8]
    let v111: u128;  // [bp-0xc8]
    let v112: u64;  // [bp-0xb9]
    let v113: u8;  // [bp-0xb1]
    let v117: u128;  // [bp-0x78]
    let v118: u64;  // [bp-0x68]
    let v123: u64;  // r12
    let v126: u64;  // rax
    let v127: u64;  // rax
    let v128: u64;  // rax
    let v130: u64;  // rax
    let v131: u64;  // rdx
    let v133: u64;  // rdx
    let v134: alloc::raw_vec::Cap;  // bl
    let v135: i64;  // rax
    let v136: i64;  // rax
    let v137: i64;  // rax
    let v138: i64;  // rax
    let v139: i64;  // rax
    let v140: i64;  // rax
    let v141: u64;  // rax
    let v142: u64;  // r15
    let v143: u128;  // xmm0
    let v145: i64;  // rax
    let v146: u64;  // rax
    let v147: u64;  // r15
    let v148: i64;  // r14
    let v149: i64;  // rbx
    let v150: u8;  // al
    let v151: u64;  // rax
    let v153: i64;  // r14
    let v154: void*;  // r14
    let v155: u64;  // r15
    let v158: u128;  // xmm0
    let v159: i64;  // rax
    let v160: u8;  // al
    let v161: u128;  // xmm0
    let v162: u64;  // rax
    let v164: void*;  // rsi
    let v165: u64;  // rdx
    let v166: u128;  // xmm0
    let v167: core::option::Option<u32>;  // rax:rax
    let v168: u64;  // [bp-0x618]
    let v170: u120;  // [bp-0x578]
    let v172: u16;  // [bp-0xb3]
    let v173: struct56;  // [bp-0xb0]

    v70 = 2566;
    v57 = 0;
    v65 = 0;
    v44 = 0;
    v45 = 8;
    v46 = 0;
    v56 = 0x110000;
    v48 = 1;
    v49 = 0;
    v54 = 0x3b9aca00;
    v50 = 0x8000000000000000;
    v55 = 32;
    v52 = 0;
    v53 = 0;
    uu_sort::uu_app(&v80);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v80, a0, a1);
    match v2 {
        Err(_) => {
            v80 = v9;
            core::result::Result<T,E>::unwrap(clap_builder::error::Error<F>::print(&v80));
            if (*((v80 + 213) as &i8) & 29) != 12 {
                uucore::mods::error::set_exit_code(2);
            }
        },
        Ok(_) => {
            v17 = *((&v2 as &char + 48) as &i64);
            v16 = v13;
            memcpy(&v15, &v2, 16);
            memcpy(&v2, &v2, 16);
            v57 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "debug") as i8;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v2 as u128, "files0-from") as i8 {
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2 as u128, "files0-from");
                v5 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v80);
                if v5.field_0 as i64 {
                    v80 = struct64 {
                        field_0: v5.field_0
                        field_16: v5.field_16
                        field_32: v13
                        field_48: v14
                    };
                    v73 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v80);
                    v126 = v73.field_0 as i64;
                    *(&v81 as &i128) = *((&v73.field_0 as &char + 8) as &i128);
                    if v126 != 0x8000000000000000 {
                        v28 = *(&v81 as &i128) as u128;
                        v27 = v126;
                        v128 = v28;
                    }
                }
                v30 = 0;
                v32 = 8;
                v33 = 0;
                v77 = v128;
                v78 = v128 + v29 * 24;
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v77);
                if v130 {
                    do {
                        uu_sort::open(v130, v131);
                        if v87 {
                            v123 = v91;
                        }
                        v173 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v91, v94);
                        loop {
                            vvar_2734{stack -1296} = core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug> OrderedDict({0: core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>> OrderedDict({0: 𝜙@8b [((4968740, None), vvar_2199{stack -1296}), ((4968492, None), vvar_2129{stack -1296})]})})
                            <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v36);
                            if v36 as i64 == 0x8000000000000000 {
                                break;
                            }
                            v21 = v42;
                            v18 = v36 as i128 as u128;
                            v1 = core::str::converts::from_utf8(v19, v42);
                            v7 = std::sys::os_str::bytes::Slice::to_owned(core::result::Result<T,E>::expect(&v1), v133);
                            v75 = v0;
                            v31 = alloc::vec::Vec<T,A>::push(&v75);
                        }
                        <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v77);
                    } while (v130);
                }
                *(&v24.field_0 as &i128) = *(&v31.field_0 as &i128);
                v26 = 0;
            } else {
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2 as u128, "files");
                v6 = clap_builder::parser::error::MatchesError::unwrap("files", &v80);
                if v6.field_0 as i64 {
                    v80 = struct64 {
                        field_0: v6.field_0
                        field_16: v6.field_16
                        field_32: v13
                        field_48: v14
                    };
                    v74 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v80);
                    v127 = v74.field_0 as i64;
                    *(&v81 as &i128) = *((&v74.field_0 as &char + 8) as &i128);
                    if v127 != 0x8000000000000000 {
                        v25 = *(&v81 as &i128) as u128;
                        v24 = v127;
                    }
                }
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "human-numeric-sort") as i8 {
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "sort");
                v135 = clap_builder::parser::error::MatchesError::unwrap("sort", &v80);
                if (!v135 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v135 + 8) as &i64), *((v135 + 16) as &i64) as i32, "human-numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "month-sort") as i8 {
                    v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "sort");
                    v136 = clap_builder::parser::error::MatchesError::unwrap("sort", &v80);
                    if (!v136 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v136 + 8) as &i64), *((v136 + 16) as &i64) as i32, "month") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "general-numeric-sort") as i8 {
                        v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "sort");
                        v137 = clap_builder::parser::error::MatchesError::unwrap("sort", &v80);
                        if (!v137 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v137 + 8) as &i64), *((v137 + 16) as &i64) as i32, "general-numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "numeric-sort") as i8 {
                            v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "sort");
                            v138 = clap_builder::parser::error::MatchesError::unwrap("sort", &v80);
                            if (!v138 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v138 + 8) as &i64), *((v138 + 16) as &i64) as i32, "numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "version-sort") as i8 {
                                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "sort");
                                v139 = clap_builder::parser::error::MatchesError::unwrap("sort", &v80);
                                if !v139 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v139 + 8) as &i64), *((v139 + 16) as &i64) as i32, "version") as i8 {
                                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "random-sort") as i8 {
                                        v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "sort");
                                        v140 = clap_builder::parser::error::MatchesError::unwrap("sort", &v80);
                                        if !(v140 && !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v140 + 8) as &i64), *((v140 + 16) as &i64) as i32, "random") as i8)) {
                                            goto LABEL_4bd4cf;
                                        }
                                    }
                                    v80 = uu_sort::get_rand_string();
                                    memcpy(&v69, &v80, 16);
                                    v68 = 1;
                                }
                            }
                        }
                    }
                }
            }
LABEL_4bd4cf:
            v70 = v134;
            v60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "dictionary-order") as i8;
            v61 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "ignore-nonprinting") as i8;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v2 as u128, "parallel") as i8 {
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "parallel");
                v141 = clap_builder::parser::error::MatchesError::unwrap("parallel", &v80);
                if !v141 || (v81 = core::ops::function::FnOnce::call_once(v141), v0 = *(&v91 as &i128) as u128, v81.field_0 as i64 == 0x8000000000000000) {
                    v80 = <T as alloc::slice::hack::ConvertVec>::to_vec("0");
                }
                v72 = v143;
                v47 = v142;
                v48 = v72;
                std::env::set_var("RAYON_NUM_THREADS", &v47);
            }
            v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "buffer-size");
            v80 = struct16 {
                field_0: 0
                field_8: 0x3b9aca00
            };
            v0 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap("buffer-size", &v80), &v80);
            if !v0.field_0 {
                v54 = v8;
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "temporary-directory");
                v145 = clap_builder::parser::error::MatchesError::unwrap("temporary-directory", &v80);
                if !v145 || (v82 = core::ops::function::FnOnce::call_once(*((v145 + 8) as &i64), *((v145 + 16) as &i64)), v1 = *((&v82.field_0 as &char + 8) as &i128) as u128, v82.field_0 as i64 == 0x8000000000000000) {
                    v80 = core::ops::function::FnOnce::call_once();
                } else {
                    v88 = v1;
                }
                vvar_2745{stack -1016} = struct24 OrderedDict({0: 𝜙@64b [((4970256, None), vvar_2428{stack -1016}), ((4970258, None), vvar_2428{stack -1016})], 8: 𝜙@64b [((4970256, None), vvar_2427{stack -1008}), ((4970258, None), vvar_2427{stack -1008})], 16: 𝜙@64b [((4970256, None), vvar_1816{stack -1000}), ((4970258, None), vvar_1816{stack -1000})]})
                v72 = uu_sort::tmp_dir::TmpDirWrapper::new(&v80);
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "compress-program");
                v146 = clap_builder::parser::error::MatchesError::unwrap("compress-program", &v80);
                if v146 {
                    v83 = core::ops::function::FnOnce::call_once(v146);
                    *(&v0 as &i32) = vvar_2091{stack -1008};
                }
                v50 = v147;
                memcpy(&v51, &v168, 16);
                v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "batch-size");
                v148 = clap_builder::parser::error::MatchesError::unwrap("batch-size", &v80);
                if v148 {
                    v79 = v148;
                    v34 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v79 + 8) as &i64), *((v79 + 16) as &i64));
                    if let Ok(_) = v34 {
                        if !(v40 < 2) {
                            goto LABEL_4bdbec;
                        }
                        v0 = uucore::util_name();
                        v9 = v133;
                        eprint!("{}: ", &v0);
                        eprintln!("invalid --batch-size argument '{}'", &v79);
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("minimum --batch-size argument is '2'");
                        v80 = struct28 {
                            field_0: v0.field_0
                            field_16: v10
                            field_24: 2
                        };
                        alloc::boxed::Box<T>::new(&v80);
                        goto LABEL_4be35a;
                    }
                    if *((&v34 as &char + 1) as &i8) == 2 {
                        v0 = uucore::util_name();
                        v9 = v133;
                        eprint!("{}: ", &v0);
                        v0 = 0;
                        v9 = *((v79 + 8) as &i128) as u128;
                        v12 = 1;
                        eprintln!("--batch-size argument {} too large", &v0);
                        v0 = uu_sort::get_rlimit();
                        if !v0.field_0 {
                            v30 = v9;
                            v18 = &v30;
                            v19 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v80 = "maximum --batch-size argument with current rlimit is ";
                            v88 = 1;
                            v96 = 0;
                            v92 = &v18;
                            v95 = 1;
                            v81 = core::option::Option<T>::map_or_else(v133);
                            goto LABEL_4bdb89;
                        }
                    } else {
                        v0 = 0;
                        v9 = *((v79 + 8) as &i128) as u128;
                        v12 = 1;
                        v18 = &v0;
                        v19 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v80 = "invalid --batch-size argument ";
                        v88 = 1;
                        v96 = 0;
                        v92 = &v18;
                        v95 = 1;
                        v81 = core::option::Option<T>::map_or_else(v133);
LABEL_4bdb89:
                        v118 = *((v149 + 16) as &i64);
                        v117 = *(v149 as &i128);
                        v80 = struct28 {
                            field_0: *(v149 as &i128)
                            field_16: v118
                            field_24: 2
                        };
                        alloc::boxed::Box<T>::new(&v80);
                        goto LABEL_4be35a;
                    }
                } else {
LABEL_4bdbec:
                    v150 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "zero-terminated") as i8 ? 0 : 10);
                    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "merge") as i8;
                    v66 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v2 as u128, "check") as i8;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "check-silent") as i8 {
                        v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "check");
                        clap_builder::parser::error::MatchesError::unwrap("check", &v80);
                    }
                    v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "ignore-case") as i8;
                    v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "ignore-leading-blanks") as i8;
                    v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "reverse") as i8;
                    v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "stable") as i8;
                    v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v2 as u128, "unique") as i8;
                    if v26 {
                        if !(v26 != 1 && v67) {
                            goto LABEL_4bdeb1;
                        }
                        v0 = 1;
                        v9 = *((v25 + 32) as &i128) as u128;
                        v12 = 1;
                        v18 = &v0;
                        v19 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v80 = "extra operand ";
                        v88 = 2;
                        v96 = 0;
                        v92 = &v18;
                        v95 = 1;
                        v80 = core::option::Option<T>::map_or_else(v133);
                        v80 = struct28 {
                            field_0: v102
                            field_16: v103
                            field_24: 2
                        };
                        alloc::boxed::Box<T>::new(&v80);
                        goto LABEL_4be35a;
                    } else {
                        v106 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                        v80 = v107;
                        v24 = alloc::vec::Vec<T,A>::push(&v80);
LABEL_4bdeb1:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v84, &v2 as u128, "field-separator");
                        v153 = clap_builder::parser::error::MatchesError::unwrap("field-separator", &v84);
                        v85 = v84;
                        if v153 {
                            v80 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v153 + 8) as &i64), *((v153 + 16) as &i64));
                            match v80 {
                                Err(_) => {
                                    uu_sort::uumain::uumain::{{closure}}(*((v153 + 8) as &i64), *((v153 + 16) as &i64));
                                },
                                Ok(_) => {
                                    v154 = v88;
                                    v155 = v93;
                                    if ((v155 == 1) as u8 as u8 | <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v154, v155 as u32, "\\0") as i8) == 1 {
                                        v81 = core::slice::iter::Iter<u8> {
                                            ptr: core::ptr::non_null::NonNull<u8> {
                                                pointer: v154
                                            }
                                            end_or_len: v154 + 1
                                            _marker: core::marker::PhantomData<&u8> { }
                                        };
                                        v167 = core::str::validations::next_code_point(&v81) as u128;
                                        if !(v167 as i32 && v133 as u32 != 0x110000) {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        v56 = v133 as u32;
                                        v85 = v86;
                                        goto LABEL_4bdfa8;
                                    } else {
                                        v0 = 0;
                                        v9 = v154;
                                        v10 = v155;
                                        v12 = 1;
                                        v18 = &v0;
                                        v19 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v80 = "separator must be exactly one character long: ";
                                        v88 = 1;
                                        v96 = 0;
                                        v92 = &v18;
                                        v95 = 1;
                                        v80 = core::option::Option<T>::map_or_else(v133);
                                        v80 = struct28 {
                                            field_0: v104
                                            field_16: v105
                                            field_24: 2
                                        };
                                        alloc::boxed::Box<T>::new(&v80);
                                    }
                                },
                            }
LABEL_4be35a:
                            v123 = v151;
                        } else {
LABEL_4bdfa8:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v81 as u64, &v2 as u128, "key");
                            v3 = clap_builder::parser::error::MatchesError::unwrap("key", &v81 as u64);
                            if v3.field_0 as i64 {
                                v158 = v3.field_0;
                                v97 = v14;
                                v96 = v13;
                                v92 = v3.field_16;
                                v81 = v158;
                                loop {
                                    v159 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v81 as u64);
                                    if !v159 {
                                        break;
                                    }
                                    v18 = uu_sort::FieldSelector::parse(*((v159 + 8) as &i64), *((v159 + 16) as &i64), &v43);
                                    v160 = *((&v18.field_64 as &char + 7) as &i8);
                                    if v160 == 2 {
                                        v123 = v108;
                                        return v123;
                                    }
                                    v112 = v23;
                                    v161 = *(&v18.field_16 as &i128);
                                    v111 = *(&v170 as &i128) as u128;
                                    v110 = v161;
                                    v108 = v123;
                                    v109 = v19;
                                    v113 = v160;
                                    if v172 as i8 == 5 && !v68 {
                                        v18 = uu_sort::get_rand_string();
                                        memcpy(&v69, &v18, 16);
                                        v68 = 1;
                                    }
                                    v43 = alloc::vec::Vec<T,A>::push(&v108);
                                }
                            }
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v2 as u128, "key") as i8 {
                                v18 = struct17 {
                                    field_0: 1
                                    field_8: 1
                                    field_16: *(&v58 as &i32) as i8
                                };
                                v10 = 2;
                                v10 = v11 & -0x100 | 2;
                                v86 = uu_sort::FieldSelector::new(&v18, &v3, *(&v70 as &i32) as u32 as u64 * 0x10000000000 | v20 as u64 | v63 as u64 * 0x100000000);
                                v0 = core::result::Result<T,E>::unwrap(&v86);
                                v43 = alloc::vec::Vec<T,A>::push(&v0);
                            }
                            v0 = v25;
                            v9 = v25 + v26 * 24;
                            do {
                                if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0) {
                                    v81 as u640 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2 as u128, "output");
                                    clap_builder::parser::error::MatchesError::unwrap("output", &v81 as u640);
                                    v4 = uu_sort::Output::new(v164, v165);
                                    v123 = v9;
                                    if let Ok(_) = v4 {
                                        v18 = v4 as i64;
                                        v19 = v123;
                                        v20 = v10;
                                        v22 = *((&v4 as &char + 24) as &i64);
                                        v43 = uu_sort::GlobalSettings::init_precomputed();
                                        v166 = *(&v18 as &i128);
                                        v92 = *(&v20 as &i128) as u128;
                                        v81 = v166;
                                        uu_sort::exec(v25, v26, &v43, &v81 as u640, &v72);
                                        uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(&v72);
                                    }
                                }
                            } while ((uu_sort::open(v162, v133), v123 = v88, !v86.field_0));
                        }
                    }
                }
            }
        },
    }
    return v123;
}
