fn uu_id::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x7fd]
    let v1: u32;  // [bp-0x7fc]
    let v2: void*;  // [bp-0x7f8]
    let v3: u32;  // [bp-0x7ec]
    let v4: u32;  // [sp-0x7e8]
    let v5: u32;  // [bp-0x7e4]
    let v6: u32;  // [bp-0x7e0]
    let v7: u32;  // [bp-0x7dc]
    let v8: u32;  // [bp-0x7d8]
    let v9: u8;  // [bp-0x7d4]
    let v10: u8;  // [bp-0x7d3]
    let v11: u8;  // [bp-0x7d2]
    let v12: u8;  // [bp-0x7d1]
    let v13: u8;  // [bp-0x7d0]
    let v14: u8;  // [bp-0x7cf]
    let v15: u8;  // [bp-0x7ce]
    let v16: u8;  // [bp-0x7cd]
    let v17: u8;  // [bp-0x7cc]
    let v18: struct24;  // [bp-0x7c8]
    let v19: u64;  // [bp-0x7c8]
    let v20: u128;  // [bp-0x7c8]
    let v21: u128;  // [bp-0x7c8]
    let v22: struct16;  // [bp-0x7c8]
    let v23: struct56;  // [bp-0x7c8], Other Possible Types: u64
    let v24: struct24;  // [bp-0x7c8]
    let v26: u128;  // [bp-0x7c8]
    let v28: u64;  // [bp-0x7b8]
    let v29: void*;  // [bp-0x788]
    let v30: void*;  // [bp-0x788], Other Possible Types: u64
    let v31: void*;  // [bp-0x788]
    let v32: u64;  // [bp-0x780]
    let v33: u64;  // [bp-0x780]
    let v34: u64;  // [bp-0x778]
    let v35: u8;  // [bp-0x770]
    let v36: u64;  // [bp-0x768]
    let v37: u64;  // [bp-0x768]
    let v38: u64;  // [bp-0x768]
    let v40: struct24;  // [bp-0x750]
    let v41: u64;  // [bp-0x750]
    let v42: u128;  // [bp-0x748]
    let v43: u64;  // [bp-0x740]
    let v44: u64;  // [bp-0x738]
    let v45: u64;  // [bp-0x730]
    let v46: void*;  // [bp-0x728]
    let v47: u64;  // [bp-0x720]
    let v48: u64;  // [bp-0x718]
    let v49: struct56;  // [bp-0x710]
    let v50: u64;  // [bp-0x708]
    let v51: struct24;  // [bp-0x6d8]
    let v52: u64;  // [bp-0x6d0]
    let v53: u64;  // [bp-0x6c8]
    let v55: u64;  // [bp-0x6b8]
    let v56: core::ops::range::RangeInclusive<usize>;  // [bp-0x6b0]
    let v57: u64;  // [bp-0x698]
    let v58: void*;  // [bp-0x690]
    let v59: struct128;  // [bp-0x688], Other Possible Types: struct28, u64
    let v60: Result<struct32, struct16>;  // [bp-0x688], Other Possible Types: struct24, u64
    let v61: struct24;  // [bp-0x688]
    let v62: struct24;  // [bp-0x688]
    let v63: u64;  // [bp-0x688]
    let v64: u64;  // [bp-0x688]
    let v65: struct56;  // [bp-0x688]
    let v67: u64;  // [bp-0x680]
    let v68: u64;  // [bp-0x680]
    let v69: u64;  // [bp-0x680]
    let v70: u64;  // [bp-0x678]
    let v71: u64;  // [bp-0x678], Other Possible Types: unsigned long
    let v72: u64;  // [bp-0x678]
    let v73: iNone;  // [bp-0x668]
    let v74: iNone;  // [bp-0x668]
    let v75: iNone;  // [bp-0x658]
    let v76: iNone;  // [bp-0x648]
    let v77: iNone;  // [bp-0x638]
    let v78: iNone;  // [bp-0x628]
    let v79: iNone;  // [bp-0x618]
    let v80: u128;  // [bp-0x3b8]
    let v81: struct128;  // [bp-0x3b8], Other Possible Types: struct24, u128
    let v82: struct712;  // [bp-0x3b8]
    let v83: u128;  // [bp-0x3b8]
    let v84: iNone;  // [bp-0x3a8]
    let v85: iNone;  // [bp-0x398]
    let v86: iNone;  // [bp-0x388]
    let v87: iNone;  // [bp-0x378]
    let v88: iNone;  // [bp-0x368]
    let v89: iNone;  // [bp-0x358]
    let v90: iNone;  // [bp-0x348]
    let v91: u32;  // [bp-0x340]
    let v93: struct64;  // [bp-0xf0]
    let v94: Result<struct128, struct16>;  // [bp-0xb0]
    let v96: u8;  // r15b
    let v97: u8;  // r12b
    let v98: u8;  // bpl
    let v99: u8;  // bl
    let v100: u8;  // r14b
    let v101: u8;  // bpl
    let v103: u64;  // rdx
    let v104: u64;  // r12
    let v105: u64;  // rbx
    let v106: void*;  // rax
    let v109: u32;  // eax
    let v113: u64;  // rax
    let v114: void*;  // rcx
    let v115: void*;  // rbx
    let v116: void*;  // rax
    let v117: core::option::Option<usize>;  // rax:rdx
    let v118: core::option::Option<usize>;  // rax:rdx
    let v119: core::result::Result<(), core::fmt::Error>;  // rax
    let v120: core::result::Result<(), core::fmt::Error>;  // rax

    uu_id::uu_app(&v63);
    v82 = clap_builder::builder::command::Command::after_help(&v63);
    v19 = clap_builder::builder::command::Command::try_get_matches_from(&v82, a0, a1);
    if (((0 ^ v22.field_0) & (0 ^ -(v23))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
    }
    v49 = v23;
    v65 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v49);
    v93 = clap_builder::parser::error::MatchesError::unwrap(&v65);
    if v93.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v65, &v93);
        v80 = *(&v65.field_8 as &i128);
        if v65.field_0 != 0x8000000000000000 {
            v45 = v80;
            v44 = v65.field_0;
        }
    }
    v96 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "name");
    v97 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "user");
    v98 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "group");
    v99 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "groups");
    v100 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "real");
    v2 = v46;
    v9 = v96;
    v10 = v97;
    v11 = v98;
    v12 = v99;
    v13 = v100;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "zero");
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "context");
    v16 = 0;
    v4 = 0;
    v17 = v2;
    v101 = v98 | v99 | v97;
    if v96 {
        if !v101 && !v15 {
            goto LABEL_457290;
        }
LABEL_4571ea:
        if v2 {
            if v15 {
                goto LABEL_45723a;
            }
LABEL_457319:
            v56 = core::ops::range::RangeInclusive<usize> {
                start: 0
                end: v2
                exhausted: 0
            };
            v118 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v56);
            match v118 {
                None => {
                    return 0;
                },
                Some(_) => {
                    v48 = v45;
                    v55 = (2 <= v2) as u8 as u64;
                    loop {
                        if v17 {
                            v105 = v104 * 3;
                            <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(&v63 as u8, *((v48 + v105 * 8 + 8) as &i64), *((v48 + v105 * 8 + 16) as &i64));
                            if v64 == 0x8000000000000000 {
                                v30 = uucore::util_name();
                                v33 = v103;
                                eprint!("{}: ", &v30);
                                v106 = v48 + v105 * 8;
                                v30 = 0;
                                v33 = v106[8] as i64;
                                v34 = v106[16] as i64;
                                v35 = 1;
                                eprintln!("{}: no such user", &v30);
                                uucore::mods::error::set_exit_code(1);
                                if v104 + 1 >= v2 {
                                    return 0;
                                }
                                v60 = v64;
                                v36 = v38;
                                goto LABEL_457390;
                            } else {
                                v90 = v79;
                                v89 = v78;
                                v88 = v77;
                                v87 = v76;
                                v86 = v75;
                                v85 = v74;
                                v84 = *((&v60 as &char + 16) as &i128);
                                v83 = *(&v64 as &i128);
                            }
                        } else {
                            v83 = 0x8000000000000000;
                            v83 = v81;
                        }
                        v83 = v83;
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "password") as u8 {
                            uu_id::pline((v80 != 0x8000000000000000) as u8 as u8, v91 as u64);
                            return v115;
                        }
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "human-readable") as u8 {
                            v59 = v81;
                            uu_id::pretty(&v59);
                            return v115;
                        }
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v49, "audit") as u8 {
                            return v115;
                        }
                        if v13 || !v10 && !v11 && !v12 {
                            uucore::features::process::getuid();
                            uucore::features::process::getgid();
                        } else {
                            uucore::features::process::geteuid();
                            uucore::features::process::getegid();
                        }
                        if v80 == 0x8000000000000000 {
                            if v80 == 0x8000000000000000 {
                                goto LABEL_457690;
                            }
                        } else {
                            if v80 == 0x8000000000000000 {
LABEL_457690:
                            }
                        }
                        v1 = v91;
                        v3 = v109;
                        v4 = 1;
                        v5 = v1;
                        v6 = v3;
                        v7 = uucore::features::process::geteuid();
                        v8 = uucore::features::process::getegid();
                        v60 = v64;
                        v69 = v68;
                        v72 = v71;
                        v31 = v30;
                        if v11 {
                            if v9 {
                                v60 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(v6);
                                if let Err(_) = v60 {
                                    v24 = uu_id::uumain::uumain::{{closure}}(&v3, v68);
                                }
                            } else {
                                v119 = core::fmt::num::imp::<impl u32>::_fmt(v6, &v31) as u64;
                                v60 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v119 as &i64), v103);
                                v28 = v71;
                                v26 = v60.field_0;
                            }
                            print!("{}", &v19 as u128);
                            v60 = v59;
                            v69 = v67;
                            v72 = v70;
                            v31 = v29;
                            v33 = v32;
                        }
                        v31 = v30;
                        if v10 {
                            if v9 {
                                v94 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v1 as u64);
                                match v94 {
                                    Ok(_) => {
                                        v61 = uucore::features::entries::uid2usr::{{closure}}(&v94);
                                        if v61.field_0 as i64 == 0x8000000000000000 {
                                            goto LABEL_45789e;
                                        }
                                    },
                                    Err(_) => {
LABEL_45789e:
                                        v18 = uu_id::uumain::uumain::{{closure}}(&v1, v69);
                                    },
                                }
                            } else {
                                v120 = core::fmt::num::imp::<impl u32>::_fmt(v1, &v31) as u64;
                                v62 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v120 as &i64), v103);
                                v28 = v72;
                                v20 = v62.field_0;
                            }
                            print!("{}", &v19 as u128);
                            v60 = v59;
                            v31 = v29;
                            v33 = v32;
                            goto LABEL_457942;
                        } else {
LABEL_457942:
                            v30 = v31;
                            v63 = v60;
                            uucore::features::entries::get_groups_gnu(&v63 as u8, 1, v3 as u64);
                            v51 = core::result::Result<T,E>::unwrap(&v63 as u8);
                            if v17 {
                                if v80 == 0x8000000000000000 {
                                    break;
                                }
                                uucore::features::entries::Passwd::belongs_to(&v63 as u8, &v83);
                                v21 = *((&v62.field_0 as &char + 8) as &i128) as u128;
                                if v63 == 0x8000000000000000 {
                                    break;
                                }
                                v41 = v63;
                                v42 = v21;
                            } else {
                                v40 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v52, v53);
                            }
                            if v12 {
                                v60 = struct24 {
                                    field_0: *((&v40.field_0 as &char + 8) as &i64)
                                    field_8: *((&v40.field_0 as &char + 8) as &i64) + v43 * 4
                                    field_16: &v9
                                };
                                core::iter::traits::iterator::Iterator::collect(&v30, &v60);
                                v60 = alloc::str::join_generic_copy(v33, v34, v47);
                                v36 = v60 as i128 as u128;
                                v57 = v113;
                                v58 = v114;
                                print!("{}{}", &v37, &v57);
                            }
                            if !v101 {
                                uu_id::id_print(&v4, *((&v40.field_0 as &char + 8) as &i64), v43);
                            }
                            print!("{}", &v0);
                            v60 = v59;
                            v68 = v67;
                            v71 = v70;
                            v36 = v37;
                            v74 = v73;
                            if v104 + 1 >= v2 {
                                return 0;
                            }
