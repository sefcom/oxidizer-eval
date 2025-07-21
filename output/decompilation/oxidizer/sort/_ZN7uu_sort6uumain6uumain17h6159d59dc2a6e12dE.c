fn uu_sort::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x618], Other Possible Types: struct24, struct56, void*, u128
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x618], Other Possible Types: u128
    let v2: struct64;  // [bp-0x618]
    let v3: Result<struct28, struct24>;  // [bp-0x618]
    let v4: struct64;  // [bp-0x618]
    let v5: struct64;  // [bp-0x618]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0x618]
    let v7: u64;  // [bp-0x610]
    let v8: i64;  // [bp-0x610], Other Possible Types: u64
    let v9: u8;  // [bp-0x608]
    let v10: u64;  // [bp-0x608]
    let v11: u8;  // [bp-0x600]
    let v12: u128;  // [bp-0x5f8]
    let v13: u128;  // [bp-0x5e8]
    let v14: struct56;  // [bp-0x5d8]
    let v15: struct16;  // [bp-0x598], Other Possible Types: struct17, struct56, core::num::error::ParseIntError *, u128
    let v16: core::fmt::rt::Argument;  // [bp-0x590], Other Possible Types: u64
    let v17: u8;  // [bp-0x588]
    let v18: u64;  // [bp-0x588]
    let v19: u64;  // [bp-0x580]
    let v20: u64;  // [bp-0x569]
    let v21: void*;  // [bp-0x558], Other Possible Types: struct16
    let v22: u64;  // [bp-0x550]
    let v23: void*;  // [bp-0x548]
    let v24: u64;  // [bp-0x540]
    let v25: u128;  // [bp-0x538]
    let v26: void*;  // [bp-0x530]
    let v27: void*;  // [bp-0x528], Other Possible Types: u64
    let v28: struct16;  // [bp-0x528]
    let v29: u64;  // [bp-0x520]
    let v30: void*;  // [bp-0x518]
    let v31: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x510]
    let v33: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug>;  // [bp-0x510]
    let v37: u64;  // [bp-0x508]
    let v39: u64;  // [bp-0x500]
    let v40: struct25;  // [bp-0x4f8], Other Possible Types: struct16
    let v41: void*;  // [bp-0x4f8]
    let v42: u64;  // [bp-0x4f0]
    let v43: u128;  // [bp-0x4e8]
    let v44: u64;  // [bp-0x4e0]
    let v45: u64;  // [bp-0x4d8]
    let v46: void*;  // [bp-0x4d0]
    let v47: u64;  // [bp-0x4c8]
    let v48: u128;  // [bp-0x4c0]
    let v49: u128;  // [bp-0x4b0]
    let v50: u128;  // [bp-0x4a7]
    let v51: u64;  // [bp-0x490]
    let v52: u64;  // [bp-0x488]
    let v53: u32;  // [bp-0x480]
    let v54: void*;  // [bp-0x47c], Other Possible Types: u8
    let v55: u8;  // [bp-0x47b]
    let v56: u8;  // [bp-0x47a]
    let v57: u8;  // [bp-0x479]
    let v58: u8;  // [bp-0x478]
    let v59: u8;  // [bp-0x477]
    let v60: u8;  // [bp-0x476]
    let v61: u8;  // [bp-0x475]
    let v62: u8;  // [bp-0x474]
    let v63: u8;  // [bp-0x473]
    let v64: u8;  // [bp-0x473]
    let v65: u8;  // [bp-0x471]
    let v66: u8;  // [bp-0x471]
    let v67: struct24;  // [bp-0x471]
    let v68: u8;  // [bp-0x471]
    let v69: u8;  // [bp-0x460]
    let v71: struct64;  // [bp-0x458], Other Possible Types: u128
    let v72: Result<struct24, struct24>;  // [bp-0x458]
    let v73: Result<struct24, struct24>;  // [bp-0x458]
    let v74: struct24;  // [bp-0x458]
    let v76: u64;  // [bp-0x410]
    let v77: u64;  // [bp-0x408]
    let v78: i64;  // [bp-0x400]
    let v79: i64;  // [bp-0x3f8], Other Possible Types: struct16, struct56, struct64, struct28, struct24, Result<struct40, struct16>, u64
    let v80: core::slice::iter::Iter<u8>;  // [bp-0x3f8], Other Possible Types: struct24, u64
    let v81: struct24;  // [bp-0x3f8]
    let v82: struct24;  // [bp-0x3f8]
    let v83: u64;  // [bp-0x3f8]
    let v84: u64;  // [bp-0x3f8]
    let v85: struct56;  // [bp-0x3f8], Other Possible Types: u64
    let v86: u64;  // [bp-0x3f8]
    let v87: u128;  // [bp-0x3f0]
    let v90: u64;  // [bp-0x3f0]
    let v91: i64;  // [bp-0x3e8], Other Possible Types: u128
    let v92: u64;  // [bp-0x3e8]
    let v93: u64;  // [bp-0x3e8]
    let v94: u64;  // [bp-0x3e0]
    let v95: void*;  // [bp-0x3d8], Other Possible Types: u128
    let v96: u128;  // [bp-0x3c8]
    let v101: u128;  // [bp-0x130]
    let v102: u64;  // [bp-0x120]
    let v103: u128;  // [bp-0x118]
    let v104: u64;  // [bp-0x108]
    let v105: struct24;  // [bp-0x100]
    let v106: struct24;  // [bp-0x100]
    let v107: core::fmt::rt::Argument;  // [bp-0xe8]
    let v108: u64;  // [bp-0xe0]
    let v109: u128;  // [bp-0xd8]
    let v110: u128;  // [bp-0xc8]
    let v111: u64;  // [bp-0xb9]
    let v112: u8;  // [bp-0xb1]
    let v116: u128;  // [bp-0x78]
    let v117: u64;  // [bp-0x68]
    let v122: core::fmt::rt::Argument;  // r12
    let v125: u64;  // rax
    let v126: u64;  // rax
    let v127: u64;  // rax
    let v129: u64;  // rax
    let v130: u64;  // rdx
    let v132: u64;  // rdx
    let v133: u8;  // bl
    let v134: i64;  // rax
    let v135: i64;  // rax
    let v136: i64;  // rax
    let v137: i64;  // rax
    let v138: i64;  // rax
    let v139: i64;  // rax
    let v140: u64;  // rax
    let v141: u64;  // r15
    let v142: u128;  // xmm0
    let v144: i64;  // rax
    let v145: u64;  // rax
    let v146: u64;  // r15
    let v147: i64;  // r14
    let v148: i64;  // rbx
    let v149: u8;  // al
    let v150: u64;  // rax
    let v152: i64;  // r14
    let v153: void*;  // r14
    let v154: u64;  // r15
    let v157: u128;  // xmm0
    let v158: i64;  // rax
    let v159: u8;  // al
    let v160: u128;  // xmm0
    let v161: u64;  // rax
    let v163: void*;  // rsi
    let v164: u64;  // rdx
    let v165: u128;  // xmm0
    let v166: core::option::Option<u32>;  // rax:rax
    let v167: u64;  // [bp-0x618]
    let v169: u120;  // [bp-0x578]
    let v171: u16;  // [bp-0xb3]
    let v172: struct56;  // [bp-0xb0]

    v69 = 2566;
    v54 = 0;
    v62 = 0;
    v41 = 0;
    v42 = 8;
    v43 = 0;
    v53 = 0x110000;
    v45 = 1;
    v46 = 0;
    v51 = 0x3b9aca00;
    v47 = 0x8000000000000000;
    v52 = 32;
    v49 = 0;
    v50 = 0;
    uu_sort::uu_app(&v79);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v79, a0, a1);
    match v1 {
        Err(_) => {
            v79 = v8;
            core::result::Result<T,E>::unwrap(clap_builder::error::Error<F>::print(&v79));
            if (*((v79 + 213) as &i8) & 29) != 12 {
                uucore::mods::error::set_exit_code(2);
            }
        },
        Ok(v14) => {
            v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "debug") as i8;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "files0-from") as i8 {
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, "files0-from");
                v4 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v79);
                if v4.field_0 as i64 {
                    v79 = struct64 {
                        field_0: v4.field_0
                        field_16: v4.field_16
                        field_32: v12
                        field_48: v13
                    };
                    v72 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v79);
                    v125 = v72 as i64;
                    *(&v80 as &i128) = *((&v72 as &char + 8) as &i128);
                    if v125 != 0x8000000000000000 {
                        v25 = *(&v80 as &i128) as u128;
                        v24 = v125;
                        v127 = v25;
                    }
                }
                v27 = 0;
                v29 = 8;
                v30 = 0;
                v76 = v127;
                v77 = v127 + v26 * 24;
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v76);
                if v129 {
                    do {
                        uu_sort::open(v129, v130);
                        if v86 {
                            v122 = v90;
                        }
                        v172 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v90, v93);
                        loop {
                            vvar_2736{stack -1296} = core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug> OrderedDict({0: core::iter::adapters::fuse::Fuse<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>> OrderedDict({0: 𝜙@8b [((4968740, None), vvar_2199{stack -1296}), ((4968492, None), vvar_2129{stack -1296})]})})
                            <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v33);
                            if v33.iter.iter as i64 == 0x8000000000000000 {
                                break;
                            }
                            v18 = v39;
                            *(&v15 as &core::option::Option<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#9}::fmt::write_str_escaped::{closure_env#0}>>) = v33.iter.iter;
                            v1 = core::str::converts::from_utf8(v16, v39);
                            v6 = std::sys::os_str::bytes::Slice::to_owned(core::result::Result<T,E>::expect(&v1), v132);
                            v74 = v0;
                            v28 = alloc::vec::Vec<T,A>::push(&v74);
                        }
                        <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v76);
                    } while (v129);
                }
                *(&v21.field_0 as &i128) = *(&v28.field_0 as &i128);
                v23 = 0;
            } else {
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, "files");
                v5 = clap_builder::parser::error::MatchesError::unwrap("files", &v79);
                if v5.field_0 as i64 {
                    v79 = struct64 {
                        field_0: v5.field_0
                        field_16: v5.field_16
                        field_32: v12
                        field_48: v13
                    };
                    v73 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v79);
                    v126 = v73 as i64;
                    *(&v80 as &i128) = *((&v73 as &char + 8) as &i128);
                    if v126 != 0x8000000000000000 {
                        v22 = *(&v80 as &i128) as u128;
                        v21 = v126;
                    }
                }
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "human-numeric-sort") as i8 {
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "sort");
                v134 = clap_builder::parser::error::MatchesError::unwrap("sort", &v79);
                if (!v134 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v134 + 8) as &i64), *((v134 + 16) as &i64) as i32, "human-numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "month-sort") as i8 {
                    v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "sort");
                    v135 = clap_builder::parser::error::MatchesError::unwrap("sort", &v79);
                    if (!v135 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v135 + 8) as &i64), *((v135 + 16) as &i64) as i32, "month") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "general-numeric-sort") as i8 {
                        v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "sort");
                        v136 = clap_builder::parser::error::MatchesError::unwrap("sort", &v79);
                        if (!v136 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v136 + 8) as &i64), *((v136 + 16) as &i64) as i32, "general-numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "numeric-sort") as i8 {
                            v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "sort");
                            v137 = clap_builder::parser::error::MatchesError::unwrap("sort", &v79);
                            if (!v137 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v137 + 8) as &i64), *((v137 + 16) as &i64) as i32, "numeric") as i8) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "version-sort") as i8 {
                                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "sort");
                                v138 = clap_builder::parser::error::MatchesError::unwrap("sort", &v79);
                                if !v138 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v138 + 8) as &i64), *((v138 + 16) as &i64) as i32, "version") as i8 {
                                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "random-sort") as i8 {
                                        v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "sort");
                                        v139 = clap_builder::parser::error::MatchesError::unwrap("sort", &v79);
                                        if !(v139 && !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v139 + 8) as &i64), *((v139 + 16) as &i64) as i32, "random") as i8)) {
                                            goto LABEL_4bd4cf;
                                        }
                                    }
                                    v79 = uu_sort::get_rand_string();
                                }
                            }
                        }
                    }
                }
            }
