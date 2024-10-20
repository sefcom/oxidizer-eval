fn uu_hostname::display_hostname(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v1: struct16;  // [sp-0x150], Other Possible Types: i64
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: i128;  // [sp-0x138], Other Possible Types: Arguments, Enum, struct16
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [sp-0x118]
    let v9: i64;  // [sp-0x108]
    let v10: i8;  // [sp-0x100]
    let v11: i64;  // [sp-0xf0], Other Possible Types: Argument
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xe0]
    let v14: i192;  // [sp-0xd8], Other Possible Types: struct24, Enum
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [bp-0xc8]
    let v17: i128;  // [sp-0xb8]
    let v18: i64;  // [bp-0xa8]
    let v19: i64;  // [sp-0xa0]
    let v20: i64;  // [sp-0x98]
    let v21: i64;  // [sp-0x90]
    let v22: i64;  // [bp-0x88]
    let v23: i64;  // [sp-0x80]
    let v24: i64;  // [bp-0x78]
    let v25: i16;  // [sp-0x70]
    let v26: i128;  // [sp-0x6e]
    let v27: i64;  // [sp-0x5e]
    let v28: i32;  // [sp-0x56]
    let v29: i16;  // [sp-0x52]
    let v30: i64;  // [sp-0x50]
    let v31: Argument;  // [bp-0x48]
    let v32: i64;  // [sp-0x38]
    let v34: i64;  // r13
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v41: i64;  // r14
    let v43: i64;  // cc_ndep
    let v44: i8;  // bl
    let v45: i128;  // xmm0
    let v46: i64;  // rdx
    let v47: i128;  // xmm0
    let v48: i64;  // rcx
    let v49: i64;  // r8
    let v50: i64;  // r14
    let v51: i64;  // r12
    let v52: i64;  // r12
    let v53: i64;  // r13
    let v54: i64;  // rsi
    let v55: i64;  // r12
    let v56: i64;  // rcx
    let v57: i64;  // rbp
    let v58: i64;  // rdx
    let v59: i64;  // rdi
    let v60: i32;  // esi
    let v61: i32;  // r9d
    let v62: i32;  // r8d
    let v63: i64;  // rax
    let v65: i8;  // al
    let v66: i128;  // xmm0
    let v67: i256;  // ymm0
    let v68: i128;  // xmm1
    let v69: i128;  // xmm1
    let v70: i256;  // ymm1
    let v71: i256;  // ymm1
    let v72: i64;  // rbp
    let v73: i256;  // ymm2
    let v74: i16;  // ax
    let v75: i128;  // xmm0
    let v76: i64;  // rax
    let v77: i64;  // rdx
    let v78: i64;  // rsi
    let v79: i128;  // xmm0
    let v80: i128;  // xmm0
    let v81: i128;  // xmm0
    let v82: i128;  // xmm0
    let v83: i16;  // di
    let v84: i64;  // r8
    let v85: i64;  // r9
    let v86: i16;  // r10w
    let v87: i32;  // r11d
    let v90: i64;  // r14
    let v91: i128;  // xmm1
    let v92: i128;  // xmm2
    let v94: i64;  // rbp
    let v95: i64;  // rbp
    let v97: i64;  // rax
    let v98: i64;  // rax
    let v102: i64;  // r13
    let v103: i64;  // rbx
    let v104: i64;  // rax
    let v105: i64;  // rax
    let v107: i64;  // rsi
    let v108: i64;  // rsi
    let v109: i128;  // xmm0
    let v110: i128;  // xmm1
    let v113: i64;  // rcx

    v4 = hostname::get();
    v34 = v5;
    if v4 == 0x8000000000000000 {
        v35 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v34);
        return v35;
    }
    v14 = std::sys::os_str::bytes::Slice::to_string_lossy(v34, v6);
    if v14 != 0x8000000000000000 {
        v20 = *((&v14 as &char + 16) as &i64);
        v37 = v14;
        v18 = v37;
    } else {
        a0 = a0;
        v36 = *((&v14 as &char + 16) as &i64);
        if v36 {
            if v36 < 0 {
                v22 = 0;
            }
            v22 = 1;
        }
        memcpy(v19, v15, v36);
        v18 = v36;
        v19 = v41;
        v20 = v36;
    }
    v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_419471, 10) as i8;
    if v44 {
        v45 = v18;
        v4 = v45;
        v6 = v20;
        v6 = v6;
        if v4 - v6 < 2 {
            v4 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v6, 2);
            v6 = v6;
        }
        *((v5 + v6) as &i16) = 12602;
        v16 = v6 + 2;
        v47 = v4;
        v14 = v47;
        v4 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v14, v46, v48, v49);
        v50 = v4;
        v51 = v5;
        if !v50 {
            v35 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v51);
            if v14 {
                return v35;
            }
            return v35;
        } else {
            v30 = v7;
            v63 = core::ops::function::FnOnce::call_once(0);
            v21 = v6;
            v23 = v50;
            v44 = v44;
            if !v63 {
                core::result::unwrap_failed(); /* do not return */
            }
            v66 = *(v63 as &i128);
            vvar_649{reg 224} = ((((((((vvar_434{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_433{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_486{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_517{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_648{reg 224}))
            *(v63 as &i64) = *(v63 as &i64) + 1;
            v68 = g_4e2008;
            v16 = v68;
            v69 = anon.637b7dc9a87915f3e8bfc94ee1ffa713.2.llvm.11052658419777295833;
            vvar_658{reg 256} = ((((vvar_655{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_654{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_657{reg 256}))
            v14 = v69;
            v17 = v66;
            v1 = 0;
            v2 = 1;
            for (v3 = 0; v51 != v30 && (v74 = *(v51 as &i16), v25 != 2); v51 = v32 + 32) {
                v25 = v74;
                v75 = *((v51 + 2) as &i128);
                vvar_239{reg 224} = ((vvar_165{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_681{reg 224}))
                v32 = v51;
                v29 = *((v51 + 30) as &i16);
                v28 = *((v51 + 26) as &i32);
                v27 = *((v51 + 18) as &i64);
                v26 = v75;
                if *((&v16 as &char + 8) as &i64) {
                    v76 = core::hash::BuildHasher::hash_one(&v17, &v25);
                    v77 = v15;
                    v78 = v77 & v76;
                    vvar_699{reg 224} = Conv(64->128, (vvar_693{reg 16} >> 0x39<8>))
                    v80 = BinaryOp InterleaveLOV;
                    v81 = v80 >> 64 CONCAT v80 CONCAT v80 CONCAT v80 CONCAT v80;
                    v82 = v81 CONCAT v81 CONCAT v81 CONCAT v81;
                    vvar_239{reg 224} = ((((((((vvar_239{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_699{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_701{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_703{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_705{reg 224}))
                    v24 = v14;
                    v83 = v25;
                    v84 = *((&v26 as &char + 10) as &i64);
                    v85 = *((&v26 as &char + 2) as &i64);
                    v86 = *((&v28 as &char + 2) as &i16);
                    v87 = *((&v27 as &char + 2) as &i32);
                    v22 = *((&v27 as &char + 6) as &i32);
                    loop {
                        v90 = 0;
                        v91 = *((v24 + v78) as &i128);
                        vvar_336{reg 256} = ((vvar_279{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_722{reg 256}))
                        v92 = v91;
                        vvar_245{reg 288} = ((((vvar_280{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_724{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_724{reg 288} CmpEQV vvar_705{reg 224})))
                        v94 = UnaryOp GetMSBs;
                        if v94 {
                            do {
                                v95 = v94;
                                v97 = v24 - 32 - ((!(v95 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v78 & v77) * 32;
                                if v83 == *(v97 as &i16) {
                                    if !v83 {
                                        if v26 == *((v97 + 2) as &i32) && *((v97 + 6) as &i16) == ((v85 & 4294967295 & 4294967295) >> 16 & 4294967295) {
                                            goto LABEL_4830e0;
                                        }
                                    } else {
                                        if !(!(*((v97 + 12) as &i64) ^ v84)) || !(!(*((v97 + 4) as &i64) ^ v85)) || !(v86 == *((v97 + 28) as &i16)) || !(v87 == *((v97 + 20) as &i32)) || !(v22 == *((v97 + 24) as &i32)) {
                                            continue;
                                        }
                                    }
                                }
                            } while ((v98 = v95 - 1 & 4294967295, (v98 as i16 & v95 as i16)));
                        }
                        vvar_242{reg 256} = ((vvar_336{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_722{reg 256} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                        if UnaryOp GetMSBs {
                            break;
                        }
                        v78 = v78 + v90 + 16 & v77;
                    }
                    goto LABEL_4830e0;
                }
                v11 = 0;
                v12 = 1;
                v13 = 0;
                v9 = 32;
                v10 = 3;
                v4 = 0;
                v6 = 0;
                v8 = &v11;
                if <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt(&v25, &v4) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                v102 = v12;
                v103 = v13;
                if v103 >= 2 && *((v102 + v103 - 2) as &i16) == 12602 {
                    v104 = v103;
                    v105 = v104 - 2;
                    if v104 != 2 && *((v102 + v105) as &i8) <= 191 {
                        core::panicking::panic(); /* do not return */
                    }
                }
                v107 = v3;
                if v1 - v107 < v103 {
                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v107, v103);
                    v108 = v3;
                }
                memcpy(v108 + v2, v102, v103);
                v3 = v103 + v3;
                if v3 == v1 {
                    v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                *((v2 + v3) as &i8) = 32;
                v3 += 1;
                v109 = v25;
                vvar_239{reg 224} = ((vvar_239{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_870{reg 224}))
                v110 = *((&v26 as &char + 14) as &i128);
                vvar_336{reg 256} = ((vvar_242{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_872{reg 256}))
                v6 = v110;
                v4 = v109;
                v14 = hashbrown::map::HashMap<K,V,S,A>::insert(&v4);
LABEL_4830e0:
            }
            if v48 {
                v113 = v3;
                if v113 != 1 && *((v11 + v12) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v11 = v2;
                v12 = v113 - 1;
                v31 = Argument {
                    value: &v11
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v4 = Arguments {
                    pieces: [&g_4e1e38, "\n"]
                    args: [&v31]
                    fmt: None
                };
                std::io::stdio::_print(&v4);
            }
            if v15 {
                goto LABEL_483657;
            }
        }
        goto LABEL_483657;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_41947b, 5) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_41946b, 6) as i8 {
        v52 = v19;
        v53 = v20;
        v54 = 0;
        loop {
            v56 = v55;
            if v56 == v52 + v53 {
                break;
            }
            v57 = v54;
            v58 = *(v56 as &i8);
            if v58 >= 0 {
                v59 = v56 + 1;
            } else {
                v60 = v58 & 31;
                v61 = *((v56 + 1) as &i8) & 63;
                if (v58 & 255) <= 223 {
                    v59 = v56 + 2;
                    v58 = v60 * 64 | v61;
                } else {
                    v62 = *((v56 + 2) as &i8) & 63 | v61 * 64;
                    if (v58 & 255) < 240 {
                        v59 = v56 + 3;
                        v58 = v62 | v60 * 0x1000;
                    } else {
                        v59 = v56 + 4;
                        v58 = *((v56 + 3) as &i8) & 63 | v62 * 64 | (v60 & 7) * 0x40000;
                    }
                }
            }
            v54 = v57 - v56 + v59;
            if v58 == 46 {
                v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, &g_41947b, 5) as i8;
                if v65 {
                    if !v57 {
LABEL_48376e:
                        v14 = v52;
                        v15 = v57;
                        v11 = Argument {
                            value: v111
                            formatter: <&T as core::fmt::Display>::fmt
                        };
                        v4 = Arguments {
                            pieces: [&g_4e1e38, "\n"]
                            args: [&v11]
                            fmt: None
                        };
                        std::io::stdio::_print(&v4);
                        goto LABEL_483832;
                    } else {
                        if v57 < v53 {
                            if !(*((v52 + v57) as &i8) <= 191) {
                                goto LABEL_48376e;
                            }
                        } else {
                            if v57 == v53 {
                                goto LABEL_48376e;
                            }
                        }
                        goto LABEL_483750;
                    }
                }
                v72 = v57 + 1;
                if !(amd64g_calculate_condition(4, 24, v57 + 1, 0, amd64g_calculate_rflags_c(17, v65 as u8 as u64, 0, v43)) as char) {
                    if v53 > v72 {
                        if !(*((v52 + v72) as &i8) <= 191) {
                            goto LABEL_4837cf;
                        }
                    } else {
                        if v53 == v72 {
                            goto LABEL_4837cf;
                        }
                    }
LABEL_483750:
                    core::str::slice_error_fail(); /* do not return */
                }
LABEL_4837cf:
                v14 = v72 + v52;
                v15 = v53 - v72;
                v11 = Argument {
                    value: v112
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v4 = Arguments {
                    pieces: [&g_4e1e38, "\n"]
                    args: [&v11]
                    fmt: None
                };
                std::io::stdio::_print(&v4);
LABEL_483832:
                if !v18 {
                    return 0;
                }
LABEL_48383f:
            }
        }
    }
    v14 = &v18;
    v15 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = Arguments {
        pieces: [&g_4e1e38, "\n"]
        args: &[&Argument] {
            ptr: v64
            len: 1
        }
        fmt: None
    };
    std::io::stdio::_print(&v4);
LABEL_483657:
    if v44 {
        return 0;
    }
    if !v18 {
        return 0;
    }
    goto LABEL_48383f;
    goto LABEL_48383f;
}
