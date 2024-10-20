fn uu_ptx::WordFilter::new(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x218], Other Possible Types: struct16, struct8, struct24, Arguments
    let v1: i64;  // [bp-0x210]
    let v2: i128;  // [sp-0x208]
    let v3: i64;  // [sp-0x200]
    let v4: i64;  // [bp-0x1f8]
    let v5: i64;  // [sp-0x1f0]
    let v6: i16;  // [sp-0x1e8]
    let v7: i64;  // [sp-0x1e0]
    let v8: i64;  // [sp-0x1d0]
    let v9: i128;  // [sp-0x1c8], Other Possible Types: Enum, struct24, struct16
    let v10: i64;  // [sp-0x1c0]
    let v11: i128;  // [sp-0x1b8]
    let v12: i64;  // [sp-0x1b0]
    let v13: i128;  // [bp-0x1a8]
    let v14: i64;  // [sp-0x190]
    let v15: i32;  // [bp-0x188], Other Possible Types: String
    let v16: i8;  // [bp-0x180]
    let v17: i8;  // [bp-0x178]
    let v18: i8;  // [bp-0x168]
    let v19: i64;  // [sp-0x160], Other Possible Types: Argument
    let v20: i64;  // [sp-0x158]
    let v21: i64;  // [sp-0x150]
    let v22: i64;  // [sp-0x148]
    let v23: i64;  // [bp-0x138]
    let v24: i64;  // [sp-0x130]
    let v25: i64;  // [sp-0x128]
    let v26: i64;  // [sp-0x120]
    let v27: i64;  // [sp-0x118]
    let v28: i64;  // [sp-0x110]
    let v29: i128;  // [bp-0x108]
    let v30: i128;  // [sp-0xf8]
    let v31: i128;  // [sp-0xe8]
    let v32: i64;  // [sp-0xd0]
    let v33: i64;  // [sp-0xc8]
    let v34: i64;  // [sp-0xc0]
    let v35: i64;  // [sp-0xb8]
    let v36: i128;  // [sp-0xb0]
    let v37: i64;  // [sp-0xa0]
    let v38: i64;  // [sp-0x98]
    let v39: i64;  // [sp-0x90]
    let v40: i64;  // [sp-0x88]
    let v41: i128;  // [sp-0x80]
    let v42: i64;  // [sp-0x70]
    let v43: i64;  // [sp-0x68]
    let v44: i64;  // [sp-0x60]
    let v45: i64;  // [sp-0x58]
    let v46: i64;  // [sp-0x50]
    let v47: i128;  // [sp-0x48]
    let v48: i64;  // [sp-0x38]
    let v50: i64;  // r14
    let v51: i64;  // r13
    let v52: i64;  // rcx
    let v53: i64;  // rdx
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rcx
    let v57: i128;  // xmm0
    let v58: i64;  // r12
    let v59: i64;  // r12
    let v60: i64;  // rax
    let v63: i128;  // xmm0
    let v65: i64;  // rdx
    let v66: i64;  // r8
    let v67: i64;  // r9
    let v68: i64;  // rax
    let v69: i64;  // rax
    let v70: i64;  // rcx
    let v71: i128;  // xmm0
    let v72: i64;  // rax
    let v75: i128;  // xmm0
    let v76: i64;  // rax
    let v77: i64;  // rcx
    let v78: i64;  // rdx
    let v79: i64;  // rcx
    let v80: i64;  // rdx
    let v81: i64;  // rax
    let v82: i128;  // xmm0
    let v83: i64;  // rdx
    let v84: i64;  // fs
    let v85: i64;  // rax
    let v86: i64;  // rcx
    let v87: i64;  // rax
    let v88: i64;  // r12
    let v89: i64;  // rsi
    let v90: i64;  // r12
    let v91: i64;  // rax
    let v92: i64;  // rax
    let v93: i128;  // xmm0
    let v94: i64;  // rax
    let v95: i64;  // r12
    let v96: i128;  // xmm0
    let v97: i64;  // rax
    let v98: i128;  // xmm0
    let v99: i128;  // xmm1
    let v100: i64;  // rax
    let v101: i64;  // rcx
    let v102: i64;  // rsi
    let v103: i128;  // xmm0
    let v104: i64;  // r15
    let v105: i64;  // rax
    let v106: i64;  // rdx
    let v107: i64;  // rax
    let v108: i128;  // xmm0
    let v109: i64;  // rdi
    let v110: i64;  // rdi
    let v111: i64;  // rdx
    let v112: i8;  // sil
    let v113: i64;  // r8
    let v116: i128;  // xmm0
    let v117: i128;  // xmm1
    let v118: i128;  // xmm1

    v50 = *((a1 + 8) as &i64);
    v51 = *((a1 + 16) as &i64);
    if !v51 {
        v54 = core::ops::function::FnOnce::call_once(0);
        if !v54 {
            core::result::unwrap_failed(); /* do not return */
        }
        *(v54 as &i64) = *(v54 as &i64) + 1;
        v55 = &anon.585b1728ec6435d03fbe081b5952853c.1.llvm.8033991318799290767;
        v59 = 0;
        v56 = 0;
        goto LABEL_537426;
        goto LABEL_537426;
    } else {
        v52 = 0;
        do {
            if *((v50 + v52 + 8) as &i64) == 9 && !(*((v53 + 8) as &i8) ^ 101) && !(*(v53 as &i64) ^ 7811887374147546735) {
                v0 = uu_ptx::read_word_filter_file(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.22.llvm.16528050568364581840, 9, a4, a5);
                v55 = v0;
                v56 = *((&v0 as &char + 8) as &i64);
                if !v55 {
                    v9 = 0;
                    v10 = 1;
                    v11 = 0;
                    v12 = v56;
                    v60 = __rust_alloc(32, 8);
                    v63 = v9;
                    *((v60 + 16) as &i64) = v11;
                    *(v60 as &i128) = v63;
                    *((a0 + 8) as &i64) = v60;
                    *((a0 + 16) as &&i64) = &anon.0fac0acfa44b1c763f97960489e7b454.4.llvm.1023991217553494206;
                    *(a0 as &i64) = 0x8000000000000000;
                    return a0;
                }
                v57 = v4;
                v59 = v58 | -0x100 | 1;
                goto LABEL_537426;
            }
        } while ((v52 += 16, v51 << 4 != v52));
LABEL_537426:
        v32 = v55;
        v33 = v56;
        v34 = 0;
        v35 = 0;
        v36 = v57;
        v28 = v59;
        if !v51 {
            v68 = core::ops::function::FnOnce::call_once(0);
            if !v68 {
                core::result::unwrap_failed(); /* do not return */
            }
            *(v68 as &i64) = *(v68 as &i64) + 1;
            v69 = &anon.585b1728ec6435d03fbe081b5952853c.1.llvm.8033991318799290767;
            v70 = 0;
            goto LABEL_537503;
            goto LABEL_537503;
        } else {
            do {
                if *((v50 + 0 + 8) as &i64) == 11 && !(*((v65 + 3) as &i64) ^ 7308332182884676207) && !(*(v65 as &i64) ^ 7362652507990812521) {
                    v0 = uu_ptx::read_word_filter_file(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.21.llvm.16528050568364581840, 11, v66, v67);
                    v69 = v0;
                    v70 = *((&v0 as &char + 8) as &i64);
                    if !v69 {
                        v9 = 0;
                        v10 = 1;
                        v11 = 0;
                        v12 = v70;
                        v72 = __rust_alloc(32, 8);
                        v75 = v9;
                        *((v72 + 16) as &i64) = v11;
                        *(v72 as &i128) = v75;
                        *((a0 + 8) as &i64) = v72;
                        *((a0 + 16) as &&i64) = &anon.0fac0acfa44b1c763f97960489e7b454.4.llvm.1023991217553494206;
                        *(a0 as &i64) = 0x8000000000000000;
                        return a0;
                    }
                    v71 = v4;
                    goto LABEL_537503;
                }
            } while ((v52 += 16, v51 << 4 != v52));
LABEL_537503:
            v37 = v69;
            v38 = v70;
            v39 = 0;
            v40 = 0;
            v41 = v71;
            if v51 {
                v76 = v51 * 16;
                v77 = 0;
                while (!(*((v50 + v77 + 8) as &i64) == 10) || !(!(*((v78 + 8) as &i16) ^ 25964)) || !(!(*(v78 as &i64) ^ 7594807760825709154))) {
                    v77 += 16;
                    if v76 == v77 {
                        goto LABEL_5375b3;
                    }
                }
                v79 = 0;
                while (!(*((v50 + v79 + 8) as &i64) == 11) || !(!(*((v80 + 3) as &i64) ^ 8104339024211225956)) || !(!(*(v80 as &i64) ^ 7450486697838669687))) {
                    v79 += 16;
                    if v76 == v79 {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.18.llvm.16528050568364581840, 10);
                        v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.18.llvm.16528050568364581840;
                        v43 = 10;
                        if v15 != 2 {
                            v13 = v18;
                            v82 = v15;
                            v11 = v17;
                            v9 = v82;
                            v19 = &v42;
                            v20 = <&T as core::fmt::Display>::fmt;
                            v21 = &v9;
                            v22 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                            v0 = "Mismatch between definition and access of `";
                            v1 = 2;
                            v4 = 0;
                            v2 = &v19;
                            v3 = 2;
                            v0 = core::panicking::panic_fmt();
                        }
                        v81 = v16;
                        if !v81 {
                            core::option::expect_failed(); /* do not return */
                        }
                        v0 = struct8 {
                            field_0: 0x1b600000000
                        };
                        v1 = 0;
                        v1 = 1;
                        v9 = std::fs::OpenOptions::_open(&v0, *((v81 + 8) as &i64), *((v81 + 16) as &i64));
                        if !v9 {
                            v15 = *((&v9 as &char + 4) as &i32);
                            v9 = 0;
                            v10 = 1;
                            v11 = 0;
                            if !<std::fs::File as std::io::Read>::read_to_string(&v15, &v9, v83) {
                                v27 = v11;
                                v26 = v10;
                                if vvar_1339 {
                                    v85 = *(v84 as &i64) - 64;
                                    v86 = *((v85 + 8) as &i64);
                                    v14 = *((v85 + 16) as &i64);
                                } else {
                                    v8 = std::sys::pal::unix::rand::hashmap_random_keys();
                                    v14 = v83;
                                    v87 = *(v84 as &i64) - 64;
                                    *(v87 as &i64) = 1;
                                    v86 = v8;
                                    *((v87 + 8) as &i64) = v86;
                                    *((v87 + 16) as &i64) = v14;
                                }
                                v8 = v86;
                                *((*(v84 as &i64) + -56) as &i64) = v8 + 1;
                                v0 = g_67b1d0;
                                v2 = g_67b1e0;
                                v4 = v8;
                                v5 = v14;
                                v88 = v27;
                                v89 = v88 + 3;
                                if v89 >= 4 {
                                    hashbrown::raw::RawTable<T,A>::reserve_rehash(&v0, v89 >> 2, &v4);
                                }
                                <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(v26, v88 + v26, &v0);
                                v8 = v0;
                                v90 = *((&v0 as &char + 8) as &i64);
                                v14 = v2;
                                v23 = *((&v2 as &char + 8) as &i128);
                                v25 = v5;
                                if v44 {
                                    v48 = v25;
                                    v47 = v23;
                                    v44 = v8;
                                    v45 = v90;
                                    v46 = v14;
                                    if !*((a2 + 88) as &i8) {
                                        if *((*(v84 as &i64) - 64) as &i64) {
                                            v94 = *(v84 as &i64) - 64;
                                            v95 = *((v94 + 8) as &i64);
                                            v8 = *((v94 + 16) as &i64);
                                        } else {
                                            v8 = v83;
                                            v95 = std::sys::pal::unix::rand::hashmap_random_keys();
                                            v97 = *(v84 as &i64) - 64;
                                            *(v97 as &i64) = 1;
                                            *((v97 + 8) as &i64) = v95;
                                            *((v97 + 16) as &i64) = v8;
                                        }
                                        v14 = v95 + 1;
                                        *((*(v84 as &i64) + -56) as &i64) = v14;
                                        v0 = g_67b1d0;
                                        v2 = g_67b1e0;
                                        v4 = v95;
                                        v5 = v8;
                                        hashbrown::raw::RawTable<T,A>::reserve_rehash(&v0, 3, &v4);
                                        v0 = hashbrown::map::HashMap<K,V,S,A>::insert(32);
                                        v0 = hashbrown::map::HashMap<K,V,S,A>::insert(9);
                                        v0 = hashbrown::map::HashMap<K,V,S,A>::insert(10);
                                        v98 = v0;
                                        v99 = v2;
                                        v13 = v4;
                                        v11 = v99;
                                        v9 = v98;
                                    } else {
                                        v92 = core::ops::function::FnOnce::call_once(0);
                                        if !v92 {
                                            core::result::unwrap_failed(); /* do not return */
                                        }
                                        v96 = *(v92 as &i128);
                                        *(v92 as &i64) = *(v92 as &i64) + 1;
                                        v11 = g_67bcb8;
                                        v9 = anon.585b1728ec6435d03fbe081b5952853c.2.llvm.8033991318799290767;
                                        v13 = v96;
                                    }
                                    v9 = <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v44);
                                    v31 = v13;
                                    v30 = v11;
                                    v29 = v9;
                                    if !v51 {
                                        goto LABEL_537c70;
                                    }
                                    goto LABEL_5375c8;
                                }
                            }
                        }
                        v0 = 0;
                        v1 = 1;
                        v2 = 0;
                        v3 = v90;
                        v91 = __rust_alloc(32, 8);
                        v93 = v0;
                        *((v91 + 16) as &i64) = v2;
                        *(v91 as &i128) = v93;
                        *((a0 + 8) as &i64) = v91;
                        *((a0 + 16) as &&i64) = &anon.0fac0acfa44b1c763f97960489e7b454.4.llvm.1023991217553494206;
                        *(a0 as &i64) = 0x8000000000000000;
                        return a0;
                    }
                }
                goto LABEL_537c70;
            } else {
LABEL_5375b3:
                v29 = 0;
                if !v51 {
                    goto LABEL_537c70;
                }
            }
