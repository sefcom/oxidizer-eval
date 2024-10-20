fn uu_wc::word_count_from_input() -> u32 {
    let v0: i64;  // [bp-0x4150]
    let v1: i8;  // [bp-0x4144]
    let v2: i8;  // [bp-0x4140], Other Possible Types: Enum
    let v3: i8;  // [bp-0x4138]
    let v4: i8;  // [bp-0x4130]
    let v5: i384;  // [bp-0x4128], Other Possible Types: struct48
    let v6: i128;  // [bp-0x4120]
    let v7: i128;  // [bp-0x4118]
    let v8: i128;  // [bp-0x4110]
    let v9: i64;  // [sp-0x4108]
    let v10: i64;  // [sp-0x4100]
    let v11: i32;  // [bp-0x40f0]
    let v12: i32;  // [sp-0x40e8], Other Possible Types: Enum, struct8, struct4
    let v13: i8;  // [sp-0x40e0]
    let v14: i64;  // [sp-0x40d8]
    let v15: i32;  // [sp-0x40d0]
    let v16: i8;  // [sp-0x40cc]
    let v17: i64;  // [sp-0x40c8]
    let v18: i8;  // [bp-0x40c7]
    let v19: i8;  // [bp-0x40b0]
    let v20: i8;  // [bp-0x40a8]
    let v21: i64;  // [sp-0x4048], Other Possible Types: Enum
    let v22: i8;  // [sp-0x4040]
    let v23: i128;  // [bp-0x4038], Other Possible Types: struct8, struct44, Enum, struct4
    let v24: i32;  // [bp-0x4030]
    let v25: i8;  // [sp-0x402f]
    let v26: i16;  // [sp-0x402c]
    let v27: i128;  // [sp-0x4028]
    let v28: i64;  // [sp-0x4018]
    let v29: i64;  // [sp-0x4008]
    let v30: i32;  // [sp-0x4000]
    let v31: i8;  // [sp-0x3ffc]
    let v32: i64;  // [sp-0x3030]
    let v33: i64;  // [sp-0x2030]
    let v34: i64;  // [sp-0x1030]
    let v36: i64;  // rsi
    let v37: i8;  // dl
    let v38: i8;  // dl
    let v39: i64;  // rdx
    let v40: i8;  // sil
    let v41: i8;  // cl
    let v42: i8;  // dil
    let v43: i8;  // r9b
    let v44: i8;  // r8b
    let v45: i64;  // rdi
    let v46: i32;  // esi
    let v47: i64;  // rdx
    let v48: i8;  // cl
    let v49: i8;  // al
    let v50: i8;  // dl
    let v51: i8;  // r8b
    let v52: i8;  // dil
    let v59: i64;  // rax
    let v60: i64;  // rsi
    let v61: i64;  // rdx
    let v64: i64;  // rax
    let v65: i64;  // rsi
    let v68: i64;  // rax
    let v69: i64;  // rsi
    let v72: i64;  // rax
    let v73: i64;  // rsi
    let v74: i64;  // rbp
    let v75: i64;  // r15
    let v76: i64;  // r15
    let v77: i64;  // rax
    let v78: i64;  // rsi
    let v79: i64;  // rax
    let v80: i64;  // rsi
    let v81: i64;  // rax
    let v82: i64;  // rsi
    let v83: i64;  // rax
    let v84: i64;  // rsi
    let v85: i64;  // rdx
    let v86: i64;  // rax
    let v87: i64;  // rsi
    let v88: i64;  // rax
    let v89: i64;  // rsi
    let v90: i64;  // rax
    let v91: i64;  // rsi
    let v92: i64;  // rax
    let v93: i64;  // rsi
    let v94: i64;  // rax
    let v95: i64;  // rsi
    let v96: i64;  // rdx
    let v97: i64;  // rax
    let v98: i64;  // rsi
    let v99: i64;  // rax
    let v100: i64;  // rsi
    let v101: i64;  // rax
    let v102: i64;  // rsi
    let v106: i64;  // r14
    let v107: i64;  // rax
    let v108: i64;  // rsi
    let v109: i64;  // rax
    let v110: i64;  // rsi
    let v111: i64;  // rax
    let v112: i64;  // rsi
    let v113: i64;  // rax
    let v114: i64;  // rsi
    let v115: i64;  // rax
    let v116: i64;  // rsi
    let v117: i64;  // rax
    let v118: i64;  // rsi
    let v119: i64;  // rax
    let v120: i64;  // rsi
    let v121: i64;  // rax
    let v122: i64;  // rsi
    let v123: i32;  // r14d
    let v124: i64;  // r14
    let v125: i64;  // rdi
    let v126: i64;  // r14
    let v128: i64;  // rax
    let v130: i128;  // xmm1
    let v131: i64;  // r13
    let v132: i64;  // rax
    let v133: i64;  // rdx
    let v134: i64;  // rax
    let v135: i64;  // cc_ndep
    let v137: i64;  // r13
    let v138: i64;  // r12
    let v139: i32;  // ebp
    let v140: i64;  // r13
    let v141: i64;  // r15
    let v142: i64;  // rax
    let v143: i64;  // rax
    let v144: i64;  // r15
    let v145: i64;  // rbp
    let v146: i64;  // r15
    let v147: i64;  // rdi
    let v148: i128;  // xmm0
    let v149: i64;  // rax
    let v150: i64;  // rax

    v34 = 0;
    v33 = 0;
    v32 = 0;
    v24 = 0;
    if *(v36 as &i64) == 9223372036854775809 {
        *(&v11 as &long long) = std::io::stdio::stdin();
        v21 = std::io::stdio::Stdin::lock(&v11);
        v38 = v37 & 1;
        v22 = v37 & 1;
        v40 = *((v39 + 28) as &i8);
        v41 = *((v39 + 27) as &i8);
        v42 = v41 | v40;
        v43 = *((v39 + 25) as &i8);
        v44 = *((v39 + 26) as &i8);
        if *((v39 + 24) as &i8) {
            if v43 {
                if !v44 {
                    if !(!v42) {
                        goto LABEL_488973;
                    }
                    v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v21);
                    goto LABEL_4893b1;
                } else {
                    if !(!v42) {
                        goto LABEL_488542;
                    }
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v5, &v21);
                    goto LABEL_4893b1;
                }
            }
            if !v44 {
                if !(!v42) {
                    goto LABEL_488de6;
                }
                v12 = nix::sys::stat::fstat(0);
                if !(!v12) || !((v18 & 16)) {
LABEL_488aff:
                    v131 = 0;
                    goto LABEL_488b02;
                }
                v23 = struct8 {
                    field_0: 0x1b600000000
                };
                v24 = 0;
                v26 = 0;
                v25 = 1;
                v2 = std::fs::OpenOptions::_open(&v23, &g_419d22, 9);
                if v2 {
                    goto LABEL_488aff;
                }
                v123 = *((&v2 as &char + 4) as &i32);
                v1 = v123;
                v23 = nix::sys::stat::fstat(v123);
                if v23 {
LABEL_489cea:
                    v131 = 0;
                    goto LABEL_489ced;
                }
                v132 = v29;
                v131 = 0;
                if !((v132 >> 32 & -0x1000 | v132 >> 8 & 4095) == 1) || !((v132 >> 12 & -0x100 | v132 & 4294967295) == 3) {
LABEL_489ced:
LABEL_488b02:
                    memset(&v23, 0, 0x4000);
                    loop {
                        v131 = v131;
                        if !<std::io::stdio::StdinLock as std::io::Read>::read(&v21, &v23, 0x4000) {
                            v140 = v131 + v138;
                            if !(!v138) {
                                continue;
                            }
                            v138 = 0;
                            break;
                        } else if std::io::error::Error::kind(v138) as i8 != 35 {
                            break;
                        }
                    }
                } else {
                    v134 = uucore::features::pipes::pipe();
                    if v134 == -1 {
                        goto LABEL_489cea;
                    }
                    v0 = v134;
                    v2 = v134 >> 32;
                }
                loop {
                    v23 = nix::fcntl::splice(&v21, 0, &v2, 0, 0x20000, 0);
                    if v23 {
LABEL_489dc1:
                        goto LABEL_489ced;
                    } else {
                        v137 = v24;
                        if !v137 {
                            v138 = 0;
                            break;
                        }
                        v131 += v137;
                        goto LABEL_489dc1;
                    }
                }
                v5 = 0;
                v6 = 0;
                v8 = 0;
                v10 = v138;
                goto LABEL_4893b1;
            } else {
                if !(!v42) {
                    goto LABEL_4886dd;
                }
                v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v21);
                goto LABEL_4893b1;
            }
        }
        if v43 {
            if v44 {
                if !v42 {
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v5, &v21);
                    goto LABEL_4893b1;
                }
LABEL_488542:
                if !v40 {
                    v27 = 0;
                    v23 = 0;
                    v28 = 0;
                    v12 = Enum {
                        field_16: v53
                    };
                    v13 = v38;
                    v14 = 0;
                    v15 = 0;
                    v16 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                        v59 = v2;
                        if v59 == 2 {
                            break;
                        }
                        v60 = v3;
                        v61 = v4;
                        if !v59 {
                            v23 = uu_wc::process_chunk(v60, v61, &v0);
                        } else if v60 {
                            v23 += v61;
                            continue;
                        }
                    }
                    goto LABEL_48927e;
                }
                if v41 {
                    v27 = 0;
                    v23 = 0;
                    v28 = 0;
                    v12 = Enum {
                        field_16: v57
                    };
                    v13 = v38;
                    v14 = 0;
                    v15 = 0;
                    v16 = 0;
                    v1 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                        v77 = v2;
                        if v77 == 2 {
                            break;
                        }
                        v78 = v3;
                        v61 = v4;
                        if !v77 {
                            v23 = uu_wc::process_chunk(v78, v61, &v0, &v1);
                        } else if v78 {
                            v23 += v61;
                            continue;
                        }
                    }
                } else {
                    v27 = 0;
                    v23 = 0;
                    v28 = 0;
                    v12 = Enum {
                        field_16: v58
                    };
                    v13 = v38;
                    v14 = 0;
                    v15 = 0;
                    v16 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                        v79 = v2;
                        if v79 == 2 {
                            break;
                        }
                        v80 = v3;
                        v61 = v4;
                        if !v79 {
                            v23 = uu_wc::process_chunk(v80, v61, &v0);
                        } else if v80 {
                            v23 += v61;
                            continue;
                        }
                    }
                    goto LABEL_489578;
                }
                goto LABEL_48927e;
            }
            if !v42 {
                v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v21);
                goto LABEL_4893b1;
            }
