fn uu_cp::Options::from_matches(a1: &struct56) -> : struct24 {
    let a0: struct24;  // rdi
    let v0: struct640;  // [bp-0x304]
    let v1: struct640;  // [bp-0x300]
    let v2: struct640;  // [bp-0x2fc]
    let v3: struct640;  // [bp-0x2f8]
    let v4: struct640;  // [bp-0x2f4]
    let v5: u8;  // [bp-0x2f0]
    let v6: u8;  // [bp-0x2ef]
    let v7: struct712;  // [bp-0x2ee]
    let v8: u8;  // [bp-0x2ed]
    let v9: struct640;  // [bp-0x2ec]
    let v10: struct640;  // [bp-0x2eb]
    let v11: struct640;  // [bp-0x2ea]
    let v12: struct640;  // [bp-0x2e9]
    let v13: struct640;  // [bp-0x2e8]
    let v14: struct640;  // [bp-0x2e7]
    let v15: struct640;  // [bp-0x2e6]
    let v16: struct712;  // [bp-0x2e5]
    let v17: struct712;  // [bp-0x2e4]
    let v18: struct640;  // [bp-0x2e2]
    let v19: struct712;  // [bp-0x2e1]
    let v20: void*;  // [bp-0x2e0]
    let v21: struct32;  // [bp-0x2d8]
    let v22: iNone;  // [bp-0x2d8], Other Possible Types: u64
    let v23: u64;  // [bp-0x2d8]
    let v24: u128;  // [bp-0x2d8]
    let v25: u16;  // [bp-0x2d4]
    let v26: u8;  // [bp-0x2d2]
    let v27: u8;  // [bp-0x2d1]
    let v28: struct712;  // [bp-0x2d0]
    let v29: u64;  // [bp-0x2d0]
    let v30: struct640;  // [bp-0x2c8]
    let v31: struct640;  // [bp-0x2b4]
    let v32: struct640;  // [bp-0x2b0]
    let v33: struct640;  // [bp-0x2ac]
    let v34: struct640;  // [bp-0x2aa]
    let v35: struct640;  // [bp-0x2a9]
    let v36: struct640;  // [bp-0x2a8]
    let v37: struct12;  // [bp-0x2a4]
    let v38: struct12;  // [bp-0x2a4]
    let v39: u32;  // [bp-0x2a4]
    let v40: u16;  // [bp-0x2a0]
    let v41: u8;  // [bp-0x29e]
    let v42: u8;  // [bp-0x29d]
    let v43: u32;  // [bp-0x29c]
    let v44: struct32;  // [sp-0x298], Other Possible Types: Result<struct40, struct16>, u64
    let v45: alloc::string::String;  // [bp-0x298]
    let v46: struct24;  // [bp-0x298]
    let v47: struct24;  // [bp-0x298]
    let v48: struct96;  // [bp-0x298]
    let v49: struct12;  // [bp-0x298]
    let v50: struct12;  // [bp-0x298]
    let v51: struct712;  // [bp-0x290], Other Possible Types: u128
    let v52: struct712;  // [bp-0x290]
    let v53: struct640;  // [bp-0x280]
    let v54: u32;  // [bp-0x264]
    let v55: struct48;  // [bp-0x238]
    let v56: struct32;  // [sp-0x238], Other Possible Types: struct48, struct640, struct24, u64
    let v57: struct40;  // [bp-0x238], Other Possible Types: u64
    let v58: u64;  // [bp-0x238]
    let v59: struct640;  // [bp-0x230], Other Possible Types: u64
    let v60: u64;  // [bp-0x230]
    let v61: u64;  // [bp-0x230]
    let v62: struct640;  // [bp-0x228], Other Possible Types: u64
    let v63: u64;  // [bp-0x228]
    let v64: u64;  // [bp-0x228]
    let v65: struct640;  // [bp-0x220], Other Possible Types: u64
    let v66: u64;  // [bp-0x220], Other Possible Types: unsigned long
    let v67: u64;  // [bp-0x220]
    let v68: u64;  // [bp-0x218]
    let v69: i64;  // [bp-0x218]
    let v70: u64;  // [bp-0x218]
    let v71: u64;  // [bp-0x210]
    let v72: i64;  // [bp-0x210]
    let v73: u64;  // [bp-0x210]
    let v74: struct712;  // [bp-0x208], Other Possible Types: u128
    let v76: void*;  // [bp-0x200]
    let v77: struct712;  // [bp-0x1f8]
    let v78: struct640;  // [bp-0x1e8]
    let v79: struct640;  // [bp-0x1e0]
    let v80: struct640;  // [bp-0x1d8]
    let v81: struct640;  // [bp-0x1d0]
    let v82: struct712;  // [bp-0x1c8]
    let v83: struct16;  // [bp-0x1c8]
    let v84: struct712;  // [bp-0x1c0]
    let v85: struct712;  // [bp-0x1b8]
    let v86: Result<struct16, struct9>;  // [bp-0x1b0], Other Possible Types: struct32
    let v87: struct712;  // [bp-0x1a8]
    let v88: struct24;  // [bp-0x190]
    let v89: struct24;  // [bp-0x178]
    let v90: u64;  // [bp-0x168]
    let v91: void*;  // [bp-0x160]
    let v92: iNone;  // [bp-0x158]
    let v93: u64;  // [bp-0x148]
    let v94: u128;  // [bp-0x140]
    let v95: u64;  // [bp-0x138]
    let v96: struct712;  // [bp-0x130]
    let v97: iNone;  // [bp-0x128]
    let v98: u16;  // [bp-0x11a]
    let v99: struct640;  // [bp-0x118]
    let v100: struct640;  // [bp-0x110]
    let v101: struct640;  // [bp-0x10c]
    let v102: struct24;  // [bp-0x100]
    let v103: struct24;  // [bp-0xe8]
    let v104: struct24;  // [bp-0xe8]
    let v105: struct24;  // [bp-0xd0]
    let v106: u64;  // [bp-0xc0]
    let v107: struct24;  // [bp-0xb8]
    let v108: iNone;  // [bp-0xa0]
    let v109: u64;  // [bp-0x90]
    let v110: struct40;  // [bp-0x88]
    let v111: iNone;  // [bp-0x80]
    let v112: iNone;  // [bp-0x80]
    let v117: alloc::vec::Vec<u8, alloc::alloc::Global>;  // rax
    let v118: u64;  // rdx
    let v120: u64;  // r15
    let v121: i64;  // rax
    let v122: struct712;  // al
    let v123: struct712;  // al
    let v124: i64;  // rax
    let v125: u64;  // rax
    let v126: u64;  // r12
    let v127: u64;  // rbx
    let v128: u8;  // al
    let v129: u64;  // rbp
    let v130: u64;  // r15
    let v131: u64;  // r13
    let v132: struct24;  // rdi
    let v133: i64;  // rsi
    let v134: struct17;  // rdx
    let v135: u64;  // rax
    let v136: u64;  // rax
    let v137: u64;  // rdx
    let v138: u8;  // al
    let v139: u64;  // rax
    let v140: u8;  // al
    let v141: u64;  // rax
    let v142: u32;  // ecx
    let v143: struct640;  // rbx
    let v144: struct640;  // r15
    let v145: i64;  // rbx
    let v146: void*;  // rax
    let v147: u8;  // r12b
    let v148: u64;  // rbx
    let v149: u64;  // r15
    let v150: u8;  // al
    let v151: u64;  // 4098
    let v152: iNone;  // xmm0
    let v153: struct24;  // rdx
    let v154: iNone;  // xmm0
    let v156: iNone;  // xmm0

    v102 = struct24 {
        field_0: 0
        field_8: alloc::alloc::Global::alloc_impl(8, 0, 0)
        field_16: 0
    };
    v44 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v102);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v44);
    if v117 {
        do {
            v120 = v118;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, v117, v120) && clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, v117, v120) == 2 {
                v56 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v117, v120);
                *(&v20[32] as &u64) = v62;
                *(&v20[16] as &i128) = *(&v56.field_0 as &i128);
                *(&v20[8] as &i64) = 9223372036854775817;
                *(v20 as &i64) = 0x8000000000000000;
                return;
            }
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v44);
        } while (v117);
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "recursive") {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "archive");
    }
    v86 = uucore::features::backup_control::determine_backup_mode(a1);
    match v86 {
        Ok(_) => {
            v22 = v86 as i64 as u64;
            v28 = v87;
            format!("{}", &v22 as u8);
            *(&v20[32] as &u64) = v109;
            v20[16] = v108;
            *(&v20[8] as &i64) = 9223372036854775818;
            *(v20 as &i64) = 0x8000000000000000;
            return;
        },
        Err(_) => {
            v18 = uucore::features::update_control::determine_update_mode(a1) as u8;
            v19 = *((&v86 as &char + 8) as &i8);
            if *((&v86 as &char + 8) as &i8) {
                v44 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, _ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE.field_0, g_560aa0.field_0);
                v121 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE.field_0, g_560aa0.field_0, &v44);
                if v121 && uu_cp::Options::from_matches::{{closure}}(*((v121 + 8) as &i64), *((v121 + 16) as &i64)) as u8 {
                    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20 + 16, "--backup is mutually exclusive with -n or --update=none-fail");
                    *(&v20[8] as &i64) = 9223372036854775816;
                    *(v20 as &i64) = 0x8000000000000000;
                    return;
                }
            }
            v89 = uucore::features::backup_control::determine_backup_suffix(a1);
            v122 = uu_cp::OverwriteMode::from_matches(a1) as u32 as u8;
            v123 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-target-directory") as u32 as u8;
            v44 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
            v124 = clap_builder::parser::error::MatchesError::unwrap(&v44);
            v17 = v123;
            if v124 {
                v46 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v124 + 8) as &i64), *((v124 + 16) as &i64));
                v77 = v46.field_16;
                v74 = *(&v46.field_0 as &i128) as u128;
                if v74 == 0x8000000000000000 || std::path::Path::is_dir(v76, v77) as u8 {
                    goto LABEL_49ebb5;
                }
                v47 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v76, v77);
                *(&v20[32] as &u64) = v47.field_16;
                *(&v20[16] as &i128) = *(&v47.field_0 as &i128);
                *(&v20[8] as &i64) = 9223372036854775819;
                *(v20 as &i64) = 0x8000000000000000;
            } else {
LABEL_49ebb5:
                v16 = v122;
                v7 = 1;
                v82 = 0;
                v84 = 8;
                v85 = 0;
                v48 = struct96 {
                    field_0: 0
                    field_8: 5
                    field_16: "preserve"
                    field_32: "no-preserve"
                    field_48: "archive"
                    field_64: "preserve-default-attributes"
                    field_80: "no-dereference-preserve-links"
                };
                v125 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v48);
                if v125 {
                    v127 = v118;
                    do {
                        vvar_1985{stack -136} = struct40 OrderedDict([(0, 𝜙@64b [((4844728, None), vvar_1485{stack -136}), ((4844687, None), None)]), (8, 𝜙@256b [((4844728, None), vvar_1989{stack -128}), ((4844687, None), None)])])
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v110, a1, v126, v127);
                        v128 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(a1, v126, v127) as u8;
                        v111 = v112;
                        if v110.field_0 as i32 == 2 {
                            v111 = v112;
                            if (v128 & 1) {
                                v111 = v112;
                                if vvar_1989{stack -128} {
                                    v111 = v112;
                                    v57 = v56;
                                    v63 = v62;
                                    v60 = v59;
                                    v66 = v65;
                                    v69 = v68;
                                    v72 = v71;
                                    if *(vvar_1989{stack -128} as &i8) == 1 {
                                        v56 = struct48 {
                                            field_0: v126
                                            field_8: v127
                                            field_16: v118
                                            field_24: 0
                                            field_32: ""
                                        };
                                        v83 = alloc::vec::Vec<T,A>::push(&v56, "src/uu/cp/src/cp.rs");
                                        v111 = v112;
                                        v57 = v58;
                                        v63 = v64;
                                        v60 = v61;
                                        v66 = v67;
                                        v69 = v70;
                                        v72 = v73;
                                        goto LABEL_49ecb0;
                                    }
                                }
                            }
                        }
                        v57 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences(a1, v126, v127);
                        v103 = clap_builder::parser::error::MatchesError::unwrap(v126, v127, &v57);
                        v105 = clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(a1, v126, v127);
                        v57 = v56;
                        v63 = v62;
                        v60 = v59;
                        v66 = v65;
                        v69 = v68;
                        v72 = v71;
                        if v103.field_0 {
                            v57 = v56;
                            v63 = v62;
                            v60 = v59;
                            v66 = v65;
                            v69 = v68;
                            v72 = v71;
                            if v105.field_0 {
                                v107 = v104;
                                v30 = v106;
                                v24 = *(&v105.field_0 as &i128) as u128;
                                v56 = struct32 {
                                    field_0: &v24 as u8
                                    field_8: &v82
                                    field_16: v126
                                    field_24: v127
                                };
                                core::iter::traits::iterator::Iterator::fold(&v107, &v56);
                                v57 = v58;
                                v63 = v64;
                                v60 = v61;
                                v66 = v67;
                                v69 = v68;
                                v72 = v71;
                            }
                        }
LABEL_49ecb0:
                        v71 = v72;
                        v68 = v69;
                        v65 = v66;
                        v59 = v60;
                        v62 = v63;
                        v56 = v57;
                        core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v48);
                        v127 = v118;
                    } while (v125);
                }
                alloc::slice::<impl [T]>::sort_by(8, None);
                v1 = 0;
                v0 = 0;
                v86 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v82);
                v55 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v86);
                v3 = 0;
                v2 = 0;
                v4 = 0;
                if v65 != 0x8000000000000000 {
                    v4 = 0;
                    v2 = 0;
                    v3 = 0;
                    v66 = v65;
                    do {
                        v129 = v66;
                        v130 = v68;
                        v131 = v71;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v55.field_0, v59, "archive") as u8 {
                            continue;
                        }
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v55.field_0, v59, "preserve-default-attributes") as u8 {
                            v49 = struct12 {
                                field_0: v0
                                field_4: v1
                                field_6: v3 as u8
                                field_7: v2 as u8
                                field_8: v4
                            };
                            v52 = v51;
                            goto LABEL_49f0ba;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v55.field_0, v59, "no-dereference-preserve-links") as u8 {
                            v50 = struct12 {
                                field_0: v0
                                field_4: v1
                                field_6: v3 as u8
                                field_7: v2 as u8
                                field_8: v4
                            };
                            v52 = v51;
LABEL_49f0ba:
                            uu_cp::Attributes::union(v132, v133, v134);
                            v0 = v24 as i32;
                            v1 = v25;
                            v3 = v26 as u32;
                            v2 = v27 as u32;
                            v4 = v29 as i32;
                            continue;
                        } else {
                            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v55.field_0, v59, "preserve") as u8 {
                                v33 = v1;
                                v32 = v0;
                                v34 = v3 as u8;
                                v35 = v2 as u8;
                                v36 = v4;
                                v88 = struct24 {
                                    field_0: v129
                                    field_8: v130
                                    field_16: v131
                                };
                                v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v88);
                                uu_cp::Attributes::parse_iter(&v48, &v21);
                                v78 = v52;
                                v79 = v48.field_16 as i32;
                                if v135 == 9223372036854775820 {
                                    v37 = uu_cp::Attributes::union(&v32, &v78);
                                } else {
                                    v153 = a0;
                                    *(&v20[60] as &u32) = v54;
                                    v154 = *((&v48.field_16 as &char + 4) as &i128);
                                    *(&v20[44] as &i128) = *((&v48.field_32 as &char + 4) as &i128);
                                    v20[28] = v154;
                                    *(&v20[24] as &struct640) = v79;
                                    goto LABEL_49f9b0;
                                }
                            } else {
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v55.field_0, v59, "no-preserve") as u8 || !v131 {
                                    continue;
                                }
                                v33 = v1;
                                v32 = v0;
                                v34 = v3 as u8;
                                v35 = v2 as u8;
                                v36 = v4;
                                v88 = struct24 {
                                    field_0: v129
                                    field_8: v130
                                    field_16: v131
                                };
                                v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v88);
                                uu_cp::Attributes::parse_iter(&v48, &v21);
                                v80 = v52;
                                v81 = v48.field_16 as i32;
                                if v135 == 9223372036854775820 {
                                    v38 = uu_cp::Attributes::diff(&v32, &v80);
                                } else {
                                    v153 = a0;
                                    *(&v20[60] as &u32) = v54;
                                    v156 = *((&v48.field_16 as &char + 4) as &i128);
                                    *(&v20[44] as &i128) = *((&v48.field_32 as &char + 4) as &i128);
                                    v20[28] = v156;
                                    *(&v20[24] as &struct640) = v81;
LABEL_49f9b0:
                                    *((v153 + 16) as &struct640) = v80;
                                    *((v153 + 8) as &u64) = v135;
                                    *(v153 as &i64) = 0x8000000000000000;
                                }
                            }
                            v0 = v39;
                            v1 = v40;
                            v3 = v41 as u32;
                            v2 = v42 as u32;
                            v4 = v43;
                        }
                        v55 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v86);
                        v66 = v65;
                    } while (v66 != 0x8000000000000000);
                }
                if (v3.field_0 & 1) {
                    v56 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("SELinux was not enabled during the compile time!");
                    v53 = v62;
                    v51 = *(&v56.field_0 as &i128) as u128;
                    v44 = 9223372036854775811 as u64;
                    if (v2.field_0 & 1) {
                        *(&v20[56] as &u64) = v48.field_48;
                        v136 = v44;
                        v137 = *((&v51 as &char + 8) as &i64);
                        *(&v20[40] as &i128) = *(&v48.field_32 as &i128);
                        *(&v20[24] as &u64) = v137;
                        *(&v20[32] as &struct640) = v53;
                        *(&v20[8] as &u64) = v136;
                        *(&v20[16] as &struct712) = v52;
                        *(v20 as &i64) = 0x8000000000000000;
                    } else {
                        uu_cp::show_error_if_needed(&v48);
                        goto LABEL_49f320;
                    }
                } else {
LABEL_49f320:
                    v138 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "Z") as u32 as u8;
                    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "context") as u8 {
                        v44 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "context");
                        v139 = clap_builder::parser::error::MatchesError::unwrap("context", &v44);
                        if !v139 {
                            goto LABEL_49f3ab;
                        }
                        v45 = <alloc::string::String as core::clone::Clone>::clone(v139);
                        v30 = v45.vec.len;
                        *(&v22 as &i128) = *(&v45.vec.buf.inner.cap as &i128);
                    } else {
LABEL_49f3ab:
                        v23 = 0x8000000000000000 as u64;
                    }
                    v140 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "attributes-only") as u32 as u8;
                    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "copy-contents") as u8;
                    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "cli-symbolic-links") as u8;
                    v13 = uu_cp::CopyMode::from_matches(a1) as u8;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-dereference") as u8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "no-dereference-preserve-links") as u8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "archive") as u8 {
                        v5 = 1;
                        if !v7 || !uu_cp::CopyMode::from_matches(a1) as u8 {
                            goto LABEL_49f494;
                        }
                    }
                    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "dereference") as u8;
