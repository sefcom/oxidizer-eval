fn uu_tail::follow::watch::follow() -> u32 {
    let v0: i32;  // [bp-0x560]
    let v1: i8;  // [sp-0x551]
    let v2: i32;  // [bp-0x550]
    let v3: i64;  // [bp-0x548], Other Possible Types: Argument
    let v4: i64;  // [bp-0x538], Other Possible Types: Argument
    let v5: i128;  // [sp-0x530]
    let v6: i64;  // [sp-0x528]
    let v7: i8;  // [sp-0x520]
    let v8: i64;  // [bp-0x508]
    let v9: i64;  // [sp-0x4f8], Other Possible Types: Arguments, struct24, Enum, struct8
    let v10: i64;  // [sp-0x4f0]
    let v11: i64;  // [sp-0x4e8]
    let v12: i64;  // [sp-0x4e0]
    let v13: i64;  // [sp-0x4d8]
    let v14: i64;  // [sp-0x4c8]
    let v15: i32;  // [bp-0x418]
    let v16: i32;  // [sp-0x40c]
    let v17: struct24;  // [sp-0x408], Other Possible Types: i192
    let v18: i64;  // [sp-0x3f0]
    let v19: Enum;  // [sp-0x3e0], Other Possible Types: i64
    let v20: i64;  // [sp-0x3d8]
    let v21: i64;  // [sp-0x3d0]
    let v22: i64;  // [sp-0x3c8]
    let v23: i64;  // [sp-0x3c0]
    let v24: i64;  // [sp-0x3b8]
    let v25: i64;  // [sp-0x3b0], Other Possible Types: Enum
    let v26: i8;  // [bp-0x3a8]
    let v27: i8;  // [bp-0x398]
    let v28: i8;  // [bp-0x388]
    let v29: i8;  // [bp-0x380]
    let v30: i64;  // [sp-0x378]
    let v31: i32;  // [sp-0x370]
    let v32: i32;  // [sp-0x36c]
    let v33: i128;  // [sp-0x368]
    let v34: i128;  // [sp-0x358]
    let v35: i64;  // [sp-0x348]
    let v36: i64;  // [sp-0x338]
    let v37: i64;  // [sp-0x330]
    let v39: i128;  // [sp-0x318]
    let v40: i128;  // [bp-0x308]
    let v41: i64;  // [sp-0x2f8], Other Possible Types: Argument, Arguments, Enum
    let v42: i64;  // [sp-0x2f0], Other Possible Types: Argument
    let v43: i64;  // [sp-0x2e8]
    let v44: i64;  // [bp-0x2e0]
    let v45: i128;  // [sp-0x218]
    let v46: i64;  // [sp-0x200]
    let v47: i64;  // [sp-0x1f8]
    let v48: i192;  // [sp-0x1f0], Other Possible Types: String
    let v49: String;  // [sp-0x1d8], Other Possible Types: i192
    let v50: String;  // [sp-0x1c0], Other Possible Types: i192
    let v51: i128;  // [sp-0x1a8]
    let v52: i128;  // [sp-0x198]
    let v53: i64;  // [sp-0x188]
    let v54: struct26;  // [bp-0x180]
    let v55: i64;  // [sp-0x160]
    let v56: i128;  // [sp-0x158]
    let v57: i128;  // [sp-0x148]
    let v58: i128;  // [sp-0x138]
    let v59: i128;  // [sp-0x128]
    let v60: i128;  // [sp-0x118]
    let v61: i128;  // [sp-0x108]
    let v62: i128;  // [sp-0xf8]
    let v63: i32;  // [sp-0xe8]
    let v64: i64;  // [bp-0xe0]
    let v65: i64;  // [sp-0xd8]
    let v66: i8;  // [bp-0xb8]
    let v67: i8;  // [bp-0xa8]
    let v69: i64;  // rdi
    let v70: i64;  // r15
    let v71: i64;  // r12
    let v72: i128;  // xmm0
    let v73: i256;  // ymm0
    let v74: i256;  // ymm0
    let v75: i64;  // rcx
    let v76: i64;  // r13
    let v77: i64;  // rbp
    let v78: i64;  // rbx
    let v79: i64;  // rbx
    let v81: i128;  // xmm0
    let v82: i32;  // ecx
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: i64;  // r14
    let v86: i64;  // rdx
    let v87: i64;  // rcx
    let v88: i64;  // r8
    let v89: i64;  // r9
    let v90: i32;  // ecx
    let v91: i64;  // rsi
    let v92: i64;  // rax
    let v93: i64;  // rax
    let v94: i64;  // rax
    let v95: i64;  // rbx
    let v96: i64;  // rax
    let v97: i64;  // rcx
    let v98: i64;  // r15
    let v99: i64;  // r12
    let v100: i128;  // xmm0
    let v101: i128;  // xmm0
    let v102: i128;  // xmm0
    let v103: i256;  // ymm0
    let v104: i128;  // xmm1
    let v105: i256;  // ymm1
    let v106: i256;  // ymm1
    let v108: i64;  // rcx
    let v109: i64;  // rcx
    let v110: i64;  // rbp
    let v111: i128;  // xmm0
    let v113: i64;  // r14
    let v114: i64;  // r14
    let v116: i64;  // rax
    let v117: i64;  // r14
    let v118: i128;  // xmm0
    let v120: i64;  // rbp
    let v121: i64;  // rcx
    let v122: i64;  // rax
    let v123: i64;  // r15
    let v124: i8;  // cl
    let v125: i64;  // r15
    let v126: i64;  // rax
    let v127: i64;  // r15
    let v128: i64;  // rbx
    let v129: i256;  // ymm0
    let v130: i256;  // ymm1
    let v131: i256;  // ymm2
    let v132: i256;  // ymm3
    let v134: i64;  // rax
    let v135: i64;  // r12
    let v136: i64;  // r15
    let v137: i64;  // r14
    let v138: i64;  // r13
    let v139: i128;  // xmm0
    let v140: i128;  // xmm1
    let v141: i32;  // edx
    let v142: i128;  // xmm0
    let v143: i128;  // xmm1
    let v144: i128;  // xmm2
    let v145: i128;  // xmm3
    let v146: i128;  // xmm0
    let v147: i128;  // xmm0
    let v148: i128;  // xmm0
    let v150: i128;  // xmm0
    let v151: i128;  // xmm0
    let v152: i64;  // rax
    let v153: i128;  // xmm0
    let v154: i128;  // xmm1
    let v155: i128;  // xmm0
    let v156: i128;  // xmm1
    let v157: i128;  // xmm2
    let v158: i128;  // xmm3
    let v159: i128;  // xmm0
    let v160: i128;  // xmm0
    let v161: i128;  // xmm0
    let v162: i64;  // rax
    let v163: i64;  // r15
    let v164: i64;  // rax
    let v165: i64;  // rax
    let v166: i128;  // xmm0
    let v167: i128;  // xmm1
    let v168: i64;  // rcx
    let v169: i64;  // r13
    let v170: i64;  // r14
    let v171: i64;  // rbx
    let v172: i64;  // r13
    let v173: i64;  // rbp
    let v174: i64;  // rbx
    let v175: i64;  // r14
    let v176: i64;  // rax
    let v178: i64;  // rcx
    let v179: i64;  // r15
    let v180: i64;  // rbp
    let v181: i128;  // xmm0
    let v182: i128;  // xmm0
    let v183: i128;  // xmm0
    let v184: i128;  // xmm1
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v187: i128;  // xmm0
    let v189: i64;  // r13
    let v190: i64;  // r13
    let v192: i64;  // rax
    let v194: i128;  // xmm0
    let v196: i64;  // rax
    let v197: i64;  // r12
    let v198: i64;  // rbp
    let v199: i64;  // rbx
    let v200: i64;  // r15
    let v201: i32;  // eax
    let v202: i64;  // rax
    let v203: i8;  // al
    let v204: i64;  // r14
    let v205: i128;  // xmm0
    let v206: i64;  // rax
    let v207: i64;  // rbx
    let v208: i64;  // r14
    let v210: i32;  // r14d
    let v212: i64;  // rax
    let v213: i64;  // rdi
    let v214: i64;  // rsi
    let v215: i64;  // rdx
    let v216: i32;  // ecx
    let v217: i64;  // rcx
    let v219: i128;  // xmm0
    let v220: i128;  // xmm0
    let v221: i64;  // rdx
    let v222: i128;  // xmm0
    let v223: i128;  // xmm0
    let v224: i128;  // xmm0
    let v225: i128;  // xmm0
    let v226: i128;  // xmm0
    let v227: i64;  // rax
    let v228: i128;  // xmm0
    let v229: i128;  // xmm0
    let v230: i128;  // xmm0
    let v231: i128;  // xmm0
    let v232: i64;  // r12
    let v233: i64;  // rbx
    let v235: i64;  // r13
    let v236: i128;  // xmm0
    let v238: i128;  // xmm0
    let v239: i64;  // r15
    let v241: i64;  // rbx
    let v242: i64;  // r12
    let v244: i64;  // rax
    let v246: i128;  // xmm0
    let v247: i128;  // xmm1
    let v250: i64;  // r15
    let v251: i64;  // r14
    let v252: i64;  // rax
    let v253: i64;  // rbx
    let v254: i64;  // r15
    let v255: i64;  // r14
    let v256: i64;  // rax
    let v257: i64;  // rax
    let v258: i64;  // rax

    v70 = *((v69 + 104) as &i64);
    if v70 {
        v0 = v69 + 56;
        v71 = *((v69 + 80) as &i64);
        v72 = *(v71 as &i128);
        vvar_33{reg 224} = ((vvar_919{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_918{reg 224}))
        v75 = ~(UnaryOp GetMSBs);
        v76 = v71 + 16;
        do {
            if v70 < 1 {
                v90 = v75 | -0x100 | 1;
                v92 = v91;
                if !*((v92 + 72) as &i8) {
                    if *((v78 + 104) as &i64) != 1 {
                        goto LABEL_4c26b1;
                    }
                    v95 = v69;
                    v96 = core::hash::BuildHasher::hash_one(v95 + 112, &anon.c568fa996e9b1afffbd2fe86e67742f4.13.llvm.893476530518564186, 1);
                    v97 = *((v95 + 80) as &i64);
                    v98 = *((v95 + 88) as &i64);
                    v99 = v98 & v96;
                    vvar_1013{reg 224} = Conv(64->128, (vvar_1007{reg 16} >> 0x39<8>))
                    v101 = BinaryOp InterleaveLOV;
                    v102 = v101 >> 64 CONCAT v101 CONCAT v101 CONCAT v101 CONCAT v101;
                    vvar_478{reg 224} = ((((((vvar_33{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1013{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1015{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1017{reg 224}))
                    v104 = v102 CONCAT v102 CONCAT v102 CONCAT v102;
                    vvar_189{reg 256} = ((vvar_1020{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1019{reg 256}))
                    v79 = &anon.c568fa996e9b1afffbd2fe86e67742f4.13.llvm.893476530518564186;
                    v2 = v97;
                    v8 = v104;
                    loop {
                        v109 = v108;
                        v110 = 0;
                        v111 = *((v109 + v99) as &i128);
                        v40 = v111;
                        vvar_33{reg 224} = ((((vvar_478{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1028{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1028{reg 224} CmpEQV vvar_1019{reg 256})))
                        v113 = UnaryOp GetMSBs;
                        if v113 {
                            do {
                                v114 = v113;
                                if <Q as hashbrown::Equivalent<K>>::equivalent(&anon.c568fa996e9b1afffbd2fe86e67742f4.13.llvm.893476530518564186, 1, -((!(v114 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v99 & v98) * 240 + v97 - 240, v109, v88, v89) as i8 {
                                    v90 = 0;
                                    goto LABEL_4c273a;
                                }
                            } while ((v116 = v114 - 1 & 4294967295, v117 = (v116 | -0x10000 | (v116 as i16 & v114 as i16) as u16 as u64) & 4294967295 & 4294967295, (v116 as i16 & v114 as i16)));
                        }
                        v118 = v40;
                        vvar_478{reg 224} = ((((vvar_33{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1075{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1075{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                        if UnaryOp GetMSBs {
                            break;
                        }
                        v120 = v110 + 16;
                        v99 = v99 + v110 + 16 & v98;
                        v121 = v2;
                        vvar_189{reg 256} = ((vvar_189{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-1288, size=16, endness=Iend_LE)))
                        goto LABEL_4c26b1;
                    }
                }
            }
            if v75 {
                v77 = v75 - 1 & v75;
            } else {
                do {
                    v81 = *(v76 as &i128);
                    vvar_33{reg 224} = ((vvar_253{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_936{reg 224}))
                    v82 = UnaryOp GetMSBs;
                    v71 -= 0xf00;
                    v76 += 16;
                } while (v82 == 65535);
                v75 = ~(v82);
                v77 = v75 & 4294967294 - v82;
            }
            v83 = (!(v75 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
            v84 = -(v83) * 240;
            v79 = *((v71 + v84 - 232) as &i64);
            v85 = *((v71 + v84 - 224) as &i64);
        } while (!(uu_tail::paths::path_is_tailable(v79, v85) as i8) && !((v75 = v77 & 4294967295, <std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v79, v85, v86, v87, v88, v89) as i8)));
        v94 = v91;
        v90 = *((v94 + 72) as &i8);
LABEL_4c273a:
        v16 = v90;
        v123 = v69;
        v31 = *((v123 + 136) as &i32);
        v124 = *((v93 + 76) as &i8);
        v40 = *((v93 + 74) as &i8);
        v47 = *((v93 + 48) as &i64);
        v32 = *((v93 + 56) as &i32);
        v46 = v123 + 32;
        v37 = v123 + 112;
        v18 = "src/uu/tail/src/follow/watch.rs";
        v36 = "src/uu/tail/src/follow/watch.rs";
        v1 = v124;
        v1 = v1;
        loop {
            v127 = v125;
            if v1 != 2 && *((v127 + 136) as &i32) && kill(v31, 0) as i64 {
                v128 = (std::sys::pal::unix::os::errno() as i32 * 0x100000000 | 2) >> 32;
                if v128 != 1 {
                    return;
                }
            }
            if (*((v127 + 142) as &i8) & 1) && *((v69 + 140) as &i8) {
                v134 = *((v69 + 48) as &i64);
                if v134 {
                    v110 = *((v69 + 40) as &i64);
                    v2 = v134 * 24;
                    v135 = 0;
                    do {
                        v136 = *((v110 + v135 + 8) as &i64);
                        v128 = *((v110 + v135 + 16) as &i64);
                        v9 = std::sys::pal::unix::fs::stat(v136, v128);
                        if v9 == 2 {
                            v42 = v10;
                            v41 = 2;
                            goto LABEL_4c2869;
                        } else {
                            memcpy(&v41, &v9, 176);
                            if v41 == 2 {
LABEL_4c2869:
                                v9 = v9;
                                v10 = v10;
                                v11 = v11;
                            } else {
                                v137 = uu_tail::follow::files::FileHandling::get(v0, v136, v128, v87, v88, v89);
                                v9 = std::sys::pal::unix::fs::stat(v136, v128);
                                v138 = v9;
                                v8 = v10;
                                if v138 == 2 {
                                    v9 = v8;
                                    core::result::unwrap_failed(); /* do not return */
                                }
                                v53 = v14;
                                v139 = *((&v9 as &char + 16) as &i128);
                                v140 = *((&v9 as &char + 32) as &i128);
                                v52 = v140;
                                v51 = v139;
                                v141 = *((&v9 as &char + 56) as &i32);
                                v142 = *((&v9 as &char + 60) as &i128);
                                v143 = *((&v9 as &char + 76) as &i128);
                                vvar_1228{reg 256} = ((((vvar_560{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1222{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1227{reg 256}))
                                v144 = *((&v9 as &char + 92) as &i128);
                                vvar_1230{reg 288} = ((vvar_561{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1229{reg 288}))
                                v145 = *((&v9 as &char + 108) as &i128);
                                vvar_1232{reg 320} = ((vvar_562{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1231{reg 320}))
                                v56 = v142;
                                v57 = v143;
                                v58 = v144;
                                v59 = v145;
                                v146 = *((&v9 as &char + 124) as &i128);
                                v60 = v146;
                                v147 = *((&v9 as &char + 140) as &i128);
                                v61 = v147;
                                v148 = *((&v9 as &char + 156) as &i128);
                                vvar_1238{reg 224} = ((((((((((vvar_557{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1220{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1225{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1233{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1235{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1237{reg 224}))
                                v62 = v148;
                                v63 = *((&v9 as &char + 172) as &i32);
                                v15 = v141;
                                if (v141 & 0xf000) == 0x1000 || (v141 & 0xf000) == 0x8000 || (v9 = v9, v10 = v10, v11 = v11, (v141 & 0xf000) == 0x2000) {
                                    v9 = v9;
                                    v10 = v10;
                                    v11 = v11;
                                    if !*((v137 + 200) as &i64) {
                                        if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                                            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                                        }
                                        v150 = g_563010;
                                        v41 = v150;
                                        v64 = &v41;
                                        v65 = <&T as core::fmt::Display>::fmt;
                                        v9 = Arguments {
                                            pieces: [&g_55cb50, ": "]
                                            args: [&v64]
                                            fmt: None
                                        };
                                        std::io::stdio::_eprint(&v9);
                                        v151 = *((v137 + 184) as &i128);
                                        v41 = 0;
                                        v42 = v151;
                                        v44 = 1;
                                        v64 = &v41;
                                        v65 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v9 = Arguments {
                                            pieces: [&g_55cc98, " has appeared;  following new file\n"]
                                            args: [&v64]
                                            fmt: None
                                        };
                                        std::io::stdio::_eprint(&v9);
                                        v152 = uu_tail::follow::files::FileHandling::get_mut(v0, v136, v128, v87, v88, v89);
                                        *(v152 as &i64) = v138;
                                        *((v152 + 8) as &i64) = v8;
                                        v153 = v51;
                                        v154 = v52;
                                        *((v152 + 16) as &i128) = v153;
                                        *((v152 + 32) as &i128) = v154;
                                        *((v152 + 48) as &i64) = v53;
                                        *((v152 + 56) as &i32) = v15;
                                        v155 = v56;
                                        v156 = v57;
                                        vvar_1295{reg 256} = ((((vvar_1228{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1288{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1294{reg 256}))
                                        v157 = v58;
                                        vvar_1297{reg 288} = ((vvar_1230{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1296{reg 288}))
                                        v158 = v59;
                                        vvar_1299{reg 320} = ((vvar_1232{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1298{reg 320}))
                                        *((v152 + 60) as &i128) = v155;
                                        *((v152 + 76) as &i128) = v156;
                                        *((v152 + 92) as &i128) = v157;
                                        *((v152 + 108) as &i128) = v158;
                                        v159 = v60;
                                        *((v152 + 124) as &i128) = v159;
                                        v160 = v61;
                                        *((v152 + 140) as &i128) = v160;
                                        v161 = v62;
                                        vvar_1305{reg 224} = ((((((((((((((vvar_1238{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1262{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1271{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1286{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1292{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1300{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1302{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1304{reg 224}))
                                        *((v152 + 156) as &i128) = v161;
                                        *((v152 + 172) as &i32) = v63;
                                        if uu_tail::follow::files::FileHandling::update_reader(v0, v136, v128, v63, v88, v89) {
                                            return;
                                        }
                                        v9 = uu_tail::follow::files::FileHandling::tail_file(v0, v136, v128, -0x100 | v40, v89);
                                        if v9 {
                                            return;
                                        }
                                        v162 = v69;
                                        if *(v162 as &i32) == 3 {
                                            core::option::unwrap_failed(); /* do not return */
                                        }
                                        v9 = v9;
                                        v10 = v10;
                                        v11 = v11;
                                        if uu_tail::follow::watch::WatcherRx::watch_with_parent(*((v162 + 16) as &i64), *((v162 + 24) as &i64), v136, v128) {
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                    } while ((v116 = v114 - 1 & 4294967295, v117 = (v116 | -0x10000 | (v116 as i16 & v114 as i16) as u16 as u64) & 4294967295 & 4294967295, (v116 as i16 & v114 as i16)));
                }
            }
            v163 = v69;
            if *(v163 as &i32) == 3 {
                v36 = "src/uu/tail/src/follow/watch.rs";
                core::option::unwrap_failed(); /* do not return */
            }
            v25 = std::sync::mpmc::Receiver<T>::recv_timeout(v163, v47, v32);
            v22 = 0;
            v23 = 8;
            v24 = 0;
            v164 = v25 - 1;
            switch (v164) {
            case 0:
                goto *((4341876 + ((stack_base)[936] as i64 & 3) * 4) as &i32) + 4341876;
            case 4:
                v41 = Argument {
                    value: "inotify"
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v9 = Arguments {
                    pieces: [&g_55ce88, " resources exhausted"]
                    args: [&v41]
                    fmt: None
                };
                v11 = &v41;
                v48 = alloc::fmt::format::format_inner(&v9);
                v253 = v48;
                v254 = *((&v48 as &char + 8) as &i64);
                v255 = *((&v48 as &char + 16) as &i64);
                v256 = alloc::alloc::exchange_malloc();
                goto LABEL_4c4bcf;
            case 5:
                v166 = v26;
                vvar_123{reg 224} = ((vvar_33{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1374{reg 224}))
                v167 = v27;
                vvar_128{reg 256} = ((vvar_189{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1376{reg 256}))
                v34 = v167;
                v33 = v166;
                v35 = v28;
                v168 = v34;
                v169 = *((&v33 as &char + 8) as &i64);
                v2 = v168;
                if !v168 {
                    v8 = 8;
                    v170 = 0;
                    goto LABEL_4c2e94;
                } else {
                    v8 = 8;
                    if !*((v163 + 104) as &i64) {
                        v170 = 0;
                        goto LABEL_4c45ad;
                    } else {
                        v174 = *((v169 + 8) as &i64);
                        v175 = *((v169 + 16) as &i64);
                        v176 = core::hash::BuildHasher::hash_one(v37, v174, v175);
                        v169 = v169;
                        v178 = *((v163 + 80) as &i64);
                        v179 = *((v163 + 88) as &i64);
                        v180 = v179 & v176;
                        vvar_1425{reg 224} = Conv(64->128, (vvar_1414{reg 16} >> 0x39<8>))
                        v182 = BinaryOp InterleaveLOV;
                        v183 = v182 >> 64 CONCAT v182 CONCAT v182 CONCAT v182 CONCAT v182;
                        vvar_123{reg 224} = ((((((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1425{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1427{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1429{reg 224}))
                        v184 = v183 CONCAT v183 CONCAT v183 CONCAT v183;
                        vvar_128{reg 256} = ((vvar_128{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1431{reg 256}))
                        v185 = 0;
                        v30 = v178;
                        v45 = v184;
                        v30 = v30;
                        goto LABEL_4c2da6;
                    }
                }
            case 6:
                if !v26 {
                    v171 = v128 | -0x100 | 1;
                    v172 = 8;
                    v170 = 0;
                    v173 = 0;
                    v2 = ((v165 + &g_424058 as &u8) as &i64 | -0x100 | 1) as u32;
                } else {
                    v64 = 1;
                    v41 = Argument {
                        value: &v64
                        formatter: <std::sync::mpsc::RecvTimeoutError as core::fmt::Display>::fmt
                    };
                    v9 = Arguments {
                        pieces: ["RecvTimeoutError: "]
                        args: [&v41]
                        fmt: None
                    };
                    v50 = alloc::fmt::format::format_inner(&v9);
                    v253 = v50;
                    v254 = *((&v50 as &char + 8) as &i64);
                    v255 = *((&v50 as &char + 16) as &i64);
                    v256 = alloc::alloc::exchange_malloc();
LABEL_4c4bcf:
                    *(v256 as &i64) = v253;
                    *((v256 + 8) as &i64) = v254;
                    *((v256 + 16) as &i64) = v255;
                    *((v256 + 24) as &i32) = 1;
                    loop {
LABEL_4c2da6:
                        v186 = v30;
                        v15 = v185;
                        v187 = *((v186 + v180) as &i128);
                        v39 = v187;
                        vvar_123{reg 224} = ((((vvar_360{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1438{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1438{reg 224} CmpEQV vvar_1431{reg 256})))
                        v189 = UnaryOp GetMSBs;
                        if v189 {
                            break;
                        }
LABEL_4c2e08:
                        v194 = v39;
                        vvar_123{reg 224} = ((((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1485{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1485{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                        v196 = v15;
                        if !UnaryOp GetMSBs {
                            v185 = v196 + 16;
                            v180 = v180 + v196 + 16 & v179;
                            vvar_128{reg 256} = ((vvar_128{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3423{stack -536}))
                            v30 = v30;
                        } else {
                            v170 = 0;
                            goto LABEL_4c45ad;
                        }
                    }
                    loop {
                        v190 = v189;
                        if <Q as hashbrown::Equivalent<K>>::equivalent(v174, v175, -((!(v190 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v180 & v179) * 240 + v178 - 240, v186, v88, v89) as i8 {
                            break;
                        }
                        v192 = v190 - 1 & 4294967295;
                        if !(v192 & v190) {
                            goto LABEL_4c2e08;
                        }
                    }
                    v19 = 0;
                    v20 = 8;
                    v21 = 0;
                    v169 = v169;
                    v197 = *((v169 + 16) as &i64);
                    v198 = *((v169 + 8) as &i64);
                    v17 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(v0, *((v169 + 8) as &i64), v197, v87, v88, v89) + 176);
                    v199 = v35;
                    v200 = v69;
                    if v199 == 2 {
                        if *((&v35 as &char + 1) as &i8) == 3 {
                            break;
                        }
                        goto LABEL_4c392a;
                    }
                    if v199 != 3 {
                        if !(v199 == 4) || !(*((&v35 as &char + 1) as &i8) < 2) {
                            break;
                        }
                        goto LABEL_4c2fd3;
                    }
                    v201 = *((&v35 as &char + 1) as &i8);
                    if v201 == 1 {
                        if !(!*((&v35 as &char + 2) as &i8)) {
                            break;
                        }
LABEL_4c392a:
                        v8 = 0;
                        goto LABEL_4c3932;
                    }
                    if v201 == 2 {
                        if !(!(*((&v35 as &char + 2) as &i8) & 5)) {
                            break;
                        }
                        goto LABEL_4c392a;
                    }
                    if !(v201 == 3) {
                        break;
                    }
                    v202 = *((&v35 as &char + 2) as &i8);
                    if v202 != 1 {
                        if v202 == 3 {
                            if *((v200 + 142) as &i8) - 1 < 2 {
                                break;
                            }
                            v204 = v2 * 24 - 24 + v169;
                            v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v204);
                            v43 = v11;
                            v205 = v9;
                            vvar_123{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1611{reg 224}))
                            v41 = v205;
                            v19 = alloc::vec::Vec<T,A>::push(&v41);
                            v9 = uu_tail::follow::files::FileHandling::remove(v0, v198, v197, v88, v89);
                            v207 = *((v204 + 8) as &i64);
                            v208 = *((v204 + 16) as &i64);
                            v41 = uu_tail::follow::files::PathData::from_other_with_path(&v9, v207, v208);
                            memcpy(&v9, &v41, 216);
                            if *(v0 as &i64) == 0x8000000000000000 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            uu_tail::follow::files::FileHandling::insert(v0, v207, v208, &v9, <std::path::PathBuf as core::cmp::PartialEq>::eq(*((v200 + 64) as &i64), *((v200 + 72) as &i64), *((v169 + 8) as &i64), *((v169 + 16) as &i64), v88, v89) as i32, v89);
                            if *(v200 as &i32) == 3 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            if *(v200 as &i32) == 3 {
                                vvar_3935{stack -1008} = "src/uu/tail/src/follow/watch.rs";
                                core::option::unwrap_failed(); /* do not return */
                            }
                            if !uu_tail::follow::watch::WatcherRx::watch_with_parent(*((v200 + 16) as &i64), *((v200 + 24) as &i64), v207, v208) {
                                break;
                            }
LABEL_4c4c0e:
                            goto LABEL_4c4cb1;
                        } else if !(v202 == 2) {
                            break;
                        }
LABEL_4c2fd3:
                        v203 = *((v200 + 142) as &i8);
                        if !(v203 & 1) && v203 != 2 && *((v200 + 140) as &i8) {
                            if *(v200 as &i32) != 3 {
                                v9 = uu_tail::follow::files::FileHandling::remove(v0, v198, v197, v88, v89);
                                break;
                            } else {
                                vvar_3931{stack -1008} = "src/uu/tail/src/follow/watch.rs";
                                core::option::unwrap_failed(); /* do not return */
                            }
                        }
                        if v16 {
                            v206 = uu_tail::follow::files::FileHandling::get_mut(v0, v198, v197, v87, v88, v89);
                            v41 = v41;
                            if *(v206 as &i32) != 2 && ((*((v206 + 56) as &i32) & 0xf000) == 0x1000 || (*((v206 + 56) as &i32) & 0xf000) == 0x2000 || (v41 = v41, (*((v206 + 56) as &i32) & 0xf000) == 0x8000)) {
                                v41 = v41;
                                if *((uu_tail::follow::files::FileHandling::get(v0, v198, v197, 0xf000, v88, v89) + 200) as &i64) {
                                    v41 = uucore::util_name();
                                    v42 = v86;
                                    v4 = &v41;
                                    v9 = Arguments {
                                        pieces: [&g_55cb50, ": "]
                                        args: [&v4]
                                        fmt: None
                                    };
                                    v11 = &v4;
                                    std::io::stdio::_eprint(&v9);
                                    v219 = *((&v17 as &char + 8) as &i128);
                                    vvar_123{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1855{reg 224}))
                                    v4 = 0;
                                    v5 = v219;
                                    v7 = 1;
                                    v9 = &v4;
                                    v10 = <os_display::Quoted as core::fmt::Display>::fmt;
                                    v11 = "has become inaccessible";
                                    v12 = <&T as core::fmt::Display>::fmt;
                                    v13 = "No such file or directory";
                                    v41 = Arguments {
                                        pieces: [&g_55cda0, " ", ": ", "\n"]
                                        args: &[&Argument] {
                                            ptr: &v9
                                            len: <UNKNOWN>
                                        }
                                        fmt: None
                                    };
                                    v44 = 3;
                                    std::io::stdio::_eprint(&v41);
                                    v41 = v41;
                                }
                            }
                            v41 = v41;
                            v41 = v41;
                            v9 = v9;
                            v10 = v10;
                            v11 = v11;
                            if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v198, v197, v221) as i8 {
                                v41 = v41;
                                v9 = v9;
                                v10 = v10;
                                v11 = v11;
                                if !<T as core::slice::cmp::SliceContains>::slice_contains(v169, *((v200 + 40) as &i64), *((v200 + 48) as &i64), v87, v88, v89) as i8 {
                                    v41 = uucore::util_name();
                                    v42 = v86;
                                    v4 = &v41;
                                    v9 = Arguments {
                                        pieces: [&g_55cb50, ": "]
                                        args: [&v4]
                                        fmt: None
                                    };
                                    v11 = &v4;
                                    std::io::stdio::_eprint(&v9);
                                    v9 = Arguments {
                                        pieces: ["directory containing watched file was removed\n"]
                                        args: [8]
                                        fmt: None
                                    };
                                    v12 = 0;
                                    std::io::stdio::_eprint(&v9);
                                    v41 = uucore::util_name();
                                    v42 = v86;
                                    v4 = &v41;
                                    v9 = Arguments {
                                        pieces: [&g_55cb50, ": "]
                                        args: [&v4]
                                        fmt: None
                                    };
                                    v11 = &v4;
                                    std::io::stdio::_eprint(&v9);
                                    v41 = Argument {
                                        value: "inotify"
                                        formatter: <&T as core::fmt::Display>::fmt
                                    };
                                    v9 = Arguments {
                                        pieces: [&g_55cdf0, " cannot be used, reverting to polling\n"]
                                        args: [&v41]
                                        fmt: None
                                    };
                                    std::io::stdio::_eprint(&v9);
                                    v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v169);
                                    v43 = v11;
                                    v230 = v9;
                                    vvar_123{reg 224} = (((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2187{reg 224}))
                                    v41 = v230;
                                    alloc::vec::Vec<T,A>::push(v46, &v41);
                                    if *(v200 as &i32) == 3 {
                                        v18 = "src/uu/tail/src/follow/watch.rs";
                                        core::option::unwrap_failed(); /* do not return */
                                    }
                                    v41 = v41;
                                    v9 = v9;
                                    v10 = v10;
                                    v11 = v11;
                                    goto LABEL_4c3c43;
                                }
                            }
                        } else {
                            v41 = uucore::util_name();
                            v42 = v86;
                            v4 = Argument {
                                value: &v41
                                formatter: <&T as core::fmt::Display>::fmt
                            };
                            v9 = Arguments {
                                pieces: [&g_55cb50, ": "]
                                args: [&v4]
                                fmt: None
                            };
                            std::io::stdio::_eprint(&v9);
                            v41 = Argument {
                                value: &v17
                                formatter: <alloc::string::String as core::fmt::Display>::fmt
                            };
                            v42 = Argument {
                                value: <alloc::string::String as core::fmt::Display>::fmt
                                formatter: "No such file or directory"
                            };
                            v44 = <&T as core::fmt::Display>::fmt;
                            v9 = Arguments {
                                pieces: [&g_55cd60, ": ", "\n"]
                                args: [&v41, &v42]
                                fmt: None
                            };
                            std::io::stdio::_eprint(&v9);
                            v41 = v41;
                            v9 = v9;
                            v10 = v10;
                            v11 = v11;
                            if !(!uu_tail::follow::files::FileHandling::files_remaining(v0, v91, v86, v87, v88, v89) as i8) || !(*((v200 + 141) as &i8)) {
LABEL_4c3c43:
                                v11 = v11;
                                v10 = v10;
                                v9 = v9;
                                v41 = v41;
                                uu_tail::follow::files::FileHandling::reset_reader(v0, v198, v197, v87 | -0x100 | !*((v200 + 141) as &i8), v88, v89);
                                break;
                            } else {
                                v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                                v257 = alloc::alloc::exchange_malloc();
                                *(v257 as &i64) = v9;
                                *((v257 + 8) as &i64) = v10;
                                *((v257 + 16) as &i64) = v11;
                                *((v257 + 24) as &i32) = 1;
LABEL_4c4c53:
                            }
                        }
                        v0 = 0;
                        v173 = 0;
                        goto LABEL_4c480e;
                    } else {
                        v8 = v202 | -0x100 | 1;
LABEL_4c3932:
                        v9 = std::sys::pal::unix::fs::stat(v198, v197);
                        if v9 == 2 {
                            v42 = v10;
                            v41 = 2;
                            goto LABEL_4c3988;
                        } else {
                            memcpy(&v41, &v9, 176);
                            if v41 == 2 {
LABEL_4c3988:
                                break;
                            } else {
                                memcpy(&v64, &v41, 176);
                                v210 = v67 & 0xf000;
                                if !(v210 != 0x2000) || !(v210 != 0x8000) {
                                    v212 = uu_tail::follow::files::FileHandling::get(v0, v198, v197, v87, v88, v89);
                                    if !(*(v212 as &i32) == 2) {
                                        goto LABEL_4c4077;
                                    }
                                    goto LABEL_4c39f4;
                                } else {
                                    v213 = v0;
                                    v214 = v198;
                                    v215 = v197;
                                    v212 = uu_tail::follow::files::FileHandling::get(v0, v198, v197, v87, v88, v89);
                                    if *(v212 as &i32) == 2 {
                                        if v210 != 0x1000 {
                                            v9 = v9;
                                            v10 = v10;
                                            v11 = v11;
                                            if !v16 {
                                                goto LABEL_4c4512;
                                            }
                                            if *((v200 + 142) as &i8) == 2 || (*((v200 + 142) as &i8) & 1) {
                                                v4 = uucore::util_name();
                                                v5 = v86;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55cb50, ": "]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                v223 = *((&v17 as &char + 8) as &i128);
                                                vvar_123{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1980{reg 224}))
                                                v4 = 0;
                                                v5 = v223;
                                                v7 = 1;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55cc18, " has been replaced with an untailable file\n"]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                v9 = v9;
                                                v10 = v10;
                                                v11 = v11;
                                                goto LABEL_4c4512;
                                            } else {
                                                v4 = uucore::util_name();
                                                v5 = v86;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55cb50, ": "]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                v222 = *((&v17 as &char + 8) as &i128);
                                                vvar_123{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1971{reg 224}))
                                                v4 = 0;
                                                v5 = v222;
                                                v7 = 1;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55ccb8, " has been replaced with an untailable file; giving up on this name\n"]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                if *(v200 as &i32) == 3 {
                                                    core::option::unwrap_failed(); /* do not return */
                                                }
                                                *((*((v200 + 24) as &i64) + 32) as &i64)();
                                                v9 = uu_tail::follow::files::FileHandling::remove(v0, v198, v197, v88, v89);
                                                v9 = v9;
                                                v10 = v10;
                                                v11 = v11;
                                                if !uu_tail::follow::files::FileHandling::no_files_remaining(v0, v91, v86, v87, v88, v89) as i8 {
                                                    goto LABEL_4c4512;
                                                }
                                                v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                                                v258 = alloc::alloc::exchange_malloc();
                                                *(v258 as &i64) = v9;
                                                *((v258 + 8) as &i64) = v10;
                                                *((v258 + 16) as &i64) = v11;
                                                *((v258 + 24) as &i32) = 1;
                                                goto LABEL_4c4cb1;
                                            }
                                        }
LABEL_4c39f4:
                                        v4 = uucore::util_name();
                                        v5 = v86;
                                        v3 = Argument {
                                            value: &v4
                                            formatter: <&T as core::fmt::Display>::fmt
                                        };
                                        v9 = Arguments {
                                            pieces: [&g_55cb50, ": "]
                                            args: [&v3]
                                            fmt: None
                                        };
                                        std::io::stdio::_eprint(&v9);
                                        v220 = *((&v17 as &char + 8) as &i128);
                                        v4 = 0;
                                        v5 = v220;
                                        v7 = 1;
                                        v3 = &v4;
                                        v9 = Arguments {
                                            pieces: [&g_55cc98, " has appeared;  following new file\n"]
                                            args: [&v3]
                                            fmt: None
                                        };
                                        v11 = &v3;
                                        std::io::stdio::_eprint(&v9);
                                        if !uu_tail::follow::files::FileHandling::update_reader(v0, v198, v197, v87, v88, v89) {
                                            v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v169);
                                            v6 = v11;
                                            v225 = v9;
                                            vvar_123{reg 224} = ((((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1870{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2023{reg 224}))
                                            v4 = v225;
                                            v19 = alloc::vec::Vec<T,A>::push(&v4);
                                            v9 = v9;
                                            v10 = v10;
                                            v11 = v11;
                                            goto LABEL_4c4512;
                                        }
                                    } else if v210 == 0x1000 {
LABEL_4c4077:
                                        v216 = *((v212 + 56) as &i32) & 0xf000;
                                        if v216 != 0x1000 && v216 != 0x2000 && v216 != 0x8000 {
                                            v4 = uucore::util_name();
                                            v5 = v86;
                                            v3 = &v4;
                                            v9 = Arguments {
                                                pieces: [&g_55cb50, ": "]
                                                args: [&v3]
                                                fmt: None
                                            };
                                            v11 = &v3;
                                            std::io::stdio::_eprint(&v9);
                                            v224 = *((&v17 as &char + 8) as &i128);
                                            vvar_834{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2002{reg 224}))
                                            v4 = 0;
                                            v5 = v224;
                                            v7 = 1;
                                            v3 = &v4;
                                            v9 = Arguments {
                                                pieces: [&g_55cc38, " has become accessible\n"]
                                                args: [&v3]
                                                fmt: None
                                            };
                                            v11 = &v3;
                                            std::io::stdio::_eprint(&v9);
                                            v227 = uu_tail::follow::files::FileHandling::update_reader(v0, v198, v197, v87, v88, v89);
                                            v9 = v9;
                                            v10 = v10;
                                            v11 = v11;
                                        } else if !*((v212 + 200) as &i64) {
                                            v4 = uucore::util_name();
                                            v5 = v86;
                                            v3 = &v4;
                                            v9 = Arguments {
                                                pieces: [&g_55cb50, ": "]
                                                args: [&v3]
                                                fmt: None
                                            };
                                            v11 = &v3;
                                            std::io::stdio::_eprint(&v9);
                                            v226 = *((&v17 as &char + 8) as &i128);
                                            vvar_834{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2035{reg 224}))
                                            v4 = 0;
                                            v5 = v226;
                                            v7 = 1;
                                            v3 = Argument {
                                                value: &v4
                                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                                            };
                                            v9 = Arguments {
                                                pieces: [&g_55cc98, " has appeared;  following new file\n"]
                                                args: [&v3]
                                                fmt: None
                                            };
                                            std::io::stdio::_eprint(&v9);
                                            v227 = uu_tail::follow::files::FileHandling::update_reader(v0, v198, v197, v87, v88, v89);
                                            v9 = v9;
                                            v10 = v10;
                                            v11 = v11;
                                        } else if v199 == 3 && (*((&v35 as &char + 2) as &i8) == 1 & v8) || *((v200 + 141) as &i8) && *((v212 + 40) as &i64) != v66 {
                                            v4 = uucore::util_name();
                                            v5 = v86;
                                            v3 = &v4;
                                            v9 = Arguments {
                                                pieces: [&g_55cb50, ": "]
                                                args: [&v3]
                                                fmt: None
                                            };
                                            v11 = &v3;
                                            std::io::stdio::_eprint(&v9);
                                            v229 = *((&v17 as &char + 8) as &i128);
                                            vvar_834{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2126{reg 224}))
                                            v4 = 0;
                                            v5 = v229;
                                            v7 = 1;
                                            v3 = &v4;
                                            v9 = Arguments {
                                                pieces: [&g_55cc78, " has been replaced;  following new file\n"]
                                                args: [&v3]
                                                fmt: None
                                            };
                                            v11 = &v3;
                                            std::io::stdio::_eprint(&v9);
                                            v227 = uu_tail::follow::files::FileHandling::update_reader(v0, v198, v197, v87, v88, v89);
                                            v9 = v9;
                                            v10 = v10;
                                            v11 = v11;
                                        } else {
                                            v9 = <std::fs::Metadata as uu_tail::paths::MetadataExtTail>::got_truncated(v212, &v64);
                                            if !v9 {
                                                if !*((&v9 as &char + 8) as &i8) {
                                                    goto LABEL_4c44da;
                                                }
                                                v4 = uucore::util_name();
                                                v5 = v86;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55cb50, ": "]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                v4 = Argument {
                                                    value: &v17
                                                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                                                };
                                                v9 = Arguments {
                                                    pieces: [&g_55cc58, ": file truncated\n"]
                                                    args: [&v4]
                                                    fmt: None
                                                };
                                                std::io::stdio::_eprint(&v9);
                                                v227 = uu_tail::follow::files::FileHandling::update_reader(v0, v198, v197, v87, v88, v89);
                                                v9 = v9;
                                                v10 = v10;
                                                v11 = v11;
                                            } else {
LABEL_4c4cb1:
                                                goto LABEL_4c4c53;
                                            }
                                        }
                                        v11 = v11;
                                        v10 = v10;
                                        v9 = v9;
                                        if !(!v227) {
                                            goto LABEL_4c4c0e;
                                        }
LABEL_4c44da:
                                        v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v169);
                                        v6 = v11;
                                        v231 = v9;
                                        vvar_123{reg 224} = ((vvar_844{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2218{reg 224}))
                                        v4 = v231;
                                        v19 = alloc::vec::Vec<T,A>::push(&v4);
                                        v9 = v9;
                                        v10 = v10;
                                        v11 = v11;
                                        goto LABEL_4c4512;
                                    } else {
                                        v217 = *((v212 + 56) as &i32) & 0xf000;
                                        if v217 == 0x1000 || v217 == 0x8000 || (v9 = v9, v10 = v10, v11 = v11, v217 as i32 == 0x2000) {
                                            if *((v212 + 200) as &i64) {
                                                uu_tail::follow::files::FileHandling::reset_reader(v0, v198, v197, v217, v88, v89);
                                                v9 = v9;
                                                v10 = v10;
                                                v11 = v11;
                                            } else {
                                                v4 = uucore::util_name();
                                                v5 = v86;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55cb50, ": "]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                v228 = *((&v17 as &char + 8) as &i128);
                                                vvar_123{reg 224} = ((vvar_123{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2049{reg 224}))
                                                v4 = 0;
                                                v5 = v228;
                                                v7 = 1;
                                                v3 = &v4;
                                                v9 = Arguments {
                                                    pieces: [&g_55cc18, " has been replaced with an untailable file\n"]
                                                    args: [&v3]
                                                    fmt: None
                                                };
                                                v11 = &v3;
                                                std::io::stdio::_eprint(&v9);
                                                v9 = v9;
                                                v10 = v10;
                                                v11 = v11;
                                            }
                                        }
LABEL_4c4512:
                                        v11 = v11;
                                        v10 = v10;
                                        v9 = v9;
                                        memcpy(&v9, &v64, 176);
                                        uu_tail::follow::files::FileHandling::update_metadata(v0, v198, v197, &v9, v88, v89);
                                        v232 = v19;
                                        v8 = v20;
                                        v170 = v21;
                                        if v232 == 0x8000000000000000 {
                                            goto LABEL_4c4c53;
                                        } else {
                                            v22 = v232;
                                            v23 = v8;
                                            v24 = v170;
                                        }
                                    }
                                }
                            }
                        }
LABEL_4c45ad:
                        v233 = v169 + 8;
                        do {
                        } while ((v116 = v114 - 1 & 4294967295, v117 = (v116 | -0x10000 | (v116 as i16 & v114 as i16) as u16 as u64) & 4294967295 & 4294967295, (v116 as i16 & v114 as i16)));
                    }
LABEL_4c2e94:
                    v172 = v8;
                    v171 = *((&v34 as &char + 8) as &i64) | -0x100 | 1;
                    v173 = 0;
                    v2 = 0;
                }
                v8 = v171;
                if vvar_3708 != 2 && *((v163 + 141) as &i8) {
                    v236 = *(*((v163 + 80) as &i64) as &i128);
                    v54 = struct26 {
                        field_0: v237
                        field_8: v237 + 16
                        field_16: *((v163 + 88) as &i64) + v237 + 1
                        field_24: ~(UnaryOp GetMSBs as u32 as u32) as u16
                    };
                    v55 = *((v163 + 104) as &i64);
                    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v54);
                    v170 = v11;
                    v24 = v170;
                    v238 = v9;
                    vvar_33{reg 224} = ((((vvar_33{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2338{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_2382{reg 224}))
                    v22 = v238;
                    v235 = v23;
                }
                v239 = v170 * 24;
                v242 = v241;
                if !v239 {
                    v244 = v25;
                    if (~(v244) & 6) && v244 != 1 && !v244 && v26 {
                        v1 = v1;
                        continue;
                    }
                    v1 = v1;
                    continue;
                } else {
                    v9 = uu_tail::follow::files::FileHandling::tail_file(v0, *((v242 + 8) as &i64), *((v242 + 16) as &i64), -0x100 | v40, v89);
                    v239 -= 24;
                    if !v9 {
                        continue;
                    }
                    v0 = 0;
                    goto LABEL_4c480e;
                }
            default:
                v14 = v29;
                v246 = v25;
                v247 = (&v26)[8];
                v13 = (&v27)[8];
                v11 = v247;
                v9 = v246;
                v64 = &v9;
                v65 = <notify::error::Error as core::fmt::Display>::fmt;
                v41 = Arguments {
                    pieces: ["NotifyError: "]
                    args: &[&Argument] {
                        ptr: &v64
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v44 = 1;
                v49 = alloc::fmt::format::format_inner(&v41);
                v250 = *((&v49 as &char + 8) as &i64);
                v251 = *((&v49 as &char + 16) as &i64);
                v252 = __rust_alloc(32, 8);
                *(v252 as &i192) = v49;
                *((v252 + 8) as &i64) = v250;
                *((v252 + 16) as &i64) = v251;
                *((v252 + 24) as &i32) = 1;
                v0 = core::ptr::drop_in_place<notify::error::Error>(&v9) | -0x100 | 1;
                v173 = v110 | -0x100 | 1;
                goto LABEL_4c480e;
            }
        }
LABEL_4c480e:
        if !(~(v25) & 6) {
            return;
        } else if v173 {
            return;
        } else if (&v27)[8] {
            return;
        } else {
            return;
        }
    }
LABEL_4c26b1:
    v122 = __rust_alloc(18, 1);
    *(v122 as &i128) = 140142229583851651529771075983655333742;
    *((v122 + 16) as &i16) = 26478;
    v126 = __rust_alloc(32, 8);
    *(v126 as &i64) = 18;
    *((v126 + 8) as &i64) = v122;
    *((v126 + 16) as &i64) = 18;
    *((v126 + 24) as &i32) = 1;
    return;
}