LABEL_488973:
            if !v40 {
                v27 = 0;
                v23 = 0;
                v28 = 0;
                v12 = Enum {
                    field_16: v54
                };
                v13 = v38;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                    v64 = v2;
                    if v64 == 2 {
                        break;
                    }
                    v65 = v3;
                    v61 = v4;
                    if !v64 {
                        v23 = uu_wc::process_chunk(v65, v61, &v0);
                    } else if v65 {
                        v23 += v61;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            if v41 {
                v27 = 0;
                v23 = 0;
                v28 = 0;
                v12 = Enum {
                    field_16: v62
                };
                v13 = v38;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v1 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                    v81 = v2;
                    if v81 == 2 {
                        break;
                    }
                    v82 = v3;
                    v61 = v4;
                    if !v81 {
                        v23 = uu_wc::process_chunk(v82, v61, &v0, &v1);
                    } else if v82 {
                        v23 += v61;
                        continue;
                    }
                }
            } else {
                v27 = 0;
                v23 = 0;
                v28 = 0;
                v12 = Enum {
                    field_16: v63
                };
                v13 = v38;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                    v83 = v2;
                    if v83 == 2 {
                        break;
                    }
                    v84 = v3;
                    v85 = v4;
                    if !v83 {
                        v23 = uu_wc::process_chunk(v84, v85, &v0);
                    } else if v84 {
                        v23 += v85;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            goto LABEL_489578;
        }
        if v44 {
            if !v42 {
                v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v21);
LABEL_4893b1:
                v125 = v21;
                if !v22 {
                    goto LABEL_4895b4;
                }
                goto LABEL_4895d1;
            }
LABEL_4886dd:
            if !v40 {
                v27 = 0;
                v23 = 0;
                v28 = 0;
                v12 = Enum {
                    field_16: v55
                };
                v13 = v38;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                    v68 = v2;
                    if v68 == 2 {
                        break;
                    }
                    v69 = v3;
                    v61 = v4;
                    if !v68 {
                        v23 = uu_wc::process_chunk(v69, v61, &v0);
                    } else if v69 {
                        v23 += v61;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            if v41 {
                v27 = 0;
                v23 = 0;
                v28 = 0;
                v12 = Enum {
                    field_16: v66
                };
                v13 = v38;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v1 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                    v86 = v2;
                    if v86 == 2 {
                        break;
                    }
                    v87 = v3;
                    v61 = v4;
                    if !v86 {
                        v23 = uu_wc::process_chunk(v87, v61, &v0, &v1);
                    } else if v87 {
                        v23 += v61;
                        continue;
                    }
                }
            } else {
                v27 = 0;
                v23 = 0;
                v28 = 0;
                v12 = Enum {
                    field_16: v67
                };
                v13 = v38;
                v14 = 0;
                v15 = 0;
                v16 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                    v88 = v2;
                    if v88 == 2 {
                        break;
                    }
                    v89 = v3;
                    v85 = v4;
                    if !v88 {
                        v23 = uu_wc::process_chunk(v89, v85, &v0);
                    } else if v89 {
                        v23 += v85;
                        continue;
                    }
                }
                goto LABEL_48927e;
            }
            goto LABEL_489578;
        }
        if !v42 {
            core::panicking::panic(); /* do not return */
        }
LABEL_488de6:
        if !v40 {
            v27 = 0;
            v23 = 0;
            v28 = 0;
            v12 = Enum {
                field_16: v56
            };
            v13 = v38;
            v14 = 0;
            v15 = 0;
            v16 = 0;
            v0 = 0;
            loop {
                uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                v72 = v2;
                if v72 == 2 {
                    break;
                }
                v73 = v3;
                v61 = v4;
                if !v72 {
                    v23 = uu_wc::process_chunk(v73, v61, &v0);
                } else if v73 {
                    v23 += v61;
                    continue;
                }
            }
            goto LABEL_48927e;
        }
        if !v41 {
            v27 = 0;
            v23 = 0;
            v28 = 0;
            v12 = Enum {
                field_16: v71
            };
            v13 = v38;
            v14 = 0;
            v15 = 0;
            v16 = 0;
            v0 = 0;
            loop {
                uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
                v92 = v2;
                if v92 == 2 {
                    break;
                }
                v93 = v3;
                v61 = v4;
                if !v92 {
                    v23 = uu_wc::process_chunk(v93, v61, &v0);
                } else if v93 {
                    v23 += v61;
                    continue;
                }
            }
LABEL_489578:
            v5 = v23;
            v7 = v27;
            v9 = v28;
            v10 = 0;
            v125 = v12;
            if !v13 {
LABEL_4895b4:
                if (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) {
                    v125 = v125;
                    if !std::panicking::panic_count::is_zero_slow_path() as i8 {
                        *((v125 + 4) as &i8) = 1;
                    }
                }
            }
LABEL_4895d1:
            *(v125 as &i32) = 0;
            if BinaryOp CasCmpNE {
                goto LABEL_0x4895d3;
            }
            if ((Not (Load(addr=vvar_86{reg 72}, size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
            std::sys::sync::mutex::futex::Mutex::wake(v125);
            goto LABEL_489e12;
        }
        v27 = 0;
        v23 = 0;
        v28 = 0;
        v12 = Enum {
            field_16: v70
        };
        v13 = v38;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v1 = 0;
        v0 = 0;
        loop {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v12);
            v90 = v2;
            if v90 == 2 {
                break;
            }
            v91 = v3;
            v85 = v4;
            if !v90 {
                v23 = uu_wc::process_chunk(v91, v85, &v0, &v1);
            } else if v91 {
                v23 += v85;
                continue;
            }
        }
LABEL_48927e:
        v5 = v23;
        v7 = v27;
        v9 = v28;
        v10 = 0;
        v124 = v12;
        if !v13 && (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !std::panicking::panic_count::is_zero_slow_path() as i8 {
            *((v124 + 4) as &i8) = 1;
        }
        *(v124 as &i32) = 0;
        if BinaryOp CasCmpNE {
            goto LABEL_0x48955e;
        }
        if ((Not (Load(addr=vvar_1917{reg 128}, size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake(v124);
        goto LABEL_489e12;
    }
    v23 = struct8 {
        field_0: 0x1b600000000
    };
    v24 = 0;
    v26 = 0;
    v24 = 1;
    v21 = std::fs::OpenOptions::_open(&v23, *((v36 + 8) as &i64), *((v36 + 16) as &i64));
    if v21 {
        *((v45 + 8) as &i8) = v22;
        *(v45 as &i64) = 2;
        goto LABEL_489e47;
    }
    v46 = *((&v21 as &char + 4) as &i32);
    v1 = v46;
    v48 = *((v47 + 28) as &i8);
    v49 = *((v47 + 27) as &i8);
    v50 = v49 | v48;
    v51 = *((v47 + 25) as &i8);
    v52 = *((v47 + 26) as &i8);
    if !*((v47 + 24) as &i8) {
        if !v51 {
            if !v52 {
                if !v50 {
                    core::panicking::panic(); /* do not return */
                }
LABEL_489804:
                if !v48 {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v101 = v2;
                        if v101 == 2 {
                            break;
                        }
                        v102 = v3;
                        v96 = v4;
                        if !v101 {
                            v12 = uu_wc::process_chunk(v102, v96, &v0);
                        } else {
                            if v102 {
                                v12 += v96;
                                continue;
                            }
                        }
                    }
                } else if !v49 {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v121 = v2;
                        if v121 == 2 {
                            break;
                        }
                        v122 = v3;
                        v96 = v4;
                        if !v121 {
                            v12 = uu_wc::process_chunk(v122, v96, &v0);
                        } else if v122 {
                            v12 += v96;
                            continue;
                        }
                    }
                } else {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v11 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v119 = v2;
                        if v119 == 2 {
                            break;
                        }
                        v120 = v3;
                        v96 = v4;
                        if !v119 {
                            v12 = uu_wc::process_chunk(v120, v96, &v0, &v11);
                        } else if v120 {
                            v12 += v96;
                            continue;
                        }
                    }
                }
                goto LABEL_489c00;
            }
            if !v50 {
                v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v1);
                goto LABEL_489e08;
            } else {
LABEL_488ecb:
                if !v48 {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v99 = v2;
                        if v99 == 2 {
                            break;
                        }
                        v100 = v3;
                        v96 = v4;
                        if !v99 {
                            v12 = uu_wc::process_chunk(v100, v96, &v0);
                        } else {
                            if v100 {
                                v12 += v96;
                                continue;
                            }
                        }
                    }
                } else if !v49 {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v117 = v2;
                        if v117 == 2 {
                            break;
                        }
                        v118 = v3;
                        v96 = v4;
                        if !v117 {
                            v12 = uu_wc::process_chunk(v118, v96, &v0);
                        } else if v118 {
                            v12 += v96;
                            continue;
                        }
                    }
                } else {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v11 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v115 = v2;
                        if v115 == 2 {
                            break;
                        }
                        v116 = v3;
                        v96 = v4;
                        if !v115 {
                            v12 = uu_wc::process_chunk(v116, v96, &v0, &v11);
                        } else if v116 {
                            v12 += v96;
                            continue;
                        }
                    }
                }
            }
        }
        if v52 {
            if !v50 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v5, &v1);
                goto LABEL_489e08;
            } else {
LABEL_4887da:
                if !v48 {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v94 = v2;
                        if v94 == 2 {
                            break;
                        }
                        v95 = v3;
                        v96 = v4;
                        if !v94 {
                            v12 = uu_wc::process_chunk(v95, v96, &v0);
                        } else {
                            if v95 {
                                v12 += v96;
                                continue;
                            }
                        }
                    }
                } else if !v49 {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v109 = v2;
                        if v109 == 2 {
                            break;
                        }
                        v110 = v3;
                        v96 = v4;
                        if !v109 {
                            v12 = uu_wc::process_chunk(v110, v96, &v0);
                        } else if v110 {
                            v12 += v96;
                            continue;
                        }
                    }
                } else {
                    v14 = 0;
                    v12 = 0;
                    v17 = 0;
                    v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                    v29 = 0;
                    v30 = 0;
                    v31 = 0;
                    v11 = 0;
                    v0 = 0;
                    loop {
                        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                        v107 = v2;
                        if v107 == 2 {
                            break;
                        }
                        v108 = v3;
                        v96 = v4;
                        if !v107 {
                            v12 = uu_wc::process_chunk(v108, v96, &v0, &v11);
                        } else if v108 {
                            v12 += v96;
                            continue;
                        }
                    }
                }
            }
        }
        if !v50 {
            v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v1);
            goto LABEL_489e08;
        } else {
LABEL_4892d2:
            if !v48 {
                v14 = 0;
                v12 = 0;
                v17 = 0;
                v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                v29 = 0;
                v30 = 0;
                v31 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                    v97 = v2;
                    if v97 == 2 {
                        break;
                    }
                    v98 = v3;
                    v96 = v4;
                    if !v97 {
                        v12 = uu_wc::process_chunk(v98, v96, &v0);
                    } else {
                        if v98 {
                            v12 += v96;
                            continue;
                        }
                    }
                }
            } else if !v49 {
                v14 = 0;
                v12 = 0;
                v17 = 0;
                v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                v29 = 0;
                v30 = 0;
                v31 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                    v113 = v2;
                    if v113 == 2 {
                        break;
                    }
                    v114 = v3;
                    v96 = v4;
                    if !v113 {
                        v12 = uu_wc::process_chunk(v114, v96, &v0);
                    } else if v114 {
                        v12 += v96;
                        continue;
                    }
                }
            } else {
                v14 = 0;
                v12 = 0;
                v17 = 0;
                v23 = <std::fs::File as uu_wc::countable::WordCountable>::buffered(v46);
                v29 = 0;
                v30 = 0;
                v31 = 0;
                v11 = 0;
                v0 = 0;
                loop {
                    uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v2, &v23);
                    v111 = v2;
                    if v111 == 2 {
                        break;
                    }
                    v112 = v3;
                    v96 = v4;
                    if !v111 {
                        v12 = uu_wc::process_chunk(v112, v96, &v0, &v11);
                    } else if v112 {
                        v12 += v96;
                        continue;
                    }
                }
            }