LABEL_49f494:
                    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "one-file-system") as u8;
                    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "parents") as u8;
                    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "debug") as u8;
                    v6 = 1;
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "verbose") as u8 {
                        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "debug") as u8;
                    }
                    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "strip-trailing-slashes") as u8;
                    v44 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "reflink");
                    v141 = clap_builder::parser::error::MatchesError::unwrap("reflink", &v44);
                    v31 = v142 & -0x100 | 1;
                    if v141 {
                        v143 = *((v141 + 8) as &i64);
                        v144 = *((v141 + 16) as &i64);
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v143, v144, "always") as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v143, v144, "auto") as u8 {
                            goto LABEL_49f5c1;
                        }
                        v31 = v142 & -0x100 | 2;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v143, v144, "never") as u8 {
                            goto LABEL_49f5c1;
                        }
                        v56 = 0;
                        v59 = v143;
                        v62 = v144;
                        v65 = 1;
                        format!("invalid argument {} for 'reflink'", &v56);
LABEL_49f90e:
                        *(&v20[32] as &i64) = *((v145 + 16) as &i64);
                        *(&v20[16] as &i128) = *(v145 as &i128);
                        *(&v20[8] as &i64) = 9223372036854775816;
                        *(v20 as &i64) = 0x8000000000000000;
                    } else {
LABEL_49f5c1:
                        v44 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "sparse");
                        v146 = clap_builder::parser::error::MatchesError::unwrap("sparse", &v44);
                        v8 = v140;
                        if !v146 {
                            v150 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "progress") as u8;
                            v151 = v22 as i64;
                            v152 = v22 as i128;
                            v97 = v152;
                            v99 = v30;
                            v101 = v1;
                            v100 = v0;
                            v92 = *(&v89.field_0 as &i128);
                            v93 = v90;
                            v94 = v74;
                            v96 = v77;
                            v20[48] = v152;
                            *(&v20[62] as &u16) = v98;
                            *(&v20[64] as &struct640) = v99;
                            *(&v20[72] as &struct640) = v100;
                            *(&v20[76] as &struct640) = v101;
                            *(&v20[32] as &u64) = v95;
                            *(&v20[40] as &struct712) = v96;
                            *(v20 as &i128) = *(&v89.field_0 as &i128);
                            *(&v20[16] as &i128) = *(&v93 as &i128);
                            *(&v20[78] as &u8) = v3 as u8;
                            *(&v20[79] as &u8) = v2 as u8;
                            *(&v20[80] as &struct640) = v4;
                            *(&v20[84] as &struct712) = v16;
                            *(&v20[85] as &u8) = v118 as u8;
                            *(&v20[86] as &u8) = v8;
                            *(&v20[87] as &struct640) = v15;
                            *(&v20[88] as &struct640) = v14;
                            *(&v20[89] as &u8) = v5;
                            *(&v20[90] as &struct712) = v17;
                            *(&v20[91] as &struct640) = v12;
                            *(&v20[92] as &struct640) = v11;
                            *(&v20[93] as &struct640) = v9;
                            *(&v20[94] as &struct712) = v7;
                            *(&v20[95] as &struct640) = v10;
                            *(&v20[96] as &u8) = v6;
                            *(&v20[97] as &u8) = v150;
                            *(&v20[98] as &u8) = v138 | (v151 != 0x8000000000000000) as u8 as u8;
                            *(&v20[99] as &u8) = v147;
                            *(&v20[100] as &u8) = v31 as u8;
                            *(&v20[101] as &struct712) = v19;
                            *(&v20[102] as &struct640) = v18;
                            *(&v20[103] as &struct640) = v13;
                            return;
                        }
                        v91 = v146;
                        v148 = v146[8] as i64;
                        v149 = v146[16] as i64;
                        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v148, v149, "always") as u8 {
                            v150 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "progress") as u8;
                            v151 = v22 as i64;
                            v152 = v22 as i128;
                            v97 = v152;
                            v99 = v30;
                            v101 = v1;
                            v100 = v0;
                            v92 = *(&v89.field_0 as &i128);
                            v93 = v90;
                            v94 = v74;
                            v96 = v77;
                            v20[48] = v152;
                            *(&v20[62] as &u16) = v98;
                            *(&v20[64] as &struct640) = v99;
                            *(&v20[72] as &struct640) = v100;
                            *(&v20[76] as &struct640) = v101;
                            *(&v20[32] as &u64) = v95;
                            *(&v20[40] as &struct712) = v96;
                            *(v20 as &i128) = *(&v89.field_0 as &i128);
                            *(&v20[16] as &i128) = *(&v93 as &i128);
                            *(&v20[78] as &u8) = v3 as u8;
                            *(&v20[79] as &u8) = v2 as u8;
                            *(&v20[80] as &struct640) = v4;
                            *(&v20[84] as &struct712) = v16;
                            *(&v20[85] as &u8) = v118 as u8;
                            *(&v20[86] as &u8) = v8;
                            *(&v20[87] as &struct640) = v15;
                            *(&v20[88] as &struct640) = v14;
                            *(&v20[89] as &u8) = v5;
                            *(&v20[90] as &struct712) = v17;
                            *(&v20[91] as &struct640) = v12;
                            *(&v20[92] as &struct640) = v11;
                            *(&v20[93] as &struct640) = v9;
                            *(&v20[94] as &struct712) = v7;
                            *(&v20[95] as &struct640) = v10;
                            *(&v20[96] as &u8) = v6;
                            *(&v20[97] as &u8) = v150;
                            *(&v20[98] as &u8) = v138 | (v151 != 0x8000000000000000) as u8 as u8;
                            *(&v20[99] as &u8) = v147;
                            *(&v20[100] as &u8) = v31 as u8;
                            *(&v20[101] as &struct712) = v19;
                            *(&v20[102] as &struct640) = v18;
                            *(&v20[103] as &struct640) = v13;
                            return;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v148, v149, "auto") as u8 {
                            v150 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "progress") as u8;
                            v151 = v22 as i64;
                            v152 = v22 as i128;
                            v97 = v152;
                            v99 = v30;
                            v101 = v1;
                            v100 = v0;
                            v92 = *(&v89.field_0 as &i128);
                            v93 = v90;
                            v94 = v74;
                            v96 = v77;
                            v20[48] = v152;
                            *(&v20[62] as &u16) = v98;
                            *(&v20[64] as &struct640) = v99;
                            *(&v20[72] as &struct640) = v100;
                            *(&v20[76] as &struct640) = v101;
                            *(&v20[32] as &u64) = v95;
                            *(&v20[40] as &struct712) = v96;
                            *(v20 as &i128) = *(&v89.field_0 as &i128);
                            *(&v20[16] as &i128) = *(&v93 as &i128);
                            *(&v20[78] as &u8) = v3 as u8;
                            *(&v20[79] as &u8) = v2 as u8;
                            *(&v20[80] as &struct640) = v4;
                            *(&v20[84] as &struct712) = v16;
                            *(&v20[85] as &u8) = v118 as u8;
                            *(&v20[86] as &u8) = v8;
                            *(&v20[87] as &struct640) = v15;
                            *(&v20[88] as &struct640) = v14;
                            *(&v20[89] as &u8) = v5;
                            *(&v20[90] as &struct712) = v17;
                            *(&v20[91] as &struct640) = v12;
                            *(&v20[92] as &struct640) = v11;
                            *(&v20[93] as &struct640) = v9;
                            *(&v20[94] as &struct712) = v7;
                            *(&v20[95] as &struct640) = v10;
                            *(&v20[96] as &u8) = v6;
                            *(&v20[97] as &u8) = v150;
                            *(&v20[98] as &u8) = v138 | (v151 != 0x8000000000000000) as u8 as u8;
                            *(&v20[99] as &u8) = v147;
                            *(&v20[100] as &u8) = v31 as u8;
                            *(&v20[101] as &struct712) = v19;
                            *(&v20[102] as &struct640) = v18;
                            *(&v20[103] as &struct640) = v13;
                            return;
                        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v148, v149, "never") as u8 {
                            v150 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "progress") as u8;
                            v151 = v22 as i64;
                            v152 = v22 as i128;
                            v97 = v152;
                            v99 = v30;
                            v101 = v1;
                            v100 = v0;
                            v92 = *(&v89.field_0 as &i128);
                            v93 = v90;
                            v94 = v74;
                            v96 = v77;
                            v20[48] = v152;
                            *(&v20[62] as &u16) = v98;
                            *(&v20[64] as &struct640) = v99;
                            *(&v20[72] as &struct640) = v100;
                            *(&v20[76] as &struct640) = v101;
                            *(&v20[32] as &u64) = v95;
                            *(&v20[40] as &struct712) = v96;
                            *(v20 as &i128) = *(&v89.field_0 as &i128);
                            *(&v20[16] as &i128) = *(&v93 as &i128);
                            *(&v20[78] as &u8) = v3 as u8;
                            *(&v20[79] as &u8) = v2 as u8;
                            *(&v20[80] as &struct640) = v4;
                            *(&v20[84] as &struct712) = v16;
                            *(&v20[85] as &u8) = v118 as u8;
                            *(&v20[86] as &u8) = v8;
                            *(&v20[87] as &struct640) = v15;
                            *(&v20[88] as &struct640) = v14;
                            *(&v20[89] as &u8) = v5;
                            *(&v20[90] as &struct712) = v17;
                            *(&v20[91] as &struct640) = v12;
                            *(&v20[92] as &struct640) = v11;
                            *(&v20[93] as &struct640) = v9;
                            *(&v20[94] as &struct712) = v7;
                            *(&v20[95] as &struct640) = v10;
                            *(&v20[96] as &u8) = v6;
                            *(&v20[97] as &u8) = v150;
                            *(&v20[98] as &u8) = v138 | (v151 != 0x8000000000000000) as u8 as u8;
                            *(&v20[99] as &u8) = v147;
                            *(&v20[100] as &u8) = v31 as u8;
                            *(&v20[101] as &struct712) = v19;
                            *(&v20[102] as &struct640) = v18;
                            *(&v20[103] as &struct640) = v13;
                            return;
                        } else {
                            format!("invalid argument {} for 'sparse'", &v91);
                        }
                        goto LABEL_49f90e;
                    }
                }
            }
            return;
        },
    }
}
