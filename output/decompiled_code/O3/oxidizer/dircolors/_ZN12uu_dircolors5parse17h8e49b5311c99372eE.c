fn uu_dircolors::parse(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [sp-0x395]
    let v1: i32;  // [sp-0x394]
    let v2: struct16;  // [sp-0x390], Other Possible Types: i64
    let v3: i64;  // [sp-0x388]
    let v4: i64;  // [sp-0x380]
    let v5: i64;  // [bp-0x378], Other Possible Types: Arguments
    let v6: i64;  // [sp-0x370]
    let v7: i64;  // [sp-0x368]
    let v8: i64;  // [bp-0x360]
    let v9: i64;  // [sp-0x358]
    let v10: i64;  // [sp-0x348], Other Possible Types: Enum, struct32
    let v11: i64;  // [sp-0x340]
    let v12: i64;  // [sp-0x338]
    let v13: i64;  // [bp-0x330]
    let v14: i64;  // [sp-0x328]
    let v15: i64;  // [sp-0x320]
    let v16: i8;  // [sp-0x318]
    let v17: i32;  // [bp-0x317]
    let v18: i32;  // [sp-0x314]
    let v19: i64;  // [sp-0x310]
    let v20: i64;  // [sp-0x300]
    let v21: i64;  // [sp-0x2f0]
    let v22: i64;  // [sp-0x2e8]
    let v23: i8;  // [sp-0x2e0]
    let v24: i64;  // [sp-0x2d8]
    let v25: i64;  // [sp-0x2c8]
    let v26: i64;  // [sp-0x2b8]
    let v27: i64;  // [sp-0x2b0]
    let v28: i8;  // [sp-0x2a8]
    let v29: i32;  // [bp-0x2a7]
    let v30: i32;  // [sp-0x2a4]
    let v31: i64;  // [sp-0x2a0]
    let v32: i64;  // [sp-0x298]
    let v33: i64;  // [sp-0x290]
    let v34: i64;  // [bp-0x288]
    let v35: i192;  // [sp-0x280], Other Possible Types: struct24
    let v36: i64;  // [bp-0x268]
    let v37: i64;  // [sp-0x260]
    let v38: i64;  // [sp-0x258]
    let v39: i64;  // [sp-0x250]
    let v40: i128;  // [bp-0x248]
    let v41: i64;  // [sp-0x240]
    let v42: i64;  // [sp-0x238]
    let v43: i8;  // [bp-0x22d]
    let v44: i8;  // [bp-0x22a]
    let v45: i8;  // [bp-0x226]
    let v46: i8;  // [bp-0x223]
    let v47: i8;  // [bp-0x21f]
    let v48: i8;  // [bp-0x21c]
    let v49: i128;  // [sp-0x208]
    let v50: i64;  // [sp-0x1f8]
    let v51: i128;  // [sp-0x1e8]
    let v52: i64;  // [sp-0x1d8]
    let v53: i128;  // [sp-0x1c8]
    let v54: i64;  // [sp-0x1b8]
    let v55: i64;  // [sp-0x1a0]
    let v56: struct24;  // [sp-0x198], Other Possible Types: i192
    let v57: i64;  // [sp-0x180]
    let v58: i128;  // [sp-0x178], Other Possible Types: Enum
    let v59: i8;  // [bp-0x168]
    let v60: i128;  // [sp-0x158]
    let v61: i64;  // [sp-0x148]
    let v62: i64;  // [sp-0x140]
    let v63: i64;  // [sp-0x138]
    let v64: i64;  // [sp-0x130]
    let v65: i64;  // [sp-0x128]
    let v66: i64;  // [sp-0x120]
    let v67: i64;  // [sp-0x110]
    let v68: i64;  // [sp-0x108]
    let v69: i64;  // [sp-0x100]
    let v70: i64;  // [sp-0xf8]
    let v71: i192;  // [sp-0xf0], Other Possible Types: String
    let v72: i192;  // [sp-0xd8], Other Possible Types: String
    let v73: String;  // [sp-0xc0], Other Possible Types: i192
    let v74: String;  // [sp-0xa8], Other Possible Types: i192
    let v75: i192;  // [sp-0x90], Other Possible Types: String
    let v76: i192;  // [sp-0x78], Other Possible Types: String
    let v77: String;  // [sp-0x60], Other Possible Types: i192
    let v78: String;  // [sp-0x48], Other Possible Types: i192
    let v80: i128;  // xmm0
    let v81: i128;  // xmm0
    let v82: i256;  // ymm0
    let v83: i256;  // ymm0
    let v85: i64;  // rsi
    let v86: i64;  // rsi
    let v87: i128;  // xmm0
    let v88: i256;  // ymm0
    let v89: i128;  // xmm0
    let v90: i64;  // rdi
    let v91: i64;  // rax
    let v93: i128;  // xmm0
    let v94: i256;  // ymm0
    let v95: i64;  // rbp
    let v97: i64;  // rdx
    let v98: i64;  // r12
    let v99: i64;  // rax
    let v100: i64;  // rax
    let v102: i128;  // xmm0
    let v104: i64;  // rdx
    let v105: i64;  // rsi
    let v107: i64;  // r12
    let v108: i64;  // r12
    let v109: i128;  // xmm0
    let v110: i64;  // rsi
    let v111: i64;  // rsi
    let v112: i128;  // xmm0
    let v113: i64;  // rsi
    let v114: i64;  // rsi
    let v115: i128;  // xmm0
    let v116: i64;  // rsi
    let v117: i64;  // rsi
    let v118: i128;  // xmm0
    let v119: i64;  // rsi
    let v120: i64;  // rsi
    let v122: i64;  // rcx
    let v123: i64;  // r12
    let v124: i64;  // r12
    let v125: i128;  // xmm0
    let v126: i64;  // rsi
    let v127: i64;  // rsi
    let v128: i128;  // xmm0
    let v129: i64;  // rsi
    let v130: i64;  // rsi
    let v131: i64;  // rsi
    let v132: i64;  // rcx
    let v133: i64;  // rcx
    let v134: i64;  // r8
    let v135: i64;  // rcx
    let v136: i64;  // rax
    let v137: i64;  // rdx
    let v138: i64;  // rdi
    let v139: i32;  // edi
    let v140: i32;  // edx
    let v141: i32;  // ecx
    let v143: i64;  // rbx
    let v144: i64;  // rsi
    let v145: i64;  // rax
    let v146: i64;  // rax

    v10 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(1790, 0);
    v2 = v11;
    v3 = v12;
    v4 = 0;
    uu_dircolors::get_colors_format_strings(&v10, a2);
    v52 = v12;
    v80 = v10;
    v51 = v80;
    v50 = v15;
    v81 = v13;
    vvar_257{reg 224} = ((((vvar_253{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_252{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_256{reg 224}))
    v49 = v81;
    v85 = v4;
    if v2 - v85 < v52 {
        v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v85, v52);
        v86 = v4;
    }
    memcpy(v86 + v3, *((&v51 as &char + 8) as &i64), v52);
    v4 += v52;
    v10 = std::env::var(&g_413420, 4);
    if !v10 {
        v42 = v13;
        v89 = *((&v10 as &char + 8) as &i128);
        vvar_24{reg 224} = ((vvar_257{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_312{reg 224}))
        v40 = v89;
    } else {
        v7 = v13;
        v87 = *((&v10 as &char + 8) as &i128);
        vvar_24{reg 224} = ((vvar_257{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_301{reg 224}))
        v5 = v87;
        v58 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(4, 0);
        v90 = *((&v58 as &char + 8) as &i64);
        v91 = v59;
        *(v91 as &i32) = 1701736302;
        v40 = v90;
        v41 = v91;
        v42 = 4;
    }
    v66 = v41;
    v65 = v42;
    v93 = *(a1 as &i128);
    vvar_36{reg 224} = ((vvar_24{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_338{reg 224}))
    v60 = *((a1 + 32) as &i128);
    v59 = *((a1 + 16) as &i128);
    v58 = v93;
    v61 = 0;
    v0 = *(a2 as &i8);
    v1 = 0;
    loop {
        v97 = v10;
        if v97 == 9223372036854775809 {
            v98 = 8;
            v68 = 0x8000000000000000;
            v95 = v95 | -0x100 | v68 != 0x8000000000000000;
            if v68 == 0x8000000000000000 {
                break;
            }
        } else if v97 == 0x8000000000000000 {
            v98 = 8;
            v68 = 0x8000000000000000;
            v95 = v95 | -0x100 | v68 != 0x8000000000000000;
            if v68 == 0x8000000000000000 {
                break;
            }
        } else {
            v100 = v61;
            v61 = v100 + 1;
            v67 = v100;
            v68 = v97;
            v69 = v11;
            v98 = 24;
            v70 = v12;
            v95 = v95 | -0x100 | v68 != 0x8000000000000000;
            if v68 == 0x8000000000000000 {
                break;
            }
        }
        v54 = v70;
        v102 = v68;
        vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_388{reg 224}))
        v53 = v102;
        v55 = v99 + 1;
        if v104 {
            v56 = uu_dircolors::escape(<str as uu_dircolors::StrUtils>::purify(*((&v53 as &char + 8) as &i64), v70), v104);
            v10 = <str as uu_dircolors::StrUtils>::split_two(*((&v56 as &char + 8) as &i64), *((&v56 as &char + 16) as &i64));
            v105 = v10;
            v36 = v10;
            if !v39 {
                v5 = 0;
                v6 = a3;
                v7 = a4;
                v8 = 0;
                v31 = &v5;
                v32 = <os_display::Quoted as core::fmt::Display>::fmt;
                v33 = &v55;
                v34 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v10 = &g_4f0548;
                v11 = 3;
                v14 = 0;
                v12 = &v31;
                v13 = 2;
                v71 = alloc::fmt::format::format_inner(&v10);
                v132 = a0;
                *((v132 + 24) as &i64) = *((&v71 as &char + 16) as &i64);
                *((v132 + 8) as &i192) = v71;
                *(v132 as &i64) = 1;
                return v146;
            }
            v35 = alloc::str::<impl str>::to_lowercase(v105, v37);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v35 as &char + 8) as &i64), *((&v35 as &char + 16) as &i64), &g_413300, 4) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v35 as &char + 8) as &i64), *((&v35 as &char + 16) as &i64), &g_413572, 9) as i8 {
                v107 = v98 | -0x100 | 1;
                if !<str as uu_dircolors::StrUtils>::fnmatch(v66, v65, v38, v39) as i8 {
                    v107 = v107 | -0x100 | (v1 != 1) * 2 | 1;
                }
            } else {
                v107 = v98 | -0x100 | 3;
                v1 = (v1 == 1 ? v1 : 2);
                if v1 != 3 {
                    v108 = *((&v35 as &char + 8) as &i64);
                    v64 = *((&v35 as &char + 16) as &i64);
                    v10 = 46;
                    if !core::slice::<impl [T]>::starts_with(v36, v37, &v10, 1) as i8 {
                        v10 = 42;
                        if !core::slice::<impl [T]>::starts_with(v36, v37, &v10, 1) as i8 {
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v35 as &char + 8) as &i64), *((&v35 as &char + 16) as &i64), &g_41357b, 7) as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v35 as &char + 8) as &i64), *((&v35 as &char + 16) as &i64), &g_413582, 5) as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v35 as &char + 8) as &i64), *((&v35 as &char + 16) as &i64), &g_413588, 8) as i8 {
                                v62 = v108;
                                v122 = 1184;
                                do {
                                    v123 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hff7b2abd5f51dc91E - 16;
                                    if !v63 {
                                        v31 = 0;
                                        v32 = a3;
                                        v33 = a4;
                                        v34 = 0;
                                        v10 = &v31;
                                        v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v12 = &v55;
                                        v13 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                        v14 = &v36;
                                        v15 = <&T as core::fmt::Display>::fmt;
                                        v5 = Arguments {
                                            pieces: [&g_4f05e8, ":", ": unrecognized keyword "]
                                            args: &[&Argument] {
                                                ptr: &v10
                                                len: <UNKNOWN>
                                            }
                                            fmt: None
                                        };
                                        v8 = 3;
                                        v78 = alloc::fmt::format::format_inner(&v5);
                                        v133 = a0;
                                        *((v133 + 24) as &i64) = *((&v78 as &char + 16) as &i64);
                                        *((v133 + 8) as &i192) = v78;
                                        *(v133 as &i64) = 1;
                                        return v146;
                                    }
                                } while ((v63 = v122, v122 = v63 - 32, v124 = v123 + 32, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v123 + 16) as &i64), *((v123 + 24) as &i64), v62, v64) as i8));
                                v57 = v124;
                                if v0 == 2 {
                                    v31 = &v36;
                                    v32 = <&T as core::fmt::Display>::fmt;
                                    v33 = &v57;
                                    v34 = <&T as core::fmt::Display>::fmt;
                                    v10 = 2;
                                    v12 = 2;
                                    v14 = 0;
                                    v15 = 32;
                                    v16 = 3;
                                    v18 = v48;
                                    v17 = v47;
                                    v19 = 2;
                                    v20 = 2;
                                    v21 = 1;
                                    v22 = 32;
                                    v23 = 3;
                                    v24 = 2;
                                    v25 = 2;
                                    v26 = 0;
                                    v27 = 32;
                                    v28 = 3;
                                    v30 = (&v47)[3];
                                    v29 = v47;
                                    v5 = Arguments {
                                        pieces: ["\x1b[", "m", "\t", "\x1b[0m\n"]
                                        args: &[&Argument] {
                                            ptr: &v31
                                            len: <UNKNOWN>
                                        }
                                        fmt: 
                                    };
                                    v8 = 2;
                                    v76 = alloc::fmt::format::format_inner(&v5);
                                    v125 = v76;
                                    vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_769{reg 224}))
                                    v10 = v125;
                                    v12 = *((&v76 as &char + 16) as &i64);
                                    v126 = v4;
                                    if v2 - v126 < v12 {
                                        v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v126, v12);
                                        v127 = v4;
                                    }
                                    memcpy(v127 + v3, v11, v12);
                                    v4 += v12;
                                } else {
                                    v5 = &v57;
                                    v6 = <&T as core::fmt::Display>::fmt;
                                    v7 = &v36;
                                    v8 = <&T as core::fmt::Display>::fmt;
                                    v10 = &g_4f05b8;
                                    v11 = 3;
                                    v14 = 0;
                                    v12 = &v5;
                                    v13 = 2;
                                    v77 = alloc::fmt::format::format_inner(&v10);
                                    v128 = v77;
                                    vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_779{reg 224}))
                                    v10 = v128;
                                    v12 = *((&v77 as &char + 16) as &i64);
                                    v129 = v4;
                                    if v2 - v129 < v12 {
                                        v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v129, v12);
                                        v130 = v4;
                                    }
                                    memcpy(v130 + v3, v11, v12);
                                    v4 += v12;
                                }
                            }
                        } else {
                            if v0 == 2 {
                                v31 = &v36;
                                v32 = <&T as core::fmt::Display>::fmt;
                                v33 = &v36;
                                v34 = <&T as core::fmt::Display>::fmt;
                                v10 = 2;
                                v12 = 2;
                                v14 = 0;
                                v15 = 32;
                                v16 = 3;
                                v18 = v46;
                                v17 = v45;
                                v19 = 2;
                                v20 = 2;
                                v21 = 1;
                                v22 = 32;
                                v23 = 3;
                                v24 = 2;
                                v25 = 2;
                                v26 = 0;
                                v27 = 32;
                                v28 = 3;
                                v30 = (&v45)[3];
                                v29 = v45;
                                v5 = Arguments {
                                    pieces: ["\x1b[", "m", "\t", "\x1b[0m\n"]
                                    args: &[&Argument] {
                                        ptr: &v31
                                        len: <UNKNOWN>
                                    }
                                    fmt: 
                                };
                                v9 = &v10;
                                v7 = &v31;
                                v8 = 2;
                                v74 = alloc::fmt::format::format_inner(&v5);
                                v115 = v74;
                                vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_594{reg 224}))
                                v10 = v115;
                                v12 = *((&v74 as &char + 16) as &i64);
                                v116 = v4;
                                if v2 - v116 < v12 {
                                    v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v116, v12);
                                    v117 = v4;
                                }
                                memcpy(v117 + v3, v11, v12);
                                v4 += v12;
                            } else {
                                v5 = &v36;
                                v6 = <&T as core::fmt::Display>::fmt;
                                v7 = &v36;
                                v8 = <&T as core::fmt::Display>::fmt;
                                v10 = &g_4f05b8;
                                v11 = 3;
                                v14 = 0;
                                v12 = &v5;
                                v13 = 2;
                                v75 = alloc::fmt::format::format_inner(&v10);
                                v118 = v75;
                                vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_604{reg 224}))
                                v10 = v118;
                                v12 = *((&v75 as &char + 16) as &i64);
                                v119 = v4;
                                if v2 - v119 < v12 {
                                    v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v119, v12);
                                    v120 = v4;
                                }
                                memcpy(v120 + v3, v11, v12);
                                v4 += v12;
                            }
                        }
                    } else if v0 == 2 {
                        v31 = &v36;
                        v32 = <&T as core::fmt::Display>::fmt;
                        v33 = &v36;
                        v34 = <&T as core::fmt::Display>::fmt;
                        v10 = 2;
                        v12 = 2;
                        v14 = 0;
                        v15 = 32;
                        v16 = 3;
                        v18 = v44;
                        v17 = v43;
                        v19 = 2;
                        v20 = 2;
                        v21 = 1;
                        v22 = 32;
                        v23 = 3;
                        v24 = 2;
                        v25 = 2;
                        v26 = 0;
                        v27 = 32;
                        v28 = 3;
                        v30 = v44;
                        v29 = v43;
                        v5 = Arguments {
                            pieces: ["\x1b[", "m*", "\t", "\x1b[0m\n"]
                            args: &[&Argument] {
                                ptr: &v31
                                len: <UNKNOWN>
                            }
                            fmt: 
                        };
                        v8 = 2;
                        v72 = alloc::fmt::format::format_inner(&v5);
                        v109 = v72;
                        vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_528{reg 224}))
                        v10 = v109;
                        v12 = *((&v72 as &char + 16) as &i64);
                        v110 = v4;
                        if v2 - v110 < v12 {
                            v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v110, v12);
                            v111 = v4;
                        }
                        memcpy(v111 + v3, v11, v12);
                        v4 += v12;
                    } else {
                        v5 = &v36;
                        v6 = <&T as core::fmt::Display>::fmt;
                        v7 = &v36;
                        v8 = <&T as core::fmt::Display>::fmt;
                        *(&v10 as &&str) = "*";
                        v11 = 3;
                        v14 = 0;
                        v12 = &v5;
                        v13 = 2;
                        v73 = alloc::fmt::format::format_inner(&v10);
                        v112 = v73;
                        vvar_36{reg 224} = ((vvar_36{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_538{reg 224}))
                        v10 = v112;
                        v12 = *((&v73 as &char + 16) as &i64);
                        v113 = v4;
                        if v2 - v113 < v12 {
                            v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v113, v12);
                            v114 = v4;
                        }
                        memcpy(v114 + v3, v11, v12);
                        v4 += v12;
                    }
                    v107 = v1;
                }
            }
            v95 = &v56;
            v1 = v107;
        }
    }
    v131 = v4;
    if *(a2 as &i8) == 2 {
        if !v131 {
            v131 = 0;
        } else {
            v134 = v3;
            v135 = *((v134 + v131 - 1) as &i8);
            v136 = -1;
            if v135 < 0 {
                v137 = *((v134 + v131 - 2) as &i8);
                if v137 > 191 {
                    v140 = v137 & 31;
                } else {
                    v138 = *((v134 + v131 - 3) as &i8);
                    v139 = (v138 <= 191 ? v138 & 15 : v138 & 63 | (*((v134 + v131 - 4) as &i8) & 7) * 64);
                    v140 = v137 & 63 | v139 * 64;
                }
                v141 = v135 & 63 | v140 * 64;
                if v141 >= 128 {
                    v136 = -2;
                    if v141 >= 0x800 {
                        v136 = -0x100 | v141 < 0x10000 | -4;
                    }
                }
            }
            v131 += v136;
            v4 = v131;
        }
    }
    v143 = v50;
    if v2 - v131 < v143 {
        v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v131, v143);
        v144 = v4;
    }
    memcpy(v144 + v3, *((&v49 as &char + 8) as &i64), v143);
    v4 = v143 + v4;
    v145 = a0;
    *((v145 + 24) as &i64) = v4;
    *((v145 + 8) as &i128) = v2;
    *(v145 as &i64) = 0;
    return v146;
}
