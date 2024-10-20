fn uu_pr::print_page(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x210]
    let v1: i64;  // [sp-0x208]
    let v2: i64;  // [sp-0x200]
    let v3: i64;  // [sp-0x1f8]
    let v4: i64;  // [sp-0x1f0]
    let v5: i64;  // [bp-0x1e8]
    let v6: i32;  // [sp-0x1dc]
    let v7: i64;  // [sp-0x1d8]
    let v8: i64;  // [sp-0x1d0], Other Possible Types: String
    let v9: i64;  // [sp-0x1c8]
    let v10: i64;  // [sp-0x1c0]
    let v11: i64;  // [sp-0x1b8]
    let v12: i64;  // [sp-0x1a8], Other Possible Types: struct16
    let v13: i64;  // [sp-0x1a0]
    let v14: i64;  // [sp-0x198]
    let v15: i8;  // [bp-0x190]
    let v16: i8;  // [bp-0x188]
    let v17: i8;  // [bp-0x180]
    let v18: i64;  // [bp-0x178]
    let v19: i64;  // [sp-0x170]
    let v20: i64;  // [sp-0x168]
    let v21: i64;  // [sp-0x160]
    let v22: i64;  // [sp-0x158]
    let v23: i64;  // [sp-0x150]
    let v24: i64;  // [sp-0x148]
    let v25: i32;  // [sp-0x13c]
    let v26: i64;  // [sp-0x138]
    let v27: i64;  // [sp-0x130]
    let v28: i64;  // [sp-0x128]
    let v29: i64;  // [sp-0x120]
    let v30: i64;  // [bp-0x118], Other Possible Types: Arguments
    let v31: i64;  // [sp-0x110]
    let v32: i64;  // [sp-0x108]
    let v33: i128;  // [bp-0x100]
    let v34: i128;  // [sp-0xf0]
    let v35: i64;  // [sp-0xe0]
    let v36: i64;  // [bp-0xd8], Other Possible Types: Argument, struct65
    let v37: i64;  // [bp-0xd0], Other Possible Types: Argument
    let v38: i64;  // [bp-0xc8], Other Possible Types: Argument
    let v39: i64;  // [sp-0xc0]
    let v40: i64;  // [sp-0xb8]
    let v41: i64;  // [sp-0xb0]
    let v42: i64;  // [sp-0x90]
    let v43: i64;  // [sp-0x88]
    let v44: i64;  // [sp-0x78]
    let v45: i64;  // [sp-0x70]
    let v46: i64;  // [sp-0x68]
    let v47: i64;  // [sp-0x60]
    let v48: i64;  // [sp-0x58]
    let v49: i64;  // [sp-0x50]
    let v50: i192;  // [sp-0x48], Other Possible Types: struct24
    let v52: i8;  // r13b
    let v53: i64;  // r15
    let v54: i64;  // rax
    let v55: i64;  // r14
    let v56: i64;  // rcx
    let v57: i64;  // rsi
    let v58: i64;  // rdx
    let v59: i64;  // 4096
    let v60: i64;  // r15
    let v61: i64;  // rbp
    let v62: i64;  // rbx
    let v64: i64;  // rbp
    let v65: i64;  // rbx
    let v66: i32;  // edx
    let v67: i64;  // rbp
    let v68: i64;  // rbx
    let v69: i64;  // rdi
    let v70: i64;  // rbp
    let v71: i64;  // r14
    let v72: i64;  // rax
    let v73: i64;  // r13
    let v75: i64;  // r15
    let v77: i64;  // r15
    let v78: i64;  // r15
    let v79: i64;  // r15
    let v80: i64;  // r15
    let v81: i64;  // rbp
    let v82: i64;  // r15
    let v83: i64;  // rax
    let v84: i64;  // r13
    let v86: i64;  // r13
    let v87: i64;  // rax
    let v88: i64;  // r15
    let v89: i64;  // rdx
    let v90: i64;  // r15
    let v91: i64;  // r10
    let v93: i64;  // rbx
    let v94: i64;  // r14
    let v109: i64;  // rsi
    let v110: i64;  // rax
    let v112: i64;  // rbp
    let v113: i64;  // r15
    let v114: i64;  // r15
    let v115: i64;  // rdi

    v4 = a1;
    v19 = a0;
    v29 = *((a2 + 80) as &i64);
    v28 = *((a2 + 88) as &i64);
    v48 = *((a2 + 152) as &i64);
    v47 = *((a2 + 160) as &i64);
    v52 = *((a2 + 321) as &i8);
    if !v52 {
        v44 = 0;
        v45 = 8;
        v46 = 0;
        v6 = *((a2 + 322) as &i8);
        v53 = 8;
        v54 = 0;
        v55 = 8;
        v56 = 0;
        goto LABEL_54872b;
    } else {
        v36 = Argument {
            value: a2 + 120
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v37 = Argument {
            value: <alloc::string::String as core::fmt::Display>::fmt
            formatter: a2 + 48
        };
        v38 = Argument {
            value: a2 + 48
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v40 = &v15;
        v41 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v30 = Arguments {
            pieces: [&g_68ed90, " ", " Page "]
            args: [&v36, &v37, &v38]
            fmt: None
        };
        v8 = alloc::fmt::format::format_inner(&v30);
        v53 = 8;
        v55 = __rust_alloc(120, 8);
        *((v55 + 64) as &i64) = v10;
        *((v55 + 48) as &i192) = v8;
        *(v55 as &i64) = 0;
        *((v55 + 8) as &i64) = 1;
        *((v55 + 16) as &i128) = 0;
        *((v55 + 32) as &i64) = 1;
        *((v55 + 40) as &i64) = 0;
        *((v55 + 72) as &i64) = 0;
        *((v55 + 80) as &i64) = 1;
        *((v55 + 88) as &i128) = 0;
        *((v55 + 104) as &i64) = 1;
        *((v55 + 112) as &i64) = 0;
        v44 = 5;
        v45 = v55;
        v46 = 5;
        v6 = *((a2 + 322) as &i8);
        if v6 {
            v0 = 5;
            v54 = 0;
        } else {
            v53 = __rust_alloc(120, 8);
            *(v53 as &i64) = 0;
            *((v53 + 8) as &i64) = 1;
            *((v53 + 16) as &i128) = 0;
            *((v53 + 32) as &i64) = 1;
            *((v53 + 40) as &i128) = 0;
            *((v53 + 56) as &i64) = 1;
            *((v53 + 64) as &i128) = 0;
            *((v53 + 80) as &i64) = 1;
            *((v53 + 88) as &i128) = 0;
            *((v53 + 104) as &i64) = 1;
            *((v53 + 112) as &i64) = 0;
            v54 = 5;
            v6 = 0;
            v56 = 5;
LABEL_54872b:
            v0 = v56;
        }
    }
    v21 = v54;
    v22 = v53;
    v23 = v21;
    v49 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v49, v57, v58);
    v36 = v55;
    v37 = v55;
    v38 = v0;
    v39 = v7;
    if v52 {
        v7 = v39;
        v5 = v52;
        v3 = (v0 * 8 & 4294967295) * 3;
        v60 = 0;
        do {
            v61 = *((v55 + v60) as &i64);
            if v61 == 0x8000000000000000 {
                v7 = v60 + v55 + 24;
                break;
            }
            v62 = *((v55 + v60 + 8) as &i64);
            if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v62, *((v55 + v60 + 16) as &i64)) || <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v29, v28) {
                v37 = v55 + v60 + 24;
LABEL_54888a:
            }
            v60 += 24;
        } while (v3 != v60);
        v37 = v7;
    }
    v64 = v59;
    v65 = *((v64 + 16) as &i64);
    v27 = *((v64 + 104) as &i64);
    v26 = *((v64 + 112) as &i64);
    v2 = *((v64 + 312) as &i64) >> (*((v64 + 320) as &i8) & 63);
    if v65 {
        v3 = *((v64 + 24) as &i64);
        v66 = 0;
        if *((v64 + 0x100) as &i64) != 0x8000000000000000 {
            v66 = *((v64 + 296) as &i32);
        }
        v7 = *((v64 + 32) as &i64);
        v20 = *((v64 + 40) as &i64);
        v12 = 0;
        v13 = 8;
        v14 = 0;
        if !v3 {
            v3 = 0;
        } else {
            v25 = v66;
            v65 = v65;
            v24 = v4 * 64;
            v68 = 0;
            v69 = 0;
            v70 = 0;
            do {
                if v0 > v4 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
                v5 = v70 + 1;
                v0 = v69;
                if v0 == v4 {
                    v71 = 0;
                } else {
                    v72 = v0 * 64;
                    v73 = v19 + v72;
                    v71 = 0;
                    loop {
                        v75 = v24 - v72;
                        if *((v73 + 24) as &i64) != v70 {
                            break;
                        }
                        if v68 == v12 {
                            v12 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                        *((v13 + v68 * 8) as &i64) = v73;
                        v73 += 64;
                        v68 += 1;
                        v14 = v68;
                        v71 += 1;
                        if v75 == 64 {
                            break;
                        }
                    }
                }
                v77 = v2;
                v78 = v77 - v71;
                if v77 > v71 {
                    do {
                        v79 = v78;
                        if v68 == v12 {
                            v12 = alloc::raw_vec::RawVec<T,A>::grow_one();
                        }
                    } while ((*((v13 + v68 * 8) as &i64) = 0, v68 += 1, v14 = v68, v80 = v79 - 1, v79 != 1));
                }
                v69 = v0 + v71;
                v70 = v5;
            } while (v70 != v3);
        }
    } else {
        if *((v64 + 0x100) as &i64) != 0x8000000000000000 {
            v3 = *((v64 + 288) as &i64);
        } else {
            v3 = 1;
        }
        v7 = *((v64 + 32) as &i64);
        v20 = *((v64 + 40) as &i64);
        v12 = 0;
        v13 = 8;
        v14 = 0;
    }
    v81 = v67;
    v36 = struct65 {
        field_0: v12
        field_8: v13
        field_16: v14
        field_24: v19
        field_32: v4
        field_40: v81
        field_48: v3
        field_56: v43
        field_64: v58 as i8
    };
    v42 = 0;
    v43 = v2;
    v50 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36);
    v30 = 0;
    v33 = 0;
    v34 = 0;
    v31 = 1;
    v32 = 0;
    v35 = 0;
    v82 = *((&v50 as &char + 8) as &i64);
    v83 = *((&v50 as &char + 16) as &i64);
    v8 = v82;
    v9 = v82;
    v19 = v50;
    v10 = v19;
    v4 = v82 + v83 * 24;
    v11 = v4;
    v24 = v82;
    if !v83 {
        v86 = 0;
        goto LABEL_54907b;
    } else {
        v84 = 0;
        if !v65 {
            v18 = 0;
        }
    }
    loop {
        v87 = v82;
        v88 = v87 + 24;
        v89 = *(v87 as &i64);
        if v2 == 0x8000000000000000 {
LABEL_549076:
            v9 = v90;
LABEL_54907b:
            v5 = v86;
            v110 = v23;
            if v110 {
                v112 = 0;
                loop {
                    v113 = v110 - 1;
                    if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, *((v22 + v112 + 8) as &i64), *((v22 + v112 + 16) as &i64))) || !((v114 = v113 - 1, !(v113 >= 1) || !(<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v29, v28)))) {
                        break;
                    }
                    v112 += 24;
                    if (v110 << 3) + (v110 << 4) == v112 {
                        goto LABEL_549200;
                    }
                }
            }
