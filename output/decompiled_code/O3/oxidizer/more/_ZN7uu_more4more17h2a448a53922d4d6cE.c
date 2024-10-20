fn uu_more::more(a0: &u8, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v1: i64;  // [sp-0x2a0]
    let v2: i64;  // [bp-0x298]
    let v3: i64;  // [sp-0x290]
    let v4: i64;  // [sp-0x288]
    let v5: i64;  // [bp-0x280]
    let v6: i64;  // [sp-0x278]
    let v7: i64;  // [sp-0x270]
    let v8: i64;  // [sp-0x268], Other Possible Types: struct16, struct24
    let v9: i64;  // [sp-0x260]
    let v10: i64;  // [sp-0x258]
    let v11: i32;  // [sp-0x23c]
    let v12: i128;  // [bp-0x238]
    let v13: Enum;  // [sp-0x228], Other Possible Types: i128
    let v14: i64;  // [sp-0x220]
    let v15: i64;  // [sp-0x218]
    let v16: i64;  // [sp-0x210]
    let v17: i64;  // [sp-0x208]
    let v18: i64;  // [sp-0x200]
    let v19: i64;  // [sp-0x1f8]
    let v20: i64;  // [sp-0x1f0]
    let v21: i16;  // [sp-0x1e8]
    let v22: i16;  // [sp-0x1e6]
    let v23: i8;  // [bp-0x1d0]
    let v24: i64;  // [sp-0x1c8]
    let v25: i64;  // [sp-0x1c0], Other Possible Types: Enum, struct59, struct10
    let v26: i64;  // [sp-0x1b8]
    let v27: i64;  // [sp-0x1b0]
    let v28: i64;  // [sp-0x1a8]
    let v29: i64;  // [sp-0x1a0]
    let v30: i64;  // [sp-0x198]
    let v31: i64;  // [sp-0x190]
    let v32: i8;  // [sp-0x188]
    let v33: i16;  // [sp-0x180]
    let v34: i8;  // [bp-0x170]
    let v35: i8;  // [bp-0x160]
    let v36: i64;  // [sp-0x158]
    let v37: i32;  // [sp-0x14c]
    let v38: i128;  // [bp-0x148]
    let v39: i128;  // [bp-0x138]
    let v40: i64;  // [sp-0x118], Other Possible Types: Enum, struct16
    let v41: i64;  // [sp-0x110]
    let v42: i64;  // [bp-0x108]
    let v43: i128;  // [sp-0xf8]
    let v44: i128;  // [sp-0xe8]
    let v45: i128;  // [sp-0xd8]
    let v46: i128;  // [sp-0xc8]
    let v47: i64;  // [sp-0xb8]
    let v48: i128;  // [bp-0xa8]
    let v49: i128;  // [bp-0x98]
    let v50: i64;  // [sp-0x80]
    let v51: i64;  // [bp-0x78]
    let v53: i64;  // [sp-0x60]
    let v54: i128;  // [sp-0x58]
    let v55: i128;  // [sp-0x48]
    let v56: i64;  // [bp+0x8]
    let v57: i8;  // [bp+0x10]
    let v58: i8;  // [bp+0x18]
    let v59: i32;  // ebp
    let v61: i64;  // rax
    let v62: i64;  // r15
    let v63: i64;  // r13
    let v64: i64;  // rax
    let v65: i64;  // r13
    let v70: i64;  // r15
    let v71: i64;  // r12
    let v72: i64;  // r12
    let v73: i64;  // cc_ndep
    let v74: i256;  // ymm0
    let v75: i64;  // rax
    let v76: i64;  // rbx
    let v77: i64;  // rax
    let v79: i64;  // r13
    let v80: i64;  // r13
    let v85: i64;  // r13
    let v86: i64;  // r15
    let v88: i64;  // r15
    let v89: i64;  // r13
    let v92: i64;  // rax
    let v93: i64;  // cc_ndep
    let v119: i64;  // rcx
    let v222: i64;  // r15
    let v223: i64;  // rbx
    let v225: i64;  // rax
    let v226: i64;  // rcx
    let v235: i128;  // xmm0
    let v236: i64;  // r13
    let v237: i64;  // r15
    let v238: i64;  // r15
    let v239: i32;  // rdx
    let v240: i128;  // xmm0
    let v241: i256;  // ymm0
    let v242: i32;  // esi
    let v244: i64;  // rdx
    let v245: i64;  // rcx
    let v246: i64;  // r14
    let v247: i8;  // bl
    let v248: i64;  // r15
    let v249: i64;  // rcx
    let v250: i64;  // rax
    let v251: i64;  // rdx
    let v252: i64;  // rdx
    let v253: i64;  // r8
    let v254: i64;  // r8
    let v255: i64;  // cc_ndep
    let v256: i256;  // ymm2
    let v257: i256;  // ymm3
    let v258: i256;  // ymm8
    let v259: i256;  // ymm6
    let v260: i256;  // ymm4
    let v261: i256;  // ymm1
    let v262: i256;  // ymm9
    let v263: i256;  // ymm7
    let v264: i256;  // ymm5
    let v265: i64;  // rbp
    let v266: i64;  // r13
    let v267: i64;  // rdx
    let v268: i64;  // rax
    let v269: i64;  // rcx
    let v270: i64;  // rax
    let v271: i64;  // rax
    let v272: i64;  // rdx
    let v273: i64;  // cc_op
    let v274: i64;  // cc_dep2
    let v275: i8;  // cc_dep1
    let v276: i64;  // rdx
    let v277: i64;  // rdi
    let v278: i64;  // rcx
    let v279: i64;  // r12
    let v280: i128;  // xmm0
    let v281: i128;  // xmm0
    let v282: i128;  // xmm0
    let v283: i128;  // xmm2
    let v284: i256;  // ymm2
    let v285: i128;  // xmm0
    let v286: i128;  // xmm0
    let v287: i128;  // xmm0
    let v288: i256;  // ymm0
    let v289: i128;  // xmm3
    let v290: i256;  // ymm3
    let v291: i64;  // rbp
    let v292: i64;  // rdx
    let v293: i64;  // rbx
    let v294: i64;  // rdx
    let v296: i64;  // rdx
    let v297: i64;  // r15
    let v298: i64;  // r12
    let v300: i64;  // r8
    let v301: i64;  // rbx
    let v302: i64;  // rbx
    let v304: i128;  // xmm0
    let v305: i128;  // xmm8
    let v306: i256;  // ymm8
    let v307: i128;  // xmm6
    let v308: i256;  // ymm6
    let v309: i128;  // xmm4
    let v310: i256;  // ymm4
    let v311: i128;  // xmm0
    let v312: i128;  // xmm1
    let v313: i128;  // xmm9
    let v314: i256;  // ymm9
    let v315: i128;  // xmm7
    let v316: i256;  // ymm7
    let v317: i128;  // xmm5
    let v318: i256;  // ymm5
    let v319: i128;  // xmm1
    let v321: i64;  // rcx
    let v322: i64;  // rax
    let v323: i128;  // xmm8
    let v324: i128;  // xmm9
    let v326: i64;  // rcx
    let v327: i64;  // rax
    let v328: i128;  // xmm6
    let v329: i128;  // xmm7
    let v331: i64;  // rcx
    let v332: i64;  // rax
    let v334: i128;  // xmm4
    let v335: i128;  // xmm5
    let v337: i64;  // rcx
    let v338: i64;  // rax
    let v339: i64;  // rcx
    let v340: i8;  // al
    let v341: i64;  // rdi
    let v343: i64;  // rdi
    let v344: i128;  // xmm0
    let v345: i128;  // xmm1
    let v346: i128;  // xmm0
    let v347: i128;  // xmm1
    let v349: i64;  // r13
    let v350: i128;  // xmm0
    let v351: i128;  // xmm1
    let v352: i128;  // xmm0
    let v353: i128;  // xmm1
    let v356: i64;  // r8
    let v357: i64;  // rax
    let v358: i64;  // rsi
    let v359: i64;  // rax
    let v360: i64;  // rax
    let v361: i128;  // xmm0
    let v362: i64;  // rax
    let v363: i64;  // rax
    let v364: i64;  // r14
    let v365: i64;  // rbx
    let v366: i128;  // xmm0
    let v367: i128;  // xmm0
    let v368: i128;  // xmm0
    let v369: i64;  // r15
    let v371: i64;  // rbp
    let v372: i64;  // rbp
    let v373: i64;  // rbp
    let v374: i64;  // r13
    let v375: i64;  // r15
    let v376: i64;  // rbx
    let v377: i64;  // r12
    let v378: i64;  // r15
    let v379: i64;  // rbx
    let v380: i64;  // rax
    let v381: i64;  // rax
    let v382: i128;  // xmm0
    let v383: i64;  // rcx
    let v384: i64;  // cc_ndep
    let v385: i64;  // rax
    let v386: i64;  // rax
    let v387: i64;  // rax
    let v388: i128;  // xmm0
    let v389: i64;  // rbp
    let v390: i64;  // r12
    let v391: i64;  // r12
    let v393: i64;  // rax
    let v394: i32;  // eax
    let v395: i32;  // ebx
    let v397: i64;  // rax
    let v398: i64;  // rax
    let v399: i64;  // rcx
    let v401: i64;  // rax
    let v402: i64;  // rsi
    let v403: i64;  // rax
    let v404: i64;  // rsi
    let v405: i64;  // rdx
    let v406: i64;  // rsi
    let v407: i64;  // rdx
    let v408: i64;  // rdx
    let v409: i64;  // rax
    let v410: i64;  // rcx
    let v411: i64;  // rax
    let v412: i64;  // cc_dep2
    let v413: i64;  // rdi
    let v414: i64;  // rax
    let v415: i64;  // rdi
    let v416: i64;  // rdi
    let v417: i64;  // cc_ndep
    let v418: i64;  // rax
    let v419: i64;  // rdi
    let v420: i64;  // rdx
    let v421: i64;  // rdi
    let v422: i64;  // r8
    let v423: i64;  // rax
    let v425: i64;  // rsi
    let v426: i64;  // rcx
    let v427: i64;  // rax
    let v428: i64;  // rax
    let v429: i64;  // r9
    let v431: i64;  // r8
    let v432: i64;  // rax
    let v433: i64;  // rax
    let v434: i64;  // rax
    let v435: i64;  // rax
    let v436: i64;  // rax
    let v437: i64;  // rax
    let v438: i64;  // rax
    let v439: i128;  // xmm0
    let v440: i64;  // [sp-0x248]

    v50 = a4;
    v37 = a3;
    v25 = crossterm::terminal::sys::unix::window_size();
    if !v25 {
        v11 = *((&v25 as &char + 2) as &i16);
        v59 = *((&v25 as &char + 4) as &i16);
    } else {
        v11 = v239;
        if !(crossterm::terminal::sys::unix::tput_value(&anon.00d0b0c54d8cc510b04eb2ae7f7d1460.4.llvm.14242926303983770862, 4) as i32 == 1) || !(crossterm::terminal::sys::unix::tput_value(&anon.00d0b0c54d8cc510b04eb2ae7f7d1460.5.llvm.14242926303983770862, 5) as i16 == 1) {
            v25 = std::sys::pal::unix::os::errno() * 0x100000000 | 2;
            core::result::unwrap_failed(); /* do not return */
        }
    }
    v61 = v58;
    if *((v61 + 32) as &i16) {
        v11 = *((v61 + 34) as &i16);
    }
    *(&v25.field_8 as &Enum) = Enum {
        field_32: 0
    };
    v26 = a1;
    v27 = a0;
    v28 = a1;
    v29 = 0;
    v30 = a1;
    v31 = 42949672970;
    v32 = 1;
    v33 = 0;
    if !core::str::iter::SplitInternal<P>::next_inclusive(&v25) {
        v64 = 8;
        v65 = 0;
    } else {
        v62 = 0;
        v63 = 0;
        do {
            v63 -= 1;
            v62 += 24;
        } while (core::str::iter::SplitInternal<P>::next_inclusive(&v25));
        if !v63 {
            v65 = 0;
            v64 = 8;
        } else {
            v65 = -(v63);
            v64 = __rust_alloc(v62, 8);
        }
    }
    v36 = v59;
    v8 = v65;
    v9 = v64;
    v10 = 0;
    v25 = 0;
    v26 = a1;
    v27 = a0;
    v28 = a1;
    v29 = 0;
    v30 = a1;
    v31 = 42949672970;
    v32 = 1;
    v33 = 0;
    v70 = 0;
    loop {
        v72 = v71;
        v75 = core::str::iter::SplitInternal<P>::next_inclusive(&v25);
        if !v75 {
            v240 = v8;
            vvar_79{reg 224} = ((vvar_60{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3227{reg 224}))
            v13 = v240;
            v242 = (amd64g_calculate_condition(2, 6, (v11 & 65535) as u32 as u64, 1, v73) as char ? (v11 | -0x10000 | v11 - 1) & 4294967295 & 4294967295 : 0);
            v244 = v58;
            v245 = *((v244 + 38) as &i16);
            v16 = *((v244 + 24) as &i64);
            v11 = v242;
            v21 = v11;
            v15 = v70;
            v17 = v56;
            v18 = v57;
            v19 = v70;
            v22 = v245;
            v20 = 0;
            if *(v244 as &i64) == 0x8000000000000000 {
LABEL_4a2736:
                if !v37 {
                    goto LABEL_4a2a39;
                }
            } else {
                v246 = v14;
                v8 = <alloc::string::String as core::clone::Clone>::clone(v58);
                v6 = v10;
                v247 = !v70 | !v6;
                if v70 && v6 {
                    v440 = v246 + v70 * 24;
                    v248 = v9;
                    v249 = v6;
                    v7 = v249 - 1;
                    v250 = 0;
                    v251 = v249;
                    v252 = v251 - 4;
                    if v251 < 4 {
                        v252 = 0;
                    }
                    v4 = v252;
                    v24 = v249 + 15;
                    v36 = v248 + 1;
                    v53 = v249 + 63;
                    v3 = v249 + 127;
                    v245 = v249 + 31;
                    v5 = v245;
                    loop {
                        v245 = v250;
                        if v246 == v440 && v8 {
                            goto LABEL_4a2682;
                        }
                        v265 = *((v246 + 8) as &i64);
                        v266 = *((v246 + 16) as &i64);
                        v267 = v6;
                        if v267 >= v266 {
                            if !(v267 == v266) {
                                goto LABEL_4a2040;
                            }
                            v273 = 19;
                            v270 = bcmp(v248, v265, v267) as i64 & 4294967295 & 4294967295;
                            v274 = 0;
                            goto LABEL_4a21ea;
                        }
                        if v267 == 1 {
                            v268 = *(v248 as &i8);
                            if v266 > 15 {
                                v270 = core::slice::memchr::memchr_aligned(v268 & 4294967295, v265);
                                v273 = 8;
                                v274 = 1;
                            } else {
                                v269 = 0;
                                do {
                                    v275 = *((v265 + v269) as &i8);
                                    if *((v265 + v269) as &i8) == v268 {
                                        goto LABEL_4a265d;
                                    }
                                } while ((v255 = (v275 < v268 as i8) as u8 as u64, v269 += 1, v266 != v269));
LABEL_4a2040:
                                v254 = 0;
                                goto LABEL_4a2043;
                            }
LABEL_4a21ea:
                            v254 = v253 | -0x100 | amd64g_calculate_condition(4, v273, v270, v274, v255) & 255;
                            goto LABEL_4a2043;
                        }
                        if v267 >= 33 {
LABEL_4a2198:
                            v25 = core::str::pattern::StrSearcher::new(v265, v266, v248, v6);
                            v40 = <core::str::pattern::StrSearcher as core::str::pattern::Searcher>::next_match(&v25);
                            v254 = v40;
                            goto LABEL_4a2043;
                        }
                        v271 = *(v248 as &i8);
                        v272 = v6;
                        if v272 == 2 {
                            if v266 >= 17 {
                                v278 = *(v36 as &i8);
                                v277 = 1;
                                continue;
                            }
                            goto LABEL_4a2151;
                        } else {
                            v276 = v272;
                            if !(v4 < v276) {
                                goto LABEL_4a2198;
                            }
                            v277 = v276 - 1;
                            if v277 >= v6 {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v278 = *((v248 + v276 - 1) as &i8);
                            if v278 == v271 {
                                continue;
                            }
                            if v24 > v266 {
LABEL_4a2151:
                                v23 = v247;
                                v6 = v6;
                                do {
                                    v291 = v265;
                                    v292 = v6;
                                    v293 = v266;
                                } while (v293 >= v292 && (v255 = (v293 < v292) as u8 as u64, v266 = v293 - 1, v296 = v6, bcmp(v291, v248, v292) as i64 as i32));
                                v254 = v254 | -0x100 | v294 <= v293;
                                goto LABEL_4a2043;
                            } else {
                                v23 = v247;
                                v248 = v248;
                                vvar_3485{reg 224} = Conv(64->128, (vvar_3429{reg 16} & 0xffffffff<64>))
                                v281 = BinaryOp InterleaveLOV;
                                v282 = v281 >> 64 CONCAT v281 CONCAT v281 CONCAT v281 CONCAT v281;
                                v283 = v282 CONCAT v282 CONCAT v282 CONCAT v282;
                                vvar_221{reg 288} = ((vvar_221{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3491{reg 288}))
                                vvar_3494{reg 224} = Conv(64->128, (vvar_594{reg 24} & 0xffffffff<64>))
                                v286 = BinaryOp InterleaveLOV;
                                v287 = v286 >> 64 CONCAT v286 CONCAT v286 CONCAT v286 CONCAT v286;
                                vvar_671{reg 224} = ((((((((((((vvar_79{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3485{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3487{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3489{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3494{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3496{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3498{reg 224}))
                                v289 = v287 CONCAT v287 CONCAT v287 CONCAT v287;
                                vvar_222{reg 320} = ((vvar_222{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3500{reg 320}))
                                v25 = v265;
                                v26 = v266;
                                v27 = v36;
                                v28 = v7;
                                v2 = v277;
                                v49 = v283;
                                v12 = v289;
                                if vvar_5289 >= v266 {
                                    v300 = 0;
                                    v301 = 0;
                                } else {
                                    v297 = v265 + 48;
                                    v298 = v277 + v265 + 48;
                                    v300 = 0;
                                    v3 = v3;
                                    loop {
                                        v302 = 0;
                                        v304 = *((v297 + v302 - 48) as &i128);
                                        v305 = *((v297 + v302 - 32) as &i128);
                                        vvar_744{reg 480} = ((vvar_674{reg 480} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3549{reg 480}))
                                        v307 = *((v297 + v302 - 16) as &i128);
                                        vvar_745{reg 416} = ((vvar_675{reg 416} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3551{reg 416}))
                                        v309 = *((v297 + v302) as &i128);
                                        vvar_746{reg 352} = ((vvar_676{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3553{reg 352}))
                                        v311 = BinaryOp CmpEQV;
                                        vvar_671{reg 224} = ((((vvar_671{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3547{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3555{reg 224}))
                                        v312 = *((v298 + v302 - 48) as &i128);
                                        v313 = *((v298 + v302 - 32) as &i128);
                                        vvar_747{reg 512} = ((vvar_678{reg 512} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3559{reg 512}))
                                        v315 = *((v298 + v302 - 16) as &i128);
                                        vvar_748{reg 448} = ((vvar_679{reg 448} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3561{reg 448}))
                                        v317 = *((v298 + v302) as &i128);
                                        vvar_749{reg 384} = ((vvar_680{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3563{reg 384}))
                                        v319 = BinaryOp CmpEQV;
                                        vvar_226{reg 256} = ((((((vvar_677{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3557{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3565{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_3565{reg 256} & vvar_3555{reg 224})))
                                        if UnaryOp GetMSBs {
                                            v1 = v300;
                                            v39 = v309;
                                            v38 = v317;
                                            v51 = v307;
                                            v48 = v315;
                                            v55 = v305;
                                            v54 = v313;
                                            v322 = core::str::pattern::simd_contains::{{closure}}(&v25, v302, UnaryOp GetMSBs, v300 & 4294967295 & 1);
                                            vvar_747{reg 512} = ((vvar_747{reg 512} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_5294{stack -88}))
                                            vvar_744{reg 480} = ((vvar_744{reg 480} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_5293{stack -72}))
                                            vvar_748{reg 448} = ((vvar_748{reg 448} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-168, size=16, endness=Iend_LE)))
                                            vvar_745{reg 416} = ((vvar_745{reg 416} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-120, size=16, endness=Iend_LE)))
                                            vvar_749{reg 384} = ((vvar_749{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-328, size=16, endness=Iend_LE)))
                                            vvar_746{reg 352} = ((vvar_746{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-312, size=16, endness=Iend_LE)))
                                            vvar_222{reg 320} = ((vvar_222{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-568, size=16, endness=Iend_LE)))
                                            vvar_221{reg 288} = ((vvar_221{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-152, size=16, endness=Iend_LE)))
                                            v277 = v2;
                                            v300 = (v322 | -0x100 | (v322 | v1) & 1) & 4294967295;
                                            v321 = v3;
                                        }
                                        v323 = BinaryOp CmpEQV;
                                        vvar_223{reg 480} = ((vvar_744{reg 480} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3608{reg 480}))
                                        v324 = BinaryOp CmpEQV;
                                        vvar_227{reg 512} = ((((vvar_747{reg 512} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3610{reg 512})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_3610{reg 512} & vvar_3608{reg 480})))
                                        if UnaryOp GetMSBs {
                                            v1 = v300;
                                            v39 = v309;
                                            v38 = v317;
                                            v51 = v307;
                                            v48 = v315;
                                            v327 = core::str::pattern::simd_contains::{{closure}}(&v25, v302 + 16, UnaryOp GetMSBs, v300 & 4294967295 & 1);
                                            vvar_748{reg 448} = ((vvar_748{reg 448} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-168, size=16, endness=Iend_LE)))
                                            vvar_745{reg 416} = ((vvar_745{reg 416} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-120, size=16, endness=Iend_LE)))
                                            vvar_749{reg 384} = ((vvar_749{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-328, size=16, endness=Iend_LE)))
                                            vvar_746{reg 352} = ((vvar_746{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-312, size=16, endness=Iend_LE)))
                                            vvar_222{reg 320} = ((vvar_222{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-568, size=16, endness=Iend_LE)))
                                            vvar_221{reg 288} = ((vvar_221{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-152, size=16, endness=Iend_LE)))
                                            v277 = v2;
                                            v300 = (v327 | -0x100 | (v327 | v1) & 1) & 4294967295;
                                            v326 = v3;
                                        }
                                        v328 = BinaryOp CmpEQV;
                                        vvar_224{reg 416} = ((vvar_785{reg 416} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3649{reg 416}))
                                        v329 = BinaryOp CmpEQV;
                                        vvar_228{reg 448} = ((((vvar_787{reg 448} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3651{reg 448})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_3651{reg 448} & vvar_3649{reg 416})))
                                        if UnaryOp GetMSBs {
                                            v1 = v300;
                                            v39 = v309;
                                            v38 = v317;
                                            v332 = core::str::pattern::simd_contains::{{closure}}(&v25, v302 + 32, UnaryOp GetMSBs, v300 & 4294967295 & 1);
                                            vvar_749{reg 384} = ((vvar_749{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-328, size=16, endness=Iend_LE)))
                                            vvar_746{reg 352} = ((vvar_746{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-312, size=16, endness=Iend_LE)))
                                            vvar_222{reg 320} = ((vvar_222{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-568, size=16, endness=Iend_LE)))
                                            vvar_221{reg 288} = ((vvar_221{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-152, size=16, endness=Iend_LE)))
                                            v277 = v2;
                                            v300 = (v332 | -0x100 | (v332 | v1) & 1) & 4294967295;
                                            v331 = v3;
                                        }
                                        v334 = BinaryOp CmpEQV;
                                        vvar_225{reg 352} = ((vvar_837{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3686{reg 352}))
                                        v335 = BinaryOp CmpEQV;
                                        vvar_229{reg 384} = ((((vvar_838{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3688{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_3688{reg 384} & vvar_3686{reg 352})))
                                        if UnaryOp GetMSBs {
                                            v1 = v300;
                                            v338 = core::str::pattern::simd_contains::{{closure}}(&v25, v302 + 48, UnaryOp GetMSBs, v300 & 4294967295 & 1);
                                            vvar_222{reg 320} = ((vvar_222{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-568, size=16, endness=Iend_LE)))
                                            vvar_221{reg 288} = ((vvar_221{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-152, size=16, endness=Iend_LE)))
                                            v277 = v2;
                                            v300 = (v338 | -0x100 | (v338 | v1) & 1) & 4294967295 & 4294967295;
                                            v337 = v3;
                                        }
                                        v339 = v337;
                                        v301 = v302 + 64;
                                        if !(v339 + v302 < v266) || !(!(v300 & 4294967295 & 1)) {
                                            goto LABEL_4a254e;
                                        }
                                    }
                                }
LABEL_4a254e:
                                v340 = v300 & 4294967295 & 1;
                                if v301 + v24 < v266 && !v340 {
                                    do {
                                        v344 = *((v265 + v301) as &i128);
                                        v345 = *((v277 + v265 + v301) as &i128);
                                        v346 = BinaryOp CmpEQV;
                                        vvar_671{reg 224} = ((((vvar_850{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3743{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3747{reg 224}))
                                        v347 = BinaryOp CmpEQV;
                                        vvar_226{reg 256} = ((((((vvar_853{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3745{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3749{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_3749{reg 256} & vvar_3747{reg 224})))
                                        if UnaryOp GetMSBs {
                                            vvar_3766{reg 320} = ((vvar_852{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-568, size=16, endness=Iend_LE)))
                                            vvar_3768{reg 288} = ((vvar_851{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-152, size=16, endness=Iend_LE)))
                                            v343 = v2;
                                            v300 = core::str::pattern::simd_contains::{{closure}}(&v25, v301, UnaryOp GetMSBs, 0) as i32;
                                        }
                                    } while (v5 + v301 < v266 && (v301 += 16, !((v300 & 4294967295) as i8 & 1)));
                                }
                                v349 = v266 - v7;
                                v350 = *((v265 + v349 - 16) as &i128);
                                v351 = *((v341 + v349 - 16 + v265) as &i128);
                                v352 = BinaryOp CmpEQV;
                                vvar_79{reg 224} = ((((vvar_762{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3786{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3790{reg 224}))
                                v353 = BinaryOp CmpEQV;
                                vvar_226{reg 256} = ((((((vvar_765{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3788{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3792{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_3792{reg 256} & vvar_3790{reg 224})))
                                if UnaryOp GetMSBs {
                                    v356 = core::str::pattern::simd_contains::{{closure}}(&v25, v349 - 16, UnaryOp GetMSBs, v340) as i32 | -0x100 | core::str::pattern::simd_contains::{{closure}}(&v25, v349 - 16, UnaryOp GetMSBs, v340) as i32 | v340;
                                }
                                v254 = v356 | -0x100 | v356 & 1;
LABEL_4a2043:
                                v72 = v279;
                                v246 += 24;
                                v245 = v245;
                                v250 = v245 + 1;
                                if v254 {
                                    break;
                                }
                            }
                        }
                    }
                }
LABEL_4a265d:
                if !v247 {
                    v16 = v245;
                    goto LABEL_4a2736;
                }
LABEL_4a2682:
                v357 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, v245);
                if v357 {
LABEL_4a26ce:
                    v25 = 0x8000000000000000;
                    v28 = v357;
                    v359 = __rust_alloc(32, 8);
                    v361 = v25;
                    *((v359 + 16) as &i64) = v27;
                    *(v359 as &i128) = v361;
                    return v359;
                }
                v357 = <std::io::stdio::Stdout as std::io::Write>::flush(a2, v358, v239, v119);
                if !(!v357) || !((v357 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_41f142, 19, v119), !v357)) {
                    goto LABEL_4a26ce;
                }
                v73 = amd64g_calculate_rflags_c(20, v357, 0, v93);
                v21 = v11 - 1;
                if !v37 {
                    goto LABEL_4a2a39;
                }
            }
            v360 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, v245);
            if !(!v360) || !((v360 = <std::io::stdio::Stdout as std::io::Write>::flush(a2, v358, v239, v119), !v360)) {
                v25 = v360;
                core::result::unwrap_failed(); /* do not return */
            }
            v362 = v50;
            v364 = v363;
            v365 = 1;
            if !v362 {
                v362 = 1;
            }
            v50 = v362;
            v8 = 0;
            v9 = 1;
            v10 = 0;
            v25 = core::str::pattern::StrSearcher::new(&g_41f155, 36, &g_41f179, 2);
            v47 = v35;
            v366 = v34;
            v46 = v366;
            v367 = v33;
            v45 = v367;
            v368 = v25;
            vvar_79{reg 224} = ((((((vvar_144{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3957{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3959{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3961{reg 224}))
            v44 = v25;
            v43 = *((&v25 as &char + 32) as &i128);
            v42 = *((&v25 as &char + 16) as &i128);
            v40 = v368;
            v369 = 0;
            loop {
                v372 = v371;
                v10 = v10;
                v25 = <core::str::pattern::StrSearcher as core::str::pattern::Searcher>::next_match(&v40);
                if !v25 {
                    break;
                }
                v373 = v372 + &g_41f155 as &u8;
                v374 = v26 + &g_41f155 as &u8 - v373;
                if v8 - v369 < v374 {
                    v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v369, v374);
                    v375 = v10;
                    v376 = v9;
                }
                memcpy(v376 + v375, v373, v374);
                v10 = v374 + v10;
                if v8 - v10 < v364 {
                    v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v10, v364);
                }
                v365 = v9;
                memcpy(v365 + v10, v50, v364);
                v369 = v10 + v364;
                v10 = v369;
                v371 = v27;
            }
            v377 = 36 - v372;
            if v8 - v369 < v377 {
                v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v369, v377);
                v378 = v10;
                v379 = v9;
            }
            memcpy(v378 + v379, (&g_41f155 as &u8 + v372) as &i64, v377);
            v380 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, v379, v377 + v10, v119);
            if v380 {
                v25 = 0x8000000000000000;
                v28 = v380;
                v381 = __rust_alloc(32, 8);
                v359 = v381;
                v382 = v25;
                *((v381 + 16) as &i128) = *((&v25 as &char + 16) as &i128);
                *(v381 as &i128) = v382;
                if !v8 {
                    return v359;
                }
            } else {
                v21 -= 3;
LABEL_4a2a39:
                v13 = uu_more::Pager::draw(a2, 0x110000, v383);
                v385 = v21;
                if v37 {
                    *((v58 + 24) as &i64) = 0;
                    v385 += 3;
                    v21 = v385;
                }
                v386 = v385 & 4294967295;
                v387 = v386 + v16;
                if __CFADD__(v386, v16) as char {
                    v387 = -1;
                }
                if !v56 && v387 >= v19 {
                    return 0;
                }
                loop {
                    do {
                        v25 = crossterm::event::poll(0, 10000000);
                        if v25 {
                            v40 = v26;
                            core::result::unwrap_failed(); /* do not return */
                        }
                    } while (!*((&v25 as &char + 1) as &i8));
                    v25 = crossterm::event::read(v358);
                    if v25 == 9223372036854775814 {
                        v8 = v26;
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v42 = v27;
                    v388 = v25;
                    vvar_79{reg 224} = ((vvar_79{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_4167{reg 224}))
                    v40 = v388;
                    v389 = v40;
                    v390 = v389 ^ 0x8000000000000000;
                    v393 = v391;
                    if v393 != 2 {
                        if !(v393 == 5) {
                            goto LABEL_4a2ef0;
                        }
                        v395 = 0x110000;
                        if !*((v58 + 32) as &i16) {
                            v398 = *((&v40 as &char + 10) as &i16);
                            v399 = 0;
                            v21 = (amd64g_calculate_condition(2, 6, v398 & 65535, 1, v384) as char ? (v398 | -0x10000 | v398 - 1) & 4294967295 & 4294967295 : 0);
                            goto LABEL_4a2bab;
                        }
                    }
                    v394 = *((&v42 as &char + 2) as &i8);
                    if !v394 {
                        v397 = *((&v40 as &char + 8) as &i8);
                        if !(v397 == 15) {
                            goto LABEL_4a2d3f;
                        }
                        v401 = v42;
                        if v401 == 2 {
                            if *((&v40 as &char + 12) as &i32) == 99 {
                                goto LABEL_4a3396;
                            }
                            v395 = *((&v40 as &char + 12) as &i32);
                            goto LABEL_4a2bab;
                        } else {
                            if !(!v401) {
                                goto LABEL_4a2f2c;
                            }
                            if *((&v40 as &char + 12) as &i32) == 113 {
LABEL_4a3396:
                                uu_more::reset_term(a2, v358, v239, v119);
                                std::process::exit(0); /* do not return */
                            }
                            v395 = *((&v40 as &char + 12) as &i32);
                            goto LABEL_4a2f3b;
                        }
                    }
                    if v394 == 2 {
                        goto LABEL_4a2ef0;
                    } else {
                        goto LABEL_4a2c79;
                    }
LABEL_4a2c79:
                    v397 = *((&v40 as &char + 8) as &i8);
LABEL_4a2d3f:
                    switch (v397) {
                    case 4: case 8:
                        if !(!v42) {
                            goto LABEL_4a2ef0;
                        }
                        v402 = v21;
                        v403 = v16;
                        v404 = v402 + v20;
                        if __CFADD__(v402, v20) as char {
                            v404 = -1;
                        }
                        v405 = v403;
                        v399 = v405 - v404;
                        if v404 > v405 {
                            v399 = 0;
                        }
                        v16 = v399;
                        if !(amd64g_calculate_condition(6, 8, v405, v404, v384) as char) && *((&v22 as &char + 1) as &i8) {
                            v415 = v15;
                            v416 = v415 - v399;
                            if v399 > v415 {
                                v416 = 0;
                            }
                            if v415 > v416 {
                                v421 = v14;
                                v422 = v421 + v415 * 24 + -(v416) * 24;
                                loop {
                                    v425 = ~(v423) + v403;
                                    if *((v422 - 8) as &i64) {
                                        break;
                                    }
                                    v427 = v426;
                                    v428 = v427 - 1;
                                    if 1 > v427 {
                                        v428 = 0;
                                    }
                                    v429 = v425;
                                    if v429 < 1 {
                                        break;
                                    }
                                    v431 = v422 - 24;
                                    v432 = (v431 - v421) / 24;
                                    v433 = v432 - v425;
                                    if v425 > v432 {
                                        v433 = 0;
                                    }
                                    v422 = v431 + -(v433) * 24;
                                    if v432 <= v433 {
                                        break;
                                    }
                                }
                            }
                            v16 = v399;
                        }
                        v395 = 0x110000;
                        if !*((v58 + 32) as &i16) {
                            break;
                        }
                        v434 = crossterm::command::write_command_ansi(a2, 1);
                        if !v434 {
                            v434 = <std::io::stdio::Stdout as std::io::Write>::flush(a2, v358, v239, v119);
                            if !v434 && (v434 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, &g_41f1eb, 17, v119), !v434) {
                                break;
                            }
                        }
                        v25 = 0x8000000000000000;
                        v28 = v434;
                        v438 = __rust_alloc(32, 8);
                        v359 = v438;
                        v439 = v25;
                        *((v438 + 16) as &i128) = *((&v25 as &char + 16) as &i128);
                        *(v438 as &i128) = v439;
                        if !(v390 <= 5) {
                            goto LABEL_4a30a1;
                        }
                        goto LABEL_4a309b;
                    case 5: case 9:
                        if !v42 {
                            goto LABEL_4a2f79;
                        }
                        goto LABEL_4a2ef0;
                    case 15:
                        v401 = v42;
LABEL_4a2f2c:
                        v395 = *((&v40 as &char + 12) as &i32);
                        if !(!(v401 & 255 & 255)) {
                            break;
                        }
LABEL_4a2f3b:
                        if v395 == 32 {
LABEL_4a2f79:
                            v399 = v19;
                            v406 = v21;
                            v407 = v16;
                            v408 = v407 + v406;
                            if __CFADD__(v407, v406) as char {
                                v408 = -1;
                            }
                            if !(v408 < v399) {
                                goto LABEL_4a302f;
                            }
                            v413 = v406 * 2 & 4294967295;
                            v414 = v407 + v413;
                            if __CFADD__(v407, v413) as char {
                                v414 = -1;
                            }
                            v419 = v399 - v406;
                            v16 = v420;
                            v395 = 0x110000;
                            break;
                        } else if v395 == 106 {
                            v409 = v16;
                            v410 = v21;
                            v399 = v410 + v409;
                            if __CFADD__(v410, v409) as char {
                                v399 = -1;
                            }
                            v412 = v19;
                            if v399 < v19 {
                                v417 = v399 < v412;
                                v418 = v409 + 1;
                                if amd64g_calculate_condition(4, 24, v409 + 1, 0, amd64g_calculate_rflags_c(8, v399, v412, v384)) as char {
                                    v418 = -1;
                                }
                                v16 = v418;
                                v395 = 0x110000;
                                break;
                            } else {
LABEL_4a302f:
                                v359 = 0;
                                if v390 <= 5 {
LABEL_4a309b:
                                    if v390 != 4 {
                                        return v359;
                                    }
                                }
LABEL_4a30a1:
                                if !v389 {
                                    return v359;
                                }
                                goto LABEL_4a30b6;
                            }
                        } else if v395 == 107 {
                            v411 = v16;
                            v399 = v411 - 1;
                            if 1 > v411 {
                                v399 = 0;
                            }
                            v16 = v399;
                            v395 = 0x110000;
                            break;
                        }
LABEL_4a2bab:
                        v435 = v58;
                        if *((v435 + 37) as &i8) {
                            v40 = std::io::stdio::stdout();
                            v436 = crossterm::command::write_command_ansi(&v40, 0, 0);
                            if !(!v436 && (v436 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v40, &anon.d58bd02a723bd021606085005bc52729.40.llvm.16558445346262642515, 3, v119), !v436)) {
                                v25 = v436;
                                core::result::unwrap_failed(); /* do not return */
                            }
                            v25 = std::io::stdio::stdout();
                            v436 = <std::io::stdio::Stdout as std::io::Write>::flush(&v25, v358, v239, v119);
                            if !v436 {
                                goto LABEL_4a2ad0;
                            }
                        }
                        if !*((v435 + 36) as &i8) {
                            goto LABEL_4a2ad0;
                        }
                        v40 = std::io::stdio::stdout();
                        v437 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v40, &anon.d58bd02a723bd021606085005bc52729.38.llvm.16558445346262642515, 4, v119);
                        if !(!v437) || !((v437 = crossterm::command::write_command_ansi(&v40, 0, 0), !v437)) {
LABEL_4a3321:
                            v25 = v437;
                            core::result::unwrap_failed(); /* do not return */
                        }
                        v25 = std::io::stdio::stdout();
                        v437 = <std::io::stdio::Stdout as std::io::Write>::flush(&v25, v358, v239, v119);
                        if !(!v437) {
                            goto LABEL_4a3321;
                        }
LABEL_4a2ad0:
                        v13 = uu_more::Pager::draw(a2, v395, v399);
                    default:
LABEL_4a2ef0:
                        continue;
                    }
                }
            }
LABEL_4a30b6:
            return v359;
        }
        v76 = v75;
        v77 = v239 - 1;
        if v239 >= 1 && *((v76 + v77) as &i8) == 10 {
            v80 = v239 - 2;
            if v77 {
            }
        }
        v85 = v79;
        v1 = v76;
        v40 = 0;
        v41 = 8;
        v42 = 0;
        v4 = v85;
        if unicode_width::str_width(v1, v85, 0) >= vvar_5199 {
            break;
        }
        if v85 {
            v92 = __rust_alloc(v4, 1);
            if v92 {
                v89 = v4;
            }
        }
        v222 = v88;
        memcpy(v222, v1, v89);
        v223 = v42;
        if v223 == v40 {
            v40 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        v225 = v41;
        v226 = v223 * 3;
        *((v225 + v226 * 8) as &i64) = v89;
        v51 = v222;
        *((v225 + v226 * 8 + 8) as &i64) = v222;
        *((v225 + v226 * 8 + 16) as &i64) = v89;
        v73 = v223 < v40;
        v15 = v223 + 1;
        v235 = v40;
        vvar_60{reg 224} = ((vvar_60{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_3183{reg 224}))
        v13 = v235;
        v236 = v15;
        v237 = v10;
        if v8 - v237 < v236 {
            v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v237, v236);
            v238 = v10;
        }
        memcpy(v238 * 24 + v9, v14, v236 * 24);
        v70 = v238 + v236;
        v10 = v70;
    }
    v86 = v1;
    if !v85 {
        goto LABEL_0x4a1e57;
    } else {
        goto LABEL_0x4a0efe;
    }
}