LABEL_489c00:
            v130 = v14;
            v5 = v12;
            v7 = v130;
            v9 = v17;
            v10 = 0;
            goto LABEL_489e0c;
        }
    }
    if v51 {
        if !v52 {
            if !(!v50) {
                goto LABEL_4892d2;
            }
            v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v1);
            goto LABEL_489e08;
        } else {
            if !(!v50) {
                goto LABEL_4887da;
            }
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v5, &v1);
            goto LABEL_489e08;
        }
    }
    if v52 {
        if !(!v50) {
            goto LABEL_488ecb;
        }
        v5 = uu_wc::count_fast::count_bytes_chars_and_lines_fast(&v1);
        goto LABEL_489e08;
    }
    if !(!v50) {
        goto LABEL_489804;
    }
    v12 = nix::sys::stat::fstat(v46);
    if v12 {
LABEL_4893ed:
        v141 = 0;
        goto LABEL_4893f0;
    }
    v74 = v17;
    v75 = 0;
    if v46 > 0 && v74 < 0 && v106 > 0 {
        v126 = v19;
        v128 = sysconf(30);
        if !v128 {
            goto LABEL_48a0a2;
        }
        v133 = (!(v128 | v126) >> 32 ? (0 CONCAT v126) /m v128 >> 64 : (0 CONCAT v126) /m v128 >> 32 & 4294967295);
        if !(!v133) {
            goto LABEL_489dec;
        }
        if amd64g_calculate_condition(4, 24, v20 + 1, 0, amd64g_calculate_rflags_c(20, v133, 0, v135)) as char {
LABEL_48a0a2:
            core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
        } else if <std::fs::File as std::io::Seek>::seek(&v1, 0) {
            v76 = 0;
        }
    }
    if !(v74 & 0x1000) {
LABEL_4893f0:
        memset(&v23, 0, 0x4000);
        loop {
            v141 = v141;
            if !<std::fs::File as std::io::Read>::read(&v1, &v23, 0x4000) {
                v146 = v141 + v145;
                if !(!v145) {
                    continue;
                }
                v145 = 0;
                break;
            } else if std::io::error::Error::kind(v145) as i8 != 35 {
                break;
            }
        }
        goto LABEL_489df1;
    }
    v23 = struct8 {
        field_0: 0x1b600000000
    };
    v24 = 0;
    v26 = 0;
    v25 = 1;
    v2 = std::fs::OpenOptions::_open(&v23, &g_419d22, 9);
    if v2 {
        goto LABEL_4893ed;
    }
    v139 = *((&v2 as &char + 4) as &i32);
    v11 = v139;
    v23 = nix::sys::stat::fstat(v139);
    if v23 {
LABEL_489f2e:
        v141 = 0;
        goto LABEL_489f31;
    }
    v142 = v29;
    v141 = 0;
    if !((v142 >> 32 & -0x1000 | v142 >> 8 & 4095) == 1) || !((v142 >> 12 & -0x100 | v142 & 4294967295) == 3) {
LABEL_489f31:
        goto LABEL_4893f0;
    } else {
        v143 = uucore::features::pipes::pipe();
        if v143 == -1 {
            goto LABEL_489f2e;
        }
        v0 = v143;
        v2 = v143 >> 32;
        v126 = 0;
    }
    loop {
        v23 = nix::fcntl::splice(&v1, 0, &v2, 0, 0x20000, 0);
        if v23 {
LABEL_489ffe:
            goto LABEL_489f31;
        } else {
            v144 = v24;
            if !v144 {
LABEL_489dec:
                v145 = 0;
LABEL_489df1:
                v5 = v126;
                v6 = 0;
                v8 = 0;
                v10 = v145;
LABEL_489e08:
LABEL_489e0c:
LABEL_489e12:
                *((v147 + 40) as &i64) = v9;
                v148 = v5;
                *((v147 + 24) as &i128) = *((&v5 as &char + 16) as &i128);
                *((v147 + 8) as &i128) = v148;
                v149 = v10;
                if !v149 {
                    v150 = 0;
                } else {
                    *((v147 + 48) as &i64) = v149;
                    v150 = 1;
                }
                *(v147 as &i64) = v150;
LABEL_489e47:
                return;
            }
            v141 += v144;
            goto LABEL_489ffe;
        }
    }
}
