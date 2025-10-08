fn just::parser::Parser::parse_recipe(a1: i64, a2: &struct32, a3: i64, a4: i64, a5: i32) -> : struct72 {
    let a0: struct8;  // rdi
    let v0: u8;  // [bp-0x541]
    let v1: void*;  // [bp-0x540]
    let v2: u32;  // [bp-0x52c]
    let v3: struct82;  // [sp-0x528], Other Possible Types: struct24
    let v4: struct82;  // [bp-0x528]
    let v5: struct89;  // [bp-0x528]
    let v6: struct81;  // [bp-0x528]
    let v7: struct82;  // [bp-0x528], Other Possible Types: u704
    let v8: u32;  // [bp-0x528]
    let v9: struct24;  // [bp-0x528]
    let v10: u64;  // [bp-0x528]
    let v12: struct80;  // [bp-0x528]
    let v13: struct82;  // [sp-0x528], Other Possible Types: u704
    let v14: struct202;  // [bp-0x528]
    let v15: struct202;  // [bp-0x528]
    let v16: struct82;  // [bp-0x528]
    let v17: struct82;  // [bp-0x528]
    let v18: void*;  // [bp-0x520], Other Possible Types: u64
    let v19: u64;  // [bp-0x518]
    let v20: struct16;  // [bp-0x510], Other Possible Types: u64
    let v21: u64;  // [bp-0x508]
    let v22: void*;  // [bp-0x500]
    let v23: u64;  // [bp-0x4f8]
    let v24: u64;  // [bp-0x4f0]
    let v25: u64;  // [bp-0x4e8]
    let v26: u32;  // [bp-0x4e4]
    let v27: u128;  // [bp-0x4e0]
    let v28: Result<struct20, struct16>;  // [bp-0x4d0]
    let v29: u128;  // [bp-0x4c8]
    let v30: u64;  // [bp-0x4b8]
    let v31: Option<struct32>;  // [bp-0x4b0]
    let v32: iNone;  // [bp-0x4b0]
    let v33: struct16;  // [bp-0x4a0]
    let v35: iNone;  // [bp-0x498]
    let v37: iNone;  // [bp-0x488]
    let v39: alloc::string::String;  // [bp-0x478]
    let v41: iNone;  // [bp-0x468]
    let v42: u64;  // [bp-0x460]
    let v43: u64;  // [bp-0x458]
    let v44: u128;  // [bp-0x450]
    let v45: u64;  // [bp-0x440]
    let v46: alloc::string::String;  // [bp-0x438], Other Possible Types: u32
    let v47: struct80;  // [bp-0x438], Other Possible Types: u640
    let v48: struct32;  // [bp-0x438]
    let v49: struct57;  // [bp-0x435]
    let v50: iNone;  // [bp-0x430]
    let v51: u128;  // [bp-0x428]
    let v52: iNone;  // [bp-0x420]
    let v53: alloc::string::String;  // [bp-0x418], Other Possible Types: u128
    let v54: iNone;  // [bp-0x410]
    let v55: u128;  // [bp-0x408]
    let v56: u128;  // [bp-0x400]
    let v57: iNone;  // [bp-0x3f8], Other Possible Types: struct16, u64
    let v58: iNone;  // [bp-0x3f8]
    let v59: iNone;  // [bp-0x3f0]
    let v60: iNone;  // [bp-0x3e0]
    let v61: iNone;  // [bp-0x3d0]
    let v62: iNone;  // [bp-0x3c0]
    let v63: iNone;  // [bp-0x3b0]
    let v64: iNone;  // [bp-0x3a0]
    let v65: iNone;  // [bp-0x390]
    let v66: iNone;  // [bp-0x380]
    let v67: u64;  // [bp-0x370]
    let v68: u8;  // [bp-0x368]
    let v69: struct32;  // [bp-0x368]
    let v70: void*;  // [bp-0x360]
    let v71: struct16;  // [bp-0x350]
    let v72: struct8;  // [bp-0x350]
    let v73: void*;  // [bp-0x350]
    let v74: u64;  // [bp-0x348]
    let v75: void*;  // [bp-0x340]
    let v76: u64;  // [bp-0x338]
    let v77: struct16;  // [bp-0x338]
    let v78: iNone;  // [bp-0x338], Other Possible Types: u128
    let v80: iNone;  // [bp-0x328]
    let v81: u64;  // [bp-0x328]
    let v82: iNone;  // [bp-0x318]
    let v83: u128;  // [bp-0x308]
    let v84: iNone;  // [bp-0x2f8]
    let v85: u128;  // [bp-0x2e8]
    let v86: i64;  // [bp-0x2e0]
    let v87: u64;  // [bp-0x2d8]
    let v88: u128;  // [bp-0x2c8]
    let v89: u64;  // [bp-0x2c8]
    let v90: u64;  // [bp-0x2c8]
    let v91: iNone;  // [bp-0x2c0]
    let v92: u64;  // [bp-0x2b8]
    let v93: void*;  // [bp-0x2a8]
    let v94: struct16;  // [bp-0x2a8]
    let v95: u64;  // [bp-0x2a0]
    let v96: void*;  // [bp-0x298]
    let v97: struct24;  // [bp-0x290]
    let v98: u64;  // [bp-0x280]
    let v99: iNone;  // [bp-0x278]
    let v100: iNone;  // [bp-0x268]
    let v101: alloc::string::String;  // [bp-0x258]
    let v102: iNone;  // [bp-0x248]
    let v103: u64;  // [bp-0x238]
    let v104: Option<struct24>;  // [bp-0x230]
    let v105: u64;  // [bp-0x220]
    let v106: iNone;  // [bp-0x218]
    let v107: iNone;  // [bp-0x208]
    let v108: alloc::string::String;  // [bp-0x1f8]
    let v109: iNone;  // [bp-0x1e8]
    let v110: u64;  // [bp-0x1d8]
    let v111: u8;  // [bp-0x1d0]
    let v113: struct208;  // [bp-0x100]
    let v115: u8;  // al
    let v116: iNone;  // xmm1
    let v117: alloc::string::String;  // xmm2
    let v118: alloc::string::String;  // xmm3
    let v119: u64;  // rax
    let v120: iNone;  // xmm1
    let v121: iNone;  // xmm2
    let v122: u128;  // xmm3
    let v123: struct8;  // rcx
    let v124: alloc::string::String;  // xmm0
    let v128: core::fmt::rt::Argument;  // al
    let v129: struct81;  // cl
    let v130: u8;  // cl
    let v131: u64;  // rax
    let v132: u8;  // al
    let v133: core::option::Option<u32>;  // xmm0
    let v134: iNone;  // xmm1
    let v135: iNone;  // xmm2
    let v136: struct81;  // edx
    let v137: u8;  // al
    let v138: core::fmt::rt::Argument;  // al
    let v139: u128;  // xmm0
    let v140: u128;  // xmm1
    let v141: struct128;  // al
    let v142: struct82;  // cl
    let v143: u8;  // al
    let v144: u128;  // xmm0
    let v145: iNone;  // xmm1
    let v146: iNone;  // xmm0
    let v147: iNone;  // xmm1
    let v148: iNone;  // xmm2
    let v149: iNone;  // xmm0
    let v150: iNone;  // xmm1
    let v151: iNone;  // xmm2
    let v152: iNone;  // xmm0
    let v153: iNone;  // xmm1
    let v154: iNone;  // xmm2
    let v155: iNone;  // xmm3
    let v156: iNone;  // xmm4
    let v157: u8;  // al
    let v158: u64;  // rax
    let v159: u64;  // rdx
    let v160: u64;  // rdx
    let v161: u64;  // rdx
    let v163: iNone;  // xmm0
    let v164: iNone;  // xmm1
    let v165: iNone;  // xmm2
    let v166: u32;  // eax
    let v167: u32;  // edx
    let v168: u64;  // rax
    let v169: u64;  // rcx
    let v170: u64;  // rax
    let v172: u64;  // rdx
    let v173: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax
    let v174: u64;  // rbp
    let v175: u32;  // ebp
    let v176: iNone;  // xmm0
    let v177: iNone;  // xmm1
    let v178: iNone;  // xmm2
    let v179: u32;  // edx
    let v180: iNone;  // xmm0
    let v181: iNone;  // xmm1
    let v182: iNone;  // xmm2
    let v183: u32;  // esi
    let v184: iNone;  // xmm0
    let v185: iNone;  // xmm1
    let v186: iNone;  // xmm2
    let v187: iNone;  // xmm0
    let v188: iNone;  // xmm1
    let v189: iNone;  // xmm2
    let v190: u64;  // rcx
    let v191: iNone;  // xmm0
    let v192: u8;  // sil
    let v193: iNone;  // xmm1
    let v194: iNone;  // xmm2
    let v195: u32;  // edi
    let v196: iNone;  // xmm0
    let v197: iNone;  // xmm1
    let v198: iNone;  // xmm2
    let v199: u32;  // esi
    let v200: i32;  // ecx
    let v201: iNone;  // xmm0
    let v202: iNone;  // xmm1
    let v203: struct80;  // xmm2
    let v204: &mut [u8];  // rax:rdx
    let v208: iNone;  // [bp-0x4f7]
    let v210: u24;  // [bp-0x4df]

    v70 = a3;
    v12 = just::parser::Parser::parse_name(a1);
    v115 = *((&v12.field_64 as &char + 8) as &i8);
    v116 = v12.field_16;
    v117 = v12.field_32;
    v118 = v12.field_48;
    v46 = v12.field_0;
    *(&v51 as void*) = v116;
    v53 = v117;
    *(&v55 as &alloc::string::String) = v118;
    v57 = v12.field_64;
    if v115 == 37 {
        v68 = a4;
        v106 = v46;
        v107 = v51;
        v108 = *(&v53.vec.buf.inner.cap as &i128);
        v109 = v55;
        v110 = v57;
        v99 = v106;
        v100 = v51;
        v101 = *(&v53.vec.buf.inner.cap as &i128);
        v102 = v55;
        v103 = v110;
        v93 = 0;
        v95 = 8;
        v96 = 0;
        while (just::parser::Parser::next_is(a1, 24) || just::parser::Parser::next_is(a1, 18)) {
            v42 = just::parser::Parser::parse_parameter(a1, 1);
            v119 = v14.field_0;
            v120 = v14.field_24;
            v121 = v14.field_40;
            v122 = v14.field_56;
            *(&v46.vec.buf.inner.cap as &i128) = *(&v18 as &i128);
            *(&v51 as void*) = v120;
            *(&v53 as void*) = v121;
            v55 = v122;
            *(&v58 as &u128) = v14.field_72;
            if v119 != 19 {
                v113 = struct208 {
                    field_0: v119
                    field_8: *(&v46.vec.buf.inner.cap as &i128)
                    field_24: v51
                    field_40: v53
                    field_56: v55
                    field_72: v58 as i128
                    field_88: v14.field_88
                    field_104: v14.field_104
                    field_120: v32
                    field_136: *(&v14.field_0 as &i128)
                    field_152: *(&v14.field_0 as &i128)
                    field_168: *((&v14.field_160 as &char + 8) as &i128)
                    field_184: *((&v14.field_176 as &char + 8) as &i128)
                    field_200: v42
                };
                v94 = alloc::vec::Vec<T,A>::push(&v113);
            } else {
                v123 = a0;
                *(&v1[72] as &i128) = *(&v57 as &i128);
                goto LABEL_67f11f;
            }
        }
        v13 = just::parser::Parser::accepted(a1, 30);
        if &v13 as u8 != "%" {
            *(&v1[72] as &i64) = *((&v13 as &char + 64) as &i64);
            v196 = *((&v13 as &char + 1) as &i128);
            v197 = *((&v13 as &char + 17) as &i128);
            v198 = *((&v13 as &char + 33) as &i128);
            *(&v1[57] as &i128) = v208 as i128;
            v1[41] = v198;
            v1[25] = v197;
            v1[9] = v196;
            v199 = *((&v13 as &char + 76) as &i32);
            *(&v1[81] as &i32) = *(&v210 as &i32);
            *(&v1[84] as &u32) = v199;
            *(&v1[8] as &core::fmt::rt::Argument) = v128;
            *(&v1[80] as &struct81) = v129;
            *(v1 as &i64) = 0x8000000000000000;
            return;
        }
        if !(v13.field_0 as i8 & 1) {
            v13 = just::parser::Parser::accepted(a1, 1);
            if v129 != 37 {
                *(&v1[72] as &i64) = *((&v13 as &char + 64) as &i64);
                v196 = *((&v13 as &char + 1) as &i128);
                v197 = *((&v13 as &char + 17) as &i128);
                v198 = *((&v13 as &char + 33) as &i128);
                *(&v1[57] as &i128) = v208 as i128;
                v1[41] = v198;
                v1[25] = v197;
                v1[9] = v196;
                v199 = *((&v13 as &char + 76) as &i32);
                *(&v1[81] as &i32) = *(&v210 as &i32);
                *(&v1[84] as &u32) = v199;
                *(&v1[8] as &core::fmt::rt::Argument) = v128;
                *(&v1[80] as &struct81) = v129;
                *(v1 as &i64) = 0x8000000000000000;
                return;
            }
            if !(v128 & 1) {
                goto LABEL_67f3c8;
            }
        }
        v15 = just::parser::Parser::parse_parameter(a1, v130);
        v131 = v15.field_0;
        *(&v78 as &i128) = *(&v18 as &i128);
        v80 = v15.field_24;
        v82 = v15.field_40;
        v83 = v15.field_56;
        v84 = v15.field_72;
        if v131 == 19 {
            v123 = a0;
            v1[72] = v84;
LABEL_67f11f:
            *((v123 + 56) as &u128) = v83;
            *((v123 + 40) as void*) = v82;
            *((v123 + 24) as void*) = v80;
            *((v123 + 8) as &alloc::string::String) = v124;
            *(v123 as &i64) = 0x8000000000000000;
        } else {
            v67 = v42;
            v66 = *((&v14.field_176 as &char + 8) as &i128);
            v65 = *((&v14.field_160 as &char + 8) as &i128);
            v64 = *((&v14.field_144 as &char + 8) as &i128);
            v63 = *((&v14.field_128 as &char + 8) as &i128);
            v62 = v32;
            v61 = v15.field_104;
            v60 = v15.field_88;
            *(&v50 as &i128) = v78 as i128;
            v52 = v80;
            v54 = v82;
            v56 = v83;
            v59 = v84;
            v46 = v131;
            v16 = just::parser::Parser::forbid(a1);
            v132 = v16.field_68;
            if v132 == 37 {
                memcpy(&v111, &v46, 208);
            } else {
                *(&v1[72] as &i64) = *(&v16.field_64 as &i64);
                v133 = v16.field_0;
                v134 = v16.field_16;
                v135 = v16.field_32;
                *(&v1[56] as &u128) = v16.field_48;
                v1[40] = v135;
                v1[24] = v134;
                *(&v1[8] as &core::option::Option<u32>) = v133;
                v136 = *(&v16.field_72 as &i32);
                *(&v1[81] as &i32) = *(&v210 as &i32);
                *(&v1[84] as &struct81) = v136;
                *(&v1[80] as &u8) = v132;
                *(v1 as &i64) = 0x8000000000000000;
            }
LABEL_67f3c8:
            v17 = just::parser::Parser::expect(a1, 12);
            v137 = v17.field_68;
            if v137 != 37 {
                v190 = v17.field_0;
                v191 = *((&v17.field_0 as &char + 8) as &i128);
                v192 = v17.field_64;
                v46 = *(&(&v17.field_64)[1] as &i32);
                v49 = v26;
                *(&v1[84] as &i32) = *(&v17.field_72 as &i32);
                *(&v1[81] as &i32) = *((&v17.field_68 as &char + 1) as &i32);
                v193 = *((&v17.field_16 as &char + 8) as &i128);
                v194 = *((&v17.field_32 as &char + 8) as &i128);
                v195 = v46;
                *(&v1[76] as &struct57) = v49;
                *(&v1[73] as &u32) = v195;
                *(&v1[8] as &u64) = v190;
                v1[16] = v191;
                v1[32] = v193;
                v1[48] = v194;
                *(&v1[64] as &u64) = v24;
                *(&v1[72] as &u8) = v192;
                *(&v1[80] as &u8) = v137;
                *(v1 as &i64) = 0x8000000000000000;
                return;
            }
            v73 = 0;
            v74 = 8;
            v75 = 0;
            loop {
                v7 = just::parser::Parser::accept_dependency(a1);
                if v138 != 37 {
                    v57 = *((&v7 as &char + 64) as &i64);
                    v184 = v7 as i128;
                    v185 = *((&v7 as &char + 16) as &i128);
                    v186 = *((&v7 as &char + 32) as &i128);
                    v55 = *((&v7 as &char + 48) as &i128);
                    *(&v53 as void*) = v186;
                    *(&v51 as void*) = v185;
                    *(&v46 as void*) = v184;
                    *(&v1[84] as &i32) = *((&v7 as &char + 76) as &i32);
                    *(&v1[81] as &i32) = *((&v7 as &char + 73) as &i32);
                    *(&v1[72] as &struct16) = v57;
                    v187 = v46;
                    v188 = v51;
                    v189 = v53;
                    *(&v1[56] as &u128) = v55;
                    v1[40] = v189;
                    v1[24] = v188;
                    v1[8] = v187;
                    *(&v1[80] as &core::fmt::rt::Argument) = v138;
                    *(v1 as &i64) = 0x8000000000000000;
                    return;
                }
                v139 = v7.field_0;
                v140 = v7.field_16;
                v53 = v7.field_32;
                v51 = v140;
                v46 = v139;
                if v46 as i64 == 0x8000000000000000 {
                    break;
                }
                v71 = alloc::vec::Vec<T,A>::push(&v46, "src/parser.rs");
            }
            v3 = just::parser::Parser::accepted(a1, 0);
            v141 = v3.field_0 as i8;
            v142 = v3.field_68 as i8;
            if v142 != 37 {
                *(&v1[72] as &i64) = *(&v3.field_64 as &i64);
                v180 = *((&v3.field_0 as &char + 1) as &i128);
                v181 = *((&v3.field_16 as &char + 1) as &i128);
                v182 = *((&v3.field_32 as &char + 1) as &i128);
                *(&v1[57] as &i128) = *((&v3.field_48 as &char + 1) as &i128);
                v1[41] = v182;
                v1[25] = v181;
                v1[9] = v180;
                v183 = *(&v3.field_72 as &i32);
                *(&v1[81] as &i32) = *((&v3.field_68 as &char + 1) as &i32);
                *(&v1[84] as &u32) = v183;
                *(&v1[8] as &struct128) = v141;
                *(&v1[80] as &struct82) = v142;
                *(v1 as &i64) = 0x8000000000000000;
                return;
            }
            if (v141 & 1) {
                loop {
                    v4 = just::parser::Parser::accept_dependency(a1);
                    v143 = v4.field_68;
                    if v143 != 37 {
                        v57 = *(&v4.field_64 as &i64);
                        v146 = v4.field_0;
                        v147 = v4.field_16;
                        v148 = v4.field_32;
                        v55 = v4.field_48;
                        *(&v53 as void*) = v148;
                        *(&v51 as void*) = v147;
                        *(&v46 as void*) = v146;
                        *(&v1[84] as &i32) = *(&v4.field_72 as &i32);
                        *(&v1[81] as &i32) = *((&v4.field_68 as &char + 1) as &i32);
                        *(&v1[72] as &u64) = v57;
                        v149 = v46;
                        v150 = v51;
                        v151 = v53;
                        *(&v1[56] as &u128) = v55;
                        v1[40] = v151;
                        v1[24] = v150;
                        v1[8] = v149;
                        *(&v1[80] as &u8) = v143;
                        *(v1 as &i64) = 0x8000000000000000;
                        return;
                    }
                    v144 = v4.field_0;
                    v145 = v4.field_16;
                    v53 = v4.field_32;
                    *(&v51 as void*) = v145;
                    v46 = v144;
                    if v46 as i64 == 0x8000000000000000 {
                        break;
                    }
                    v77 = alloc::vec::Vec<T,A>::push(&v46, "src/parser.rs");
                }
                if !v81 {
                    v5 = just::parser::Parser::unexpected_token(a1);
                    v152 = *(&v5.field_72 as &i128);
                    v57 = v152;
                    v153 = v5.field_8;
                    v154 = v5.field_24;
                    v155 = v5.field_40;
                    v156 = v5.field_56;
                    *(&v55 as void*) = v156;
                    *(&v53 as void*) = v155;
                    *(&v51 as void*) = v154;
                    *(&v46 as void*) = v153;
                    v1[72] = v152;
                    v1[56] = v156;
                    v1[40] = v155;
                    v1[24] = v154;
                    v1[8] = v153;
                    *(v1 as &i64) = 0x8000000000000000;
                    return;
                }
                v72 = alloc::vec::Vec<T,A>::append_elements(0x8, v81);
            }
            v6 = just::parser::Parser::expect_eol(a1);
            v157 = v6.field_72;
            if v157 != 37 {
                *(&v1[72] as &u64) = v6.field_64;
                v176 = v6.field_0;
                v177 = v6.field_16;
                v178 = v6.field_32;
                *(&v1[56] as &u128) = v6.field_48;
                v1[40] = v178;
                v1[24] = v177;
                v1[8] = v176;
                v179 = v6.field_73;
                *(&v1[81] as &i32) = *(&(&v6.field_72)[1] as &i32);
                *(&v1[84] as &u32) = v179;
                *(&v1[80] as &u8) = v157;
                *(v1 as &i64) = 0x8000000000000000;
                return;
            }
            v8 = just::parser::Parser::parse_body(a1);
            if v138 != 37 {
                v57 = *((&v7 as &char + 64) as &i64);
                v184 = v7 as i128;
                v185 = *((&v7 as &char + 16) as &i128);
                v186 = *((&v7 as &char + 32) as &i128);
                v55 = *((&v7 as &char + 48) as &i128);
                *(&v53 as void*) = v186;
                *(&v51 as void*) = v185;
                *(&v46 as void*) = v184;
                *(&v1[84] as &i32) = *((&v7 as &char + 76) as &i32);
                *(&v1[81] as &i32) = *((&v7 as &char + 73) as &i32);
                *(&v1[72] as &struct16) = v57;
                v187 = v46;
                v188 = v51;
                v189 = v53;
                *(&v1[56] as &u128) = v55;
                v1[40] = v189;
                v1[24] = v188;
                v1[8] = v187;
                *(&v1[80] as &core::fmt::rt::Argument) = v138;
                *(v1 as &i64) = 0x8000000000000000;
                return;
            }
            v158 = v7.field_16;
            v85 = v7.field_0;
            v87 = v158;
            if v87 {
                v2 = just::line::Line::is_shebang(*((v86 + 8) as &i64), *((v86 + 16) as &i64));
                v0 = just::attribute_set::AttributeSet::contains(a2, 16);
                if (v2 & v0) == 1 {
                    v3 = struct24 {
                        field_0: 9223372036854775858
                        field_8: just::token::Token::lexeme(&v99)
                        field_16: v159
                    };
                    v47 = just::token::Token::error(&v99, &v3);
                    goto LABEL_67fab8;
                }
            } else {
                v0 = just::attribute_set::AttributeSet::contains(a2, 16);
                v2 = 0;
            }
            if just::attribute_set::AttributeSet::contains(a2, 19) && just::attribute_set::AttributeSet::contains(a2, 9) {
                v3 = struct24 {
                    field_0: 9223372036854775853
                    field_8: just::token::Token::lexeme(&v99)
                    field_16: v160
                };
                v47 = just::token::Token::error(&v99, &v3);
            } else if just::attribute_set::AttributeSet::contains(a2, 3) && just::attribute_set::AttributeSet::contains(a2, 10) {
                v3 = struct24 {
                    field_0: 9223372036854775840
                    field_8: just::token::Token::lexeme(&v99)
                    field_16: v161
                };
                v47 = just::token::Token::error(&v99, &v3);
            } else {
                v166 = just::token::Token::lexeme(&v99);
                v8 = 0;
                v204 = core::char::methods::encode_utf8_raw(95, &v8, a2);
                if !core::slice::<impl [T]>::starts_with(v166, v167) {
                    just::attribute_set::AttributeSet::contains(a2, 15);
                }
                if v70 {
                    v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v70, v68);
                    v92 = v9.field_16;
                    v88 = *(&v9.field_0 as &i128);
                }
                v68 = 1;
                v70 = v75;
                v168 = *(a2 as &i64);
                v169 = a2[8] as i64;
                v170 = v168;
                if v170 {
                    v170 = a2[16] as i64;
                }
                v172 = v168;
                v10 = v172;
                v18 = 0;
                v19 = v168;
                v20 = v169;
                v21 = v172;
                v22 = 0;
                v23 = v168;
                v24 = v20;
                v25 = v170;
                loop {
                    do {
                        if !<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v8) as u64 {
                            v104 = core::option::Option<T>::filter(&v89);
                            v175 = *((a1 + 128) as &i32);
                            v97 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
                            v76 = 0x8000000000000000;
                            v48 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v94);
                            v8 = core::iter::traits::iterator::Iterator::chain(&v48, &v111);
                            core::iter::traits::iterator::Iterator::collect(&v48, &v8);
                            v44 = *(a2 as &i128);
                            v45 = a2[16] as i64;
                            v8 = v85;
                            v19 = v87;
                            *(&v20.field_0 as &i128) = *(&v71.field_0 as &i128);
                            v22 = v75;
                            v29 = v104 as i128;
                            v30 = v105;
                            v25 = v98;
                            v23 = *(&v97.field_0 as &i128);
                            v43 = v110;
                            v41 = v109;
                            v39 = v108;
                            v37 = v107;
                            v35 = v106;
                            v33 = v81;
                            v31 = v78 as i128;
                            v28 = v48.field_16;
                            v27 = *(&v48.field_0 as &i128);
                            memcpy(v1, &v8, 240);
                            *(&v1[240] as &void*) = v70;
                            *(&v1[248] as &u32) = v175;
                            *(&v1[252] as &struct32) = v69;
                            *(&v1[253] as &u8) = a5;
                            *(&v1[254] as &u8) = v2 | v0;
                            return;
                        }
                    } while (*(v173 as &i64) + 0x8000000000000000 != 3);
                    if *((v173 + 8) as &i64) != 0x8000000000000000 {
                        v46 = <alloc::string::String as core::clone::Clone>::clone(v173 + 8);
                        v78 = *(&v46.vec.buf.inner.ptr as &i128);
                    }
                    v90 = v174;
                    *(&v91 as &i128) = v78 as i128;
                }
            }
LABEL_67fab8:
            *(&v1[72] as &i128) = *((&v47 as &char + 64) as &i128);
            v163 = v47 as i128;
            v164 = *((&v47 as &char + 16) as &i128);
            v165 = *((&v47 as &char + 32) as &i128);
            *(&v1[56] as &i128) = *((&v47 as &char + 48) as &i128);
            v1[40] = v165;
            v1[24] = v164;
            v1[8] = v163;
            *(v1 as &i64) = 0x8000000000000000;
        }
    } else {
        v200 = *((&v12.field_64 as &char + 9) as &i32);
        *(&v1[84] as &i32) = *((&v12.field_64 as &char + 12) as &i32);
        *(&v1[81] as &unsigned int) = v200;
        *(&v1[72] as &u64) = v57;
        v201 = v46;
        v202 = v51;
        v203 = *(&v53.vec.buf.inner.cap as &i128);
        *(&v1[56] as &u128) = v55;
        *(&v1[40] as &struct80) = v203;
        v1[24] = v202;
        v1[8] = v201;
        *(&v1[80] as &u8) = v115;
        *(v1 as &i64) = 0x8000000000000000;
    }
    return;
}
