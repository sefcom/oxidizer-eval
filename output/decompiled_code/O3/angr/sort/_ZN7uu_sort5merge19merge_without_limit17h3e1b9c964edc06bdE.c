long long uu_sort::merge::merge_without_limit::h3e1b9c964edc06bd(unsigned long a0, uint128_t a1[3], unsigned long a2)
{
    char v0;  // [bp-0x30]
    int v2;  // xmm0
    unsigned long long v3;  // rdi
    unsigned long long v4;  // r8
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    int v10;  // xmm0
    int v11;  // ymm0
    int v12;  // ymm0
    int v13;  // xmm1
    int v14;  // ymm1
    int v15;  // ymm1
    int v16;  // xmm2
    int v17;  // ymm2
    int v18;  // ymm2
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbx
    struct_1 *v21;  // r12
    struct_3 *v22;  // r15
    unsigned long long v23;  // r14
    int v24;  // ymm3
    unsigned long long v25;  // rax
    struct_2 *v26;  // r13
    int v27;  // xmm0
    unsigned long long v28;  // rsi
    struct_9 *v29;  // rcx
    unsigned long long v30;  // r14
    struct_4 *v31;  // rcx
    int v32;  // xmm0
    unsigned long long v33;  // rdx
    struct_0 *v34;  // rax
    struct_0 *v35;  // rbx
    unsigned long long *v36;  // r12
    unsigned long long *v37;  // rax
    unsigned long long *v38;  // rcx
    int v39;  // xmm0
    unsigned long long v40;  // rax
    uint128_t *v41;  // rbx
    uint128_t *v42;  // rax
    uint128_t *v43;  // rcx
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    int v47;  // xmm3
    unsigned long long v48;  // rax
    unsigned long long v49;  // rcx
    unsigned long long v50;  // r15
    unsigned long long v51;  // rcx
    struct_6 *v52;  // rax
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2
    unsigned long long v62;  // r14
    struct_7 *v63;  // r13
    void* v64;  // rbx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rcx
    unsigned long long v67;  // rsi
    int v68;  // xmm0
    int v69;  // xmm1
    int v70;  // xmm2
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // ymm0
    unsigned long long v74;  // rcx
    uint128_t *v75;  // rax
    unsigned long long v76;  // rdx
    unsigned long long v77;  // rsi
    int v81;  // xmm0
    unsigned long long v82;  // rbx
    unsigned long long v83;  // rax
    struct_4 *v84;  // rax
    unsigned long long v85;  // rax
    struct_5 *v86;  // rbx
    int v87;  // xmm0
    int v88;  // xmm0
    uint128_t *v89;  // rbx
    uint128_t *v90;  // rax
    uint128_t *v91;  // rcx
    int v92;  // xmm0
    int v93;  // xmm1
    unsigned long long v96;  // rsi
    unsigned long long v100;  // rsi
    unsigned long long v101;  // rdx
    int v103;  // xmm0
    struct_10 *v104;  // rcx
    int v105;  // xmm0
    unsigned long long v106;  // rax

    vvar_294{reg 48} = (&v0 & -128) - 0x500;
    *((unsigned long *)(vvar_294{reg 48} + 272)) = a2;
    *((unsigned long *)(vvar_294{reg 48} + 264)) = a0;
    *((uint128_t *[3])(vvar_294{reg 48} + 0x100)) = a1;
    vvar_7{reg 48} = vvar_294{reg 48} - 8;
    *((char **)(vvar_294{reg 48} - 8)) = &g_4deae3;
    std::sync::mpmc::channel::h0c4124d0ce0eccd6(vvar_294{reg 48} + 0x200);
    v2 = *((int128_t *)(vvar_7{reg 48} + 0x200));
    v3 = *((long long *)(vvar_7{reg 48} + 528));
    v4 = *((long long *)(vvar_7{reg 48} + 536));
    *((void*)(vvar_7{reg 48} + 224)) = v2;
    *((unsigned long long *)(vvar_7{reg 48} + 240)) = v3;
    v5 = *((long long *)((char *)&a1[1] + 8));
    v6 = *((long long *)((char *)&a1[0] + 8));
    *((unsigned long long *)(vvar_7{reg 48} + 248)) = v4;
    v7 = (v5 - v6) / 24;
    *((unsigned long long *)(vvar_7{reg 48} + 496)) = v3;
    *((unsigned long long *)(vvar_7{reg 48} + 488)) = v4;
    if (v5 == v6)
    {
        *((long long *)(vvar_7{reg 48} + 104)) = 0;
        *((long long *)(vvar_7{reg 48} + 112)) = 8;
        *((long long *)(vvar_7{reg 48} + 120)) = 0;
        v8 = 8;
        goto LABEL_4dec03;
    }
    if (v5 - v6 > 3074457345618258600)
        goto LABEL_4df97d;
    vvar_7{reg 48} = vvar_7{reg 48} - 8;
    *((char **)(vvar_7{reg 48} - 8)) = &g_4deb8e;
    v9 = __rust_alloc(v7 * 72, 8);
    if (!v9)
    {
LABEL_4df97d:
        *((char **)(vvar_17{reg 48} - 8)) = &g_4df989;
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    *((unsigned long long *)(vvar_7{reg 48} + 104)) = v7;
    *((unsigned long long *)(vvar_7{reg 48} + 112)) = v9;
    *((long long *)(vvar_7{reg 48} + 120)) = 0;
    vvar_7{reg 48} = vvar_7{reg 48} - 8;
    *((char **)(vvar_7{reg 48} - 8)) = &g_4debc3;
    v8 = __rust_alloc(v7 * 16, 8);
    a1 = *((long long *)(vvar_7{reg 48} + 0x100));
    if (!v8)
    {
        *((void* *)(vvar_7{reg 48} - 8)) = sub_4debde;
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
LABEL_4dec03:
    *((unsigned long long *)(vvar_7{reg 48} + 184)) = v7;
    *((unsigned long long *)(vvar_7{reg 48} + 192)) = v8;
    *((long long *)(vvar_7{reg 48} + 200)) = 0;
    v10 = a1[0];
    v12 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10;
    v13 = a1[1];
    v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
    v16 = a1[2];
    v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
    *((void*)(vvar_7{reg 48} + 160)) = v16;
    *((void*)(vvar_7{reg 48} + 144)) = v13;
    *((void*)(vvar_7{reg 48} + 128)) = v10;
    *((long long *)(vvar_7{reg 48} + 176)) = 0;
    v19 = *((long long *)(vvar_7{reg 48} + 152));
    v20 = *((long long *)(vvar_7{reg 48} + 136));
    *((unsigned long long *)(vvar_7{reg 48} + 280)) = v19;
    if (v20 == v19)
    {
LABEL_4df037:
        vvar_65{reg 48} = vvar_27{reg 48} - 8;
        *((char **)(vvar_27{reg 48} - 8)) = &g_4df046;
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$::haf403639c356c08b(vvar_27{reg 48} + 128);
        v62 = *((long long *)(vvar_65{reg 48} + 120));
        if (v62)
        {
            v63 = vvar_65{reg 48} + 536;
            v64 = 0;
            do
            {
                vvar_607{reg 48} = vvar_98{reg 48} - 8;
                *((char **)(vvar_98{reg 48} - 8)) = &g_4df080;
                v65 = __rust_alloc_zeroed(0x2000, 1);
                if (!v65)
                {
                    *((char **)(vvar_607{reg 48} - 8)) = &g_4df779;
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                v12 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v63->field_0 = 0;
                *((int128_t *)&(&v63->padding_10)[1]) = 0;
                *((int128_t *)&v63->padding_28) = 0;
                *((void* *)(vvar_607{reg 48} + 0x200)) = v64;
                *((long long *)(vvar_607{reg 48} + 520)) = 0;
                *((long long *)(vvar_607{reg 48} + 528)) = 8;
                *((long long *)(vvar_607{reg 48} + 552)) = 8;
                *((long long *)(vvar_607{reg 48} + 576)) = 8;
                *((long long *)(vvar_607{reg 48} + 600)) = 8;
                *((long long *)(vvar_607{reg 48} + 608)) = 0;
                *((long long *)(vvar_607{reg 48} + 616)) = 0x2000;
                *((unsigned long long *)(vvar_607{reg 48} + 624)) = v65;
                *((long long *)(vvar_607{reg 48} + 632)) = 0x2000;
                vvar_65{reg 48} = vvar_607{reg 48} - 8;
                *((char **)(vvar_607{reg 48} - 8)) = &g_4df11e;
                std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_607{reg 48} + 328, vvar_564{reg 48} + 224, vvar_564{reg 48} + 0x200, v66);
                if (*((long long *)(vvar_617{reg 48} + 336)) != 0x8000000000000000)
                {
                    *((int128_t *)(vvar_65{reg 48} + 624)) = *((int128_t *)(vvar_65{reg 48} + 440));
                    *((int128_t *)(vvar_65{reg 48} + 608)) = *((int128_t *)(vvar_65{reg 48} + 424));
                    *((int128_t *)(vvar_65{reg 48} + 592)) = *((int128_t *)(vvar_65{reg 48} + 408));
                    *((int128_t *)(vvar_65{reg 48} + 576)) = *((int128_t *)(vvar_65{reg 48} + 392));
                    v68 = *((int128_t *)(vvar_65{reg 48} + 328));
                    v69 = *((int128_t *)(vvar_65{reg 48} + 344));
                    v70 = *((int128_t *)(vvar_65{reg 48} + 360));
                    *((int128_t *)(vvar_65{reg 48} + 560)) = *((int128_t *)(vvar_65{reg 48} + 376));
                    *((void*)(vvar_65{reg 48} + 544)) = v70;
                    *((void*)(vvar_65{reg 48} + 528)) = v69;
                    *((void*)(vvar_65{reg 48} + 0x200)) = v68;
                    *((char **)(vvar_65{reg 48} - 8)) = &g_4df821;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v64 += 1;
            } while (v62 != v64);
        }
        v67 = *((long long *)(vvar_65{reg 48} + 272));
        vvar_641{reg 48} = vvar_65{reg 48} - 8;
        *((char **)(vvar_65{reg 48} - 8)) = &g_4df159;
        _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::hd3e39bd05377cda4(vvar_65{reg 48} + 328, v67);
        *((long long *)(vvar_641{reg 48} + 0x200)) = *((long long *)(vvar_641{reg 48} + 496));
        *((long long *)(vvar_641{reg 48} + 520)) = *((long long *)(vvar_641{reg 48} + 488));
        v71 = *((int128_t *)(vvar_641{reg 48} + 104));
        *((void*)(vvar_641{reg 48} + 528)) = v71;
        *((long long *)(vvar_641{reg 48} + 544)) = *((long long *)(vvar_641{reg 48} + 120));
        vvar_681{reg 48} = vvar_641{reg 48} - 8;
        *((char **)(vvar_641{reg 48} - 8)) = &g_4df1ae;
        memcpy(vvar_641{reg 48} + 552, vvar_641{reg 48} + 328, 160);
        *((long long *)(vvar_681{reg 48} + 344)) = 0x8000000000000000;
        *((long long *)(vvar_681{reg 48} + 328)) = 0;
        vvar_109{reg 48} = vvar_681{reg 48} - 8;
        *((char **)(vvar_681{reg 48} - 8)) = &g_4df1eb;
        std::thread::Builder::spawn_unchecked::h8e7d6238588435cc(vvar_681{reg 48} + 128, vvar_681{reg 48} + 328, vvar_681{reg 48} + 0x200);
        if (!*((long long *)(vvar_696{reg 48} + 128)))
        {
            *((long long *)(vvar_109{reg 48} + 328)) = *((long long *)(vvar_109{reg 48} + 136));
            *((char **)(vvar_109{reg 48} - 8)) = &g_4df97a;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        *((long long *)(vvar_109{reg 48} + 304)) = *((long long *)(vvar_109{reg 48} + 144));
        v72 = *((int128_t *)(vvar_109{reg 48} + 128));
        v73 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
        *((void*)(vvar_109{reg 48} + 288)) = v72;
        *((long long *)(vvar_109{reg 48} + 128)) = 0;
        *((long long *)(vvar_109{reg 48} + 136)) = 8;
        *((long long *)(vvar_109{reg 48} + 144)) = 0;
        v74 = *((long long *)(vvar_109{reg 48} + 184));
        v75 = *((long long *)(vvar_109{reg 48} + 192));
        v76 = *((long long *)(vvar_109{reg 48} + 200));
        v77 = &v75[v76];
        *((uint128_t **)(vvar_109{reg 48} + 328)) = v75;
        *((uint128_t **)(vvar_109{reg 48} + 336)) = v75;
        *((unsigned long long *)(vvar_109{reg 48} + 344)) = v74;
        *((unsigned long long *)(vvar_109{reg 48} + 352)) = v77;
        *((long long *)(vvar_109{reg 48} + 360)) = 0;
        if (v76)
        {
            do
            {
                *((uint128_t **)(vvar_126{reg 48} + 336)) = v75 + 1;
                v81 = *(v75);
                v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                v82 = *((long long *)(vvar_126{reg 48} + 360));
                *((unsigned long long *)(vvar_126{reg 48} + 360)) = v82 + 1;
                *((void*)(vvar_126{reg 48} + 208)) = v81;
                vvar_753{reg 48} = vvar_126{reg 48} - 8;
                *((char **)(vvar_126{reg 48} - 8)) = &g_4df346;
                v83 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(vvar_696{reg 48} + 208, v77, v76);
                if (v83)
                {
                    *((long long *)(vvar_753{reg 48} + 0x200)) = 1;
                    *((long long *)(vvar_753{reg 48} + 520)) = 1;
                    *((unsigned long long *)(vvar_753{reg 48} + 528)) = v83;
                    vvar_185{reg 48} = vvar_753{reg 48} - 8;
                    *((char **)(vvar_753{reg 48} - 8)) = &g_4df380;
                    v84 = __rust_alloc(24, 8);
                    if (!v84)
                    {
                        *((char **)(vvar_185{reg 48} - 8)) = &g_4df831;
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    }
                    v84->field_10 = *((long long *)(vvar_185{reg 48} + 528));
                    v87 = *((int128_t *)(vvar_185{reg 48} + 0x200));
                    *((void*)&v84->field_0) = v87;
                    v88 = *((int128_t *)(vvar_185{reg 48} + 208));
                    *((struct_4 **)(vvar_185{reg 48} + 528)) = v84;
                    *((long long *)(vvar_185{reg 48} + 536)) = 0;
                    *((void*)(vvar_185{reg 48} + 0x200)) = v88;
                    *((unsigned long long *)(vvar_185{reg 48} + 544)) = v82;
                    v89 = *((long long *)(vvar_185{reg 48} + 144));
                    if (v89 == *((long long *)(vvar_761{reg 48} + 128)))
                    {
                        vvar_185{reg 48} = vvar_185{reg 48} - 8;
                        *((char **)(vvar_185{reg 48} - 8)) = &g_4df3ea;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd2c7d3e4c5d28c3a(vvar_696{reg 48} + 128);
                    }
                    v90 = *((long long *)(vvar_185{reg 48} + 136));
                    v91 = v89 * 5;
                    v92 = *((int128_t *)(vvar_185{reg 48} + 0x200));
                    v73 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                    v93 = *((int128_t *)(vvar_185{reg 48} + 528));
                    v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                    v76 = *((long long *)(vvar_185{reg 48} + 544));
                    *((unsigned long long *)(32 + (char *)v90 + 0x8 * v91)) = v76;
                    *((void*)(16 + (char *)v90 + 0x8 * v91)) = v93;
                    *((void*)((char *)v90 + 0x8 * v91)) = v92;
                    *((uint128_t **)(vvar_185{reg 48} + 144)) = (char *)v89 + 1;
                }
                else
                {
                    v85 = *((long long *)(vvar_753{reg 48} + 208));
                    if (!v85)
                    {
                        v86 = *((long long *)(vvar_753{reg 48} + 216));
                        v86->field_208 = vvar_1009 - 1;
                        if (CasCmpNE(v86->field_208, vvar_1009))
                            goto LABEL_0x4df41c;
                        if (!vvar_1009 - 1)
                            goto LABEL_4df42a;
                        continue;
LABEL_4df42a:
                        vvar_794{reg 48} = vvar_753{reg 48} - 8;
                        *((char **)(vvar_753{reg 48} - 8)) = &g_4df432;
                        std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v86);
                        v86->field_210 = 1;
                        if (CasCmpNE(v86->field_210, v86->field_210))
                            goto LABEL_0x4df434;
                        if (!vvar_1010)
                            continue;
                        vvar_807{reg 48} = vvar_794{reg 48} - 8;
                        *((char **)(vvar_794{reg 48} - 8)) = &g_4df44a;
                        _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v86);
                    }
                    else if ((unsigned int)v85 == 1)
                    {
                        vvar_788{reg 48} = vvar_753{reg 48} - 8;
                        *((char **)(vvar_753{reg 48} - 8)) = &g_4df40f;
                        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(vvar_753{reg 48} + 216);
                        continue;
                    }
                    else
                    {
                        vvar_791{reg 48} = vvar_753{reg 48} - 8;
                        *((char **)(vvar_753{reg 48} - 8)) = &g_4df45c;
                        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(vvar_753{reg 48} + 216);
                    }
                }
            } while ((v75 = *((long long *)(vvar_174{reg 48} + 336)), v75 != *((long long *)(vvar_174{reg 48} + 352))));
        }
        vvar_139{reg 48} = vvar_109{reg 48} - 8;
        *((char **)(vvar_109{reg 48} - 8)) = &g_4df46e;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h03900b1c52c58887(vvar_109{reg 48} + 328);
        v96 = *((long long *)(vvar_139{reg 48} + 144));
        *((unsigned long long *)(vvar_139{reg 48} + 528)) = v96;
        *((int128_t *)(vvar_139{reg 48} + 0x200)) = *((int128_t *)(vvar_139{reg 48} + 128));
        *((long long *)(vvar_139{reg 48} + 536)) = *((long long *)(vvar_139{reg 48} + 272));
        if (v96)
        {
            while (true)
            {
                vvar_139{reg 48} = vvar_1017{reg 48};
                v100 = (v96 >> 1) - 1;
                if (v100 == -1)
                    break;
                v101 = *((long long *)(vvar_139{reg 48} + 528));
                vvar_139{reg 48} = vvar_139{reg 48} - 8;
                *((char **)(vvar_139{reg 48} - 8)) = &g_4df4da;
                _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(vvar_838{reg 48} + 0x200, v100, v101);
            }
        }
        v103 = *((int128_t *)(vvar_139{reg 48} + 0x200));
        v104 = *((long long *)(vvar_139{reg 48} + 264));
        v104->field_20 = *((long long *)(vvar_139{reg 48} + 528));
        v104->field_28 = *((long long *)(vvar_139{reg 48} + 536));
        *((void*)&v104->field_10) = v103;
        v105 = *((int128_t *)(vvar_139{reg 48} + 224));
        v104->field_30 = *((int128_t *)(vvar_139{reg 48} + 288));
        v106 = *((long long *)(vvar_139{reg 48} + 304));
        v104->field_40 = v106;
        *((void*)&v104->field_0) = v105;
        v104->field_48 = 0;
        return v106;
    }
    v21 = vvar_7{reg 48} + 520;
    v22 = v20 + 24;
    *((long long *)(vvar_7{reg 48} + 96)) = 0;
    v23 = vvar_7{reg 48} + 328;
    *((long long *)(vvar_7{reg 48} + 504)) = 9223372036854775809;
    while (true)
    {
        v25 = v22[3].field_-18;
        if (v25 == 0x8000000000000000)
        {
LABEL_4df022:
            *((struct_3 **)(vvar_7{reg 48} + 136)) = v22;
            *((long long *)(vvar_7{reg 48} + 176)) = *((long long *)(vvar_7{reg 48} + 96));
            goto LABEL_4df037;
        }
        v26 = v22 + 3;
        v27 = *((int128_t *)&(&v26->padding_0)[1]);
        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
        *((void*)(vvar_7{reg 48} + 336)) = v27;
        v28 = *((long long *)(vvar_7{reg 48} + 160));
        v29 = *((long long *)(vvar_7{reg 48} + 168));
        *((unsigned long long *)(vvar_7{reg 48} + 328)) = v25;
        vvar_7{reg 48} = vvar_7{reg 48} - 8;
        *((char **)(vvar_7{reg 48} - 8)) = &g_4ded01;
        v29->field_20(vvar_46{reg 48} + 0x200, v28, v23, v29);
        v30 = *((long long *)(vvar_7{reg 48} + 0x200));
        if (v30 == *((long long *)(vvar_398{reg 48} + 504)))
        {
            v22 = v20 + 24;
            goto LABEL_4df022;
        }
        *((struct_3 **)(vvar_7{reg 48} + 88)) = v22;
        v31 = vvar_7{reg 48} + 296;
        v31->field_10 = v21->field_10;
        v32 = v21->field_0;
        *((void*)&v31->field_0) = v32;
        *((long long *)(vvar_7{reg 48} + 80)) = *((long long *)(vvar_7{reg 48} + 96)) + 1;
        *((unsigned long long *)(vvar_7{reg 48} + 288)) = v30;
        vvar_416{reg 48} = vvar_7{reg 48} - 8;
        *((char **)(vvar_7{reg 48} - 8)) = &g_4ded5c;
        std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_398{reg 48} + 0x200, 2, v33, v31);
        v21 = v21;
        *((long long *)(vvar_416{reg 48} + 0x400)) = 1;
        *((long long *)(vvar_416{reg 48} + 1032)) = 1;
        *((char *)(vvar_416{reg 48} + 1040)) = 0;
        vvar_423{reg 48} = vvar_416{reg 48} - 8;
        *((char **)(vvar_416{reg 48} - 8)) = &g_4ded99;
        v34 = __rust_alloc(640, 128);
        if (!v34)
        {
            *((long long *)(vvar_423{reg 48} + 136)) = *((long long *)(vvar_423{reg 48} + 88));
            *((long long *)(vvar_423{reg 48} + 176)) = *((long long *)(vvar_423{reg 48} + 80));
            *((char **)(vvar_423{reg 48} - 8)) = &g_4df85b;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v35 = v34;
        vvar_148{reg 48} = vvar_423{reg 48} - 8;
        *((char **)(vvar_423{reg 48} - 8)) = &g_4dedbb;
        memcpy(v34, vvar_423{reg 48} + 0x200, 640);
        *((long long *)(vvar_148{reg 48} + 208)) = 0;
        *((struct_0 **)(vvar_148{reg 48} + 216)) = v35;
        *((long long *)(vvar_148{reg 48} + 0x200)) = 0;
        *((struct_0 **)(vvar_148{reg 48} + 520)) = v35;
        v36 = *((long long *)(vvar_148{reg 48} + 200));
        if (v36 == *((long long *)(vvar_432{reg 48} + 184)))
        {
            vvar_148{reg 48} = vvar_148{reg 48} - 8;
            *((char **)(vvar_148{reg 48} - 8)) = &g_4dee02;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0ea67d5e0df72439(vvar_432{reg 48} + 184);
        }
        v37 = *((long long *)(vvar_148{reg 48} + 192));
        v38 = v36 * 16;
        *((long long *)(v37 + v38)) = 0;
        *((struct_0 **)(v37 + v38 + 8)) = v35;
        *((unsigned long long **)(vvar_148{reg 48} + 200)) = (char *)v36 + 1;
        v39 = *((int128_t *)(vvar_148{reg 48} + 296));
        if (v30 == 0x8000000000000000)
            break;
        v40 = *((long long *)(vvar_148{reg 48} + 312));
        *((long long *)(vvar_148{reg 48} + 0x200)) = 0;
        *((struct_0 **)(vvar_148{reg 48} + 520)) = v35;
        *((unsigned long long *)(vvar_148{reg 48} + 528)) = v30;
        *((void*)(vvar_148{reg 48} + 536)) = v39;
        *((unsigned long long *)(vvar_148{reg 48} + 552)) = v40;
        *((long long *)(vvar_148{reg 48} + 560)) = 0;
        *((long long *)(vvar_148{reg 48} + 568)) = 1;
        *((long long *)(vvar_148{reg 48} + 576)) = 0;
        v41 = *((long long *)(vvar_148{reg 48} + 120));
        if (v41 == *((long long *)(vvar_148{reg 48} + 104)))
        {
            vvar_148{reg 48} = vvar_148{reg 48} - 8;
            *((char **)(vvar_148{reg 48} - 8)) = &g_4deeb2;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd955f8c048d0d574(vvar_148{reg 48} + 104);
        }
        v42 = *((long long *)(vvar_169{reg 48} + 112));
        v43 = v41 * 9;
        *((long long *)(64 + (char *)v42 + 0x8 * v43)) = *((long long *)(vvar_169{reg 48} + 576));
        v44 = *((int128_t *)(vvar_169{reg 48} + 0x200));
        v45 = *((int128_t *)(vvar_169{reg 48} + 528));
        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
        v46 = *((int128_t *)(vvar_169{reg 48} + 544));
        v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
        v47 = *((int128_t *)(vvar_169{reg 48} + 560));
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
        *((void*)(48 + (char *)v42 + 0x8 * v43)) = v47;
        *((void*)(32 + (char *)v42 + 0x8 * v43)) = v46;
        *((void*)(16 + (char *)v42 + 0x8 * v43)) = v45;
        *((void*)((char *)v42 + 0x8 * v43)) = v44;
        *((uint128_t **)(vvar_169{reg 48} + 120)) = (char *)v41 + 1;
        vvar_478{reg 48} = vvar_169{reg 48} - 8;
        *((char **)(vvar_169{reg 48} - 8)) = &g_4def13;
        v48 = __rust_alloc_zeroed(0x2000, 1);
        v23 = vvar_478{reg 48} + 328;
        if (!v48)
        {
            *((long long *)(vvar_478{reg 48} + 136)) = *((long long *)(vvar_478{reg 48} + 88));
            *((long long *)(vvar_478{reg 48} + 176)) = *((long long *)(vvar_478{reg 48} + 80));
            *((char **)(vvar_478{reg 48} - 8)) = &g_4df885;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v21->field_10) = 0;
        *((int128_t *)&(&v21->padding_18)[1]) = 0;
        *((int128_t *)&v21->padding_38) = 0;
        v49 = *((long long *)(vvar_478{reg 48} + 96));
        *((long long *)(vvar_478{reg 48} + 0x200)) = *((long long *)(vvar_478{reg 48} + 96));
        *((long long *)(vvar_478{reg 48} + 520)) = 0;
        *((long long *)(vvar_478{reg 48} + 528)) = 8;
        *((long long *)(vvar_478{reg 48} + 552)) = 8;
        *((long long *)(vvar_478{reg 48} + 576)) = 8;
        *((long long *)(vvar_478{reg 48} + 600)) = 8;
        *((long long *)(vvar_478{reg 48} + 608)) = 0;
        *((long long *)(vvar_478{reg 48} + 616)) = 0x2000;
        *((unsigned long long *)(vvar_478{reg 48} + 624)) = v48;
        *((long long *)(vvar_478{reg 48} + 632)) = 0x2000;
        v50 = *((long long *)(vvar_478{reg 48} + 88));
        vvar_7{reg 48} = vvar_478{reg 48} - 8;
        *((char **)(vvar_478{reg 48} - 8)) = &g_4defcb;
        std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(v23, vvar_478{reg 48} + 224, vvar_478{reg 48} + 0x200, v49);
        if (*((long long *)(vvar_492{reg 48} + 336)) != 0x8000000000000000)
        {
            *((unsigned long long *)(vvar_7{reg 48} + 136)) = v50;
            *((long long *)(vvar_7{reg 48} + 176)) = *((long long *)(vvar_7{reg 48} + 80));
            *((int128_t *)(vvar_7{reg 48} + 624)) = *((int128_t *)(vvar_7{reg 48} + 440));
            *((int128_t *)(vvar_7{reg 48} + 608)) = *((int128_t *)(vvar_7{reg 48} + 424));
            *((int128_t *)(vvar_7{reg 48} + 592)) = *((int128_t *)(vvar_7{reg 48} + 408));
            *((int128_t *)(vvar_7{reg 48} + 576)) = *((int128_t *)(vvar_7{reg 48} + 392));
            v53 = *((int128_t *)(vvar_7{reg 48} + 328));
            v54 = *((int128_t *)(vvar_7{reg 48} + 344));
            v55 = *((int128_t *)(vvar_7{reg 48} + 360));
            *((int128_t *)(vvar_7{reg 48} + 560)) = *((int128_t *)(vvar_7{reg 48} + 376));
            *((void*)(vvar_7{reg 48} + 544)) = v55;
            *((void*)(vvar_7{reg 48} + 528)) = v54;
            *((void*)(vvar_7{reg 48} + 0x200)) = v53;
            *((char **)(vvar_7{reg 48} - 8)) = &g_4df942;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v22 = v50 + 24;
        v20 = (char *)&v26->field_8 + 8;
        v51 = *((long long *)(vvar_7{reg 48} + 80));
        *((unsigned long long *)(vvar_7{reg 48} + 96)) = v51;
        if (v20 == *((long long *)(vvar_492{reg 48} + 280)))
        {
            v22 = *((long long *)(vvar_7{reg 48} + 280));
            *((unsigned long long *)(vvar_7{reg 48} + 96)) = v51;
            goto LABEL_4df022;
        }
    }
    *((long long *)(vvar_148{reg 48} + 136)) = *((long long *)(vvar_148{reg 48} + 88));
    *((long long *)(vvar_148{reg 48} + 176)) = *((long long *)(vvar_148{reg 48} + 80));
    v52 = *((long long *)(vvar_148{reg 48} + 264));
    *((void*)&(&v52->field_0)[1]) = v39;
    v52->field_0 = 3;
    v35->field_200 = vvar_1007 - 1;
    if (CasCmpNE(v35->field_200, vvar_1007))
        goto LABEL_0x4df572;
    if (!vvar_1007 - 1)
        goto LABEL_0x4df57c;
}