LABEL_457390:
                            v37 = v36;
                            v64 = v60;
                            v117 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v56);
                            if let None = v117 {
                                return 0;
                            }
                        }
                    }
                    core::option::unwrap_failed(); /* do not return */
                },
            }
        } else {
            v0 = (v14 ? 0 : 10);
            if !v15 {
                goto LABEL_457319;
            }
LABEL_457cb5:
            v81 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("--context (-Z) works only on an SELinux-enabled kernel");
            v59 = struct28 {
                field_0: v81.field_0
                field_16: v81.field_16
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v59);
        }
    } else if v100 != 1 || v101 {
        if (v14 ^ 1) || v15 || v101 {
            goto LABEL_4571ea;
        }
        v81 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("option --zero not permitted in default format");
        v59 = struct28 {
            field_0: v81.field_0
            field_16: v81.field_16
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v59);
    } else if v15 {
        if !v2 {
            goto LABEL_457cb5;
        }
LABEL_45723a:
        v81 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("cannot print security context when user specified");
        v59 = struct28 {
            field_0: v81.field_0
            field_16: v81.field_16
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v59);
    } else {
LABEL_457290:
        v81 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("printing only names or real IDs requires -u, -g, or -G");
        v59 = struct28 {
            field_0: v81.field_0
            field_16: v81.field_16
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v59);
    }
    return v116;
}
