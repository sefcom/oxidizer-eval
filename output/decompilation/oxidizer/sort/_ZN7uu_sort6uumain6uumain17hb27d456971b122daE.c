fn uu_sort::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: alloc::string::String;  // [bp-0x658], Other Possible Types: struct24, struct64, struct56, void*, u64
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x658], Other Possible Types: struct24, struct16
    let v2: u128;  // [bp-0x658]
    let v3: u64;  // [bp-0x658]
    let v4: Result<struct28, struct24>;  // [bp-0x658]
    let v5: u128;  // [bp-0x658]
    let v6: u64;  // [bp-0x650]
    let v7: i64;  // [bp-0x650], Other Possible Types: u64
    let v8: i64;  // [bp-0x648], Other Possible Types: u64
    let v10: u8;  // [bp-0x640]
    let v11: iNone;  // [bp-0x638]
    let v12: iNone;  // [bp-0x628]
    let v13: struct56;  // [bp-0x618]
    let v14: struct16;  // [bp-0x5d8], Other Possible Types: u64
    let v15: u128;  // [bp-0x5d0]
    let v16: void*;  // [bp-0x5c8]
    let v17: struct16;  // [bp-0x5c0], Other Possible Types: void*
    let v18: u64;  // [bp-0x5b8]
    let v19: void*;  // [sp-0x5b0]
    let v20: alloc::string::String;  // [bp-0x5a8], Other Possible Types: struct16, struct17, struct56, u64
    let v22: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug>;  // [bp-0x5a8]
    let v23: u64;  // [bp-0x5a0]
    let v24: u64;  // [bp-0x5a0]
    let v25: u8;  // [bp-0x598]
    let v27: i64;  // [bp-0x598]
    let v28: u64;  // [bp-0x590]
    let v29: u64;  // [bp-0x579]
    let v30: u8;  // [bp-0x571]
    let v31: void*;  // [bp-0x570], Other Possible Types: u64
    let v32: iNone;  // [bp-0x56f]
    let v33: u128;  // [bp-0x568]
    let v34: u64;  // [bp-0x568]
    let v35: void*;  // [bp-0x560], Other Possible Types: u64
    let v36: struct25;  // [bp-0x558], Other Possible Types: struct16
    let v37: void*;  // [bp-0x558]
    let v38: u64;  // [bp-0x550]
    let v39: u128;  // [bp-0x548]
    let v40: struct24;  // [bp-0x540]
    let v41: u64;  // [bp-0x538]
    let v42: void*;  // [bp-0x530]
    let v43: u64;  // [bp-0x528]
    let v44: iNone;  // [bp-0x520]
    let v45: u128;  // [bp-0x510]
    let v46: u128;  // [bp-0x507]
    let v47: u64;  // [bp-0x4f0]
    let v48: u64;  // [bp-0x4e8]
    let v49: u32;  // [bp-0x4e0]
    let v50: void*;  // [bp-0x4dc], Other Possible Types: u8
    let v51: u8;  // [bp-0x4db]
    let v52: u8;  // [bp-0x4da]
    let v53: u8;  // [bp-0x4d9]
    let v54: u8;  // [bp-0x4d8]
    let v55: u8;  // [bp-0x4d7]
    let v56: u8;  // [bp-0x4d6]
    let v57: u8;  // [bp-0x4d5]
    let v58: u32;  // [bp-0x4d4]
    let v59: u8;  // [bp-0x4d3]
    let v60: u8;  // [bp-0x4d3]
    let v61: u8;  // [bp-0x4d1]
    let v62: u8;  // [bp-0x4d1]
    let v63: struct24;  // [bp-0x4d1]
    let v64: u8;  // [bp-0x4d1]
    let v65: u8;  // [bp-0x4c0]
    let v67: iNone;  // [bp-0x4b8]
    let v68: i64;  // [bp-0x4a8]
    let v69: u64;  // [bp-0x4a0]
    let v70: u64;  // [bp-0x498]
    let v71: u64;  // [bp-0x490]
    let v72: i64;  // [bp-0x488]
    let v73: u64;  // [bp-0x480]
    let v74: Result<struct40, struct16>;  // [bp-0x478]
    let v75: core::slice::iter::Iter<u8>;  // [sp-0x478], Other Possible Types: std::path::PathBuf, struct16, struct24, struct_10 *, struct56, struct28, Result<struct40, struct16>, u8
    let v76: alloc::string::String;  // [bp-0x478]
    let v77: struct24;  // [bp-0x478]
    let v78: struct24;  // [bp-0x478]
    let v79: alloc::string::String;  // [bp-0x478]
    let v80: struct56;  // [bp-0x478]
    let v82: void*;  // [bp-0x470], Other Possible Types: u64
    let v83: u64;  // [bp-0x470]
    let v84: u128;  // [bp-0x468]
    let v85: u64;  // [bp-0x468]
    let v87: iNone;  // [bp-0x458]
    let v88: iNone;  // [bp-0x448]
    let v93: struct64;  // [bp-0x1a8]
    let v94: u128;  // [bp-0x1a8]
    let v95: u64;  // [bp-0x198]
    let v96: alloc::string::String;  // [bp-0x168]
    let v97: u64;  // [bp-0x158]
    let v98: alloc::string::String;  // [bp-0x150]
    let v99: u64;  // [bp-0x140]
    let v100: i64;  // [bp-0x138]
    let v101: u64;  // [bp-0x130]
    let v102: iNone;  // [bp-0x128]
    let v103: u128;  // [bp-0x118]
    let v104: u64;  // [bp-0x109]
    let v105: u8;  // [bp-0x101]
    let v109: struct24;  // [bp-0xc8]
    let v110: struct64;  // [bp-0xb0]
    let v111: struct64;  // [bp-0x70]
    let v114: u64;  // r12
    let v115: u64;  // rsi
    let v118: u64;  // rdx
    let v119: u8;  // bl
    let v120: i64;  // rax
    let v121: i64;  // rax
    let v122: i64;  // rax
    let v123: i64;  // rax
    let v124: i64;  // rax
    let v125: i64;  // rax
    let v126: u64;  // rax
    let v127: u64;  // r14
    let v130: i64;  // rax
    let v131: u64;  // rax
    let v132: u64;  // r15
    let v133: i64;  // r14
    let v135: u64;  // rax
    let v136: u8;  // al
    let v138: i64;  // r14
    let v139: void*;  // r15
    let v140: u64;  // r14
    let v141: u8;  // al
    let v142: u64;  // rcx
    let v144: iNone;  // xmm0
    let v145: i64;  // rax
    let v146: iNone;  // xmm0
    let v147: u64;  // rsi
    let v148: u64;  // r14
    let v151: void*;  // rsi
    let v152: u64;  // rdx
    let v153: iNone;  // xmm0
    let v154: core::option::Option<u32>;  // rax:rax
    let v155: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v156: iNone;  // [bp-0x588]
    let v157: struct56;  // [bp-0x478]
    let v159: u16;  // [bp-0x103]
    let v160: struct56;  // [bp-0x100]

    v65 = 2566;
    v50 = 0;
    v58 = 0;
    v37 = 0;
    v38 = 8;
    v39 = 0;
    v49 = 0x110000;
    v41 = 1;
    v42 = 0;
    v47 = 0x3b9aca00;
    v43 = 0x8000000000000000;
    v48 = 32;
    v45 = 0;
    v46 = 0;
    uu_sort::uu_app(&v75);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v75, a0, a1);
    if v1.field_0 == 0x8000000000000000 {
        v75 = v7;
        core::result::Result<T,E>::unwrap(clap_builder::error::Error<F>::print(&v75));
        if (*((v75 + 221) as &i8) & 29) != 12 {
            uucore::mods::error::set_exit_code(2);
        }
    } else {
        v13 = v0;
        v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "debug");
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, "files0-from") {
            v80 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, "files0-from");
            v110 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v80);
            if v110.field_0 as i64 {
                core::iter::traits::iterator::Iterator::collect(&v80, &v110);
                v2 = *((&v80.field_0 as &char + 8) as &i128);
                if v80.field_0 as i64 == 0x8000000000000000 {
                    goto LABEL_49789d;
                }
                v33 = v2;
                v31 = v80.field_0;
                v115 = v34;
                v17 = 0;
                v18 = 8;
                v19 = 0;
                if v35 {
                    v69 = v115 + v35 * 24;
                    v70 = 9223372036854775809;
                    loop {
                        v71 = v115;
                        v75 = uu_sort::open(v115);
                        v114 = v83;
                        if let Err(_) = v75 {
                            break;
                        }
                        v160 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v83, v85);
                        loop {
                            vvar_2713{stack -1448} = core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug> OrderedDict([(0, core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>> OrderedDict([(0, 𝜙@64b [((4815772, None), vvar_2126{stack -1448}), ((4815537, None), vvar_2133{stack -1448})])]))])
                            <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v22);
                            if v22.iter.iter as i64 == 0x8000000000000000 {
                                break;
                            }
                            v1 = core::str::converts::from_utf8(v24, v27);
                            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::result::Result<T,E>::expect(&v1), v118);
                            v95 = v8;
                            v94 = *(&v1.field_0 as &i128);
                            v17 = alloc::vec::Vec<T,A>::push(&v94, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/sort/src/sort.rs");
                        }
                        v115 = v71;
                        if v115 != v69 {
                            continue;
                            if v115 == v69 {
                                goto LABEL_497c06;
                            }
                        } else if !(v115 == v69) {
                            continue;
                        }
                    }
                }
            } else {
LABEL_49789d:
                v31 = 0;
                v34 = 8;
                v35 = 0;
                v17 = 0;
                v18 = 8;
                v19 = 0;
            }
        } else {
            v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, "files");
            v111 = clap_builder::parser::error::MatchesError::unwrap("files", &v75);
            if v111.field_0 as i64 {
                core::iter::traits::iterator::Iterator::collect(&v75, &v111);
                v5 = *((&v75.field_0 as &char + 8) as &i128);
                if v75.field_0 as i64 != 0x8000000000000000 {
                    v15 = v5;
                    v14 = v75.field_0;
                }
            }
        }