LABEL_4bd4cf:
            v69 = v133;
            v57 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "dictionary-order") as i8;
            v58 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "ignore-nonprinting") as i8;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "parallel") as i8 {
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "parallel");
                v140 = clap_builder::parser::error::MatchesError::unwrap("parallel", &v79);
                if !v140 || (v80 = core::ops::function::FnOnce::call_once(v140), v0 = *(&v90 as &i128) as u128, v80.field_0 as i64 == 0x8000000000000000) {
                    v79 = <T as alloc::slice::hack::ConvertVec>::to_vec("0");
                }
                v71 = v142;
                v44 = v141;
                v45 = v71;
                std::env::set_var("RAYON_NUM_THREADS", &v44);
            }
            v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "buffer-size");
            v79 = struct16 {
                field_0: 0
                field_8: 0x3b9aca00
            };
            v0 = core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap("buffer-size", &v79), &v79);
            if !v0.field_0 {
                v51 = v7;
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "temporary-directory");
                v144 = clap_builder::parser::error::MatchesError::unwrap("temporary-directory", &v79);
                if !v144 || (v81 = core::ops::function::FnOnce::call_once(*((v144 + 8) as &i64), *((v144 + 16) as &i64)), v1 = *((&v81.field_0 as &char + 8) as &i128) as u128, v81.field_0 as i64 == 0x8000000000000000) {
                    v79 = core::ops::function::FnOnce::call_once();
                } else {
                    v87 = v1;
                }
                vvar_2749{stack -1016} = struct24 OrderedDict({0: 𝜙@64b [((4970256, None), vvar_2428{stack -1016}), ((4970258, None), vvar_2428{stack -1016})], 8: 𝜙@64b [((4970256, None), vvar_2427{stack -1008}), ((4970258, None), vvar_2427{stack -1008})], 16: 𝜙@64b [((4970256, None), vvar_1816{stack -1000}), ((4970258, None), vvar_1816{stack -1000})]})
                v71 = uu_sort::tmp_dir::TmpDirWrapper::new(&v79);
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "compress-program");
                v145 = clap_builder::parser::error::MatchesError::unwrap("compress-program", &v79);
                if v145 {
                    v82 = core::ops::function::FnOnce::call_once(v145);
                    *(&v0 as &i32) = vvar_2091{stack -1008};
                }
                v47 = v146;
                v48 = *(&v167 as &i128);
                v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "batch-size");
                v147 = clap_builder::parser::error::MatchesError::unwrap("batch-size", &v79);
                if v147 {
                    v78 = v147;
                    v31 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v78 + 8) as &i64), *((v78 + 16) as &i64));
                    if let Ok(_) = v31 {
                        if !(v37 < 2) {
                            goto LABEL_4bdbec;
                        }
                        v0 = uucore::util_name();
                        v8 = v132;
                        eprint!("{}: ", &v0);
                        eprintln!("invalid --batch-size argument '{}'", &v78);
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("minimum --batch-size argument is '2'");
                        v79 = struct28 {
                            field_0: v0.field_0
                            field_16: v9
                            field_24: 2
                        };
                        alloc::boxed::Box<T>::new(&v79);
                        goto LABEL_4be35a;
                    }
                    if *((&v31 as &char + 1) as &i8) == 2 {
                        v0 = uucore::util_name();
                        v8 = v132;
                        eprint!("{}: ", &v0);
                        v0 = 0;
                        v8 = *((v78 + 8) as &i128) as u128;
                        v11 = 1;
                        eprintln!("--batch-size argument {} too large", &v0);
                        v0 = uu_sort::get_rlimit();
                        if !v0.field_0 {
                            v27 = v8;
                            v15 = &v27;
                            v16 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v79 = "maximum --batch-size argument with current rlimit is ";
                            v87 = 1;
                            v95 = 0;
                            v91 = &v15;
                            v94 = 1;
                            v80 = core::option::Option<T>::map_or_else(v132);
                            goto LABEL_4bdb89;
                        }
                    } else {
                        v0 = 0;
                        v8 = *((v78 + 8) as &i128) as u128;
                        v11 = 1;
                        v15 = &v0;
                        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v79 = "invalid --batch-size argument ";
                        v87 = 1;
                        v95 = 0;
                        v91 = &v15;
                        v94 = 1;
                        v80 = core::option::Option<T>::map_or_else(v132);
LABEL_4bdb89:
                        v117 = *((v148 + 16) as &i64);
                        v116 = *(v148 as &i128);
                        v79 = struct28 {
                            field_0: *(v148 as &i128)
                            field_16: v117
                            field_24: 2
                        };
                        alloc::boxed::Box<T>::new(&v79);
                        goto LABEL_4be35a;
                    }
                } else {
LABEL_4bdbec:
                    v149 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "zero-terminated") as i8 ? 0 : 10);
                    v59 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "merge") as i8;
                    v63 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "check") as i8;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "check-silent") as i8 {
                        v79 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "check");
                        clap_builder::parser::error::MatchesError::unwrap("check", &v79);
                    }
                    v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "ignore-case") as i8;
                    v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "ignore-leading-blanks") as i8;
                    v60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "reverse") as i8;
                    v61 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "stable") as i8;
                    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "unique") as i8;
                    if v23 {
                        if !(v23 != 1 && v64) {
                            goto LABEL_4bdeb1;
                        }
                        v0 = 1;
                        v8 = *((v22 + 32) as &i128) as u128;
                        v11 = 1;
                        v15 = &v0;
                        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v79 = "extra operand ";
                        v87 = 2;
                        v95 = 0;
                        v91 = &v15;
                        v94 = 1;
                        v79 = core::option::Option<T>::map_or_else(v132);
                        v79 = struct28 {
                            field_0: v101
                            field_16: v102
                            field_24: 2
                        };
                        alloc::boxed::Box<T>::new(&v79);
                        goto LABEL_4be35a;
                    } else {
                        v105 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                        v79 = v106;
                        v21 = alloc::vec::Vec<T,A>::push(&v79);
LABEL_4bdeb1:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v83, &v14, "field-separator");
                        v152 = clap_builder::parser::error::MatchesError::unwrap("field-separator", &v83);
                        v84 = v83;
                        if v152 {
                            v79 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v152 + 8) as &i64), *((v152 + 16) as &i64));
                            match v79 {
                                Err(_) => {
                                    uu_sort::uumain::uumain::{{closure}}(*((v152 + 8) as &i64), *((v152 + 16) as &i64));
                                },
                                Ok(_) => {
                                    v153 = v87;
                                    v154 = v92;
                                    if ((v154 == 1) as u8 as u8 | <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v153, v154 as u32, "\\0") as i8) == 1 {
                                        v80 = core::slice::iter::Iter<u8> {
                                            ptr: core::ptr::non_null::NonNull<u8> {
                                                pointer: v153
                                            }
                                            end_or_len: v153 + 1
                                            _marker: core::marker::PhantomData<&u8> { }
                                        };
                                        v166 = core::str::validations::next_code_point(&v80) as u128;
                                        if !(v166 as i32 && v132 as u32 != 0x110000) {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        v53 = v132 as u32;
                                        v84 = v85;
                                        goto LABEL_4bdfa8;
                                    } else {
                                        v0 = 0;
                                        v8 = v153;
                                        v9 = v154;
                                        v11 = 1;
                                        v15 = &v0;
                                        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v79 = "separator must be exactly one character long: ";
                                        v87 = 1;
                                        v95 = 0;
                                        v91 = &v15;
                                        v94 = 1;
                                        v79 = core::option::Option<T>::map_or_else(v132);
                                        v79 = struct28 {
                                            field_0: v103
                                            field_16: v104
                                            field_24: 2
                                        };
                                        alloc::boxed::Box<T>::new(&v79);
                                    }
                                },
                            }