LABEL_5375c8:
            v100 = 0;
            while (!(*((v50 + v100 + 8) as &i64) == 11) || !(!(*((v101 + 3) as &i64) ^ 8104339024211225956)) || !(!(*(v101 as &i64) ^ 7450486697838669687))) {
                v100 += 16;
                if v51 << 4 == v100 {
                    goto LABEL_537c70;
                }
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v15, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.17.llvm.16528050568364581840, 11);
            v23 = &anon.e23289579c9441ef21ddb87efb4b8a29.17.llvm.16528050568364581840;
            v24 = 11;
            if v15 != 2 {
                v13 = v18;
                v103 = v15;
                v11 = v17;
                v9 = v103;
                v19 = &v23;
                v20 = <&T as core::fmt::Display>::fmt;
                v21 = &v9;
                v22 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v0 = "Mismatch between definition and access of `";
                v1 = 2;
                v4 = 0;
                v2 = &v19;
                v3 = 2;
                v0 = core::panicking::panic_fmt();
            }
            v102 = v16;
            if v102 && *((v102 + 16) as &i64) {
                v0 = <alloc::string::String as core::clone::Clone>::clone(v102);
                v105 = *((&v0 as &char + 8) as &i64);
                v104 = v29;
                goto LABEL_537e53;
            }
