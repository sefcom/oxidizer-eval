fn uu_paste::paste(a0: i64, a1: i32, a2: i64, a3: i64, a4: i8, a5: i64) -> u64 {
    let v0: i8;  // [sp-0x129]
    let v1: i64;  // [sp-0x128], Other Possible Types: struct16, struct8
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i32;  // [bp-0x110]
    let v5: i64;  // [sp-0x108]
    let v6: i8;  // [bp-0xfc]
    let v7: i64;  // [bp-0xf8], Other Possible Types: Enum, struct8
    let v8: Argument;  // [bp-0xf0], Other Possible Types: struct16, i64
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8], Other Possible Types: Enum
    let v12: i128;  // [sp-0xc8], Other Possible Types: Enum, String
    let v13: i64;  // [sp-0xc0]
    let v14: i64;  // [sp-0xb8]
    let v15: i64;  // [sp-0xb0]
    let v16: i64;  // [sp-0xa8]
    let v17: i64;  // [sp-0x98], Other Possible Types: Enum, Arguments, struct8
    let v18: i64;  // [bp-0x90]
    let v19: i16;  // [sp-0x8c]
    let v20: i64;  // [sp-0x88]
    let v21: i64;  // [sp-0x80]
    let v22: i64;  // [sp-0x78]
    let v23: i64;  // [bp-0x70]
    let v24: i64;  // [sp-0x68]
    let v25: i64;  // [sp-0x60]
    let v26: i64;  // [sp-0x58]
    let v27: i64;  // [bp-0x40]
    let v28: i64;  // [sp-0x38]
    let v30: i64;  // r15
    let v32: i64;  // r14
    let v33: i64;  // cc_ndep
    let v34: i64;  // rdx
    let v35: i32;  // eax
    let v36: i32;  // esi
    let v37: i32;  // ecx
    let v38: i64;  // r15
    let v39: i64;  // rdx
    let v40: i32;  // eax
    let v41: i32;  // esi
    let v42: i32;  // ecx
    let v43: i64;  // r12
    let v44: i64;  // rax
    let v45: i64;  // rcx
    let v46: i64;  // rdx
    let v47: i64;  // rax
    let v48: i64;  // cc_op
    let v49: i64;  // cc_dep1
    let v50: i64;  // cc_dep2
    let v51: i64;  // rcx
    let v52: i64;  // cc_ndep
    let v53: i64;  // cc_ndep
    let v54: i64;  // rcx
    let v55: i64;  // rdx
    let v56: i64;  // rdx
    let v57: i64;  // r13
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v60: i64;  // r12
    let v61: i64;  // rbp
    let v62: i64;  // rbx
    let v63: i64;  // r14
    let v64: i256;  // ymm0
    let v65: i256;  // ymm1
    let v66: i256;  // ymm2
    let v67: i64;  // r15
    let v68: i64;  // r13
    let v69: i64;  // rcx
    let v70: i64;  // rcx
    let v71: i64;  // rcx
    let v73: i64;  // rax
    let v74: i64;  // rcx
    let v75: i64;  // cc_ndep
    let v76: i64;  // cc_ndep
    let v77: i128;  // xmm0
    let v78: i64;  // r12
    let v79: i64;  // rax
    let v80: i64;  // rcx
    let v81: i64;  // rcx
    let v82: i128;  // xmm0
    let v83: i128;  // xmm1
    let v84: i128;  // xmm2
    let v85: i128;  // xmm0
    let v86: i64;  // rdx
    let v87: i64;  // rbx
    let v88: i64;  // r14
    let v89: i64;  // rsi
    let v90: i64;  // rax
    let v91: i128;  // xmm0
    let v92: i64;  // rbx
    let v93: i64;  // r14
    let v94: i64;  // rbx
    let v95: i32;  // ebp
    let v96: i64;  // r14
    let v97: i64;  // r8
    let v98: i64;  // r9
    let v99: i64;  // rax
    let v100: i64;  // rax
    let v101: i64;  // rcx
    let v103: i64;  // rdx
    let v104: i64;  // rdx
    let v105: i64;  // rax
    let v106: i64;  // rax
    let v107: i64;  // r12
    let v108: i64;  // r13
    let v109: i64;  // rbp
    let v110: i64;  // r15
    let v111: i64;  // r14
    let v112: i64;  // r8
    let v113: i64;  // r9
    let v114: i64;  // rax
    let v116: i64;  // rbx
    let v117: i64;  // rax
    let v118: i64;  // rcx
    let v120: i64;  // rdx
    let v121: i64;  // rdx
    let v122: i64;  // rax
    let v123: i64;  // rax
    let v124: i64;  // rax
    let v125: i64;  // rdi
    let v126: i128;  // xmm0
    let v127: i64;  // rbx
    let v128: i64;  // rdi
    let v129: i64;  // rbx
    let v130: i64;  // rdi
    let v131: i64;  // rbx
    let v132: i64;  // r14
    let v133: i64;  // rdi
    let v134: i64;  // r15
    let v135: i64;  // r14
    let v136: i64;  // rdi
    let v138: i64;  // r13
    let v139: i64;  // rdi
    let v140: i64;  // rbx
    let v141: i64;  // r15
    let v143: i64;  // r14
    let v144: i64;  // r13

    v4 = a1;
    v11 = a2;
    v7 = 0;
    if !a3 {
        v1 = 0;
        v2 = 8;
        v3 = 0;
    } else {
        v30 = a2;
        *(&v1.field_0 as &struct8) = struct8 {
            field_16: v31
        };
        v2 = __rust_alloc(a3 * 16, 8);
        v3 = 0;
        v32 = a3 + v30;
        loop {
            v34 = *(v30 as &i8);
            if v34 >= 0 {
                v33 = amd64g_calculate_rflags_c(17, v34 & 255, 0, v33);
                v30 += 1;
                if !(v34 == 92) {
                    goto LABEL_47e5f0;
                }
                goto LABEL_47e690;
            }
            v35 = v34 & 31;
            v36 = *((v30 + 1) as &i8) & 63;
            if (v34 & 255) <= 223 {
                v30 += 2;
                v34 = v35 * 64 | v36;
                if !(v34 == 92) {
                    goto LABEL_47e5f0;
                }
                goto LABEL_47e690;
            }
            v37 = *((v30 + 2) as &i8) & 63 | v36 * 64;
            if (v34 & 255) < 240 {
                v30 += 3;
                v34 = v37 | v35 * 0x1000;
                if v34 == 92 {
                    goto LABEL_47e690;
                }
LABEL_47e5f0:
                v7 = uu_paste::parse_delimiters::{{closure}}(&v1, v34);
                goto LABEL_47e7f4;
            }
            v30 += 4;
            v34 = *((v30 + 3) as &i8) & 63 | v37 * 64 | (v35 & 7) * 0x40000;
            if !(v34 == 92) {
                goto LABEL_47e5f0;
            }
LABEL_47e690:
            if v38 == v32 {
                v8 = Argument {
                    value: &v11
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v17 = Arguments {
                    pieces: &[&str] {
                        ptr: "delimiter list ends with an unescaped backslash: "
                        len: <UNKNOWN>
                    }
                    args: [&v8]
                    fmt: None
                };
                v18 = 1;
                v12 = alloc::fmt::format::format_inner(&v17);
                v58 = __rust_alloc(32, 8);
                *(v58 as &i64) = v12;
                *((v58 + 8) as &i64) = v13;
                *((v58 + 16) as &i64) = v14;
                *((v58 + 24) as &i32) = 1;
                if *(a0 as &i64) {
                    return v60;
                }
                return v60;
            }
            v39 = *(v38 as &i8);
            if v39 >= 0 {
                v33 = amd64g_calculate_rflags_c(17, v39 & 255, 0, v33);
                v30 = v38 + 1;
                if v39 <= 109 {
                    goto LABEL_47e6ad;
                }
                goto LABEL_47e7a0;
            }
            v40 = v39 & 31;
            v41 = *((v38 + 1) as &i8) & 63;
            if (v39 & 255) <= 223 {
                v30 = v38 + 2;
                v39 = v40 * 64 | v41;
                if v39 <= 109 {
                    goto LABEL_47e6ad;
                }
                goto LABEL_47e7a0;
            }
            v42 = *((v38 + 2) as &i8) & 63 | v41 * 64;
            if (v39 & 255) >= 240 {
                v30 = v38 + 4;
                v39 = *((v38 + 3) as &i8) & 63 | v42 * 64 | (v40 & 7) * 0x40000;
                if v39 <= 109 {
                    goto LABEL_47e6ad;
                }
LABEL_47e7a0:
                switch (v39) {
                case 110:
                    v44 = __rust_alloc(1, 1);
                    *(v44 as &i8) = 10;
                    v43 = v3;
                    if v43 == v1 {
                        v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        break;
                    }
                case 116:
                    v44 = __rust_alloc(1, 1);
                    *(v44 as &i8) = 9;
                    v43 = v3;
                    if v43 == v1 {
                        v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        break;
                    }
                default:
                    v7 = uu_paste::parse_delimiters::{{closure}}(&v1, v39);
                }
                goto LABEL_47e7f4;
            } else {
                v30 = v38 + 3;
                v39 = v42 | v40 * 0x1000;
                if !(v39 <= 109) {
                    goto LABEL_47e7a0;
                }
LABEL_47e6ad:
                switch (v39) {
                case 48:
                    v43 = v3;
                    if v43 == v1 {
                        v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    v45 = v2;
                    v46 = v43 * 16;
                    v47 = v45 + v46;
                    *((v45 + v46) as &i64) = 1;
                    v48 = 19;
                    v49 = 0;
                    v50 = 0;
                    v51 = 0;
                    break;
                case 92:
                    v44 = __rust_alloc(1, 1);
                    *(v44 as &i8) = 92;
                    v43 = v3;
                    if v43 == v1 {
                        v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    v54 = v2;
                    v55 = v43;
                    v48 = 32;
                    v49 = v55 * 16;
                    v50 = v55 * 8;
                    v56 = v55 * 16;
                    v47 = v54 + v56;
                    *((v54 + v56) as &i64) = v44;
                    v51 = 1;
                    break;
                default:
                    v7 = uu_paste::parse_delimiters::{{closure}}(&v1, v39);
LABEL_47e7f4:
                    if v30 == v32 {
                        goto LABEL_47e8a4;
                    }
                    continue;
                }
                *((v47 + 8) as &i64) = v51;
                v52 = amd64g_calculate_rflags_c(v48, v49, v50, v53);
                v3 = v43 + 1;
                if v30 == v32 {
                    break;
                }
            }
        }
    }
LABEL_47e8a4:
    v20 = v3;
    v17 = v1;
    v18 = v2;
    v7 = 0;
    v57 = *((a0 + 16) as &i64);
    v16 = alloc::vec::Vec<T,A>::into_boxed_slice(&v17);
    if !v57 {
        v59 = 8;
    } else {
        v59 = __rust_alloc(v57 * 48, 8);
    }
    v8 = v57;
    v9 = v59;
    v10 = 0;
    v61 = *(a0 as &i64);
    v62 = *((a0 + 8) as &i64);
    v12 = v62;
    v13 = v62;
    v14 = v61;
    v15 = v28;
    if v57 {
        v28 = v15;
        v27 = v14;
        v5 = v57 * 24;
        v63 = 0;
        do {
            v67 = *((v62 + v63) as &i64);
            if v67 == 0x8000000000000000 {
                v28 = v62 + v63 + 24;
                break;
            }
            v68 = *((v62 + v63 + 8) as &i64);
            v69 = *((v62 + v63 + 16) as &i64);
            if *((v62 + v63 + 16) as &i64) == 1 && *(v68 as &i8) == 45 {
                v70 = v7;
                if !v70 {
                    v7 = core::cell::once::OnceCell<T>::try_init();
                }
                v74 = v71;
                *(v74 as &i64) = *(v74 as &i64) + 1;
                v75 = amd64g_calculate_rflags_c(20, v70, 0, v52);
                if amd64g_calculate_condition(4, 24, vvar_2314 + 1, 0, amd64g_calculate_rflags_c(20, v70, 0, v52)) as char {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 4716298()
                }
                v73 = 0;
                goto LABEL_47eacd;
                goto LABEL_47eacd;
            }
            v17 = struct8 {
                field_0: 0x1b600000000
            };
            v19 = 0;
            v18 = 0;
            v18 = 1;
            v11 = std::fs::OpenOptions::_open(&v17, v68, v69);
            if v11 {
                v13 = v62 + v63 + 24;
                v17 = 0x8000000000000000;
                v21 = a3;
                v60 = __rust_alloc(32, 8);
                v85 = v17;
                *((v60 + 16) as &i64) = v20;
                *(v60 as &i128) = v85;
                goto LABEL_47f57d;
            }
            v61 = *((&v11 as &char + 4) as &i32);
            v73 = __rust_alloc(0x2000, 1);
            v64 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v1 = 0;
            v3 = 0;
            v74 = 0x2000;
LABEL_47eacd:
            v17 = v73;
            v18 = v74;
            v22 = v3;
            v77 = v1;
            v20 = v77;
            v23 = v61;
            v78 = v10;
            if v78 == v8 {
                v8 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v79 = v9;
            v80 = v78 * 3;
            v81 = v80 * 16;
            v82 = v17;
            vvar_117{reg 224} = ((((vvar_252{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1202{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1214{reg 224}))
            v83 = v20;
            vvar_118{reg 256} = ((vvar_118{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1216{reg 256}))
            v84 = v22;
            vvar_119{reg 288} = ((vvar_119{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1218{reg 288}))
            *((v79 + v81 + 32) as &i128) = v84;
            *((v79 + v81 + 16) as &i128) = v83;
            *((v79 + v81) as &i128) = v82;
            v52 = amd64g_calculate_rflags_c(32, v80 << 4, v80 << 3, v76);
            v10 = v78 + 1;
            v63 += 24;
        } while (v5 != v63);
        v13 = v28;
    }
    v87 = v86;
    v88 = v16;
    v17 = std::io::stdio::stdout();
    v11 = std::io::stdio::Stderr::lock(&v17, v89, v86);
    v0 = a4;
    if v87 == 1 {
        v90 = *((v88 + 8) as &i64);
        if !v20 {
LABEL_47ee53:
            v17 = 0;
            v20 = v20;
        } else {
            v18 = *(v88 as &i64);
            v20 = v90;
            v17 = 1;
            v20 = v20;
        }
    } else {
        if !v87 {
            goto LABEL_47ee53;
        }
        v91 = *(v88 as &i128);
        v23 = v88;
        v24 = v87 * 16 + v88;
        v25 = v88;
        v26 = v24;
        v18 = v91;
        v21 = v88;
        v22 = v87;
        v17 = 2;
        v20 = v20;
    }
    v92 = v10;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if !v4 {
        v4 = v92;
        if !v92 {
            v5 = 1;
        } else {
            v5 = __rust_alloc_zeroed(v4, 1);
            v92 = v4;
        }
        v27 = v6;
        v107 = &v1;
    } else {
        v93 = v9;
        v94 = v92 * 48 + v93;
        v95 = v6;
        v4 = v94;
        loop {
LABEL_47eeaf:
            v96 = v93;
            if v96 == v94 {
                goto LABEL_0x47f313;
            }
            v5 = v96 + 48;
            v3 = 0;
            loop {
                v12 = uu_paste::InputSource::read_until(v96, v95, &v1, v97, v98);
                v60 = v12;
                if v60 {
                    break;
                }
                if v13 {
                    v99 = v3;
                    if v99 && *((v2 + v99 - 1) as &i8) == a4 {
                        v3 = v99 - 1;
                    }
                    v17 = uu_paste::DelimiterState::write_delimiter(&v1);
                } else {
                    v100 = v3;
                    v94 = v4;
                    if v17 {
                        v101 = v20;
                        if v101 {
                            v103 = v100;
                            v104 = v103 - v101;
                            if v103 >= v101 {
                                v3 = v104;
                            } else if v100 {
                                core::panicking::panic(); /* do not return */
                            }
                        }
                    }
                    v105 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v11, v2, 0);
                    if v105 {
                        v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v105);
LABEL_47f6bf:
                        goto LABEL_47f53e;
                    } else {
                        v106 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v11, &v0, 1);
                        v93 = v5;
                        if v106 {
                            v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v106);
                            goto LABEL_47f6bf;
                        }
                        goto LABEL_47eeaf;
                    }
                }
            }
        }
    }
    loop {
        v3 = 0;
        v108 = v10 * 48;
        v109 = 0;
        v110 = 0;
        v9 = v9;
        loop {
            v111 = v9;
            if !v108 {
                break;
            }
            if v92 == v109 {
                core::panicking::panic_bounds_check(); /* do not return */
            }
            if *((v5 + v109) as &i8) {
                v110 += 1;
            } else {
                v12 = uu_paste::InputSource::read_until(v111, v27, v107, v112, v113);
                v60 = v12;
                if !(!v60) {
                    goto LABEL_47f524;
                }
                if !v13 {
                    *((v5 + v109) as &i8) = 1;
                    v110 += 1;
                    v92 = v4;
                } else {
                    v114 = v3;
                    v92 = v4;
                    if v114 && *((v2 + v114 - 1) as &i8) == a4 {
                        v3 = v114 - 1;
                    }
                }
            }
            v108 -= 48;
            v109 += 1;
            v17 = uu_paste::DelimiterState::write_delimiter(v107);
        }
        if v110 == v92 {
            break;
        }
        v116 = v17;
        v117 = v3;
        if v116 {
            v118 = v20;
            if v118 {
                v120 = v117;
                v121 = v120 - v118;
                if v120 >= v118 {
                    v3 = v121;
                } else if v117 {
                    core::panicking::panic(); /* do not return */
                }
            }
        }
        v122 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v11, v2, 0);
        if !v122 {
            v123 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v11, &v0, 1);
            if v123 {
                v12 = 0x8000000000000000;
                v15 = v123;
                v60 = __rust_alloc(32, 8);
                goto LABEL_47f506;
            } else {
                v92 = v4;
                if v116 == 2 {
                    v124 = v21;
                    v23 = v124;
                    v24 = v22 * 16 + v124;
                    v25 = v124;
                    v26 = v24;
                }
            }
        } else {
            v12 = 0x8000000000000000;
            v15 = v122;
            v60 = __rust_alloc(32, 8);
LABEL_47f506:
            v126 = v12;
            *((v60 + 16) as &i64) = v14;
            *(v60 as &i128) = v126;
LABEL_47f524:
LABEL_47f53e:
            v128 = v11;
            *((v128 + 12) as &i32) = *((v128 + 12) as &i32) - 1;
            if vvar_2394 != 1 {
                goto LABEL_47f57d;
            }
            *(v128 as &i64) = 0;
            *((v128 + 8) as &i32) = 0;
            if BinaryOp CasCmpNE {
                goto LABEL_0x47f56b;
            }
            std::sys::sync::mutex::futex::Mutex::wake(v128 + 8);
            goto LABEL_47f57d;
        }
    }
    v125 = v11;
    *((v125 + 12) as &i32) = *((v125 + 12) as &i32) - 1;
    if vvar_2390 == 1 {
        *(v125 as &i64) = 0;
        *((v125 + 8) as &i32) = 0;
        if BinaryOp CasCmpNE {
            goto LABEL_0x47f340;
        }
        if ((Not (Load(addr=(vvar_1766{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake(v125 + 8);
    }
    v127 = v10;
    if v127 {
        do {
            v129 = v127;
            if !*(v9 as &i64) {
                v130 = *((v9 + 8) as &i64);
                *(v130 as &i32) = vvar_2395 - 1;
                if vvar_2395 == 1 {
                    *((v130 + 8) as &i64) = *((v130 + 8) as &i64) - 1;
                }
            }
        } while ((v9 += 48, v131 = v129 - 1, v129 != 1));
    }
    v133 = v7;
    v134 = v86;
    if v133 {
        *(v133 as &i64) = *(v133 as &i64) - 1;
        if vvar_2407 == 1 {
            *((v133 + 8) as &i64) = *((v133 + 8) as &i64) - 1;
        }
    }
    if v134 {
        v140 = v16 + 8;
        do {
            v141 = v134;
        } while ((v9 += 48, v131 = v129 - 1, v129 != 1));
    }
    return 0;
LABEL_47f57d:
    v132 = v10;
    if v132 {
        do {
            v135 = v132;
            if !*(v9 as &i64) {
                v136 = *((v9 + 8) as &i64);
                *(v136 as &i32) = vvar_2402 - 1;
                if vvar_2402 == 1 {
                    *((v136 + 8) as &i64) = *((v136 + 8) as &i64) - 1;
                }
            }
        } while ((v9 += 48, v131 = v129 - 1, v129 != 1));
    }
    v138 = v86;
    v139 = v7;
    if v139 {
        *(v139 as &i64) = *(v139 as &i64) - 1;
        if vvar_2411 == 1 {
            *((v139 + 8) as &i64) = *((v139 + 8) as &i64) - 1;
        }
    }
    if !v138 {
        return v60;
    }
    v143 = v16 + 8;
    do {
        v144 = v138;
    } while ((v9 += 48, v131 = v129 - 1, v129 != 1));
    return v60;
}
