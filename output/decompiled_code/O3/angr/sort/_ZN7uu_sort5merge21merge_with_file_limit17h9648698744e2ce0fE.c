long long uu_sort::merge::merge_with_file_limit::h9648698744e2ce0f(unsigned long a0, unsigned long long a1[4], unsigned long long a2[15], unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x30]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r13
    unsigned long long v10;  // rcx
    int v11;  // ymm2
    uint128_t v13[2];  // rax
    int v14;  // xmm0
    int v15;  // ymm0
    int v17;  // xmm1
    int v18;  // ymm1
    int v21;  // xmm0
    unsigned long long v22;  // rax
    unsigned long long v23;  // rcx
    struct_9 *v24;  // r13
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    int v28;  // ymm3
    void* v29;  // r12
    int v30;  // xmm0
    int v31;  // xmm0
    int v32;  // xmm0
    int v33;  // xmm1
    int v34;  // xmm2
    int v35;  // xmm3
    int v36;  // xmm0
    unsigned long long v37;  // rax
    unsigned long long v38;  // rcx
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // ymm1
    int v42;  // xmm2
    int v43;  // ymm2
    int v44;  // xmm3
    int v45;  // ymm3
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // ymm0
    unsigned long long v49;  // r12
    void* v50;  // rbx
    struct_2 *v52;  // rcx
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2
    int v56;  // xmm3
    struct_15 *v87;  // r12
    unsigned long long v172;  // rax
    uint128_t v193[2];  // rax
    int v194;  // xmm0
    int v195;  // ymm0
    int v196;  // ymm0
    int v197;  // xmm1
    int v198;  // ymm1
    int v199;  // ymm1
    unsigned long long v200;  // r12
    struct_4 *v201;  // r14
    unsigned long long v202;  // rax
    void* v203;  // r13
    int v204;  // ymm2
    int v205;  // ymm3
    unsigned long long v206;  // rax
    struct_14 *v207;  // rdx
    int v208;  // xmm0
    int v209;  // xmm1
    unsigned long long v210;  // rbx
    struct_2 *v211;  // rcx
    struct_2 *v212;  // rdx
    int v213;  // xmm0
    int v214;  // xmm1
    int v215;  // xmm2
    int v216;  // xmm3
    unsigned long long v217;  // r12
    struct_1 *v218;  // rax
    struct_1 *v219;  // r15
    unsigned long long *v220;  // r13
    unsigned long long *v221;  // rax
    unsigned long long *v222;  // rcx
    int v223;  // xmm0
    struct_11 *v224;  // rdx
    struct_16 *v225;  // rcx
    int v226;  // xmm1
    int v227;  // xmm2
    int v228;  // xmm3
    uint128_t *v229;  // rbx
    uint128_t *v230;  // rax
    uint128_t *v231;  // rcx
    int v232;  // xmm0
    int v233;  // xmm0
    int v234;  // xmm0
    int v235;  // xmm0
    int v236;  // xmm1
    int v237;  // xmm2
    int v238;  // xmm3
    unsigned long long v239;  // rax
    unsigned long long v240;  // r13
    struct_12 *v241;  // rcx
    unsigned long long v242;  // rax
    struct_4 *v243;  // rax
    struct_5 *v244;  // rax
    int v245;  // xmm0
    int v246;  // xmm1
    int v247;  // xmm2
    struct_7 *v248;  // r14
    unsigned long long v252;  // rbx
    unsigned long long v253;  // rdi
    unsigned long long v254;  // rdi
    unsigned long long v263;  // rdi
    unsigned long long v264;  // r12
    struct_10 *v265;  // r13
    void* v266;  // rbx
    unsigned long long v268;  // rax
    unsigned long long v269;  // rcx
    unsigned long long v273;  // rsi
    int v274;  // xmm0
    int v275;  // xmm1
    int v276;  // xmm2
    int v279;  // xmm0
    int v286;  // xmm0
    int v287;  // ymm0
    unsigned long long v288;  // rcx
    uint128_t *v289;  // rax
    unsigned long long v290;  // rdx
    unsigned long long v291;  // rsi
    int v293;  // xmm0
    unsigned long long v294;  // r13
    unsigned long long v295;  // rax
    struct_6 *v296;  // rax
    unsigned long long v297;  // rax
    struct_0 *v298;  // r13
    int v299;  // xmm0
    int v300;  // xmm0
    unsigned long long v301;  // r13
    uint128_t *v302;  // rax
    uint128_t *v303;  // rcx
    int v304;  // xmm0
    int v305;  // xmm1
    unsigned long long v308;  // rsi
    unsigned long long v319;  // rsi
    unsigned long long v320;  // rdx
    int v323;  // xmm0
    int v324;  // xmm0

    vvar_606{reg 48} = (&v0 & -128) - 1920;
    *((unsigned long *)(vvar_606{reg 48} + 272)) = a3;
    *((unsigned long *)(vvar_606{reg 48} + 200)) = a0;
    v6 = a1[1];
    *((unsigned long long *[4])(vvar_606{reg 48} + 192)) = a1;
    v7 = a1[3];
    v8 = v7 - v6;
    v9 = v8 / 48;
    v10 = a2[14];
    *((unsigned long long *[15])(vvar_606{reg 48} + 328)) = a2;
    if (v9 > v10)
    {
        if (!v10)
        {
            *((char **)(vvar_606{reg 48} - 8)) = &g_4da723;
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
        *((long long *)(vvar_606{reg 48} + 1432)) = 0;
        *((int128_t *)(vvar_606{reg 48} + 1408)) = 0;
        *((long long *)(vvar_606{reg 48} + 1440)) = 8;
        *((long long *)(vvar_606{reg 48} + 1448)) = 0;
        *((long long *)(vvar_606{reg 48} + 1456)) = 9223372036854775809;
        v13 = *((long long *)(vvar_606{reg 48} + 192));
        v14 = v13[0];
        v17 = v13[1];
        *((void*)(vvar_606{reg 48} + 0x600)) = v14;
        *((void*)(vvar_606{reg 48} + 1552)) = v17;
        *((unsigned long long *)(vvar_606{reg 48} + 1568)) = v10;
        *((int128_t *)(vvar_606{reg 48} + 1576)) = 0;
        *((int128_t *)(vvar_606{reg 48} + 1592)) = 0;
        *((long long *)(vvar_606{reg 48} + 1608)) = 0;
        *((long long *)(vvar_606{reg 48} + 1616)) = -1;
        *((char *)(vvar_606{reg 48} + 1624)) = 0;
        *((long long *)(vvar_606{reg 48} + 1632)) = 0;
        *((long long *)(vvar_606{reg 48} + 248)) = 0;
        *((long long *)(vvar_606{reg 48} + 0x100)) = 8;
        *((long long *)(vvar_606{reg 48} + 264)) = 0;
        *((long long *)(vvar_606{reg 48} + 176)) = 0x8000000000000000;
        *((unsigned long long *)(vvar_606{reg 48} + 312)) = v9;
        *((int *)(vvar_606{reg 48} + 1160)) = (vvar_2398 == 0x8000000000000000 ? a2[7] : 0);
        v24 = vvar_606{reg 48} + 520;
        *((unsigned long long *)(vvar_606{reg 48} + 1752)) = a2[8];
        v26 = *((long long *)(vvar_606{reg 48} + 312));
        *((unsigned long long *)(vvar_606{reg 48} + 1744)) = v10;
        *((long long *)(vvar_606{reg 48} + 1736)) = 9223372036854775810;
        v29 = v26 - v10;
        if (v26 < v10)
            v29 = 0;
        vvar_794{reg 48} = vvar_606{reg 48} - 8;
        *((char **)(vvar_606{reg 48} - 8)) = &g_4d8622;
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he082631157cf3612();
        if (*((long long *)(vvar_794{reg 48} + 0x200)) == 9223372036854775810)
        {
            *((void* *)(vvar_794{reg 48} - 8)) = sub_4da705;
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
        *((void* *)(vvar_794{reg 48} + 1760)) = v29;
        v30 = *((int128_t *)(vvar_794{reg 48} + 592));
        *((void*)(vvar_794{reg 48} + 1344)) = v30;
        v31 = *((int128_t *)(vvar_794{reg 48} + 576));
        *((void*)(vvar_794{reg 48} + 1328)) = v31;
        v32 = *((int128_t *)(vvar_794{reg 48} + 0x200));
        v33 = *((int128_t *)(vvar_794{reg 48} + 528));
        v34 = *((int128_t *)(vvar_794{reg 48} + 544));
        v35 = *((int128_t *)(vvar_794{reg 48} + 560));
        *((void*)(vvar_794{reg 48} + 1312)) = v35;
        *((void*)(vvar_794{reg 48} + 1296)) = v34;
        *((void*)(vvar_794{reg 48} + 0x500)) = v33;
        *((void*)(vvar_794{reg 48} + 1264)) = v32;
        vvar_150{reg 48} = vvar_794{reg 48} - 8;
        *((char **)(vvar_794{reg 48} - 8)) = &g_4d86a5;
        std::sync::mpmc::channel::h0c4124d0ce0eccd6(vvar_794{reg 48} + 0x200);
        v36 = *((int128_t *)(vvar_150{reg 48} + 0x200));
        v37 = *((long long *)(vvar_150{reg 48} + 528));
        v38 = *((long long *)(vvar_150{reg 48} + 536));
        *((void*)(vvar_150{reg 48} + 288)) = v36;
        *((unsigned long long *)(vvar_150{reg 48} + 192)) = v37;
        *((unsigned long long *)(vvar_150{reg 48} + 496)) = v37;
        *((unsigned long long *)(vvar_150{reg 48} + 304)) = v38;
        *((unsigned long long *)(vvar_150{reg 48} + 504)) = v38;
        *((long long *)(vvar_150{reg 48} + 208)) = 0;
        *((long long *)(vvar_150{reg 48} + 216)) = 8;
        *((long long *)(vvar_150{reg 48} + 224)) = 0;
        *((long long *)(vvar_150{reg 48} + 40)) = 0;
        *((long long *)(vvar_150{reg 48} + 48)) = 8;
        *((long long *)(vvar_150{reg 48} + 56)) = 0;
        v39 = *((int128_t *)(vvar_150{reg 48} + 1264));
        v40 = *((int128_t *)(vvar_150{reg 48} + 0x500));
        v41 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v42 = *((int128_t *)(vvar_150{reg 48} + 1296));
        v43 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
        v44 = *((int128_t *)(vvar_150{reg 48} + 1312));
        v45 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
        *((void*)(vvar_150{reg 48} + 64)) = v39;
        v46 = *((int128_t *)(vvar_150{reg 48} + 1344));
        *((void*)(vvar_150{reg 48} + 144)) = v46;
        v47 = *((int128_t *)(vvar_150{reg 48} + 1328));
        v48 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
        *((void*)(vvar_150{reg 48} + 128)) = v47;
        *((void*)(vvar_150{reg 48} + 112)) = v44;
        *((void*)(vvar_150{reg 48} + 96)) = v42;
        *((void*)(vvar_150{reg 48} + 80)) = v40;
        v49 = *((long long *)(vvar_150{reg 48} + 64));
        *((long long *)(vvar_150{reg 48} + 280)) = *((long long *)(vvar_150{reg 48} + 144));
        *((long long *)(vvar_150{reg 48} + 320)) = *((long long *)(vvar_150{reg 48} + 152));
        v50 = 0;
        if (v49 == 9223372036854775809)
            goto LABEL_0x4d87f0;
        v52 = vvar_150{reg 48} + 72;
        *((unsigned long long *)&v24->field_28) = v52->field_40;
        v53 = v52->field_0;
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
        v54 = v52->field_10;
        v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
        v55 = v52->field_20;
        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        v56 = v52->field_30;
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
        *((void*)&v24->field_20) = v56;
        *((void*)&v24->field_10) = v55;
        *((void*)&v24->field_8) = v54;
        *((void*)&v24->field_0) = v53;
        continue;
    }
    vvar_9{reg 48} = vvar_606{reg 48} - 8;
    *((char **)(vvar_606{reg 48} - 8)) = &g_4d84f5;
    std::sync::mpmc::channel::h0c4124d0ce0eccd6(vvar_703{reg 48} + 0x200);
    v21 = *((int128_t *)(vvar_9{reg 48} + 0x200));
    v22 = *((long long *)(vvar_9{reg 48} + 528));
    v23 = *((long long *)(vvar_9{reg 48} + 536));
    *((void*)(vvar_9{reg 48} + 40)) = v21;
    *((unsigned long long *)(vvar_9{reg 48} + 1360)) = v22;
    *((unsigned long long *)(vvar_9{reg 48} + 1368)) = v23;
    *((unsigned long long *)(vvar_9{reg 48} + 272)) = v22;
    *((unsigned long long *)(vvar_9{reg 48} + 304)) = v23;
    if (v7 == v6)
    {
        *((long long *)(vvar_9{reg 48} + 1168)) = 0;
        *((long long *)(vvar_9{reg 48} + 1176)) = 8;
        *((long long *)(vvar_9{reg 48} + 1184)) = 0;
        v27 = 8;
        goto LABEL_4d9527;
    }
    if (v8 > 3689348814741910320)
        goto LABEL_4da75d;
    vvar_9{reg 48} = vvar_9{reg 48} - 8;
    *((char **)(vvar_9{reg 48} - 8)) = &g_4d8570;
    v172 = __rust_alloc(v9 * 120, 8);
    if (!v172)
    {
LABEL_4da75d:
        *((char **)(vvar_23{reg 48} - 8)) = &g_4da769;
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    *((unsigned long long *)(vvar_9{reg 48} + 1168)) = v9;
    *((unsigned long long *)(vvar_9{reg 48} + 1176)) = v172;
    *((long long *)(vvar_9{reg 48} + 1184)) = 0;
    vvar_9{reg 48} = vvar_9{reg 48} - 8;
    *((char **)(vvar_9{reg 48} - 8)) = &g_4d85ae;
    v27 = __rust_alloc(v9 * 16, 8);
    if (!v27)
    {
        *((void* *)(vvar_9{reg 48} - 8)) = sub_4d85c5;
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
LABEL_4d9527:
    *((unsigned long long *)(vvar_9{reg 48} + 1264)) = v9;
    *((unsigned long long *)(vvar_9{reg 48} + 1272)) = v27;
    *((long long *)(vvar_9{reg 48} + 0x500)) = 0;
    v193 = *((long long *)(vvar_9{reg 48} + 192));
    v194 = v193[0];
    v196 = v195 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v194;
    v197 = v193[1];
    v199 = v198 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v197;
    *((void*)(vvar_9{reg 48} + 80)) = v197;
    *((void*)(vvar_9{reg 48} + 64)) = v194;
    v200 = *((long long *)(vvar_9{reg 48} + 88));
    v201 = *((long long *)(vvar_9{reg 48} + 72));
    if (v201 == v200)
    {
LABEL_4d99c4:
        if (*((long long *)(vvar_34{reg 48} + 80)))
        {
            v263 = *((long long *)(vvar_9{reg 48} + 64));
            vvar_9{reg 48} = vvar_9{reg 48} - 8;
            *((char **)(vvar_9{reg 48} - 8)) = &g_4d99e6;
            __rust_dealloc(v263);
        }
        v264 = *((long long *)(vvar_9{reg 48} + 1184));
        if (v264)
        {
            v265 = vvar_9{reg 48} + 536;
            v266 = 0;
            do
            {
                vvar_1830{reg 48} = vvar_105{reg 48} - 8;
                *((char **)(vvar_105{reg 48} - 8)) = &g_4d9a30;
                v268 = __rust_alloc_zeroed(0x2000, 1);
                if (!v268)
                {
                    *((char **)(vvar_1830{reg 48} - 8)) = &g_4da47d;
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                v196 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v265->field_0 = 0;
                *((int128_t *)&(&v265->padding_10)[1]) = 0;
                *((int128_t *)&v265->padding_28) = 0;
                *((void* *)(vvar_1830{reg 48} + 0x200)) = v266;
                *((long long *)(vvar_1830{reg 48} + 520)) = 0;
                *((long long *)(vvar_1830{reg 48} + 528)) = 8;
                *((long long *)(vvar_1830{reg 48} + 552)) = 8;
                *((long long *)(vvar_1830{reg 48} + 576)) = 8;
                *((long long *)(vvar_1830{reg 48} + 600)) = 8;
                *((long long *)(vvar_1830{reg 48} + 608)) = 0;
                *((long long *)(vvar_1830{reg 48} + 616)) = 0x2000;
                *((unsigned long long *)(vvar_1830{reg 48} + 624)) = v268;
                *((long long *)(vvar_1830{reg 48} + 632)) = 0x2000;
                vvar_9{reg 48} = vvar_1830{reg 48} - 8;
                *((char **)(vvar_1830{reg 48} - 8)) = &g_4d9ad0;
                std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_1830{reg 48} + 1408, vvar_1830{reg 48} + 40, vvar_52{reg 48} + 0x200, v269);
                if (*((long long *)(vvar_1840{reg 48} + 1416)) != 0x8000000000000000)
                {
                    *((int128_t *)(vvar_9{reg 48} + 624)) = *((int128_t *)(vvar_9{reg 48} + 1520));
                    *((int128_t *)(vvar_9{reg 48} + 608)) = *((int128_t *)(vvar_9{reg 48} + 1504));
                    *((int128_t *)(vvar_9{reg 48} + 592)) = *((int128_t *)(vvar_9{reg 48} + 1488));
                    *((int128_t *)(vvar_9{reg 48} + 576)) = *((int128_t *)(vvar_9{reg 48} + 1472));
                    v274 = *((int128_t *)(vvar_9{reg 48} + 1408));
                    v275 = *((int128_t *)(vvar_9{reg 48} + 1424));
                    v276 = *((int128_t *)(vvar_9{reg 48} + 1440));
                    *((int128_t *)(vvar_9{reg 48} + 560)) = *((int128_t *)(vvar_9{reg 48} + 1456));
                    *((void*)(vvar_9{reg 48} + 544)) = v276;
                    *((void*)(vvar_9{reg 48} + 528)) = v275;
                    *((void*)(vvar_9{reg 48} + 0x200)) = v274;
                    *((char **)(vvar_9{reg 48} - 8)) = &g_4da525;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v266 += 1;
            } while (v264 != v266);
        }
        v273 = *((long long *)(vvar_79{reg 48} + 328));
        vvar_1874{reg 48} = vvar_79{reg 48} - 8;
        *((char **)(vvar_79{reg 48} - 8)) = &g_4d9b01;
        _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::hd3e39bd05377cda4(vvar_79{reg 48} + 1408, v273);
        *((long long *)(vvar_1874{reg 48} + 0x200)) = *((long long *)(vvar_1874{reg 48} + 272));
        *((long long *)(vvar_1874{reg 48} + 520)) = *((long long *)(vvar_1874{reg 48} + 304));
        v279 = *((int128_t *)(vvar_1874{reg 48} + 1168));
        *((void*)(vvar_1874{reg 48} + 528)) = v279;
        *((long long *)(vvar_1874{reg 48} + 544)) = *((long long *)(vvar_1874{reg 48} + 1184));
        vvar_1922{reg 48} = vvar_1874{reg 48} - 8;
        *((char **)(vvar_1874{reg 48} - 8)) = &g_4d9b5c;
        memcpy(vvar_1874{reg 48} + 552, vvar_1874{reg 48} + 1408, 160);
        *((long long *)(vvar_1922{reg 48} + 1424)) = 0x8000000000000000;
        *((long long *)(vvar_1922{reg 48} + 1408)) = 0;
        vvar_190{reg 48} = vvar_1922{reg 48} - 8;
        *((char **)(vvar_1922{reg 48} - 8)) = &g_4d9b9c;
        std::thread::Builder::spawn_unchecked::h88ba36bd5bab4fc3(vvar_1922{reg 48} + 336, vvar_1922{reg 48} + 1408, vvar_1922{reg 48} + 0x200);
        if (!*((long long *)(vvar_1963{reg 48} + 336)))
        {
            *((long long *)(vvar_190{reg 48} + 1408)) = *((long long *)(vvar_190{reg 48} + 344));
            *((char **)(vvar_190{reg 48} - 8)) = &g_4da75b;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        *((long long *)(vvar_190{reg 48} + 80)) = *((long long *)(vvar_190{reg 48} + 352));
        v286 = *((int128_t *)(vvar_190{reg 48} + 336));
        v287 = v196 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v279 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v286;
        *((void*)(vvar_190{reg 48} + 64)) = v286;
        *((long long *)(vvar_190{reg 48} + 336)) = 0;
        *((long long *)(vvar_190{reg 48} + 344)) = 8;
        *((long long *)(vvar_190{reg 48} + 352)) = 0;
        v288 = *((long long *)(vvar_190{reg 48} + 1264));
        v289 = *((long long *)(vvar_190{reg 48} + 1272));
        v290 = *((long long *)(vvar_190{reg 48} + 0x500));
        v291 = &v289[v290];
        *((uint128_t **)(vvar_190{reg 48} + 1408)) = v289;
        *((uint128_t **)(vvar_190{reg 48} + 1416)) = v289;
        *((unsigned long long *)(vvar_190{reg 48} + 1424)) = v288;
        *((unsigned long long *)(vvar_190{reg 48} + 1432)) = v291;
        *((long long *)(vvar_190{reg 48} + 1440)) = 0;
        if (v290)
        {
            do
            {
                *((uint128_t **)(vvar_207{reg 48} + 1416)) = v289 + 1;
                v293 = *(v289);
                v287 = v287 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v293;
                v294 = *((long long *)(vvar_207{reg 48} + 1440));
                *((unsigned long long *)(vvar_207{reg 48} + 1440)) = v294 + 1;
                *((void*)(vvar_207{reg 48} + 1648)) = v293;
                vvar_2039{reg 48} = vvar_207{reg 48} - 8;
                *((char **)(vvar_207{reg 48} - 8)) = &g_4d9ced;
                v295 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(vvar_1963{reg 48} + 1648, v291, v290);
                if (v295)
                {
                    *((long long *)(vvar_2039{reg 48} + 0x200)) = 1;
                    *((long long *)(vvar_2039{reg 48} + 520)) = 1;
                    *((unsigned long long *)(vvar_2039{reg 48} + 528)) = v295;
                    vvar_302{reg 48} = vvar_2039{reg 48} - 8;
                    *((char **)(vvar_2039{reg 48} - 8)) = &g_4d9d26;
                    v296 = __rust_alloc(24, 8);
                    if (!v296)
                    {
                        *((char **)(vvar_302{reg 48} - 8)) = &g_4da535;
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    }
                    v296->field_10 = *((long long *)(vvar_302{reg 48} + 528));
                    v299 = *((int128_t *)(vvar_302{reg 48} + 0x200));
                    *((void*)&v296->field_0) = v299;
                    v300 = *((int128_t *)(vvar_302{reg 48} + 1648));
                    *((struct_6 **)(vvar_302{reg 48} + 528)) = v296;
                    *((long long *)(vvar_302{reg 48} + 536)) = 0;
                    *((void*)(vvar_302{reg 48} + 0x200)) = v300;
                    *((unsigned long long *)(vvar_302{reg 48} + 544)) = v294;
                    v301 = *((long long *)(vvar_302{reg 48} + 352));
                    if (v301 == *((long long *)(vvar_2047{reg 48} + 336)))
                    {
                        vvar_302{reg 48} = vvar_302{reg 48} - 8;
                        *((char **)(vvar_302{reg 48} - 8)) = &g_4d9d90;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd2c7d3e4c5d28c3a(vvar_1963{reg 48} + 336);
                    }
                    v302 = *((long long *)(vvar_302{reg 48} + 344));
                    v303 = 5 * v301;
                    v304 = *((int128_t *)(vvar_302{reg 48} + 0x200));
                    v287 = v287 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v299 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v304;
                    v305 = *((int128_t *)(vvar_302{reg 48} + 528));
                    v199 = v199 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v305;
                    v290 = *((long long *)(vvar_302{reg 48} + 544));
                    *((unsigned long long *)(32 + (char *)v302 + 0x8 * v303)) = v290;
                    *((void*)(16 + (char *)v302 + 0x8 * v303)) = v305;
                    *((void*)((char *)v302 + 0x8 * v303)) = v304;
                    *((unsigned long long *)(vvar_302{reg 48} + 352)) = v301 + 1;
                }
                else
                {
                    v297 = *((long long *)(vvar_2039{reg 48} + 1648));
                    if (!v297)
                    {
                        v298 = *((long long *)(vvar_2039{reg 48} + 1656));
                        v298->field_208 = vvar_2408 - 1;
                        if (CasCmpNE(v298->field_208, vvar_2408))
                            goto LABEL_0x4d9dcc;
                        if (!vvar_2408 - 1)
                            goto LABEL_4d9dda;
                        continue;
LABEL_4d9dda:
                        vvar_2080{reg 48} = vvar_2039{reg 48} - 8;
                        *((char **)(vvar_2039{reg 48} - 8)) = &g_4d9de2;
                        std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v298);
                        v298->field_210 = 1;
                        if (CasCmpNE(v298->field_210, v298->field_210))
                            goto LABEL_0x4d9de4;
                        if (!vvar_2409)
                            continue;
                        vvar_2093{reg 48} = vvar_2080{reg 48} - 8;
                        *((char **)(vvar_2080{reg 48} - 8)) = &g_4d9dfb;
                        _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v298);
                    }
                    else if ((unsigned int)v297 == 1)
                    {
                        vvar_2074{reg 48} = vvar_2039{reg 48} - 8;
                        *((char **)(vvar_2039{reg 48} - 8)) = &g_4d9dbf;
                        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(vvar_2039{reg 48} + 1656);
                        continue;
                    }
                    else
                    {
                        vvar_2077{reg 48} = vvar_2039{reg 48} - 8;
                        *((char **)(vvar_2039{reg 48} - 8)) = &g_4d9e0d;
                        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(vvar_2039{reg 48} + 1656);
                    }
                }
            } while ((v289 = *((long long *)(vvar_280{reg 48} + 1416)), v289 != *((long long *)(vvar_280{reg 48} + 1432))));
        }
        vvar_230{reg 48} = vvar_190{reg 48} - 8;
        *((char **)(vvar_190{reg 48} - 8)) = &g_4d9e1f;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h03900b1c52c58887(vvar_190{reg 48} + 1408);
        v308 = *((long long *)(vvar_230{reg 48} + 352));
        *((unsigned long long *)(vvar_230{reg 48} + 528)) = v308;
        *((int128_t *)(vvar_230{reg 48} + 0x200)) = *((int128_t *)(vvar_230{reg 48} + 336));
        *((long long *)(vvar_230{reg 48} + 536)) = *((long long *)(vvar_230{reg 48} + 328));
        v87 = *((long long *)(vvar_230{reg 48} + 200));
        if (v308)
        {
            while (true)
            {
                vvar_230{reg 48} = vvar_2426{reg 48};
                v319 = (v308 >> 1) - 1;
                if (v319 == -1)
                    break;
                v320 = *((long long *)(vvar_230{reg 48} + 528));
                vvar_230{reg 48} = vvar_230{reg 48} - 8;
                *((char **)(vvar_230{reg 48} - 8)) = &g_4d9e8a;
                _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(vvar_2125{reg 48} + 0x200, v319, v320);
            }
        }
        v323 = *((int128_t *)(vvar_230{reg 48} + 0x200));
        v87->field_20 = *((long long *)(vvar_230{reg 48} + 528));
        v87->field_28 = *((long long *)(vvar_230{reg 48} + 536));
        *((void*)&v87->padding_10[0]) = v323;
        v324 = *((int128_t *)(vvar_230{reg 48} + 40));
        v87->field_30 = *((int128_t *)(vvar_230{reg 48} + 64));
        v87->field_40 = *((long long *)(vvar_230{reg 48} + 80));
        *((void*)&v87->field_0) = v324;
        v87->field_48 = 0;
        return v87;
    }
    v202 = -48 + v200 - (char *)v201;
    v203 = 0;
    *((long long *)(vvar_9{reg 48} + 176)) = 0x8000000000000000;
    *((unsigned long long *)(vvar_9{reg 48} + 320)) = v200;
    while (true)
    {
        *((unsigned long long *)(vvar_9{reg 48} + 280)) = v202;
        v206 = v201->field_0;
        if (v206 == *((long long *)(vvar_61{reg 48} + 176)) || (v207 = vvar_61{reg 48} + 1416, v207->field_20 = (unsigned long long)*((long long *)((char *)&v201->field_18 + 8)), v208 = *((int128_t *)&(&v201->field_0)[1]), v196 = v196 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v208, v209 = *((int128_t *)((char *)&v201->field_8 + 8)), v199 = v199 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v209, *((void*)&v207->field_10) = v209, *((void*)&v207->field_0) = v208, *((unsigned long long *)(vvar_61{reg 48} + 1408)) = v206, vvar_1509{reg 48} = vvar_61{reg 48} - 8, *((char **)(vvar_61{reg 48} - 8)) = &g_4d95f7, _$LT$uu_sort..merge..ClosedCompressedTmpFile$u20$as$u20$uu_sort..merge..ClosedTmpFile$GT$::reopen::hf262d7fd1ed950d0(vvar_61{reg 48} + 0x200, vvar_61{reg 48} + 1408), v210 = *((long long *)(vvar_1509{reg 48} + 0x200)), v210 == 9223372036854775809))
        {
            v243 = &v201->field_28;
            *((struct_4 **)(vvar_9{reg 48} + 72)) = v243;
            if (v243 != v200)
            {
                v248 = (char *)&v201[1].field_8 + 8;
                do
                {
                    v252 = *((long long *)(vvar_9{reg 48} + 280)) / 48;
                    if (v248->field_0)
                    {
                        v253 = v248->field_-8;
                        vvar_9{reg 48} = vvar_9{reg 48} - 8;
                        *((char **)(vvar_9{reg 48} - 8)) = &g_4d99ae;
                        __rust_dealloc(v253);
                    }
                    if (v248->field_-18)
                    {
                        v254 = v248->field_-20;
                        vvar_9{reg 48} = vvar_9{reg 48} - 8;
                        *((char **)(vvar_9{reg 48} - 8)) = &g_4d99c2;
                        __rust_dealloc(v254);
                    }
                    v248 = &v248[1].field_-18;
                } while (v252 != 1);
            }
        }
        v211 = vvar_9{reg 48} + 520;
        v212 = vvar_9{reg 48} + 344;
        v212->field_40 = v211->field_40;
        v213 = v211->field_0;
        v214 = v211->field_10;
        v215 = v211->field_20;
        v216 = v211->field_30;
        *((void*)&v212->field_30) = v216;
        *((void*)&v212->field_20) = v215;
        *((void*)&v212->field_10) = v214;
        *((void*)&v212->field_0) = v213;
        *((unsigned long long *)(vvar_9{reg 48} + 336)) = v210;
        vvar_1528{reg 48} = vvar_9{reg 48} - 8;
        *((char **)(vvar_9{reg 48} - 8)) = &g_4d9658;
        std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_1509{reg 48} + 0x200, 2, v212, v211);
        v217 = v203;
        *((long long *)(vvar_1528{reg 48} + 0x400)) = 1;
        *((long long *)(vvar_1528{reg 48} + 1032)) = 1;
        *((char *)(vvar_1528{reg 48} + 1040)) = 0;
        vvar_1535{reg 48} = vvar_1528{reg 48} - 8;
        *((char **)(vvar_1528{reg 48} - 8)) = &g_4d9695;
        v218 = __rust_alloc(640, 128);
        if (!v218)
        {
            *((struct_4 **)(vvar_1535{reg 48} + 72)) = &v201->field_28;
            *((unsigned long long *)(vvar_1535{reg 48} + 96)) = v217 + 1;
            *((char **)(vvar_1535{reg 48} - 8)) = &g_4da61e;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v219 = v218;
        vvar_239{reg 48} = vvar_1535{reg 48} - 8;
        *((char **)(vvar_1535{reg 48} - 8)) = &g_4d96b7;
        memcpy(v218, vvar_1535{reg 48} + 0x200, 640);
        *((long long *)(vvar_239{reg 48} + 1648)) = 0;
        *((struct_1 **)(vvar_239{reg 48} + 1656)) = v219;
        *((long long *)(vvar_239{reg 48} + 0x200)) = 0;
        *((struct_1 **)(vvar_239{reg 48} + 520)) = v219;
        v220 = *((long long *)(vvar_239{reg 48} + 0x500));
        if (v220 == *((long long *)(vvar_1544{reg 48} + 1264)))
        {
            vvar_239{reg 48} = vvar_239{reg 48} - 8;
            *((char **)(vvar_239{reg 48} - 8)) = &g_4d96fe;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0ea67d5e0df72439(vvar_1544{reg 48} + 1264);
        }
        v221 = *((long long *)(vvar_239{reg 48} + 1272));
        v222 = v220 * 16;
        *((long long *)(v221 + v222)) = 0;
        *((struct_1 **)(v221 + v222 + 8)) = v219;
        *((unsigned long long **)(vvar_239{reg 48} + 0x500)) = (char *)v220 + 1;
        v223 = *((int128_t *)(vvar_239{reg 48} + 344));
        if (v210 == *((long long *)(vvar_239{reg 48} + 176)))
            break;
        v224 = vvar_239{reg 48} + 344;
        v225 = vvar_239{reg 48} + 520;
        v225->field_50 = v224->field_40;
        v226 = v224->field_10;
        v227 = v224->field_20;
        v228 = v224->field_30;
        *((void*)&v225->field_40) = v228;
        *((void*)&v225->field_30) = v227;
        *((void*)&v225->field_20) = v226;
        *((long long *)(vvar_239{reg 48} + 0x200)) = 0;
        *((struct_1 **)(vvar_239{reg 48} + 520)) = v219;
        *((unsigned long long *)(vvar_239{reg 48} + 528)) = v210;
        *((void*)(vvar_239{reg 48} + 536)) = v223;
        *((long long *)(vvar_239{reg 48} + 608)) = 0;
        *((long long *)(vvar_239{reg 48} + 616)) = 1;
        *((long long *)(vvar_239{reg 48} + 624)) = 0;
        v229 = *((long long *)(vvar_239{reg 48} + 1184));
        if (v229 == *((long long *)(vvar_239{reg 48} + 1168)))
        {
            vvar_239{reg 48} = vvar_239{reg 48} - 8;
            *((char **)(vvar_239{reg 48} - 8)) = &g_4d97d2;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha577d2da83e84cd3(vvar_239{reg 48} + 1168);
        }
        v230 = *((long long *)(vvar_271{reg 48} + 1176));
        v231 = v229 * 120;
        *((long long *)(v230 + v231 + 112)) = *((long long *)(vvar_271{reg 48} + 624));
        v232 = *((int128_t *)(vvar_271{reg 48} + 608));
        *((void*)(v230 + v231 + 96)) = v232;
        v233 = *((int128_t *)(vvar_271{reg 48} + 592));
        *((void*)(v230 + v231 + 80)) = v233;
        v234 = *((int128_t *)(vvar_271{reg 48} + 576));
        *((void*)(v230 + v231 + 64)) = v234;
        v235 = *((int128_t *)(vvar_271{reg 48} + 0x200));
        v236 = *((int128_t *)(vvar_271{reg 48} + 528));
        v199 = v199 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v214 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v226 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v236;
        v237 = *((int128_t *)(vvar_271{reg 48} + 544));
        v204 = v204 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v215 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v227 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v237;
        v238 = *((int128_t *)(vvar_271{reg 48} + 560));
        v205 = v205 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v216 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v228 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v238;
        *((void*)(v230 + v231 + 48)) = v238;
        *((void*)(v230 + v231 + 32)) = v237;
        *((void*)(v230 + v231 + 16)) = v236;
        *((void*)(v230 + v231)) = v235;
        *((uint128_t **)(vvar_271{reg 48} + 1184)) = (char *)v229 + 1;
        vvar_1603{reg 48} = vvar_271{reg 48} - 8;
        *((char **)(vvar_271{reg 48} - 8)) = &g_4d9860;
        v239 = __rust_alloc_zeroed(0x2000, 1);
        v240 = v217;
        if (!v239)
        {
            *((struct_4 **)(vvar_1603{reg 48} + 72)) = &v201->field_28;
            *((unsigned long long *)(vvar_1603{reg 48} + 96)) = v240 + 1;
            *((char **)(vvar_1603{reg 48} - 8)) = &g_4da63f;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v241 = vvar_1603{reg 48} + 520;
        v196 = v196 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v213 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v223 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v232 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v233 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v234 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v235 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v241->field_10 = 0;
        *((int128_t *)&(&v241->padding_20)[1]) = 0;
        *((int128_t *)&v241->padding_38) = 0;
        *((unsigned long long *)(vvar_1603{reg 48} + 0x200)) = v240;
        *((long long *)(vvar_1603{reg 48} + 520)) = 0;
        *((long long *)(vvar_1603{reg 48} + 528)) = 8;
        *((long long *)(vvar_1603{reg 48} + 552)) = 8;
        *((long long *)(vvar_1603{reg 48} + 576)) = 8;
        *((long long *)(vvar_1603{reg 48} + 600)) = 8;
        *((long long *)(vvar_1603{reg 48} + 608)) = 0;
        *((long long *)(vvar_1603{reg 48} + 616)) = 0x2000;
        *((unsigned long long *)(vvar_1603{reg 48} + 624)) = v239;
        *((long long *)(vvar_1603{reg 48} + 632)) = 0x2000;
        vvar_9{reg 48} = vvar_1603{reg 48} - 8;
        *((char **)(vvar_1603{reg 48} - 8)) = &g_4d9917;
        std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_1603{reg 48} + 1408, vvar_1603{reg 48} + 40, vvar_1603{reg 48} + 0x200, v241);
        v200 = *((long long *)(vvar_9{reg 48} + 320));
        v242 = *((long long *)(vvar_9{reg 48} + 280));
        if (*((long long *)(vvar_1616{reg 48} + 1416)) != *((long long *)(vvar_1616{reg 48} + 176)))
        {
            *((struct_4 **)(vvar_9{reg 48} + 72)) = &v201->field_28;
            *((unsigned long long *)(vvar_9{reg 48} + 96)) = v240 + 1;
            *((int128_t *)(vvar_9{reg 48} + 624)) = *((int128_t *)(vvar_9{reg 48} + 1520));
            *((int128_t *)(vvar_9{reg 48} + 608)) = *((int128_t *)(vvar_9{reg 48} + 1504));
            *((int128_t *)(vvar_9{reg 48} + 592)) = *((int128_t *)(vvar_9{reg 48} + 1488));
            *((int128_t *)(vvar_9{reg 48} + 576)) = *((int128_t *)(vvar_9{reg 48} + 1472));
            v245 = *((int128_t *)(vvar_9{reg 48} + 1408));
            v246 = *((int128_t *)(vvar_9{reg 48} + 1424));
            v247 = *((int128_t *)(vvar_9{reg 48} + 1440));
            *((int128_t *)(vvar_9{reg 48} + 560)) = *((int128_t *)(vvar_9{reg 48} + 1456));
            *((void*)(vvar_9{reg 48} + 544)) = v247;
            *((void*)(vvar_9{reg 48} + 528)) = v246;
            *((void*)(vvar_9{reg 48} + 0x200)) = v245;
            *((char **)(vvar_9{reg 48} - 8)) = &g_4da6f8;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v201 = &v201->field_28;
        v202 = v242 - 48;
        v203 = v240 + 1;
        if (v201 == v200)
        {
            *((unsigned long long *)(vvar_9{reg 48} + 72)) = v200;
            goto LABEL_4d99c4;
        }
    }
    *((struct_4 **)(vvar_239{reg 48} + 72)) = &v201->field_28;
    *((unsigned long long *)(vvar_239{reg 48} + 96)) = v217 + 1;
    v244 = *((long long *)(vvar_239{reg 48} + 200));
    *((void*)&(&v244->field_0)[1]) = v223;
    v244->field_0 = 3;
    v219->field_200 = vvar_2404 - 1;
    if (CasCmpNE(v219->field_200, vvar_2404))
        goto LABEL_0x4da09f;
    if (!vvar_2404 - 1)
        goto LABEL_0x4da0a9;
}