LABEL_4be35a:
                            v122 = v150;
                        } else {
LABEL_4bdfa8:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v80 as u64, &v14, "key");
                            v2 = clap_builder::parser::error::MatchesError::unwrap("key", &v80 as u64);
                            if v2.field_0 as i64 {
                                v157 = v2.field_0;
                                v96 = v13;
                                v95 = v12;
                                v91 = v2.field_16;
                                v80 = v157;
                                loop {
                                    v158 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v80 as u64);
                                    if !v158 {
                                        break;
                                    }
                                    v15 = uu_sort::FieldSelector::parse(*((v158 + 8) as &i64), *((v158 + 16) as &i64), &v40);
                                    v159 = *((&v15.field_48 as &char + 7) as &i8);
                                    if v159 == 2 {
                                        v122 = v107;
                                        return v122;
                                    }
                                    v111 = v20;
                                    v160 = v15.field_16;
                                    v110 = *(&v169 as &i128) as u128;
                                    v109 = v160;
                                    v107 = v122;
                                    v108 = v16;
                                    v112 = v159;
                                    v65 = v66;
                                    if v171 as i8 == 5 {
                                        v65 = v66;
                                        if !v65 {
                                            v15 = uu_sort::get_rand_string();
                                            v67 = struct24 {
                                                field_0: 1
                                                field_1: <UNKNOWN>
                                            };
                                            v65 = v68;
                                        }
                                    }
                                    v66 = v65;
                                    v40 = alloc::vec::Vec<T,A>::push(&v107);
                                }
                            }
                            if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "key") as i8 {
                                v15 = struct17 {
                                    field_0: 1
                                    field_8: 1
                                    field_16: *(&v55 as &i32) as i8
                                };
                                v9 = 2;
                                v9 = v10 & -0x100 | 2;
                                v85 = uu_sort::FieldSelector::new(&v15, &v2, *((&v67.field_16 as &char + 1) as &i32) as u32 as u64 * 0x10000000000 | v17 as u64 | v60 as u64 * 0x100000000);
                                v0 = core::result::Result<T,E>::unwrap(&v85);
                                v40 = alloc::vec::Vec<T,A>::push(&v0);
                            }
                            v0 = v22;
                            v8 = v22 + v23 * 24;
                            do {
                                if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0) {
                                    v80 as u640 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "output");
                                    clap_builder::parser::error::MatchesError::unwrap("output", &v80 as u640);
                                    v3 = uu_sort::Output::new(v163, v164);
                                    v122 = v8;
                                    if let Ok(_) = v3 {
                                        v15 = v3 as i64;
                                        v16 = v122;
                                        v17 = v9;
                                        v19 = *((&v3 as &char + 24) as &i64);
                                        v40 = uu_sort::GlobalSettings::init_precomputed();
                                        v165 = *(&v15 as &i128);
                                        v91 = *(&v17 as &i128) as u128;
                                        v80 = v165;
                                        uu_sort::exec(v22, v23, &v40, &v80 as u640, &v71);
                                        uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(&v71);
                                    }
                                }
                            } while ((uu_sort::open(v161, v132), v122 = v87, !v85.field_0 as i64));
                        }
                    }
                }
            }
        },
    }
    return v122;
}
