fn uu_seq::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u16;  // [bp-0x51c]
    let v1: u8;  // [bp-0x51a]
    let v2: alloc::string::String;  // [bp-0x518], Other Possible Types: struct32, struct80, u16
    let v3: struct16;  // [bp-0x518]
    let v4: u128;  // [bp-0x518]
    let v5: u128;  // [bp-0x518]
    let v6: struct56;  // [bp-0x518]
    let v7: u8;  // [bp-0x516]
    let v8: u64;  // [bp-0x510]
    let v9: u64;  // [bp-0x508]
    let v10: u8;  // [bp-0x500]
    let v11: i64;  // [bp-0x4c8]
    let v12: u8;  // [bp-0x4c0]
    let v13: i64;  // [bp-0x4b8]
    let v14: u64;  // [bp-0x4b0]
    let v15: iNone;  // [bp-0x4a8], Other Possible Types: alloc::string::String, u128
    let v16: u64;  // [bp-0x498]
    let v17: u128;  // [bp-0x498]
    let v18: iNone;  // [bp-0x488]
    let v19: u128;  // [bp-0x478]
    let v20: struct56;  // [bp-0x460]
    let v21: u64;  // [bp-0x458]
    let v22: struct32;  // [bp-0x428], Other Possible Types: u128
    let v23: u64;  // [bp-0x420]
    let v24: u64;  // [bp-0x418]
    let v25: u128;  // [bp-0x410]
    let v26: u32;  // [bp-0x408]
    let v27: u64;  // [bp-0x400]
    let v28: void*;  // [bp-0x3f8]
    let v29: u64;  // [bp-0x3f0]
    let v30: u8;  // [bp-0x3e8]
    let v31: iNone;  // [bp-0x3d8]
    let v32: struct24;  // [bp-0x3d8]
    let v33: u128;  // [bp-0x3c8]
    let v34: iNone;  // [bp-0x3b8]
    let v35: u128;  // [bp-0x3a8]
    let v36: u64;  // [bp-0x3a0]
    let v37: iNone;  // [bp-0x398]
    let v38: struct24;  // [bp-0x398]
    let v39: u128;  // [bp-0x388]
    let v40: iNone;  // [bp-0x378]
    let v41: u64;  // [bp-0x370]
    let v42: u128;  // [bp-0x368]
    let v43: iNone;  // [bp-0x360]
    let v44: alloc::string::String;  // [bp-0x350]
    let v45: struct120;  // [bp-0x338], Other Possible Types: struct32, struct40, struct56, struct712, Result<struct40, struct16>
    let v46: struct24;  // [bp-0x338]
    let v47: struct24;  // [bp-0x338]
    let v48: u64;  // [bp-0x338]
    let v49: struct64;  // [bp-0x338]
    let v50: struct64;  // [bp-0x338]
    let v51: struct64;  // [bp-0x338]
    let v52: struct80;  // [bp-0x338]
    let v53: u64;  // [bp-0x330]
    let v54: u8;  // [bp-0x31f]
    let v55: u8;  // [bp-0x31e]
    let v56: u8;  // [bp-0x31d]
    let v57: u8;  // [bp-0x31c]
    let v58: u16;  // [bp-0x31b]
    let v59: u8;  // [bp-0x319]
    let v60: void*;  // [bp-0x318]
    let v61: u64;  // [bp-0x2f8]
    let v62: void*;  // [bp-0x2f0]
    let v63: struct64;  // [bp-0x70]
    let v65: u64;  // rdi
    let v67: u64;  // rdx
    let v68: u64;  // rax
    let v69: u64;  // rcx
    let v70: u8;  // bpl
    let v71: i64;  // rax
    let v72: void*;  // r15
    let v73: u64;  // r12
    let v74: u64;  // r15
    let v75: u64;  // r13
    let v76: i64;  // r14
    let v77: u8;  // bl
    let v78: iNone;  // xmm0
    let v79: u128;  // xmm1
    let v80: iNone;  // xmm2
    let v81: u8;  // bl
    let v82: iNone;  // xmm0
    let v83: u128;  // xmm1
    let v84: iNone;  // xmm2
    let v85: u64;  // rax
    let v86: u64;  // rax
    let v88: u64;  // rdi
    let v89: u8;  // bl
    let v90: iNone;  // xmm0
    let v91: u128;  // xmm1
    let v92: iNone;  // xmm2
    let v93: u64;  // r12
    let v94: u64;  // r15
    let v95: struct16;  // rdx
    let v96: u8;  // r13b
    let v97: u8;  // r11b
    let v98: u8;  // r9b
    let v99: void*;  // r8
    let v100: u64;  // rsi
    let v101: u128;  // xmm0
    let v104: void*;  // r10
    let v105: u64;  // rbx
    let v106: u64;  // rax
    let v107: u64;  // rax
    let v109: struct24;  // dil, Other Possible Types: u8
    let v110: u8;  // cl
    let v111: u8;  // al
    let v112: iNone;  // xmm0
    let v113: iNone;  // xmm1
    let v114: u64;  // r14
    let v115: void*;  // r15
    let v116: u64;  // rdi
    let v117: void*;  // r13

    v45 = uu_seq::uu_app();
    v22 = uu_seq::split_short_args_with_value(a0, a1);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v45, &v22);
    v65 = v8;
    if (((0 ^ v3.field_0) & (0 ^ -(v3.field_0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
    }
    v20 = v6;
    v45 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20);
    v63 = clap_builder::parser::error::MatchesError::unwrap(&v45);
    if v63.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v12, &v63);
        v45 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "separator");
        v46 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::option::Option<T>::map_or(clap_builder::parser::error::MatchesError::unwrap("separator", &v45)), v67);
        v16 = v46.field_16;
        v15 = *(&v46.field_0 as &i128);
        v45 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "terminator");
        v68 = clap_builder::parser::error::MatchesError::unwrap("terminator", &v45);
        v47 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v69, v68);
        v9 = v47.field_16;
        v2 = *(&v47.field_0 as &i128);
        v70 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "equal-width");
        v48 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, "format");
        v71 = clap_builder::parser::error::MatchesError::unwrap("format", &v48);
        v24 = v16;
        v22 = v15;
        v25 = v2;
        v27 = v9;
        v30 = v70;
        v28 = v72;
        v29 = v73;
        if (v72 & v70) {
            v48 = 9223372036854775810;
            v74 = alloc::boxed::Box<T>::new(&v48) as u64;
        } else {
            v75 = v14;
            if v75 > 1 {
                v76 = v13;
                v49 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*(v13 as &i64) + 8) as &i64), *((*(v13 as &i64) + 16) as &i64));
                if v49.field_0 as i32 == 2 {
                    v77 = *((&v49.field_0 as &char + 8) as &i8);
                    v15 = <alloc::string::String as core::clone::Clone>::clone(*(v76 as &i64));
                    v9 = v16;
                    v4 = *(&v15.vec.buf.inner.cap as &i128);
                    v10 = v77;
                    v74 = alloc::boxed::Box<T>::new(&v5) as u64;
                } else {
                    v78 = v49.field_0;
                    v79 = v49.field_16;
                    v80 = v49.field_32;
                    v35 = v49.field_48;
                    v34 = v80;
                    v33 = v79;
                    v31 = v78;
                    if v75 == 2 {
                        goto LABEL_46b5da;
                    }
                    v50 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*((v76 + 8) as &i64) + 8) as &i64), *((*((v76 + 8) as &i64) + 16) as &i64));
                    if v50.field_0 as i32 == 2 {
                        v81 = *((&v50.field_0 as &char + 8) as &i8);
                        v15 = <alloc::string::String as core::clone::Clone>::clone(*((v76 + 8) as &i64));
                        v9 = v16;
                        v5 = *(&v15.vec.buf.inner.cap as &i128);
                        v10 = v81;
                        v74 = alloc::boxed::Box<T>::new(&v5) as u64;
                    } else {
                        v82 = v50.field_0;
                        v83 = v50.field_16;
                        v84 = v50.field_32;
                        v42 = v50.field_48;
                        v40 = v84;
                        v39 = v83;
                        v37 = v82;
LABEL_46b602:
                        v85 = (v38.field_16 < 9223372036854775813 ? 0x8000000000000000 + v38.field_16 + 1 : 0);
                        if v85 {
                            if v85 != 3 {
                                goto LABEL_46b740;
                            }
                            goto LABEL_46b61f;
                        } else if v41 as i8 == 1 {
LABEL_46b61f:
                            v11 = v13;
                            v2 = <alloc::string::String as core::clone::Clone>::clone(*((v13 + 8) as &i64));
                            v45 = struct32 {
                                field_0: 0x8000000000000000
                                field_8: *(&v2.vec.buf.inner.cap as &i128)
                                field_24: v9
                            };
                            v86 = alloc::boxed::Box<T>::new(&v45) as u64;
                            goto LABEL_46b7c3;
                        } else {
LABEL_46b740:
                            if v75 < 1 {
                                v116 = v75 - 1;
                                v117 = 0;
                            }
                            v11 = v13;
                            v51 = uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(*((*((v13 + v88 * 8) as &i64) + 8) as &i64), *((*((v13 + v88 * 8) as &i64) + 16) as &i64));
                            if v51.field_0 as i32 == 2 {
                                v89 = *((&v51.field_0 as &char + 8) as &i8);
                                v44 = <alloc::string::String as core::clone::Clone>::clone(*((v11 + v88 * 8) as &i64));
                                v2 = struct32 {
                                    field_0: v44.vec.buf.inner.cap.__0
                                    field_8: v44.vec.buf.inner.ptr.pointer.pointer
                                    field_24: v89
                                };
                                v86 = alloc::boxed::Box<T>::new(&v2) as u64;
LABEL_46b7c3:
                                v74 = v86;
                            } else {
                                v90 = v51.field_0;
                                v91 = v51.field_16;
                                v92 = v51.field_32;
                                v19 = v51.field_48;
                                v18 = v92;
                                v17 = v91;
                                v15 = v90;
                                if v72 {
                                    v52 = uucore::features::format::Format<F,T>::parse(v72, v73);
                                    v93 = v52.field_0;
                                    v94 = v53;
                                    v95 = v52.field_16 as i64;
                                    v96 = *((&v52.field_16 as &char + 8) as &i8);
                                    v97 = v54;
                                    v98 = v55;
                                    v2 = v58;
                                    v7 = v59;
                                    v99 = v60;
                                    v100 = *((&v52.field_32 as &char + 8) as &i64);
                                    if v93 == 2 {
                                        v45 = struct40 {
                                            field_0: v53
                                            field_8: v95
                                            field_16: v96
                                            field_17: v97
                                            field_18: v98
                                            field_19: v56
                                            field_20: v57
                                            field_21: v2
                                            field_23: v7
                                            field_24: v60
                                            field_32: v100
                                        };
                                        v74 = alloc::boxed::Box<T>::new(&v45) as u64;
                                    } else {
                                        v101 = v52.field_48;
                                        v0 = v2;
                                        v1 = v7;
                                        v104 = 0;
LABEL_46baf0:
                                        v2 = struct80 {
                                            field_0: v93
                                            field_8: v94
                                            field_16: v104
                                            field_24: v96
                                            field_25: v97
                                            field_26: v98
                                            field_27: v110
                                            field_28: v111
                                            field_29: v0
                                            field_31: v1
                                            field_32: v99
                                            field_40: v100
                                            field_48: v101
                                            field_64: v61
                                            field_72: v62
                                        };
                                        v112 = *(&v32.field_16 as &i128);
                                        v113 = v40 as i128;
                                        v45 = struct120 {
                                            field_0: v112
                                            field_16: v34
                                            field_32: v35 as i64
                                            field_40: *(&v38.field_16 as &i128)
                                            field_56: v113
                                            field_72: v42 as i64
                                            field_80: v17
                                            field_96: v18
                                            field_112: v19 as i64
                                        };
                                        v114 = uu_seq::print_seq(&v45, v23, v24, v26, v27, &v2, v109, v104);
                                        if !v114 || std::io::error::Error::kind(v114) as u8 == 11 {
                                            return v115;
                                        }
                                        v115 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v114);
                                        return v115;
                                    }
                                } else {
                                    v93 = uu_seq::select_precision(&v31, &v37, &v15);
                                    v94 = v67;
                                    if v70 {
                                        v105 = ((v93 & 1) ? v67 : 0);
                                        v106 = core::cmp::Ord::max(v36, v43 as i64);
                                        v107 = core::cmp::Ord::max(v106, *((&v19 as &char + 8) as &i64));
                                    }
                                    if (v93 & 1) {
                                        v1 = *((&v51.field_0 as &char + 2) as &i8);
                                        v0 = v51.field_0;
                                        v109 = !v67;
                                        v110 = 2;
                                        goto LABEL_46baf0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                v32 = uu_seq::number::PreciseNumber::one();
LABEL_46b5da:
                v38 = uu_seq::number::PreciseNumber::one();
                goto LABEL_46b602;
            }
        }
    } else {
        v48 = 9223372036854775809;
        v74 = alloc::boxed::Box<T>::new(&v45) as u64;
    }
    return v74;
}