LABEL_497c06:
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "human-numeric-sort") {
            v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "sort");
            v120 = clap_builder::parser::error::MatchesError::unwrap("sort", &v75);
            if (!v120 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v120 + 8) as &i64), *((v120 + 16) as &i64), "human-numeric")) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "month-sort") {
                v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "sort");
                v121 = clap_builder::parser::error::MatchesError::unwrap("sort", &v75);
                if (!v121 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v121 + 8) as &i64), *((v121 + 16) as &i64), "month")) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "general-numeric-sort") {
                    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "sort");
                    v122 = clap_builder::parser::error::MatchesError::unwrap("sort", &v75);
                    if (!v122 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v122 + 8) as &i64), *((v122 + 16) as &i64), "general-numeric")) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "numeric-sort") {
                        v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "sort");
                        v123 = clap_builder::parser::error::MatchesError::unwrap("sort", &v75);
                        if (!v123 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v123 + 8) as &i64), *((v123 + 16) as &i64), "numeric")) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "version-sort") {
                            v74 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "sort");
                            v124 = clap_builder::parser::error::MatchesError::unwrap("sort", &v74);
                            if !v124 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v124 + 8) as &i64), *((v124 + 16) as &i64), "version") {
                                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "random-sort") {
                                    v74 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "sort");
                                    v125 = clap_builder::parser::error::MatchesError::unwrap("sort", &v74);
                                    if !v125 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v125 + 8) as &i64), *((v125 + 16) as &i64), "random") {
                                        goto LABEL_497f1e;
                                    }
                                }
                                uu_sort::get_rand_string(&v74);
                            }
                        }
                    }
                }
            }
        }
