fn uu_mktemp::Params::from(a0: &u64, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x2a8]
    let v1: i64;  // [sp-0x180]
    let v2: i64;  // [bp-0x170]
    let v3: i64;  // [sp-0x168]
    let v4: i64;  // [sp-0x160]
    let v5: i64;  // [sp-0x158]
    let v6: i64;  // [sp-0x150]
    let v7: i64;  // [sp-0x148]
    let v8: i64;  // [sp-0x140]
    let v9: i64;  // [bp-0x138], Other Possible Types: Argument, struct24
    let v10: i64;  // [sp-0x130], Other Possible Types: Argument
    let v11: i64;  // [sp-0x128]
    let v12: i64;  // [sp-0x120]
    let v13: i64;  // [sp-0x118]
    let v14: i64;  // [sp-0x110]
    let v15: i64;  // [sp-0x108], Other Possible Types: struct24
    let v16: i64;  // [sp-0x100]
    let v17: i64;  // [sp-0xf8]
    let v18: i64;  // [sp-0xf0]
    let v19: i64;  // [sp-0xe8]
    let v20: i64;  // [sp-0xe0]
    let v22: i64;  // [sp-0xd0]
    let v23: i64;  // [sp-0xc8]
    let v24: i64;  // [sp-0xc0], Other Possible Types: struct59, Enum, Arguments
    let v25: i64;  // [sp-0xb8]
    let v26: i64;  // [sp-0xb0]
    let v27: i64;  // [sp-0xa8]
    let v28: i64;  // [sp-0xa0]
    let v29: i64;  // [sp-0x98]
    let v30: i64;  // [sp-0x90]
    let v31: i8;  // [sp-0x88]
    let v32: i8;  // [bp-0x80]
    let v33: i8;  // [bp-0x78]
    let v34: i8;  // [bp-0x70]
    let v35: i8;  // [bp-0x68]
    let v36: i8;  // [bp-0x60]
    let v37: i64;  // [sp-0x58]
    let v38: i64;  // [sp-0x50]
    let v39: String;  // [sp-0x48], Other Possible Types: i192
    let v41: i64;  // r15
    let v42: i64;  // rsi
    let v43: i64;  // r14
    let v44: i64;  // rdx
    let v45: i64;  // rcx
    let v46: i64;  // rsi
    let v47: i64;  // rax
    let v48: i64;  // r9
    let v49: i64;  // r10
    let v50: i64;  // r11
    let v51: i64;  // r8
    let v52: i64;  // r12
    let v53: i8;  // al
    let v54: i64;  // r12
    let v55: i64;  // rbp
    let v59: i64;  // r8
    let v60: i64;  // rbp
    let v61: i64;  // r13
    let v62: i64;  // rbx
    let v63: i64;  // rdi
    let v64: i64;  // rdi
    let v66: i64;  // rdx
    let v68: i64;  // rsi
    let v70: i64;  // r8
    let v71: i64;  // r13
    let v73: i64;  // rdi
    let v74: i64;  // rdi
    let v75: i64;  // rsi
    let v76: i64;  // r11
    let v77: i64;  // r12
    let v78: i64;  // rcx
    let v79: i8;  // bpl
    let v80: i64;  // rdx
    let v81: i64;  // r9
    let v83: i32;  // edx
    let v84: i8;  // r14b
    let v85: i64;  // rax
    let v86: i64;  // rax
    let v88: i64;  // r11
    let v89: i64;  // rdi
    let v90: i64;  // rdi
    let v91: i64;  // r14
    let v92: i64;  // rax
    let v93: i64;  // r14
    let v94: i64;  // rcx
    let v95: i64;  // rdx
    let v96: i64;  // r14
    let v97: i32;  // ecx
    let v98: i32;  // edx
    let v99: i64;  // r14
    let v100: i64;  // rax
    let v101: i64;  // rcx
    let v102: i64;  // rdx
    let v103: i32;  // ecx
    let v104: i32;  // edx
    let v105: i64;  // r14
    let v107: i64;  // rdi
    let v109: i64;  // r13
    let v110: i64;  // rdx
    let v111: i64;  // rbp
    let v112: i64;  // rax
    let v113: i64;  // rcx
    let v114: i64;  // rax
    let v115: i64;  // rax
    let v116: i64;  // rdi
    let v117: i64;  // r12
    let v118: i64;  // rax
    let v119: i64;  // rdx
    let v120: i64;  // rcx
    let v121: i64;  // rax
    let v122: i64;  // r12
    let v123: i64;  // r12
    let v125: i64;  // rbp
    let v126: i64;  // r12
    let v127: i64;  // rax
    let v128: i64;  // rax
    let v129: i64;  // rbp
    let v130: i64;  // r13
    let v131: i64;  // rax
    let v132: i64;  // rax

    a1 = a1;
    v5 = *((a1 + 48) as &i64);
    if v5 == 0x8000000000000000 {
        v42 = *((a1 + 8) as &i64);
        v43 = *((a1 + 16) as &i64);
    } else {
        v43 = *((a1 + 16) as &i64);
        if !(v43) || !((v42 = *((a1 + 8) as &i64), *((v42 + v43 - 1) as &i8) == 88)) {
            *((a0 + 24) as &i64) = *((a1 + 16) as &i64);
            *((a0 + 8) as &i128) = *(a1 as &i128);
            *((a0 + 32) as &i64) = 9223372036854775809;
            *(a0 as &i64) = 0x8000000000000000;
            if v5 {
                return v41;
            }
            return v41;
        }
    }
    v1 = v42;
    v24 = core::str::pattern::StrSearcher::new(v1, v3, &g_41adc8, 3);
    v3 = v43;
    v41 = a0;
    if v24 {
        v44 = v30;
        v45 = v34;
        v46 = v36;
        v47 = v44 - v46;
        if !(v47 < v45) {
            goto LABEL_488006;
        }
        v48 = v30;
        v49 = v33;
        v50 = v35;
        v51 = v26;
        v8 = v27;
        v52 = v32;
        v7 = v50 - 1;
        v4 = "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs";
        a1 = a1;
        goto LABEL_487ea3;
    }
    if !(!*((&v24 as &char + 26) as &i8)) {
        goto LABEL_488006;
    }
    v53 = *((&v24 as &char + 25) as &i8);
    v54 = v26;
    if !v54 {
        v77 = 3;
        v41 = v41;
        v3 = v3;
        if !(!v53) {
            goto LABEL_4880d8;
        }
        goto LABEL_488010;
    }
    v74 = v33;
    v75 = v34;
    v41 = v41;
    v76 = v3;
    if v54 < v75 {
        if !(*((v74 + v54) as &i8) < 192) {
            goto LABEL_4886c5;
        }
LABEL_488146:
        goto LABEL_4880f0;
    }
    if !(v54 == v75) {
        goto LABEL_488146;
    }