LABEL_537c70:
            v104 = v29;
            if v104 {
                v106 = *((&v29 as &char + 8) as &i64);
                v107 = *((&v30 as &char + 8) as &i64);
                v108 = *(v104 as &i128);
                if v106 {
                    v109 = v106 + 1;
                    v110 = v109 >> 62;
                    if !v109 >> 62 {
                        v110 = v109 * 4;
                        if v110 <= -0x10 {
                            v110 = v110 + 15 & -0x10;
                            v111 = v106 + 17;
                            v106 = v111 + v110;
                        }
                    }
                    v113 = v104 - v110;
                }
                v0 = struct8 {
                    field_0: v114
                };
                v1 = v106;
                v2 = v113;
                v3 = v104;
                v4 = v104 + 16;
                v6 = ~(UnaryOp GetMSBs);
                v7 = v107;
                v9 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v0);
                v19 = Argument {
                    value: &v9
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v0 = Arguments {
                    pieces: &[&str] {
                        ptr: "[^"
                        len: <UNKNOWN>
                    }
                    args: [&v19]
                    fmt: None
                };
                v1 = 2;
                v15 = alloc::fmt::format::format_inner(&v0);
                v0 = v15;
                v105 = *((&v15 as &char + 8) as &i64);
                v2 = *((&v15 as &char + 16) as &i64);
                v112 = v9 | -0x100 | 1;
            } else {
                if *((a2 + 88) as &i8) {
                    v105 = __rust_alloc(3, 1);
                    *((v105 + 2) as &i8) = 43;
                    *(v105 as &i16) = 30556;
                    v2 = 3;
                    v104 = 0;
                    v0 = 3;
                } else {
                    v105 = __rust_alloc(7, 1);
                    *((v105 + 3) as &i32) = 727517705;
                    *(v105 as &i32) = 153116251;
                    v2 = 7;
                    v104 = 0;
                    v0 = 7;
                }
LABEL_537e53:
                v112 = 0;
            }
            v116 = v32;
            v117 = v34;
            *((a0 + 56) as &i128) = v36;
            *((a0 + 40) as &i128) = v117;
            *((a0 + 24) as &i128) = v116;
            v118 = v39;
            *((a0 + 72) as &i64) = v37;
            *((a0 + 88) as &i128) = v118;
            *((a0 + 104) as &i128) = v41;
            *(a0 as &i64) = v0;
            *((a0 + 8) as &i64) = v105;
            *((a0 + 16) as &i64) = v2;
            *((a0 + 120) as &i8) = v28;
            *((a0 + 121) as &i8) = 1;
            return a0;
        }
    }
}