LABEL_497f1e:
        v65 = v119;
        v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "dictionary-order");
        v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "ignore-nonprinting");
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, "parallel") {
            v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "parallel");
            v126 = clap_builder::parser::error::MatchesError::unwrap("parallel", &v75);
            if v126 {
                v76 = <alloc::string::String as core::clone::Clone>::clone(v126);
                v0 = *(&v76.vec.buf.inner.ptr as &i128);
                if v76.vec.buf.inner.cap.__0 != 0x8000000000000000 {
                    goto LABEL_498037;
                }
            }
            v77 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("0");
LABEL_498037:
            v40 = struct24 {
                field_0: v127
                field_8: v94
            };
            std::env::set_var(&v40);
        }
        v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "buffer-size");
        v75 = struct16 {
            field_0: 0
            field_8: 0x3b9aca00
        };
        v1 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap("buffer-size", &v75), &v75);
        if !v1.field_0 {
            v47 = v6;
            v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "temporary-directory");
            v130 = clap_builder::parser::error::MatchesError::unwrap("temporary-directory", &v75);
            if v130 {
                v78 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v130 + 8) as &i64), *((v130 + 16) as &i64));
                v2 = *(&v78.field_8 as &i128);
                if v78.field_0 == 0x8000000000000000 {
                    goto LABEL_498146;
                }
                v82 = v2;
            } else {
LABEL_498146:
                v75 = std::env::temp_dir();
            }
            vvar_2722{stack -1144} = struct24 OrderedDict([(0, 𝜙@64b [((4817236, None), vvar_2394{stack -1144}), ((4817238, None), vvar_2394{stack -1144})]), (8, 𝜙@64b [((4817236, None), vvar_2393{stack -1136}), ((4817238, None), vvar_2393{stack -1136})]), (16, 𝜙@64b [((4817236, None), vvar_2168{stack -1128}), ((4817238, None), vvar_2168{stack -1128})])])
            v93 = uu_sort::tmp_dir::TmpDirWrapper::new(&v75);
            v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "compress-program");
            v131 = clap_builder::parser::error::MatchesError::unwrap("compress-program", &v75);
            if v131 {
                v79 = <alloc::string::String as core::clone::Clone>::clone(v131);
                v0 = *(&v79.vec.buf.inner.ptr as &i128);
            }
            v43 = v132;
            v44 = *(&v3 as &i128);
            v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "batch-size");
            v133 = clap_builder::parser::error::MatchesError::unwrap("batch-size", &v75);
            if v133 {
                v72 = v133;
                v155 = core::num::<impl usize>::from_ascii_radix(&v31, *((v133 + 8) as &i64), *((v133 + 16) as &i64));
                if v31 as i8 != 1 {
                    if v34 >= 2 {
                        goto LABEL_498671;
                    }
                    v0 = uucore::util_name();
                    v7 = v118;
                    eprint!("{}: ", &v0);
                    eprintln!("invalid --batch-size argument '{}'", &v72);
                    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("minimum --batch-size argument is '2'");
                    v75 = struct28 {
                        field_0: *(&v0.field_0 as &i128)
                        field_16: v8
                        field_24: 2
                    };
                    alloc::boxed::Box<T>::new(&v75);
                    goto LABEL_498d92;
                }
                if v32 as i8 == 2 {
                    v0 = uucore::util_name();
                    v7 = v118;
                    eprint!("{}: ", &v0);
                    v0 = 0;
                    v7 = *((v133 + 8) as &i64);
                    v8 = *((v133 + 16) as &i64);
                    v10 = 1;
                    eprintln!("--batch-size argument {} too large", &v0);
                    v20 = uu_sort::get_rlimit();
                    if !v20.field_0 {
                        v73 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v0 = format!("maximum --batch-size argument with current rlimit is {}", &v73);
                        v67 = *(&v0.vec.buf.inner.cap as &i128);
                        goto LABEL_49860d;
                    }
                } else {
                    v0 = 0;
                    v7 = *((v133 + 8) as &i64);
                    v8 = *((v133 + 16) as &i64);
                    v10 = 1;
                    v20 = format!("invalid --batch-size argument {}", &v0);
                    v67 = *(&v20.vec.buf.inner.cap as &i128);
LABEL_49860d:
                    v68 = v8;
                    v75 = struct28 {
                        field_0: v67
                        field_16: v68
                        field_24: 2
                    };
                    alloc::boxed::Box<T>::new(&v75);
                    goto LABEL_498d92;
                }
            } else {
LABEL_498671:
                v136 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "zero-terminated") ? 0 : 10);
                v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "merge");
                v59 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, "check");
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "check-silent") {
                    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "check");
                    clap_builder::parser::error::MatchesError::unwrap("check", &v75);
                }
                v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "ignore-case");
                v51 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "ignore-leading-blanks");
                v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "reverse");
                v57 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "stable");
                v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "unique");
                if v16 {
                    if v16 == 1 || !v60 {
                        goto LABEL_498926;
                    }
                    v0 = 1;
                    v7 = *((v15 + 32) as &i64);
                    v8 = *((v15 + 40) as &i64);
                    v10 = 1;
                    v96 = format!("extra operand {} not allowed with -c", &v0);
                    v75 = struct28 {
                        field_0: *(&v96.vec.buf.inner.cap as &i128)
                        field_16: v97
                        field_24: 2
                    };
                    alloc::boxed::Box<T>::new(&v75);
                    goto LABEL_498d92;
                } else {
                    v109 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
                    v14 = alloc::vec::Vec<T,A>::push(&v109, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/sort/src/sort.rs");
LABEL_498926:
                    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13);
                    v138 = clap_builder::parser::error::MatchesError::unwrap(&v75);
                    if v138 {
                        v75 = core::str::converts::from_utf8(*((v138 + 8) as &i64), *((v138 + 16) as &i64));
                        match v75 {
                            Err(_) => {
                                uu_sort::uumain::uumain::{{closure}}(*((v138 + 8) as &i64), *((v138 + 16) as &i64));
                            },
                            Ok(_) => {
                                v139 = v82;
                                v140 = v84;
                                v141 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v139, v140, "\\0") as u8;
                                v142 = (!v141 ? v139 : &g_427af3);
                                if ((v140 == 1) as u8 as u8 | v141) == 1 {
                                    v75 = core::slice::iter::Iter<u8> {
                                        ptr: core::ptr::non_null::NonNull<u8> {
                                            pointer: v142
                                        }
                                        end_or_len: v142 + 1
                                        _marker: core::marker::PhantomData<&u8> { }
                                    };
                                    v154 = core::str::validations::next_code_point(&v75) as u128;
                                    if !(v154 as i8 & 1) || v118 as u32 == 0x110000 {
                                        core::option::unwrap_failed(); /* do not return */
                                    }
                                    goto LABEL_498a04;
                                } else {
                                    v0 = 0;
                                    v7 = v142;
                                    v8 = v140;
                                    v10 = 1;
                                    v98 = format!("separator must be exactly one character long: {}", &v0);
                                    v75 = struct28 {
                                        field_0: *(&v98.vec.buf.inner.cap as &i128)
                                        field_16: v99
                                        field_24: 2
                                    };
                                    alloc::boxed::Box<T>::new(&v75);
                                }
                            },
                        }
LABEL_498d92:
                        v114 = v135;
                    } else {
LABEL_498a04:
                        vvar_2706{stack -1144} = struct56 OrderedDict([(0, 𝜙@64b [((4819453, None), vvar_2559{stack -1144}), ((4819269, None), vvar_1931{stack -1144})]), (8, 𝜙@64b [((4819453, None), vvar_2560{stack -1136}), ((4819269, None), vvar_1935{stack -1136})])])
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v157, &v13);
                        v0 = clap_builder::parser::error::MatchesError::unwrap(&v157);
                        if v0.field_0 as i64 {
                            v144 = v0.field_0;
                            v88 = v12;
                            v87 = v11;
                            v84 = v0.field_16;
                            *(&v75 as void*) = v144;
                            loop {
                                v145 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v157);
                                if !v145 {
                                    break;
                                }
                                v20 = uu_sort::FieldSelector::parse(*((v145 + 8) as &i64), *((v145 + 16) as &i64), &v36);
                                if v30 == 2 {
                                    v114 = v100;
                                    return v114;
                                }
                                v104 = v29;
                                v146 = v20.field_16;
                                v103 = v156 as i128;
                                v102 = v146;
                                v100 = v114;
                                v101 = v24;
                                v105 = v30;
                                v61 = v62;
                                if v159 as i8 == 5 {
                                    v61 = v62;
                                    if !v61 {
                                        uu_sort::get_rand_string(&v20);
                                        v63 = struct24 {
                                            field_0: 1
                                            field_1: <UNKNOWN>
                                        };
                                        v61 = v64;
                                    }
                                }
                                v62 = v61;
                                v36 = alloc::vec::Vec<T,A>::push(&v100, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/sort/src/sort.rs");
                            }
                        }
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v13, "key") {
                            v20 = struct17 {
                                field_0: 1
                                field_8: 1
                                field_16: *(&v51 as &i32) as i8
                            };
                            v8 = 2;
                            v75 = uu_sort::FieldSelector::new(&v20, &v0, *((&v63.field_16 as &char + 1) as &i32) * 0x10000000000 | v25 | v56 * 0x100000000);
                            v0 = core::result::Result<T,E>::unwrap(&v75);
                            v36 = alloc::vec::Vec<T,A>::push(&v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/sort/src/sort.rs");
                        }
                        v147 = v15;
                        v148 = v147 + v16 * 24;
                        loop {
                            if v147 == v148 {
                                if v147 == v148 {
                                    goto LABEL_498c7c;
                                }
                            } else {
                                if v147 == v148 {
LABEL_498c7c:
                                    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, "output");
                                    clap_builder::parser::error::MatchesError::unwrap("output", &v75);
                                    v4 = uu_sort::Output::new(v151, v152);
                                    v114 = v6;
                                    if let Ok(_) = v4 {
                                        v20 = v4 as i64;
                                        v23 = v114;
                                        v25 = v8;
                                        v28 = *((&v4 as &char + 24) as &i64);
                                        v36 = uu_sort::GlobalSettings::init_precomputed();
                                        v153 = *(&v20 as &i128);
                                        v84 = *(&v25 as &i128) as u128;
                                        *(&v75 as void*) = v153;
                                        uu_sort::exec(v15, v16, &v36, &v75 as u640, &v93);
                                        uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(&v93);
                                    }
                                }
                            }
                            v75 = uu_sort::open(v147);
                            v114 = v82;
                            if let Err(_) = v75 {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return v114;
}