LABEL_4886c5:
    v78 = *((v74 + v54 - 1) as &i8);
    if v78 < 0 {
        v80 = *((v74 + v54 - 2) as &i8);
        if v80 > 191 {
            v83 = v80 & 31;
        } else {
            v81 = *((v74 + v54 - 3) as &i8);
            v83 = v80 & 63 | (v81 <= 191 ? v81 & 15 : v81 & 63 | (*((v74 + v54 - 4) as &i8) & 7) * 64) * 64;
        }
        v78 = v78 & 63 | v83 * 64;
    }
    if v53 {
        goto LABEL_4880cb;
    }
    v85 = -1;
    if v78 >= 128 {
        v85 = -2;
        if v78 >= 0x800 {
            v85 = -0x100 | v78 < 0x10000 | -4;
        }
    }
    v86 = v85 + v54;
    if !v85 + v54 {
        v77 = 3;
        goto LABEL_4880d8;
    }
    if v86 >= v75 {
        if !(v86 == v75) {
            goto LABEL_488b57;
        }
LABEL_488b6c:
        if *((v74 + v86 - 1) as &i8) < 0 {
            goto LABEL_4880cb;
        }
    } else {
        if !(*((v74 + v86) as &i8) <= 191) {
            goto LABEL_488b6c;
        }
LABEL_488b57:
        goto LABEL_4880f0;
    }
    loop {
LABEL_487ea3:
        v0 = v28;
        if !(*((&v0 as &u8 + ((*((v49 + v47) as &i8) & 63) >> 3)) as &i8) >> (*((v49 + v47) as &i8) & 63 & 7) & 1) {
            if v48 == -1 {
                goto LABEL_487f8d;
            }
            goto LABEL_487f8a;
        }
        v60 = v59;
        if v60 - 1 < v46 {
            v61 = -(v60);
            v62 = v7 + v60;
            v63 = v47 + v60 - 1;
            loop {
                v64 = v63;
                if !v61 {
                    break;
                }
                if !(v64 < v45) {
                    goto LABEL_488bb2;
                }
                v55 = *(v62 as &i8);
                v61 += 1;
                v62 -= 1;
                if v55 != *((v49 + v64) as &i8) {
                    v66 = v44 - v51 - v61;
                    goto LABEL_487f79;
                }
            }
        } else if v60 {
            v4 = "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs";
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v71 = v70;
        if v71 >= v68 {
            break;
        }
        if v71 >= v46 {
            v4 = "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs";
            core::panicking::panic_bounds_check(); /* do not return */
        }
        if v47 + v71 >= v45 {
            v4 = "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs";
LABEL_488bb2:
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v55 = *((v50 + v71) as &i8);
        if v55 == *((v49 + v47 + v71) as &i8) {
            continue;
        }
        v73 = v8;
        v66 = v44 - v73;
LABEL_487f79:
        v47 = v66;
        a1 = a1;
        if v48 == -1 {
            goto LABEL_487f8d;
        }
LABEL_487f8a:
LABEL_487f8d:
        v44 = v47;
        v47 = v44 - v46;
        if v47 >= v45 {
LABEL_488006:
LABEL_488010:
            if v5 == 0x8000000000000000 {
                v11 = *((a1 + 16) as &i64);
                v9 = *(a1 as &i128);
                v79 = 0;
            } else {
                v24 = v1;
                v9 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v24);
                v79 = v55 | -0x100 | 1;
            }
            *((v41 + 24) as &i64) = v11;
            *((v41 + 8) as &i192) = v9;
            *((v41 + 32) as &i64) = 9223372036854775810;
            *(v41 as &i64) = 0x8000000000000000;
            v84 = 0;
            goto LABEL_488981;
        }
    }
    v3 = v3;
LABEL_4880cb:
    v77 = v47 + 3;
    if !v47 + 3 {
        v77 = 0;
        v1 = v1;
        loop {
            v91 = v1;
            if v91 == v1 {
                break;
            }
            v92 = *((v91 - 1) as &i8);
            if v92 < 0 {
                v94 = *((v91 - 2) as &i8);
                if v94 >= 192 {
                    v96 = v91 - 2;
                    v97 = v94 & 31;
                } else {
                    v95 = *((v91 - 3) as &i8);
                    if v95 >= 192 {
                        v96 = v91 - 3;
                        v98 = v95 & 15;
                    } else {
                        v96 = v91 - 4;
                        v98 = v95 & 63 | (*((v91 - 4) as &i8) & 7) * 64;
                    }
                    v97 = v94 & 63 | v98 * 64;
                }
                if (v92 & 63 | v97 << 6) != 88 {
                    goto LABEL_488247;
                }
            } else {
                v93 = v91 - 1;
                if v92 == 88 {
                    continue;
                }
            }
        }
LABEL_488247:
        v105 = v93 - v1 + 1;
        goto LABEL_488254;
    }
LABEL_4880d8:
    v88 = v3;
    if v77 >= v88 {
        v90 = v1;
        if v77 == v88 {
            goto LABEL_488158;
        }
LABEL_4880f0:
        core::str::slice_error_fail(); /* do not return */
    } else {
        v89 = v1;
        if *((v89 + v77) as &i8) <= 191 {
            goto LABEL_4880f0;
        }
LABEL_488158:
        v99 = v90 + v77;
        while (v99 != v1) {
            v100 = *((v99 - 1) as &i8);
            if v100 < 0 {
                v101 = *((v99 - 2) as &i8);
                if v101 >= 192 {
                    v99 -= 2;
                    v103 = v101 & 31;
                } else {
                    v102 = *((v99 - 3) as &i8);
                    if v102 >= 192 {
                        v99 -= 3;
                        v104 = v102 & 15;
                    } else {
                        v99 -= 4;
                        v104 = v102 & 63 | (*((v99 - 4) as &i8) & 7) * 64;
                    }
                    v103 = v101 & 63 | v104 * 64;
                }
                if (v100 & 63 | v103 << 6) != 88 {
                    goto LABEL_488247;
                }
            } else {
                v99 -= 1;
                if v100 == 88 {
                    continue;
                }
            }
        }
    }
    v105 = 0;
LABEL_488254:
    v20 = *((a1 + 32) as &i64);
    v7 = *((a1 + 24) as &i64);
    if v7 == 0x8000000000000000 {
        v8 = 1;
        v2 = 0;
        if !v105 {
            goto LABEL_488330;
        }
LABEL_4882fa:
        if v105 >= v3 {
            if v105 != v3 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((v1 + v105) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
        goto LABEL_488330;
    }
    v2 = *((a1 + 40) as &i64);
    v8 = v107;
    memcpy(v8, v20, v2);
    if !(!v105) {
        goto LABEL_4882fa;
    }
LABEL_488330:
    v15 = std::path::Path::_join(v8, v2, v1, v105);
    v23 = v77;
    v37 = v16;
    v38 = v17;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    v30 = 32;
    v31 = 3;
    v24 = 0;
    v26 = 0;
    v28 = &v9;
    v29 = &g_4f0000;
    if <std::path::Display as core::fmt::Display>::fmt(&v37, &v24) as i8 {
        core::result::unwrap_failed(); /* do not return */
    }
    v19 = v9;
    v4 = v10;
    v109 = v11;
    v111 = v23;
    if !*((a1 + 75) as &i8) {
LABEL_488489:
        v115 = 0x8000000000000000;
        if v7 != 0x8000000000000000 && (v115 = std::path::Path::is_absolute(v1, v105), v115 as i8) {
            v114 = 9223372036854775813;
            goto LABEL_4884ba;
        }
        v116 = v4;
        if !v109 || *((v116 + v109 - 1) as &i8) != 47 {
            v118 = std::path::Path::parent(v116, v109, v110, v113);
            if !v118 {
                v13 = 1;
                v6 = 0;
            } else {
                v15 = v118;
                v16 = v119;
                v9 = 0;
                v10 = 1;
                v11 = 0;
                v30 = 32;
                v31 = 3;
                v24 = 0;
                v26 = 0;
                v28 = &v9;
                if <std::path::Display as core::fmt::Display>::fmt(&v15, &v24) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                v6 = v9;
                v13 = v10;
            }
            v22 = 0;
            v121 = std::path::Path::file_name(v4, v109, v119, v120);
            if !v121 {
                v117 = 1;
                v18 = 0;
                v14 = 0;
            } else {
                v24 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v121, v119);
                if v24 {
                    core::option::unwrap_failed(); /* do not return */
                }
                if v122 {
                    v123 = v26;
                    v127 = __rust_alloc(v123, 1);
                    if v127 {
                        v125 = v23;
                    }
                }
                v14 = v123;
                memcpy(v126, v25, v14);
                v18 = 0;
            }
        } else {
            v117 = 1;
            v18 = v115 | -0x100 | 1;
            v14 = 0;
            v6 = v19;
            v13 = v116;
            v22 = v109;
        }
        v128 = v5;
        if v128 == 0x8000000000000000 {
            v16 = 1;
            v17 = 0;
            v128 = 0;
        } else {
            v16 = *((a1 + 56) as &i128);
        }
        v15 = v128;
        if v111 {
            if v3 <= v111 {
                if v3 != v111 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v1 + v111) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v37 = v1 + v111;
        v38 = v3 - v111;
        v9 = Argument {
            value: &v37
            formatter: <&T as core::fmt::Display>::fmt
        };
        v10 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v15
        };
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = Arguments {
            pieces: [&g_416360, &g_416370]
            args: [&v9, &v10]
            fmt: None
        };
        v39 = alloc::fmt::format::format_inner(&v24);
        v3 = v39;
        v129 = *((&v39 as &char + 8) as &i64);
        v130 = *((&v39 as &char + 16) as &i64);
        if v130 > 15 {
            if !(core::slice::memchr::memchr_aligned(47, v129) == 1) {
                goto LABEL_488a0a;
            }
            *((v41 + 8) as &i64) = v3;
            *((v41 + 16) as &i64) = v129;
            *((v41 + 24) as &i64) = v130;
            *((v41 + 32) as &i64) = 9223372036854775812;
            *(v41 as &i64) = 0x8000000000000000;
            v79 = v129 | -0x100 | 1;
            v84 = v6 | -0x100 | 1;
            if v18 {
LABEL_488967:
LABEL_488981:
                if !v79 {
                    return v41;
                }
LABEL_4889dd:
                if *(a1 as &i64) {
                    return v41;
                }
                return v41;
            }
        } else {
            if !v130 {
                goto LABEL_488a0a;
            }
            v131 = 0;
            while (*((v129 + v131) as &i8) != 47) {
                v131 += 1;
                if v130 == v131 {
                    goto LABEL_488a0a;
                }
            }
LABEL_488a0a:
            *(v41 as &i64) = v6;
            *((v41 + 8) as &i64) = v13;
            *((v41 + 16) as &i64) = v22;
            v132 = v14;
            *((v41 + 24) as &i64) = v132;
            *((v41 + 32) as &i64) = v117;
            *((v41 + 40) as &i64) = v132;
            *((v41 + 48) as &i64) = v3;
            *((v41 + 56) as &i64) = v129;
            *((v41 + 64) as &i64) = v130;
            *((v41 + 72) as &i64) = v23 - v105;
            if v7 << 1 {
                goto LABEL_4889dd;
            }
        }
    } else if v105 > 15 {
        if core::slice::memchr::memchr_aligned(47, v1) == 1 {
            goto LABEL_488479;
        }
        goto LABEL_488489;
    } else {
        if !v105 {
            goto LABEL_488489;
        }
        v112 = 0;
        v113 = v1;
        while (*((v113 + v112) as &i8) != 47) {
            v112 += 1;
            if v105 == v112 {
                goto LABEL_488489;
            }
        }
LABEL_488479:
        v114 = 9223372036854775811;
LABEL_4884ba:
        *((v41 + 24) as &i64) = *((a1 + 16) as &i64);
        *((v41 + 8) as &i128) = *(a1 as &i128);
        *((v41 + 32) as &i64) = v114;
        *(v41 as &i64) = 0x8000000000000000;
        v79 = 0;
        v84 = 0;
    }
    goto LABEL_488967;
}
