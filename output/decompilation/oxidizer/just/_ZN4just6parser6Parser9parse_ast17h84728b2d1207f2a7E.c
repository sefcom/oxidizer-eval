fn just::parser::Parser::parse_ast(a0: i64, a1: i64) {
    let v1: iNone;  // [bp-0x4d8]
    let v4: iNone;  // [bp-0x4d8]
    let v5: iNone;  // [bp-0x4d8]
    let v8: iNone;  // [bp-0x4c8]
    let v9: void*;  // [bp-0x4c8]
    let v10: iNone;  // [bp-0x4c8]
    let v12: iNone;  // [bp-0x4b8]
    let v14: iNone;  // [bp-0x4b8]
    let v17: iNone;  // [bp-0x4a8]
    let v18: iNone;  // [bp-0x4a8]
    let v21: iNone;  // [bp-0x498]
    let v22: iNone;  // [bp-0x498]
    let v25: struct88;  // [bp-0x478], Other Possible Types: struct81, struct82, u704
    let v26: struct24;  // [bp-0x478], Other Possible Types: u128
    let v27: struct80;  // [bp-0x478], Other Possible Types: u640
    let v28: u128;  // [bp-0x478]
    let v33: struct72;  // [bp-0x478]
    let v34: struct72;  // [bp-0x478]
    let v35: struct88;  // [bp-0x478]
    let v36: struct24;  // [bp-0x478]
    let v37: struct24;  // [bp-0x478], Other Possible Types: u64
    let v38: struct89;  // [bp-0x478]
    let v39: struct9;  // [bp-0x478]
    let v40: struct81;  // [bp-0x478]
    let v41: u8;  // [bp-0x470]
    let v42: u128;  // [bp-0x470]
    let v43: void*;  // [bp-0x468], Other Possible Types: u128
    let v44: struct640;  // [bp-0x460], Other Possible Types: u128
    let v45: u128;  // [bp-0x458]
    let v46: u64;  // [bp-0x450]
    let v47: u128;  // [bp-0x448]
    let v48: u128;  // [bp-0x438]
    let v49: u32;  // [bp-0x434]
    let v50: struct640;  // [bp-0x42c], Other Possible Types: u32
    let v52: struct640;  // [bp-0x420]
    let v53: u128;  // [bp-0x418]
    let v55: u128;  // [bp-0x408]
    let v57: struct640;  // [bp-0x3f8]
    let v60: u128;  // [bp-0x3e8]
    let v62: struct640;  // [bp-0x3d8]
    let v63: struct640;  // [bp-0x3c8]
    let v65: iNone;  // [bp-0x3b8]
    let v67: struct640;  // [bp-0x3a8]
    let v68: u32;  // [bp-0x378]
    let v69: u32;  // [bp-0x375]
    let v70: void*;  // [bp-0x370]
    let v71: struct16;  // [bp-0x370]
    let v72: struct16;  // [bp-0x370]
    let v73: u64;  // [bp-0x368]
    let v74: void*;  // [bp-0x360]
    let v75: struct640;  // [bp-0x358]
    let v76: struct640;  // [bp-0x358]
    let v77: struct32;  // [bp-0x358]
    let v78: struct32;  // [bp-0x358]
    let v80: struct640;  // [bp-0x348]
    let v81: struct640;  // [bp-0x348]
    let v82: iNone;  // [bp-0x348]
    let v83: u128;  // [bp-0x328]
    let v84: u128;  // [bp-0x328]
    let v86: struct88;  // [bp-0x328]
    let v88: u128;  // [bp-0x328]
    let v89: struct80;  // [bp-0x328], Other Possible Types: struct89
    let v90: u128;  // [bp-0x328]
    let v91: u128;  // [bp-0x328]
    let v92: struct120;  // [bp-0x328]
    let v94: struct24;  // [bp-0x318], Other Possible Types: u64
    let v95: u128;  // [bp-0x318]
    let v97: alloc::string::String;  // [bp-0x308], Other Possible Types: u128
    let v98: u128;  // [bp-0x308]
    let v100: struct32;  // [bp-0x2f8], Other Possible Types: u128
    let v101: u128;  // [bp-0x2f8]
    let v103: u64;  // [bp-0x2e8]
    let v104: u64;  // [bp-0x2e8]
    let v105: u128;  // [bp-0x2e8]
    let v106: u32;  // [bp-0x2e7]
    let v107: struct640;  // [bp-0x2e4]
    let v109: u128;  // [bp-0x2d8]
    let v110: u128;  // [bp-0x2c8]
    let v112: iNone;  // [bp-0x2b0]
    let v113: u128;  // [bp-0x2a0]
    let v114: iNone;  // [bp-0x290]
    let v115: iNone;  // [bp-0x280]
    let v116: iNone;  // [bp-0x270]
    let v117: iNone;  // [bp-0x260]
    let v118: struct640;  // [bp-0x228]
    let v119: u128;  // [bp-0x228]
    let v120: iNone;  // [bp-0x218], Other Possible Types: u64
    let v121: iNone;  // [bp-0x208]
    let v122: iNone;  // [bp-0x1f8]
    let v123: struct640;  // [bp-0x1e8], Other Possible Types: u8
    let v124: struct640;  // [bp-0x1e8]
    let v125: u128;  // [bp-0x1e8]
    let v126: u128;  // [bp-0x1d8]
    let v127: struct640;  // [bp-0x1d0]
    let v139: iNone;  // [bp-0x168]
    let v140: u128;  // [bp-0x158]
    let v141: iNone;  // [bp-0x148]
    let v142: iNone;  // [bp-0x138]
    let v153: alloc::string::String;  // [bp-0x90]
    let v154: struct640;  // [bp-0x80]
    let v155: u128;  // [bp-0x78]
    let v156: iNone;  // [bp-0x68]
    let v157: iNone;  // [bp-0x58]
    let v158: iNone;  // [bp-0x48]
    let v159: u64;  // [bp-0x38]
    let v161: struct16;  // al
    let v162: u32;  // r13d
    let v163: u64;  // rbp
    let v164: u128;  // xmm0
    let v165: iNone;  // xmm1
    let v166: u128;  // xmm2
    let v167: iNone;  // xmm3
    let v168: iNone;  // xmm4
    let v169: iNone;  // xmm5
    let v170: struct32;  // al
    let v171: u256;  // ymm0
    let v172: iNone;  // xmm1
    let v173: iNone;  // xmm2
    let v174: iNone;  // xmm3
    let v175: struct16;  // cl
    let v176: Result<struct40, struct16>;  // ymm0, Other Possible Types: struct24, u256
    let v177: u8;  // al
    let v178: u8;  // al
    let v179: u64;  // rdi
    let v192: core::fmt::Arguments;  // al
    let v248: u64;  // rax
    let v249: iNone;  // xmm0
    let v250: iNone;  // xmm1
    let v251: iNone;  // xmm2
    let v252: iNone;  // xmm3
    let v253: iNone;  // xmm0
    let v254: iNone;  // xmm0
    let v255: u128;  // xmm0
    let v256: u128;  // xmm1
    let v257: iNone;  // xmm0
    let v258: iNone;  // xmm0
    let v259: iNone;  // xmm1
    let v260: iNone;  // xmm2
    let v261: void*;  // rax
    let v262: u32;  // rdx
    let v263: u64;  // rbp
    let v264: iNone;  // xmm0
    let v265: iNone;  // xmm1
    let v266: iNone;  // xmm2
    let v267: iNone;  // xmm3
    let v268: iNone;  // xmm0
    let v269: iNone;  // xmm0
    let v270: iNone;  // xmm0
    let v271: iNone;  // xmm1
    let v272: iNone;  // xmm2
    let v273: void*;  // rax
    let v275: u64;  // rbp
    let v276: iNone;  // xmm0
    let v277: iNone;  // xmm1
    let v278: iNone;  // xmm2
    let v279: iNone;  // xmm3
    let v280: iNone;  // xmm0
    let v281: iNone;  // xmm0
    let v282: iNone;  // xmm0
    let v283: iNone;  // xmm1
    let v284: iNone;  // xmm2
    let v286: iNone;  // xmm0
    let v287: iNone;  // xmm1
    let v288: u128;  // xmm2
    let v289: iNone;  // xmm3
    let v290: iNone;  // xmm4
    let v291: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // ecx
    let v292: i32;  // edx
    let v293: u32;  // edx
    let v294: iNone;  // xmm0
    let v295: iNone;  // xmm1
    let v296: iNone;  // xmm2
    let v297: iNone;  // xmm0
    let v298: iNone;  // xmm1
    let v299: iNone;  // xmm2
    let v300: iNone;  // xmm0
    let v301: u128;  // xmm1
    let v302: iNone;  // xmm2
    let v303: struct9;  // rax
    let v304: iNone;  // xmm0
    let v305: void*;  // rax
    let v306: u64;  // rcx
    let v307: u128;  // xmm0
    let v308: iNone;  // xmm1
    let v309: iNone;  // xmm2
    let v310: iNone;  // xmm3
    let v311: u128;  // xmm4
    let v312: iNone;  // xmm0
    let v313: u128;  // xmm1
    let v314: iNone;  // xmm2
    let v315: iNone;  // xmm0
    let v316: iNone;  // xmm1
    let v317: u128;  // xmm2
    let v318: alloc::string::String;  // xmm3
    let v319: struct32;  // xmm4
    let v320: iNone;  // xmm0
    let v321: iNone;  // xmm1
    let v322: iNone;  // xmm2
    let v342: iNone;  // xmm0
    let v343: struct24;  // xmm1
    let v344: alloc::string::String;  // xmm2
    let v345: struct32;  // xmm0
    let v346: struct24;  // xmm1
    let v347: struct80;  // xmm2
    let v351: iNone;  // [bp-0x447]
    let v352: u24;  // [bp-0x437]
    let v361: struct640;  // [bp-0x2e8]
    let v362: u64;  // [bp-0x2d0]
    let v364: struct24;  // [bp-0x228], Other Possible Types: struct640
    let v365: u128;  // [bp-0x220]

    v70 = 0;
    v73 = 8;
    v74 = 0;
    v25 = just::parser::Parser::accept(a1, 11);
    v161 = v25.field_72;
    if v161 != 37 {
        v103 = v25.field_64;
        v342 = v25.field_0;
        v343 = v25.field_16;
        v344 = v25.field_32;
        v100 = v25.field_48;
        v97 = v344;
        v94 = v343;
        *(&v83 as void*) = v342;
        v345 = v83;
        v346 = *(&v94.field_0 as &i128);
        v347 = *(&v97.vec.buf.inner.cap as &i128);
        return struct96 {
            field_0: 0x8000000000000000
            field_8: v345
            field_24: v346
            field_40: v347
            field_56: v100
            field_72: v103
            field_80: v161
            field_81: v50
            field_84: <UNKNOWN>
        };
    }
    loop {
        v39 = just::parser::Parser::parse_attributes(a1);
        if v39.field_0 as i32 == 1 {
            v286 = *((&v25 as &char + 72) as &i128);
            *(&v103 as void*) = v286;
            v287 = *((&v25 as &char + 8) as &i128);
            v288 = *((&v25 as &char + 24) as &i128);
            v289 = *((&v25 as &char + 40) as &i128);
            v290 = *((&v25 as &char + 56) as &i128);
            *(&v100 as void*) = v290;
            *(&v97 as void*) = v289;
            v94 = v288;
            *(&v83 as void*) = v287;
            a0[72] = v286;
            a0[56] = v290;
            a0[40] = v289;
            *(&a0[24] as &u128) = v288;
            a0[8] = v287;
        }
        v164 = *(&v52 as &i128);
        v109 = v164;
        v165 = *(&v25.field_72 as &i128);
        *(&v105 as void*) = v165;
        v166 = *((&v25.field_0 as &char + 8) as &i128);
        v167 = *((&v25.field_16 as &char + 8) as &i128);
        v168 = *((&v25 as &char + 40) as &i128);
        v169 = *((&v25 as &char + 56) as &i128);
        *(&v100 as void*) = v169;
        v119 = v166;
        v120 = v167;
        v121 = v168;
        v122 = v169;
        *(&v125 as void*) = v165;
        v126 = v164;
        v27 = just::parser::Parser::next(a1);
        v170 = *((&v27.field_64 as &char + 8) as &i8);
        v171 = (v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v164) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27.field_0;
        v172 = v27.field_16;
        v173 = v27.field_32;
        v174 = v27.field_48;
        v84 = v27.field_0;
        *(&v95 as void*) = v172;
        *(&v98 as void*) = v173;
        *(&v101 as void*) = v174;
        v104 = v27.field_64;
        if v170 != 37 {
            v291 = *((&v27 as &char + 73) as &i32);
            *(&a0[84] as &u32) = v50;
        }
        v155 = v84;
        v156 = v95;
        v157 = v98;
        v158 = v101;
        v159 = v104;
        v40 = just::parser::Parser::accept(a1, 16);
        v175 = v40.field_72;
        v176 = (v171 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40.field_0;
        v139 = v40.field_0;
        v140 = v40.field_16;
        v141 = v40.field_32;
        v142 = v40.field_48;
        v177 = v40.field_64;
        v68 = *(&v352 as &i32);
        v69 = v49;
        if v175 != 37 {
            v292 = *(&(&v40.field_72)[1] as &i32);
            *(&a0[84] as &u32) = v50;
            *(&a0[81] as &unsigned int) = v292;
            a0[56] = v142;
            a0[40] = v141;
            *(&a0[24] as &u128) = v140;
            a0[8] = v139;
            v293 = v68;
            *(&a0[76] as &u32) = v69;
            *(&a0[73] as &u32) = v293;
            *(&a0[72] as &u8) = v177;
            goto LABEL_6797fc;
        }
        if v177 == 37 {
            break;
        }
        v176 = v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v139 as u256;
        *(&v100 as void*) = v142;
        *(&v97 as void*) = v141;
        v94 = v140;
        *(&v88 as void*) = v139;
        v361 = v177;
        v107 = v69;
        v106 = v68;
        v35 = struct88 {
            field_0: 9223372036854775810
            field_8: core::str::<impl str>::trim_end_matches(just::token::Token::lexeme(&v88 as u704), v262)
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
            field_72: <UNKNOWN>
        };
        v72 = alloc::vec::Vec<T,A>::push(&v35, "src/parser.rs");
        v25 = just::parser::Parser::expect_eol(a1);
        v192 = v25.field_72;
        if v192 != 37 {
            *(&a0[72] as &i64) = *((&v25 as &char + 64) as &i64);
            v300 = v25 as i128;
            v301 = *((&v25 as &char + 16) as &i128);
            v302 = *((&v25 as &char + 32) as &i128);
            *(&a0[56] as &i128) = *((&v25 as &char + 48) as &i128);
            a0[40] = v302;
            *(&a0[24] as &u128) = v301;
            a0[8] = v300;
            *(&a0[81] as &i32) = *((&v25 as &char + 73) as &i32);
            *(&a0[84] as &u32) = v50;
        }
LABEL_67844f:
        if v123 != 37 {
            goto LABEL_67970e;
        }
    }
    v25 = just::parser::Parser::accepted(a1, 20);
    v178 = v25.field_0;
    v175 = v25.field_68 as i8;
    if &v25 as u8 != "%" {
LABEL_6797a5:
        *(&a0[72] as &i64) = *((&v25 as &char + 64) as &i64);
        v297 = *((&v25 as &char + 1) as &i128);
        v298 = *((&v25 as &char + 17) as &i128);
        v299 = *((&v25 as &char + 33) as &i128);
        *(&a0[57] as &i128) = v351 as i128;
        a0[41] = v299;
        a0[25] = v298;
        a0[9] = v297;
        *(&a0[81] as &i32) = *((&v25 as &char + 73) as &i32);
        *(&a0[84] as &u32) = v50;
        *(&a0[8] as &u8) = v178;
LABEL_6797fc:
        *(&a0[80] as &struct16) = v175;
    }
    v163 = v163 & -0x100 | 1;
    if (v25.field_0 as i8 & 1) {
        goto LABEL_67844f;
    }
    v25 = just::parser::Parser::accepted(a1, 19);
    v178 = v25.field_0;
    v175 = v25.field_68 as i8;
    if v175 != 37 {
        goto LABEL_6797a5;
    }
    if (v178 & 1) {
        if *((a1 + 32) as &i64) == *((a1 + 88) as &i64) {
            v9 = 0;
            *(&v5 as &i128) = *(&v71.field_0 as &i128);
            if *((a1 + 80) as &i64) {
                v36 = <T as alloc::string::SpecToString>::spec_to_string(*((a1 + 80) as &i64));
                v303 = v36.field_0;
                v90 = *(&v41 as &i128);
                if v303 != 0x8000000000000000 {
                    v365 = v90;
                    v118 = v303;
                    goto LABEL_679b26;
                }
            }
        } else {
            v364 = *((a1 + 32) as &i64) - *((a1 + 88) as &i64);
            v153 = format!("Parse completed with {} unparsed tokens", &v364);
            v44 = v154;
            v42 = *(&v153.vec.buf.inner.cap as &i128);
            v37 = 9223372036854775848;
            v89 = just::parser::Parser::error(a1, &v37);
            v307 = v89.field_8;
            v308 = v89.field_24;
            v309 = v89.field_40;
            v310 = v89.field_56;
            v26 = v307;
            *(&v43 as void*) = v308;
            *(&v45 as void*) = v309;
            *(&v47 as void*) = v310;
            v311 = *(&v89.field_72 as &i128);
            v48 = v311;
            return struct88 {
                field_0: 0x8000000000000000
                field_8: v307
                field_24: v308
                field_40: v309
                field_56: v310
                field_72: v311
            };
        }
    }
    if just::parser::Parser::next_is(a1, 24) {
        v179 = just::token::Token::lexeme(&v155);
        just::keyword::Keyword::from_lexeme(v179, v262);
        match (just::keyword::Keyword::from_lexeme(v179, v262) & 255) {
            _ => {
                if just::parser::Parser::next_are(a1, &g_4715ec, 2) {
                    v124 = 37;
                    if v123 == 37 {
                        v75 = 0;
                        v81 = 0;
                        v75 = v76;
                        v81 = v80;
                    } else {
                        v81 = v127;
                        v176 = v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v125 as &char + 8) as &i128);
                        v75 = *((&v125 as &char + 8) as &i128);
                        v81 = v80;
                    }
                    just::parser::Parser::parse_assignment(&v88, a1, 0, &v75);
                    v248 = v84;
                    v249 = *((&v84 as &char + 8) as &i128);
                    v250 = *((&v95 as &char + 8) as &i128);
                    v251 = *((&v98 as &char + 8) as &i128);
                    v252 = *((&v101 as &char + 8) as &i128);
                    v1 = v249;
                    v8 = v250;
                    v12 = v251;
                    v17 = v252;
                    v253 = *((&v105 as &char + 8) as &i128);
                    *(&v21 as &i128) = *((&v105 as &char + 8) as &i128);
                    if v248 == 18 {
                        *(&a0[72] as &i128) = v21 as i128;
                        v320 = v1 as i128;
                        v321 = v8 as i128;
                        v322 = v12 as i128;
                        *(&a0[56] as &i128) = v17 as i128;
                        a0[40] = v322;
                        a0[24] = v321;
                        a0[8] = v320;
                    }
                    v67 = v117 as i64;
                    v65 = v116;
                    v63 = v115;
                    v254 = v114;
                    v62 = v254;
                    v255 = v92.field_0;
                    v256 = v110;
                    v60 = v113;
                    v57 = v112;
                    v55 = v256;
                    v53 = v255;
                    v257 = v21 as i128;
                    v258 = v1 as i128;
                    v176 = (((((((v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v249 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v253 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v116 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v115 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v254 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v255) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v257 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v258 as u256;
                    v259 = v8 as i128;
                    v260 = v12 as i128;
                    v25 = struct88 {
                        field_0: 9223372036854775809
                        field_8: v248
                        field_24: <UNKNOWN>
                        field_40: <UNKNOWN>
                        field_56: <UNKNOWN>
                        field_72: <UNKNOWN>
                    };
                    v71 = alloc::vec::Vec<T,A>::push(&v25, "src/parser.rs");
                    v123 = v124;
                    break;
                } else {
                    v261 = just::parser::Parser::parse_ast::pop_doc_comment(&v71, v162);
                    v124 = 37;
                    if v123 != 37 {
                        v81 = v127;
                        v176 = v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v125 as &char + 8) as &i128);
                        v75 = *((&v125 as &char + 8) as &i128);
                    }
                    vvar_3309{stack -856} = struct32 OrderedDict([(0, 𝜙@128b [((6786464, None), vvar_3134{stack -856}), ((6786814, None), vvar_3141{stack -856})]), (16, 𝜙@128b [((6786464, None), vvar_3137{stack -840}), ((6786814, None), vvar_3140{stack -840})])])
                    v33 = just::parser::Parser::parse_recipe(a1, &v77, v261, v262, 0);
                    v263 = v33.field_0;
                    v264 = v33.field_8;
                    v265 = v33.field_24;
                    v266 = v33.field_40;
                    v267 = v33.field_56;
                    v4 = v264;
                    v10 = v265;
                    v14 = v266;
                    v18 = v267;
                    v268 = *(&v25.field_68 as &i128);
                    *(&v22 as &i128) = *(&v25.field_68 as &i128);
                    if v263 == 0x8000000000000000 {
LABEL_67993d:
                        *(&a0[72] as &i128) = v22 as i128;
                        v312 = v4 as i128;
                        v313 = v10 as i128;
                        v314 = v14 as i128;
                        *(&a0[56] as &i128) = v18 as i128;
                        a0[40] = v314;
                        *(&a0[24] as &u128) = v313;
                        a0[8] = v312;
                    }
                    memcpy(&v362, &v52, 168);
                    v269 = v22 as i128;
                    v270 = v4 as i128;
                    v176 = (((v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v264 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v268 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v269 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v270 as u256;
                    v271 = v10 as i128;
                    v272 = v14 as i128;
                    v86 = struct88 {
                        field_0: v263
                        field_8: v270
                        field_24: v271
                        field_40: v272
                        field_56: v18 as i128
                        field_72: v269
                    };
                    v71 = alloc::vec::Vec<T,A>::push(&v86, "src/parser.rs");
                    v123 = v124;
                    v81 = v80;
                    break;
                }
            }
        }
    } else {
        v25 = just::parser::Parser::accepted(a1, 2);
        v178 = v25.field_0;
        v175 = v25.field_68 as i8;
        if v175 != 37 {
            goto LABEL_6797a5;
        }
        if (v178 & 1) {
            v273 = just::parser::Parser::parse_ast::pop_doc_comment(&v71, v162);
            v124 = 37;
            if v123 != 37 {
                v81 = v127;
                v176 = v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v125 as &char + 8) as &i128);
                v75 = *((&v125 as &char + 8) as &i128);
            }
            vvar_3308{stack -856} = struct32 OrderedDict([(0, 𝜙@128b [((6784201, None), vvar_3159{stack -856}), ((6784227, None), vvar_3166{stack -856})]), (16, 𝜙@128b [((6784201, None), vvar_3162{stack -840}), ((6784227, None), vvar_3165{stack -840})])])
            v34 = just::parser::Parser::parse_recipe(a1, &v78, v273, v262, 1);
            v275 = v34.field_0;
            v276 = v34.field_8;
            v277 = v34.field_24;
            v278 = v34.field_40;
            v279 = v34.field_56;
            v4 = v276;
            v10 = v277;
            v14 = v278;
            v18 = v279;
            v280 = *(&v25.field_68 as &i128);
            *(&v22 as &i128) = *(&v25.field_68 as &i128);
            if v275 == 0x8000000000000000 {
                goto LABEL_67993d;
            }
            memcpy(&v362, &v52, 168);
            v281 = v22 as i128;
            v282 = v4 as i128;
            v176 = (((v176 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v276 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v280 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v281 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v282 as u256;
            v283 = v10 as i128;
            v284 = v14 as i128;
            v88 = struct88 {
                field_0: v275
                field_8: v282
                field_24: v283
                field_40: v284
                field_56: v18 as i128
                field_72: v281
            };
            v71 = alloc::vec::Vec<T,A>::push(&v88, "src/parser.rs");
            v123 = v124;
            v81 = v80;
        } else {
            v38 = just::parser::Parser::unexpected_token(a1);
            v315 = *(&v38.field_72 as &i128);
            *(&v103 as void*) = v315;
            v316 = v38.field_8;
            v317 = v38.field_24;
            v318 = v38.field_40;
            v319 = v38.field_56;
            v100 = v319;
            v97 = v318;
            v94 = v317;
            *(&v83 as void*) = v316;
        }
    }
    v82 = v81;
    v163 = v162;
    if v123 == 37 {
        continue;
    }
LABEL_67970e:
    v26 = struct24 {
        field_0: 9223372036854775844
        field_8: v127
        field_16: <UNKNOWN>
    };
    v89 = just::token::Token::error(&v119, &v26);
    v294 = v89.field_0;
    v295 = v89.field_16;
    v296 = v89.field_32;
    return struct88 {
        field_0: 0x8000000000000000
        field_8: v294
        field_24: v295
        field_40: v296
        field_56: v89.field_48
        field_72: v89.field_64
    };
LABEL_679b26:
    v94 = *((a1 + 120) as &i64);
    v91 = *((a1 + 104) as &i128);
    v37 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((a1 + 40) as &i64), *((a1 + 48) as &i64));
    v28 = v5 as i128;
    v43 = v9;
    v44 = *(&v364.field_0 as &i128);
    v46 = v120;
    v304 = v28;
    v305 = v43;
    v306 = v44;
    return struct120 {
        field_0: v304
        field_16: v305
        field_24: v306
        field_32: *((&v44 as &char + 8) as &i64)
        field_40: v46
        field_48: 0
        field_56: 1
        field_64: 0
        field_72: v28
        field_88: v43
        field_96: v91
        field_112: v94
    };
}
