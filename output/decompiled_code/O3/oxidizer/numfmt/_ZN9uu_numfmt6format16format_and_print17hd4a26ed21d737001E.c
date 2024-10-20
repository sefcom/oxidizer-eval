fn uu_numfmt::format::format_and_print(a0: &u64, a1: &u64, a2: &u64, a3: void*) -> u64 {
    let v0: i64;  // [sp-0x2e8]
    let v1: i32;  // [bp-0x1c0]
    let v2: i32;  // [sp-0x1b4]
    let v3: i64;  // [sp-0x1b0]
    let v4: i64;  // [sp-0x1a8]
    let v6: i64;  // [sp-0x190]
    let v7: i64;  // [sp-0x180]
    let v8: i64;  // [sp-0x178]
    let v9: i64;  // [sp-0x170]
    let v10: i128;  // [sp-0x168]
    let v11: i8;  // [bp-0x160]
    let v12: i64;  // [sp-0x158]
    let v13: Arguments;  // [sp-0x150], Other Possible Types: i64, struct59
    let v14: i64;  // [sp-0x148]
    let v15: i64;  // [sp-0x140]
    let v16: i64;  // [bp-0x138]
    let v17: i64;  // [sp-0x130]
    let v18: i8;  // [bp-0x108]
    let v19: i8;  // [bp-0x100]
    let v20: i8;  // [bp-0xf8]
    let v21: i8;  // [bp-0xf0]
    let v22: Argument;  // [sp-0xe8], Other Possible Types: i128
    let v24: i64;  // [sp-0xd0]
    let v25: i128;  // [sp-0xc8]
    let v26: i64;  // [sp-0xb8]
    let v27: i64;  // [sp-0xa8]
    let v28: i64;  // [sp-0xa0]
    let v30: i64;  // [sp-0x90]
    let v31: i64;  // [sp-0x88]
    let v32: i64;  // [sp-0x80]
    let v33: i64;  // [sp-0x78]
    let v34: Argument;  // [sp-0x70]
    let v35: i64;  // [sp-0x60]
    let v36: i64;  // [sp-0x58]
    let v37: i64;  // [sp-0x50]
    let v38: i64;  // [sp-0x48]
    let v39: i64;  // [sp-0x40]
    let v40: i64;  // [sp-0x38]
    let v42: i64;  // r14
    let v43: i64;  // rax
    let v44: i64;  // rcx
    let v45: i64;  // r14
    let v85: i64;  // rcx
    let v86: i64;  // r15
    let v87: i64;  // r10
    let v88: i64;  // r12
    let v89: i64;  // rsi
    let v90: i64;  // rbx
    let v91: i64;  // r13
    let v92: i64;  // rcx
    let v93: i64;  // rax
    let v94: i64;  // r9
    let v95: i64;  // rsi
    let v97: i256;  // ymm0
    let v98: i64;  // rdx
    let v99: i64;  // rax
    let v100: i64;  // r14
    let v103: i64;  // rsi
    let v104: i64;  // r11
    let v105: i64;  // rdi
    let v106: i64;  // r14
    let v107: i64;  // r11
    let v108: i64;  // r11
    let v109: i64;  // r11
    let v110: i64;  // r8
    let v111: i64;  // r11
    let v112: i64;  // rax
    let v113: i64;  // rsi
    let v114: i64;  // rax
    let v115: i64;  // r10
    let v116: i64;  // r11
    let v117: i64;  // rdx
    let v118: i64;  // rdi
    let v119: i64;  // rdi
    let v120: i64;  // rax
    let v121: i64;  // r11
    let v122: i64;  // r15
    let v123: i64;  // r15
    let v125: i64;  // r15
    let v126: i64;  // rax
    let v127: i64;  // r14
    let v130: i64;  // r11
    let v131: i64;  // rax
    let v132: i64;  // r14
    let v136: i64;  // r14
    let v137: i64;  // r9
    let v142: i64;  // 4096
    let v143: i64;  // r15
    let v144: i64;  // rax
    let v148: i32;  // esi
    let v149: i32;  // r8d
    let v150: i32;  // edi
    let v152: i64;  // rdi
    let v153: i64;  // rdi
    let v156: i64;  // rax
    let v157: i8;  // r14b
    let v158: i128;  // xmm0
    let v159: i128;  // xmm0

    v31 = a3;
    if vvar_1806 == 0x8000000000000000 {
        v42 = *((a3 + 96) as &i64);
        v27 = *((a3 + 184) as &i64);
        v30 = &v11;
        v6 = *((a3 + 104) as &i64);
        v43 = 1;
        v44 = 2;
    }
    v28 = a3 + 112;
    v45 = a3;
    v13 = <&alloc::string::String as core::str::pattern::Pattern>::into_searcher(a3 + 112, a1, a2);
    v40 = v13;
    v85 = v16;
    v33 = v17;
    v86 = *((&v13 as &char + 40) as &i64);
    v87 = v16;
    v4 = v18;
    v88 = v19;
    v89 = v20;
    v90 = v21;
    v2 = (v85 & 4294967295 & 4294967295) >> 16;
    v6 = v90 - 1;
    v3 = v85;
    v37 = v85 & -0xff0100;
    v39 = *((v45 + 104) as &i64);
    v38 = v39 * 16;
    v91 = *((v45 + 96) as &i64);
    v30 = &v11;
    v35 = v89 - 1;
    v92 = 1;
    v93 = 2;
    v94 = 0;
    v32 = v89;
    loop {
        v27 = v93;
        v98 = v14;
        if v40 {
            v99 = v6 + v86;
            v100 = v4;
            if v99 >= v88 {
                v1 = 0;
                goto LABEL_49488b;
            }
            v94 = v94;
            v7 = v3 | v37 | v2 * 0x10000;
            if v87 == -1 {
                v105 = v14 - 1;
                v1 = v105 < v90;
                v36 = v35 + v14;
                goto LABEL_49490f;
            }
            v1 = v90 - v7;
            v108 = v104;
            v0 = v33;
            if !(*((&v0 as &u8 + ((*((v100 + v99) as &i8) & 63) >> 3)) as &i8) >> (*((v100 + v99) as &i8) & 63 & 7) & 1) {
                v86 += v90;
                v87 = 0;
                goto LABEL_494786;
            } else {
                v110 = v87;
                v112 = v111;
                v113 = v32;
                loop {
                    v115 = v114;
                    if v115 >= v90 {
                        break;
                    }
                    if !(v86 + v115 < v88) {
                        goto LABEL_494e0a;
                    }
                    v116 = v115 + 1;
                    if *((v113 + v115) as &i8) != *((v100 + v86 + v115) as &i8) {
                        v86 = v86 + -(v14) + v116;
                        v87 = 0;
                        goto LABEL_494786;
                    }
                }
                v112 = v98;
            }
            v118 = v117;
            if v110 < v118 {
                v119 = v118 - 1;
                if !(v119 < v90) || !((v120 = v119 + v86, v120 < v88)) {
                    goto LABEL_49490f;
                }
                if *((v113 + v119) as &i8) == *((v100 + v120) as &i8) {
                    continue;
                }
                v86 += v7;
                v87 = v1;
LABEL_494786:
                v121 = v109;
                v99 = v6 + v86;
                if v99 < v88 {
                    continue;
                }
                v1 = 0;
                goto LABEL_49488b;
            } else {
                v87 = 0;
                do {
LABEL_49490f:
                    v112 = v107;
                    v0 = v33;
                    if (*((&v0 as &u8 + ((*((v106 + v99) as &i8) & 63) >> 3)) as &i8) >> (*((v106 + v99) as &i8) & 63 & 7) & 1) {
                        loop {
                            v126 = 0;
                            v127 = v125;
                            if v112 + v126 >= v90 {
                                break;
                            }
                            if v112 + v127 >= v88 {
LABEL_494e0a:
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v123 = v127 + 1;
                        }
                        if !(v1 & 1) {
                            v87 = -1;
                            v136 = v4;
                            if v112 {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
LABEL_4949c1:
                            v143 = v122 + v90;
                            v1 = v98 | -0x100 | 1;
                            goto LABEL_4949d5;
                        } else {
                            v36 = v36;
                            loop {
                                v131 = v105 + v122;
                                v132 = v36;
                                if v130 < 1 {
                                    v87 = -1;
                                    v136 = v4;
                                    goto LABEL_4949c1;
                                }
                                if v131 >= v88 {
                                    break;
                                }
                                v112 = v98;
                                if *(v132 as &i8) != *((v4 + v131) as &i8) {
                                    v123 = v122 + v7;
                                }
                            }
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                    }
                } while ((v123 = v122 + v90, v99 = v6 + v123, v100 = v4, v99 < v88));
                v1 = 0;
                v94 = v94;
                v87 = -1;
                goto LABEL_4949d5;
            }
        }
        v100 = v4;
        if v2 {
            v1 = 0;
LABEL_49488b:
            goto LABEL_4949d5;
        }
        v103 = v3;
        if v14 {
            if v14 < v88 {
                if !(*((v100 + v14) as &i8) < 192) {
                    goto LABEL_494bb6;
                }
                goto LABEL_494e6f;
            } else {
                if v14 == v88 {
                    goto LABEL_494bb6;
                }
                goto LABEL_494e6f;
            }
        }
LABEL_494bb6:
        if v14 == v88 {
            if v103 {
                v3 = v103 | -0x100 | v103 ^ 1;
                v1 = v27 | -0x100 | 1;
                v2 = 0;
                goto LABEL_494d37;
            } else {
                v3 = v27 | -0x100 | 1;
                v1 = 0;
                v2 = v3 | -0x100 | 1;
                goto LABEL_4949d5;
            }
        }
        v144 = *((v100 + v14) as &i8);
        if v144 < 0 {
            v148 = v144 & 31;
            v149 = *((v100 + v14 + 1) as &i8) & 63;
            if (v144 & 255) >= 224 {
                v150 = *((v100 + v14 + 2) as &i8) & 63 | v149 * 64;
                v144 = ((v144 & 255 & 255) < 240 ? *((v100 + v14 + 3) as &i8) & 63 | v150 * 64 | (v148 & 7) * 0x40000 : v150 | v148 * 0x1000);
            } else {
                v144 = v148 * 64 | v149;
            }
            v103 = v3;
            if !(v103 & 255 & 255) {
                goto LABEL_494cd5;
            }
LABEL_494bf4:
            goto LABEL_494bf7;
        }
        if !(!(v103 & 255 & 255)) {
            goto LABEL_494bf4;
        }
LABEL_494cd5:
        v152 = 1;
        if v144 >= 128 {
            v152 = 2;
            if v144 >= 0x800 {
                v152 = 4 - (v144 < 0x10000);
            }
        }
        v153 = v152 + v14;
        if v152 + v14 {
            if v153 >= v88 {
                if !(v153 == v88) {
                    goto LABEL_494e6f;
                }
            } else {
                if *((v100 + v153) as &i8) <= 191 {
LABEL_494e6f:
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        if v153 == v88 {
            v1 = v144 | -0x100 | 1;
            v3 = 0;
            v2 = 0;
LABEL_494d37:
        } else {
            v144 = *((v100 + v153) as &i8);
            v103 = v103 | -0x100 | 1;
LABEL_494bf7:
            v3 = v103 | -0x100 | v103 ^ 1;
            v1 = v144 | -0x100 | 1;
            v2 = 0;
        }
LABEL_4949d5:
        v8 = v100 + v94;
        v9 = v142 - v94;
        v94 = v137;
        if !vvar_1886 {
            v157 = 0;
            goto LABEL_494a33;
        } else {
            v156 = 0;
            do {
                if *((v91 + v156) as &i64) <= v92 && *((v91 + v156 + 8) as &i64) >= v92 {
                    v157 = v100 | -0x100 | 1;
                    goto LABEL_494a33;
                }
            } while ((v123 = v122 + v90, v99 = v6 + v123, v100 = v4, v99 < v88));
LABEL_494a33:
            v87 = v87;
            if v92 > 1 {
                v22 = Argument {
                    value: &v28
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v13 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v22]
                    fmt: None
                };
                std::io::stdio::_print(&v13);
            }
            if !v157 {
                v22 = Argument {
                    value: &v8
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v13 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v22]
                    fmt: None
                };
                v15 = &v22;
                std::io::stdio::_print(&v13);
            } else {
                core::str::<impl str>::trim_start_matches(v8, v9);
                uu_numfmt::format::format_string();
                v158 = *((&v22 as &char + 8) as &i128);
                v25 = v158;
                v26 = v24;
                if !(!vvar_1905) {
                    goto LABEL_0x494dc9;
                }
                v12 = v26;
                v159 = v25;
                vvar_53{reg 224} = ((((vvar_53{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1488{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1492{reg 224}))
                v10 = v159;
                v34 = Argument {
                    value: &v10
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v13 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v34]
                    fmt: None
                };
                std::io::stdio::_print(&v13);
            }
            v92 = v27;
            v93 = v92 + 1;
            v95 = v32;
            if !v1 {
                break;
            }
        }
    }
}
