fn uu_test::parser::Parser::term(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [bp-0x230]
    let v1: i64;  // [bp-0x228], Other Possible Types: Enum, struct8, Arguments, struct32
    let v2: i64;  // [sp-0x220]
    let v3: i64;  // [sp-0x218]
    let v4: i128;  // [sp-0x210]
    let v5: i64;  // [sp-0x208]
    let v6: i128;  // [sp-0x200]
    let v7: i64;  // [sp-0x1e8]
    let v8: i64;  // [sp-0x1e0]
    let v9: i64;  // [bp-0x1d8], Other Possible Types: struct24, Enum
    let v10: i128;  // [bp-0x1d0]
    let v11: i64;  // [bp-0x1c8]
    let v12: i192;  // [bp-0x1a8]
    let v13: i64;  // [sp-0x198]
    let v14: i192;  // [sp-0x188], Other Possible Types: String
    let v15: i64;  // [sp-0x178]
    let v16: i192;  // [sp-0x168], Other Possible Types: struct24
    let v17: i8;  // [bp-0x160]
    let v18: i8;  // [bp-0x150]
    let v19: i64;  // [bp-0x148], Other Possible Types: Enum, Argument
    let v20: i8;  // [bp-0x140]
    let v21: i8;  // [bp-0x130]
    let v22: i64;  // [sp-0x120], Other Possible Types: Enum
    let v23: i128;  // [sp-0x118]
    let v24: i64;  // [sp-0x108]
    let v25: i64;  // [sp-0xf8]
    let v26: i192;  // [sp-0xf0], Other Possible Types: struct24, Enum
    let v27: i128;  // [sp-0xc8], Other Possible Types: struct64, struct8
    let v28: i128;  // [bp-0xc0]
    let v29: i512;  // [bp-0xb8]
    let v30: i128;  // [sp-0xb0]
    let v31: i128;  // [sp-0xa0]
    let v32: i64;  // [sp-0x90]
    let v33: i64;  // [sp-0x80]
    let v34: i64;  // [sp-0x78]
    let v35: i8;  // [bp-0x70]
    let v36: i8;  // [bp-0x68]
    let v37: i8;  // [bp-0x60]
    let v38: Enum;  // [sp-0x58], Other Possible Types: i320
    let v40: i64;  // rbp
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v44: i64;  // r15
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v47: i64;  // rbx
    let v48: i64;  // r15
    let v49: i64;  // rcx
    let v50: i64;  // rcx
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm0
    let v55: i64;  // r15
    let v57: i64;  // r12
    let v59: i64;  // 4096
    let v60: i64;  // rsi
    let v61: i64;  // r12
    let v62: i64;  // rbp
    let v63: i64;  // rbp
    let v64: i64;  // r15
    let v65: i64;  // rbx
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // r12
    let v69: i64;  // r12
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: i64;  // rax
    let v73: i64;  // rax
    let v74: i64;  // r12
    let v77: i64;  // rcx
    let v78: i64;  // rbp
    let v79: i64;  // rax
    let v81: i64;  // r15
    let v82: i64;  // rbx
    let v83: i128;  // xmm1
    let v84: i64;  // rax
    let v85: i64;  // rbx
    let v86: i64;  // rax
    let v87: i64;  // rbx
    let v88: i64;  // rbx
    let v89: i64;  // rax
    let v91: i64;  // r13
    let v92: i64;  // r12
    let v93: i64;  // r12
    let v94: i64;  // rax
    let v95: i64;  // rcx
    let v96: i128;  // xmm0
    let v97: i64;  // rbx
    let v98: i64;  // rax
    let v100: i64;  // rax
    let v101: i64;  // rax
    let v102: i64;  // rbx
    let v103: i64;  // rax
    let v107: i64;  // rbx
    let v108: i64;  // rax
    let v109: i64;  // rcx
    let v110: i128;  // xmm0
    let v111: i64;  // rcx

    v40 = a0;
    v41 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v27 != 9223372036854775809 {
        v28 = *((a1 + 32) as &i128);
        v27 = v41;
    } else {
        v42 = *((a1 + 56) as &i64);
        if v42 == *((a1 + 72) as &i64) {
            v27 = struct64 {
                field_0: 0x8000000000000000
                field_8: <UNKNOWN>
                field_16: *((v42 + 16) as &i64)
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        } else {
            *((a1 + 56) as &i64) = v42 + 24;
            v27 = *(v42 as &i128);
        }
    }
    v38 = uu_test::parser::Symbol::new(&v27);
    v43 = v38;
    switch (v43) {
    case 0:
        <alloc::vec::into_iter::IntoIter<T,A> as core::clone::Clone>::clone(&v1, a1 + 48);
        v48 = *(v44 as &i64);
        if v48 != 0x8000000000000000 && v48 != 9223372036854775809 {
            v55 = *((a1 + 40) as &i64);
            memcpy(v57, *((a1 + 32) as &i64), v55);
        }
        v27 = v29;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v35, &v27);
        v64 = v36;
        v65 = v37;
        switch (v65) {
        case 0:
            v16 = std::sys::os_str::bytes::Slice::to_owned(&g_4193ab, 1);
            v4 = *((&v16 as &char + 16) as &i64);
            v2 = v16;
            v1 = 3;
            uu_test::parser::Parser::literal(&v19, a1, &v1);
            if v19 != 7 {
                v13 = v21;
                v12 = v20;
                *((v63 + 24) as &i64) = v13;
                *((v63 + 8) as &i128) = v12;
                *(v63 as &i64) = v68;
                return v45;
            }
            v7 = v63;
            v68 = 7;
            goto LABEL_483823;
        case 1:
            v16 = v64;
            v19 = Argument {
                value: &v16
                formatter: <&T as core::fmt::Display>::fmt
            };
            v1 = Arguments {
                pieces: [&g_40ff60]
                args: [&v19]
                fmt: None
            };
            v14 = alloc::fmt::format::format_inner(&v1);
            v7 = v63;
            v12 = v14;
            v68 = 3;
            v0 = 0;
LABEL_4837d5:
            do {
                v85 = v65;
                v86 = *(v64 as &i64);
            } while ((v64 += 40, v87 = v85 - 1, v85 != 1));
LABEL_483823:
            v45 = v35;
            v40 = v7;
            if false {
                v45 = v13;
                *((v63 + 24) as &i64) = v45;
                *((v63 + 8) as &i128) = v12;
                *(v63 as &i64) = v68;
                return v45;
            }
            break;
        case 2:
            v66 = *(v64 as &i64);
            v67 = *((v64 + 40) as &i64);
            if !(v66 == 4) || !(v67 == 3) {
                if !(v67 == 3) {
                    goto LABEL_483701;
                }
            } else {
                if *((v64 + 64) as &i64) == 1 && *(*((v64 + 56) as &i64) as &i8) == 41 {
                    goto LABEL_4835e2;
                }
            }
LABEL_4836ab:
            if !(*((v64 + 64) as &i64) == 1) || !(*(*((v64 + 56) as &i64) as &i8) == 41) {
                goto LABEL_483701;
            }
            v26 = uu_test::parser::Parser::next_token(a1);
            uu_test::parser::Parser::literal(&v1, a1, &v26);
            v73 = v1;
            if !(v73 == 7) {
                goto LABEL_48385f;
            }
            uu_test::parser::Parser::expect();
            break;
        case 3:
            v66 = *(v64 as &i64);
            if v66 == 4 {
                if !(*((v64 + 40) as &i32) == 3) || !(*((v64 + 64) as &i64) == 1) || !(*(*((v64 + 56) as &i64) as &i8) == 41) {
                    goto LABEL_483649;
                }
LABEL_4835e2:
                v1 = struct8 {
                    field_0: 0
                };
                uu_test::parser::Symbol::into_literal(&v19, &v1);
                uu_test::parser::Parser::literal(&v16, a1, &v19);
                v73 = v16;
                if v73 != 7 {
                    v0 = v73;
                    v13 = v18;
LABEL_483876:
                    v12 = v17;
                    do {
                        v88 = v65;
                        v89 = *(v64 as &i64);
                    } while ((v64 += 40, v87 = v85 - 1, v85 != 1));
                    v68 = v0;
                    *((v63 + 24) as &i64) = v13;
                    *((v63 + 8) as &i128) = v12;
                    *(v63 as &i64) = v68;
                    return v45;
                }
LABEL_4837c4:
                v7 = v63;
                v68 = 7;
                v0 = v73 | -0x100 | 1;
                goto LABEL_4837d5;
            } else {
                if v66 == 5 && *((v64 + 80) as &i32) == 3 && *((v64 + 104) as &i64) == 1 && *(*((v64 + 96) as &i64) as &i8) == 41 {
                    v9 = uu_test::parser::Parser::next_token(a1);
                    uu_test::parser::Parser::uop(a1, &v9);
                    uu_test::parser::Parser::expect();
                    break;
                }
LABEL_483649:
                v71 = *((v64 + 40) as &i64);
                if v71 == 3 {
                    goto LABEL_4836ab;
                }
                if v71 != 4 {
LABEL_483701:
                    if !(v66 == 4) {
                        goto LABEL_48378c;
                    }
                    v16 = std::sys::os_str::bytes::Slice::to_owned(&g_4193ab, 1);
                    v4 = *((&v16 as &char + 16) as &i64);
                    v2 = v16;
                    v1 = 3;
                    uu_test::parser::Parser::literal(&v19, a1, &v1);
                    v73 = v19;
                    if v73 != 7 {
                        v0 = v73;
                        v13 = v21;
                        goto LABEL_483876;
                    }
                } else {
                    if !(v66 == 4) {
                        goto LABEL_48378c;
                    }
                    v22 = uu_test::parser::Parser::next_token(a1);
                    uu_test::parser::Parser::literal(&v1, a1, &v22);
                    v73 = v1;
                    if v73 != 7 {
LABEL_48385f:
                        v0 = v73;
                        v13 = v4;
                        goto LABEL_483876;
                    } else {
                        uu_test::parser::Parser::expect();
                        break;
                    }
                }
            }
        default:
LABEL_48378c:
            v1 = uu_test::parser::Parser::expr(a1);
            v73 = v1;
            if !(v73 == 7) {
                goto LABEL_48385f;
            }
            uu_test::parser::Parser::expect();
            break;
        }
        v73 = v1;
        if !(v73 == 7) {
            goto LABEL_48385f;
        }
        goto LABEL_4837c4;
    case 1:
        v46 = *(v44 as &i64);
        if v46 == 9223372036854775809 {
            v49 = *((a1 + 56) as &i64);
            v46 = 0x8000000000000000;
            if v49 != *((a1 + 72) as &i64) {
                *((a1 + 56) as &i64) = v49 + 24;
                v46 = *(v49 as &i64);
                v1 = *((v49 + 8) as &i128);
            }
            *((a1 + 24) as &i64) = v46;
            *((a1 + 32) as &i128) = v1;
        }
        v7 = a0;
        if v46 == 0x8000000000000000 {
            v1 = 0x8000000000000000;
        } else {
            v60 = *((a1 + 32) as &i64);
            v61 = *((a1 + 40) as &i64);
            if !v61 {
                v62 = 1;
            } else {
                v0 = v60;
                if v61 < 0 {
                    v8 = 0;
                }
                v8 = 1;
                v62 = __rust_alloc(v61, 1);
                v60 = v0;
            }
            memcpy(v2, v60, v61);
            v1 = v61;
            v2 = v62;
            v3 = v61;
            v59 = v7;
        }
        v40 = v59;
        v19 = uu_test::parser::Symbol::new(&v1);
        v69 = v19;
        if !(v69 != 2) || !(v69 != 4) {
            <alloc::vec::into_iter::IntoIter<T,A> as core::clone::Clone>::clone(&v9, a1 + 48);
            v70 = *(v44 as &i64);
            v69 = v69;
            if v70 == 0x8000000000000000 {
                v0 = &v4;
                v6 = v11;
                v4 = v9;
                v1 = 9223372036854775809;
                goto LABEL_4831f7;
            }
            if v70 != 9223372036854775809 {
                v74 = *((a1 + 40) as &i64);
                if !v74 {
                    v0 = &v4;
                    v6 = v11;
                    v4 = v9;
                    v2 = 1;
                    v3 = 0;
                } else if v74 < 0 {
                    v0 = 0;
                } else {
                    v78 = *((a1 + 32) as &i64);
                    v0 = 1;
                    v79 = __rust_alloc(v74, 1);
                    memcpy(v79, v78, v74);
                    v0 = &v4;
                    v83 = v11;
                    v4 = v9;
                    v6 = v83;
                    v2 = v79;
                    v3 = v74;
                }
                v1 = 9223372036854775809;
                v84 = v5;
                if v84 == *((&v6 as &char + 8) as &i64) {
                    v9 = 0x8000000000000000;
                } else {
                    v5 = v84 + 24;
                    v9 = *(v84 as &i128);
                    v11 = *((v84 + 16) as &i64);
                }
            } else {
                v6 = v11;
                v4 = v9;
                v1 = 9223372036854775809;
                v34 = *((&v6 as &char + 8) as &i64);
                v25 = v5;
                v33 = v25 + (-0x100 | v34 != v25) * 24;
                v5 = v33;
                v0 = &v4;
                if !(v34 != v25) || !((v77 = v33, v77 != v34)) {
LABEL_4831f7:
                    v9 = 0x8000000000000000;
                } else {
                    v5 = v77 + 24;
                    v9 = *(v77 as &i128);
                    v11 = *((v77 + 16) as &i64);
                }
            }
            v26 = uu_test::parser::Symbol::new(&v9);
            v93 = v26;
            v40 = v7;
            if (v93 | 2) == 6 {
                v100 = *(v44 as &i64);
                *(v44 as &i64) = 9223372036854775809;
                if v9 != 9223372036854775809 {
                    v10 = *((a1 + 32) as &i128);
                    v9 = v100;
                } else {
                    v101 = *((a1 + 56) as &i64);
                    if v101 == *((a1 + 72) as &i64) {
                        v9 = 0x8000000000000000;
                    } else {
                        *((a1 + 56) as &i64) = v101 + 24;
                        v11 = *((v101 + 16) as &i64);
                        v9 = *(v101 as &i128);
                    }
                }
                v1 = uu_test::parser::Symbol::new(&v9);
                v9 = std::sys::os_str::bytes::Slice::to_owned(&g_4193ac, 1);
                v24 = v11;
                v23 = v9;
                v22 = 3;
                uu_test::parser::Parser::literal(&v1, a1, &v22);
                v91 = v1;
                if v91 != 7 {
LABEL_483ccb:
                    v15 = v4;
                    goto LABEL_483cdd;
                } else {
                    v1 = 1;
                    v107 = *((a1 + 16) as &i64);
                    if v107 == *(a1 as &i64) {
                        alloc::raw_vec::RawVec<T,A>::grow_one(a1);
                    }
                    v108 = *((a1 + 8) as &i64);
                    v109 = v107 * 5;
                    *((v108 + v109 * 8 + 32) as &i64) = v5;
                    v110 = v1;
                    *((v108 + v109 * 8 + 16) as &i128) = *((&v1 as &char + 16) as &i128);
                    *((v108 + v109 * 8) as &i128) = v110;
                    *((a1 + 16) as &i64) = v107 + 1;
                }
            } else {
                v16 = std::sys::os_str::bytes::Slice::to_owned(&g_4193ac, 1);
                v4 = *((&v16 as &char + 16) as &i64);
                v2 = v16;
                v1 = 3;
                uu_test::parser::Parser::literal(&v9, a1, &v1);
                v91 = v9;
                if v91 != 7 {
                    v15 = (&v11)[1];
LABEL_483cdd:
                    v14 = *((&v9 as &char + 8) as &i128);
LABEL_483d1c:
                    v45 = v15;
                    *((v40 + 24) as &i64) = v45;
                    *((v40 + 8) as &i128) = v14;
                    *(v40 as &i64) = v91;
                    return v45;
                }
                uu_test::parser::Parser::maybe_boolop();
                v91 = v1;
                if !(v91 == 7) {
                    goto LABEL_483ccb;
                }
            }
            if v93 - 2 <= 3 && *((&v26 as &u8 + (&g_4102c0)[2 + v93]) as &i64) {
                goto LABEL_4834db;
            }
        } else {
            if v69 == 6 {
                v26 = std::sys::os_str::bytes::Slice::to_owned(&g_4193ac, 1);
                v4 = *((&v26 as &char + 16) as &i64);
                v2 = v26;
                v1 = 3;
                v47 = *((a1 + 16) as &i64);
                if v47 == *(a1 as &i64) {
                    alloc::raw_vec::RawVec<T,A>::grow_one(a1);
                }
                v45 = *((a1 + 8) as &i64);
                v50 = v47 * 5;
                *((v45 + v50 * 8 + 32) as &i64) = v5;
LABEL_482d41:
                *((v45 + v50 * 8 + 16) as &i128) = v52;
                *((v45 + v50 * 8) as &i128) = v51;
                *((a1 + 16) as &i64) = v47 + 1;
                break;
            }
            <alloc::vec::into_iter::IntoIter<T,A> as core::clone::Clone>::clone(&v1, a1 + 48);
            v72 = *(v44 as &i64);
            if v72 != 9223372036854775809 {
                if v72 != 0x8000000000000000 {
                    v26 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v44);
                }
                v16 = *((&v26 as &char + 8) as &i128);
            }
            v31 = v1;
            v30 = v1;
            v28 = v16;
            v27 = struct8 {
                field_0: v80
            };
            v32 = 4;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, &v27);
            v81 = v10;
            v82 = v11;
            if !(v82 == 3) || !(*(v81 as &i32) == 3) || !(*((v81 + 40) as &i32) == 2) || !(*((v81 + 80) as &i32) == 3) {
                v1 = uu_test::parser::Parser::term(a1);
                v91 = v1;
                if v91 != 7 {
                    v15 = v4;
                    v14 = *((&v1 as &char + 8) as &i128);
                    if !(!v82) {
                        goto LABEL_483513;
                    }
                    goto LABEL_4835a2;
                } else {
                    v69 = v69;
                    v1 = 1;
                    v92 = *((a1 + 16) as &i64);
                    if v92 == *(a1 as &i64) {
                        alloc::raw_vec::RawVec<T,A>::grow_one(a1);
                    }
                    v94 = *((a1 + 8) as &i64);
                    v95 = v92 * 5;
                    *((v94 + v95 * 8 + 32) as &i64) = v5;
                    v96 = v1;
                    *((v94 + v95 * 8 + 16) as &i128) = *((&v1 as &char + 16) as &i128);
                    *((v94 + v95 * 8) as &i128) = v96;
                    *((a1 + 16) as &i64) = v92 + 1;
                    if v82 {
LABEL_483137:
                        do {
                            v102 = v82;
                            v103 = *(v81 as &i64);
                        } while ((v64 += 40, v87 = v85 - 1, v85 != 1));
                    }
                    if v9 {
LABEL_4834db:
                    }
                }
            } else {
                v1 = uu_test::parser::Parser::expr(a1);
                v91 = v1;
                if v91 == 7 {
                    v1 = struct8 {
                        field_0: 1
                    };
                    alloc::vec::Vec<T,A>::push(a1, &v1);
                    v69 = v69;
                    goto LABEL_483137;
                } else {
                    v15 = v4;
                    v14 = *((&v1 as &char + 8) as &i128);
LABEL_483513:
                    v69 = v69;
                    do {
                        v97 = v82;
                        v98 = *(v81 as &i64);
                    } while ((v64 += 40, v87 = v85 - 1, v85 != 1));
                    v40 = v7;
                }
LABEL_4835a2:
                if v9 {
                    goto LABEL_483d1c;
                }
            }
        }
        v111 = v69;
        v45 = v111 - 2;
        if v45 <= 3 {
            v45 = (&g_4102c0)[2 + v111];
            break;
        }
    case 5:
        v45 = uu_test::parser::Parser::uop(a1, &v38);
        break;
    case 6:
        v47 = *((a1 + 16) as &i64);
        if v47 == *(a1 as &i64) {
            alloc::raw_vec::RawVec<T,A>::grow_one(a1);
        }
        v45 = *((a1 + 8) as &i64);
        v50 = v47 * 5;
        *((v45 + v50 * 8 + 32) as &i64) = *((&v38 as &char + 32) as &i64);
        v51 = v38;
        v52 = *((&v38 as &char + 16) as &i128);
        goto LABEL_482d41;
    default:
        v45 = uu_test::parser::Parser::literal(&v27, a1, &v38);
        if v27 != 7 {
            v53 = v27;
            *((a0 + 16) as &i128) = *((&v27 as &char + 16) as &i128);
            *(a0 as &i128) = v53;
            return v45;
        }
        *(v40 as &i64) = 7;
        return v45;
    }
}