LABEL_549200:
            v115 = v1;
            *((v115 + 12) as &i32) = vvar_2288 - 1;
            if vvar_2288 != 1 {
                return 0;
            }
            *(v115 as &i64) = 0;
            *((v115 + 8) as &i32) = 0;
            if BinaryOp CasCmpNE {
                goto LABEL_0x549256;
            }
            if ((Not (Load(addr=(vvar_1692{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
            std::sys::sync::mutex::futex::Mutex::wake(v115 + 8);
        }
        v0 = *((v87 + 8) as &i64);
        v91 = *((v87 + 16) as &i64);
        v2 = v89;
        if v91 {
            v93 = 0;
            v5 = v91;
            do {
                v94 = v91 * 8;
                if !*((v0 + (v93 << 3)) as &i64) {
                    uu_pr::get_line_for_printing(&v15, v81, &v30, v3, v93, v7, v20, v91);
                    if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v16, v17) {
                        v9 = v88;
                        goto LABEL_5492d8;
                    }
                } else {
                    uu_pr::get_line_for_printing(&v15, v81, *((v0 + v93 * 8) as &i64), v3, v93, v7, v20, v91);
                    if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v16, v17)) {
                        goto LABEL_0x549121;
                    }
                    v84 = v86 + 1;
                }
            } while ((*((v13 + v68 * 8) as &i64) = 0, v68 += 1, v14 = v68, v80 = v79 - 1, v79 != 1));
LABEL_5492d8:
            if !v2 {
                goto LABEL_549303;
            }
            goto LABEL_5492dd;
        }
        if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, v27, v26) {
            break;
        }
        if v88 == v4 {
            v90 = v4;
            goto LABEL_549076;
        }
    }
    v9 = v88;
    if !v2 {
        goto LABEL_549303;
    }
LABEL_5492dd:
    v4 = v11;
LABEL_549303:
    v109 = v30;
    goto LABEL_54888a;
}
