long long uu_sort::merge::merge_without_limit::h2cb0e3b793b4f50f(unsigned long a0, uint128_t a1[3], unsigned long a2)
{
    char v0;  // [bp-0x30]
    int v2;  // xmm0
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdi
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
    struct_0 *v21;  // r13
    struct_6 *v22;  // r15
    unsigned long long v23;  // r14
    int v24;  // ymm3
    unsigned long long v25;  // rax
    struct_8 *v26;  // r12
    struct_5 *v27;  // rdx
    int v28;  // xmm0
    int v29;  // xmm1
    unsigned long long v30;  // rsi
    struct_3 *v31;  // rcx
    unsigned long long v32;  // r14
    struct_12 *v33;  // rcx
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2
    int v37;  // xmm3
    unsigned long long v38;  // rdx
    struct_0 *v39;  // r15
    struct_4 *v40;  // rax
    struct_4 *v41;  // rbx
    unsigned long long *v42;  // r13
    unsigned long long *v43;  // rax
    unsigned long long *v44;  // rcx
    int v45;  // xmm0
    struct_13 *v46;  // rcx
    int v47;  // xmm1
    int v48;  // xmm2
    int v49;  // xmm3
    uint128_t *v50;  // rbx
    uint128_t *v51;  // rax
    uint128_t *v52;  // rcx
    int v53;  // xmm0
    int v54;  // xmm0
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    int v59;  // xmm3
    unsigned long long v60;  // rax
    unsigned long long v61;  // rcx
    unsigned long long v62;  // r15
    unsigned long long v63;  // rcx
    struct_10 *v64;  // rax
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    unsigned long long v74;  // r14
    struct_11 *v75;  // r13
    void* v76;  // rbx
    unsigned long long v77;  // rax
    unsigned long long v78;  // rcx
    unsigned long long v79;  // rsi
    int v80;  // xmm0
    int v81;  // xmm1
    int v82;  // xmm2
    int v83;  // xmm0
    int v84;  // xmm0
    int v85;  // ymm0
    unsigned long long v86;  // rcx
    uint128_t *v87;  // rax
    unsigned long long v88;  // rdx
    unsigned long long v89;  // rsi
    int v91;  // xmm0
    unsigned long long v92;  // rbx
    unsigned long long v93;  // rax
    struct_9 *v94;  // rax
    unsigned long long v95;  // rax
    struct_7 *v96;  // rbx
    int v97;  // xmm0
    int v98;  // xmm0
    uint128_t *v99;  // rbx
    uint128_t *v100;  // rax
    uint128_t *v101;  // rcx
    int v102;  // xmm0
    int v103;  // xmm1
    unsigned long long v105;  // rsi
    unsigned long long v108;  // rsi
    unsigned long long v109;  // rdx
    int v112;  // xmm0
    struct_1 *v113;  // rcx
    int v114;  // xmm0
    unsigned long long v115;  // rax

    vvar_284{reg 48} = (&v0 & -128) - 0x500;
    *((unsigned long *)(vvar_284{reg 48} + 232)) = a2;
    *((unsigned long *)(vvar_284{reg 48} + 224)) = a0;
    *((uint128_t *[3])(vvar_284{reg 48} + 216)) = a1;
    vvar_6{reg 48} = vvar_284{reg 48} - 8;
    *((char **)(vvar_284{reg 48} - 8)) = &g_4dd933;
    std::sync::mpmc::channel::h0c4124d0ce0eccd6(vvar_284{reg 48} + 0x200);
    v2 = *((int128_t *)(vvar_6{reg 48} + 0x200));
    v3 = *((long long *)(vvar_6{reg 48} + 528));
    v4 = *((long long *)(vvar_6{reg 48} + 536));
    *((void*)(vvar_6{reg 48} + 184)) = v2;
    *((unsigned long long *)(vvar_6{reg 48} + 496)) = v3;
    *((unsigned long long *)(vvar_6{reg 48} + 200)) = v3;
    v5 = *((long long *)((char *)&a1[1] + 8));
    v6 = *((long long *)((char *)&a1[0] + 8));
    *((unsigned long long *)(vvar_6{reg 48} + 488)) = v4;
    *((unsigned long long *)(vvar_6{reg 48} + 208)) = v4;
    v7 = (v5 - v6) / 48;
    if (v5 == v6)
    {
        *((long long *)(vvar_6{reg 48} + 64)) = 0;
        *((long long *)(vvar_6{reg 48} + 72)) = 8;
        *((long long *)(vvar_6{reg 48} + 80)) = 0;
        v8 = 8;
        goto LABEL_4dda4b;
    }
    if (v5 - v6 > 3689348814741910320)
        goto LABEL_4de7cd;
    vvar_6{reg 48} = vvar_6{reg 48} - 8;
    *((char **)(vvar_6{reg 48} - 8)) = &g_4dd9d6;
    v9 = __rust_alloc(v7 * 120, 8);
    if (!v9)
    {
LABEL_4de7cd:
        *((char **)(vvar_16{reg 48} - 8)) = &g_4de7d9;
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    *((unsigned long long *)(vvar_6{reg 48} + 64)) = v7;
    *((unsigned long long *)(vvar_6{reg 48} + 72)) = v9;
    *((long long *)(vvar_6{reg 48} + 80)) = 0;
    vvar_6{reg 48} = vvar_6{reg 48} - 8;
    *((char **)(vvar_6{reg 48} - 8)) = &g_4dda0b;
    v8 = __rust_alloc(v7 * 16, 8);
    a1 = *((long long *)(vvar_6{reg 48} + 216));
    if (!v8)
    {
        *((void* *)(vvar_6{reg 48} - 8)) = sub_4dda26;
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
LABEL_4dda4b:
    *((unsigned long long *)(vvar_6{reg 48} + 88)) = v7;
    *((unsigned long long *)(vvar_6{reg 48} + 96)) = v8;
    *((long long *)(vvar_6{reg 48} + 104)) = 0;
    v10 = a1[0];
    v12 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10;
    v13 = a1[1];
    v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
    v16 = a1[2];
    v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
    *((void*)(vvar_6{reg 48} + 160)) = v16;
    *((void*)(vvar_6{reg 48} + 144)) = v13;
    *((void*)(vvar_6{reg 48} + 128)) = v10;
    *((long long *)(vvar_6{reg 48} + 176)) = 0;
    v19 = *((long long *)(vvar_6{reg 48} + 152));
    v20 = *((long long *)(vvar_6{reg 48} + 136));
    *((unsigned long long *)(vvar_6{reg 48} + 240)) = v19;
    if (v20 == v19)
    {
LABEL_4dded2:
        vvar_64{reg 48} = vvar_26{reg 48} - 8;
        *((char **)(vvar_26{reg 48} - 8)) = &g_4ddee2;
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$::hd1debdc18ae1c21e(vvar_26{reg 48} + 128);
        v74 = *((long long *)(vvar_64{reg 48} + 80));
        if (v74)
        {
            v75 = vvar_64{reg 48} + 536;
            v76 = 0;
            do
            {
                vvar_618{reg 48} = vvar_97{reg 48} - 8;
                *((char **)(vvar_97{reg 48} - 8)) = &g_4ddf20;
                v77 = __rust_alloc_zeroed(0x2000, 1);
                if (!v77)
                {
                    *((char **)(vvar_618{reg 48} - 8)) = &g_4de5c9;
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                v12 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v75->field_0 = 0;
                *((int128_t *)&(&v75->padding_10)[1]) = 0;
                *((int128_t *)&v75->padding_28) = 0;
                *((void* *)(vvar_618{reg 48} + 0x200)) = v76;
                *((long long *)(vvar_618{reg 48} + 520)) = 0;
                *((long long *)(vvar_618{reg 48} + 528)) = 8;
                *((long long *)(vvar_618{reg 48} + 552)) = 8;
                *((long long *)(vvar_618{reg 48} + 576)) = 8;
                *((long long *)(vvar_618{reg 48} + 600)) = 8;
                *((long long *)(vvar_618{reg 48} + 608)) = 0;
                *((long long *)(vvar_618{reg 48} + 616)) = 0x2000;
                *((unsigned long long *)(vvar_618{reg 48} + 624)) = v77;
                *((long long *)(vvar_618{reg 48} + 632)) = 0x2000;
                vvar_64{reg 48} = vvar_618{reg 48} - 8;
                *((char **)(vvar_618{reg 48} - 8)) = &g_4ddfbe;
                std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_618{reg 48} + 248, vvar_575{reg 48} + 184, vvar_575{reg 48} + 0x200, v78);
                if (*((long long *)(vvar_628{reg 48} + 0x100)) != 0x8000000000000000)
                {
                    *((int128_t *)(vvar_64{reg 48} + 624)) = *((int128_t *)(vvar_64{reg 48} + 360));
                    *((int128_t *)(vvar_64{reg 48} + 608)) = *((int128_t *)(vvar_64{reg 48} + 344));
                    *((int128_t *)(vvar_64{reg 48} + 592)) = *((int128_t *)(vvar_64{reg 48} + 328));
                    *((int128_t *)(vvar_64{reg 48} + 576)) = *((int128_t *)(vvar_64{reg 48} + 312));
                    v80 = *((int128_t *)(vvar_64{reg 48} + 248));
                    v81 = *((int128_t *)(vvar_64{reg 48} + 264));
                    v82 = *((int128_t *)(vvar_64{reg 48} + 280));
                    *((int128_t *)(vvar_64{reg 48} + 560)) = *((int128_t *)(vvar_64{reg 48} + 296));
                    *((void*)(vvar_64{reg 48} + 544)) = v82;
                    *((void*)(vvar_64{reg 48} + 528)) = v81;
                    *((void*)(vvar_64{reg 48} + 0x200)) = v80;
                    *((char **)(vvar_64{reg 48} - 8)) = &g_4de671;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v76 += 1;
            } while (v74 != v76);
        }
        v79 = *((long long *)(vvar_64{reg 48} + 232));
        vvar_652{reg 48} = vvar_64{reg 48} - 8;
        *((char **)(vvar_64{reg 48} - 8)) = &g_4ddffa;
        _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::hd3e39bd05377cda4(vvar_64{reg 48} + 248, v79);
        *((long long *)(vvar_652{reg 48} + 0x200)) = *((long long *)(vvar_652{reg 48} + 496));
        *((long long *)(vvar_652{reg 48} + 520)) = *((long long *)(vvar_652{reg 48} + 488));
        v83 = *((int128_t *)(vvar_652{reg 48} + 64));
        *((void*)(vvar_652{reg 48} + 528)) = v83;
        *((long long *)(vvar_652{reg 48} + 544)) = *((long long *)(vvar_652{reg 48} + 80));
        vvar_692{reg 48} = vvar_652{reg 48} - 8;
        *((char **)(vvar_652{reg 48} - 8)) = &g_4de04f;
        memcpy(vvar_652{reg 48} + 552, vvar_652{reg 48} + 248, 160);
        *((long long *)(vvar_692{reg 48} + 264)) = 0x8000000000000000;
        *((long long *)(vvar_692{reg 48} + 248)) = 0;
        vvar_108{reg 48} = vvar_692{reg 48} - 8;
        *((char **)(vvar_692{reg 48} - 8)) = &g_4de08d;
        std::thread::Builder::spawn_unchecked::h99595f7f9badbd51(vvar_692{reg 48} + 408, vvar_692{reg 48} + 248, vvar_692{reg 48} + 0x200);
        if (!*((long long *)(vvar_707{reg 48} + 408)))
        {
            *((long long *)(vvar_108{reg 48} + 248)) = *((long long *)(vvar_108{reg 48} + 416));
            *((char **)(vvar_108{reg 48} - 8)) = &g_4de7ca;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        *((long long *)(vvar_108{reg 48} + 144)) = *((long long *)(vvar_108{reg 48} + 424));
        v84 = *((int128_t *)(vvar_108{reg 48} + 408));
        v85 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
        *((void*)(vvar_108{reg 48} + 128)) = v84;
        *((long long *)(vvar_108{reg 48} + 408)) = 0;
        *((long long *)(vvar_108{reg 48} + 416)) = 8;
        *((long long *)(vvar_108{reg 48} + 424)) = 0;
        v86 = *((long long *)(vvar_108{reg 48} + 88));
        v87 = *((long long *)(vvar_108{reg 48} + 96));
        v88 = *((long long *)(vvar_108{reg 48} + 104));
        v89 = &v87[v88];
        *((uint128_t **)(vvar_108{reg 48} + 248)) = v87;
        *((uint128_t **)(vvar_108{reg 48} + 0x100)) = v87;
        *((unsigned long long *)(vvar_108{reg 48} + 264)) = v86;
        *((unsigned long long *)(vvar_108{reg 48} + 272)) = v89;
        *((long long *)(vvar_108{reg 48} + 280)) = 0;
        if (v88)
        {
            do
            {
                *((uint128_t **)(vvar_125{reg 48} + 0x100)) = v87 + 1;
                v91 = *(v87);
                v85 = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                v92 = *((long long *)(vvar_125{reg 48} + 280));
                *((unsigned long long *)(vvar_125{reg 48} + 280)) = v92 + 1;
                *((void*)(vvar_125{reg 48} + 112)) = v91;
                vvar_760{reg 48} = vvar_125{reg 48} - 8;
                *((char **)(vvar_125{reg 48} - 8)) = &g_4de1d3;
                v93 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(vvar_707{reg 48} + 112, v89, v88);
                if (v93)
                {
                    *((long long *)(vvar_760{reg 48} + 0x200)) = 1;
                    *((long long *)(vvar_760{reg 48} + 520)) = 1;
                    *((unsigned long long *)(vvar_760{reg 48} + 528)) = v93;
                    vvar_184{reg 48} = vvar_760{reg 48} - 8;
                    *((char **)(vvar_760{reg 48} - 8)) = &g_4de20d;
                    v94 = __rust_alloc(24, 8);
                    if (!v94)
                    {
                        *((char **)(vvar_184{reg 48} - 8)) = &g_4de681;
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    }
                    v94->field_10 = *((long long *)(vvar_184{reg 48} + 528));
                    v97 = *((int128_t *)(vvar_184{reg 48} + 0x200));
                    *((void*)&v94->field_0) = v97;
                    v98 = *((int128_t *)(vvar_184{reg 48} + 112));
                    *((struct_9 **)(vvar_184{reg 48} + 528)) = v94;
                    *((long long *)(vvar_184{reg 48} + 536)) = 0;
                    *((void*)(vvar_184{reg 48} + 0x200)) = v98;
                    *((unsigned long long *)(vvar_184{reg 48} + 544)) = v92;
                    v99 = *((long long *)(vvar_184{reg 48} + 424));
                    if (v99 == *((long long *)(vvar_768{reg 48} + 408)))
                    {
                        vvar_184{reg 48} = vvar_184{reg 48} - 8;
                        *((char **)(vvar_184{reg 48} - 8)) = &g_4de274;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd2c7d3e4c5d28c3a(vvar_707{reg 48} + 408);
                    }
                    v100 = *((long long *)(vvar_184{reg 48} + 416));
                    v101 = v99 * 5;
                    v102 = *((int128_t *)(vvar_184{reg 48} + 0x200));
                    v85 = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                    v103 = *((int128_t *)(vvar_184{reg 48} + 528));
                    v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                    v88 = *((long long *)(vvar_184{reg 48} + 544));
                    *((unsigned long long *)(32 + (char *)v100 + 0x8 * v101)) = v88;
                    *((void*)(16 + (char *)v100 + 0x8 * v101)) = v103;
                    *((void*)((char *)v100 + 0x8 * v101)) = v102;
                    *((uint128_t **)(vvar_184{reg 48} + 424)) = (char *)v99 + 1;
                }
                else
                {
                    v95 = *((long long *)(vvar_760{reg 48} + 112));
                    if (!v95)
                    {
                        v96 = *((long long *)(vvar_760{reg 48} + 120));
                        v96->field_208 = vvar_1003 - 1;
                        if (CasCmpNE(v96->field_208, vvar_1003))
                            goto LABEL_0x4de2a3;
                        if (!vvar_1003 - 1)
                            goto LABEL_4de2b1;
                        continue;
LABEL_4de2b1:
                        vvar_801{reg 48} = vvar_760{reg 48} - 8;
                        *((char **)(vvar_760{reg 48} - 8)) = &g_4de2b9;
                        std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v96);
                        v96->field_210 = 1;
                        if (CasCmpNE(v96->field_210, v96->field_210))
                            goto LABEL_0x4de2bb;
                        if (!vvar_1004)
                            continue;
                        vvar_814{reg 48} = vvar_801{reg 48} - 8;
                        *((char **)(vvar_801{reg 48} - 8)) = &g_4de2d1;
                        _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v96);
                    }
                    else if ((unsigned int)v95 == 1)
                    {
                        vvar_795{reg 48} = vvar_760{reg 48} - 8;
                        *((char **)(vvar_760{reg 48} - 8)) = &g_4de299;
                        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(vvar_760{reg 48} + 120);
                        continue;
                    }
                    else
                    {
                        vvar_798{reg 48} = vvar_760{reg 48} - 8;
                        *((char **)(vvar_760{reg 48} - 8)) = &g_4de2e0;
                        std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(vvar_760{reg 48} + 120);
                    }
                }
            } while ((v87 = *((long long *)(vvar_173{reg 48} + 0x100)), v87 != *((long long *)(vvar_173{reg 48} + 272))));
        }
        vvar_138{reg 48} = vvar_108{reg 48} - 8;
        *((char **)(vvar_108{reg 48} - 8)) = &g_4de2f2;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h03900b1c52c58887(vvar_108{reg 48} + 248);
        v105 = *((long long *)(vvar_138{reg 48} + 424));
        *((unsigned long long *)(vvar_138{reg 48} + 528)) = v105;
        *((int128_t *)(vvar_138{reg 48} + 0x200)) = *((int128_t *)(vvar_138{reg 48} + 408));
        *((long long *)(vvar_138{reg 48} + 536)) = *((long long *)(vvar_138{reg 48} + 232));
        if (v105)
        {
            while (true)
            {
                vvar_138{reg 48} = vvar_1011{reg 48};
                v108 = (v105 >> 1) - 1;
                if (v108 == -1)
                    break;
                v109 = *((long long *)(vvar_138{reg 48} + 528));
                vvar_138{reg 48} = vvar_138{reg 48} - 8;
                *((char **)(vvar_138{reg 48} - 8)) = &g_4de35a;
                _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(vvar_837{reg 48} + 0x200, v108, v109);
            }
        }
        v112 = *((int128_t *)(vvar_138{reg 48} + 0x200));
        v113 = *((long long *)(vvar_138{reg 48} + 224));
        v113->field_20 = *((long long *)(vvar_138{reg 48} + 528));
        v113->field_28 = *((long long *)(vvar_138{reg 48} + 536));
        *((void*)&v113->field_10) = v112;
        v114 = *((int128_t *)(vvar_138{reg 48} + 184));
        v113->field_30 = *((int128_t *)(vvar_138{reg 48} + 128));
        v115 = *((long long *)(vvar_138{reg 48} + 144));
        v113->field_40 = v115;
        *((void*)&v113->field_0) = v114;
        v113->field_48 = 0;
        return v115;
    }
    v21 = vvar_6{reg 48} + 520;
    v22 = v20 + 48;
    *((long long *)(vvar_6{reg 48} + 56)) = 0;
    v23 = vvar_6{reg 48} + 248;
    *((long long *)(vvar_6{reg 48} + 504)) = 9223372036854775809;
    while (true)
    {
        v25 = v22[6].field_-30;
        if (v25 == 0x8000000000000000)
        {
LABEL_4ddebd:
            *((struct_6 **)(vvar_6{reg 48} + 136)) = v22;
            *((long long *)(vvar_6{reg 48} + 176)) = *((long long *)(vvar_6{reg 48} + 56));
            goto LABEL_4dded2;
        }
        v26 = v22 + 6;
        v27 = vvar_6{reg 48} + 0x100;
        v27->field_20 = *((long long *)((char *)&v26->field_18 + 8));
        v28 = *((int128_t *)&(&v26->padding_0)[1]);
        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
        v29 = *((int128_t *)((char *)&v26->field_8 + 8));
        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
        *((void*)&v27->field_10) = v29;
        *((void*)&v27->field_0) = v28;
        v30 = *((long long *)(vvar_6{reg 48} + 160));
        v31 = *((long long *)(vvar_6{reg 48} + 168));
        *((unsigned long long *)(vvar_6{reg 48} + 248)) = v25;
        vvar_6{reg 48} = vvar_6{reg 48} - 8;
        *((char **)(vvar_6{reg 48} - 8)) = &g_4ddb55;
        v31->field_20(vvar_45{reg 48} + 0x200, v30, v23, v31);
        v32 = *((long long *)(vvar_6{reg 48} + 0x200));
        if (v32 == *((long long *)(vvar_390{reg 48} + 504)))
        {
            v22 = v20 + 48;
            goto LABEL_4ddebd;
        }
        *((struct_6 **)(vvar_6{reg 48} + 48)) = v22;
        v33 = vvar_6{reg 48} + 416;
        *((char [8])&v33->field_40) = v21->padding_38;
        v34 = v21->field_0;
        v35 = v21->field_10;
        v36 = v21->field_20;
        v37 = v21->field_28;
        *((void*)&v33->field_30) = v37;
        *((void*)&v33->field_20) = v36;
        *((void*)&v33->field_10) = v35;
        *((void*)&v33->field_0) = v34;
        *((long long *)(vvar_6{reg 48} + 40)) = *((long long *)(vvar_6{reg 48} + 56)) + 1;
        *((unsigned long long *)(vvar_6{reg 48} + 408)) = v32;
        vvar_414{reg 48} = vvar_6{reg 48} - 8;
        *((char **)(vvar_6{reg 48} - 8)) = &g_4ddbca;
        std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_390{reg 48} + 0x200, 2, v38, v33);
        v39 = v21;
        *((long long *)(vvar_414{reg 48} + 0x400)) = 1;
        *((long long *)(vvar_414{reg 48} + 1032)) = 1;
        *((char *)(vvar_414{reg 48} + 1040)) = 0;
        vvar_421{reg 48} = vvar_414{reg 48} - 8;
        *((char **)(vvar_414{reg 48} - 8)) = &g_4ddc07;
        v40 = __rust_alloc(640, 128);
        if (!v40)
        {
            *((long long *)(vvar_421{reg 48} + 136)) = *((long long *)(vvar_421{reg 48} + 48));
            *((long long *)(vvar_421{reg 48} + 176)) = *((long long *)(vvar_421{reg 48} + 40));
            *((char **)(vvar_421{reg 48} - 8)) = &g_4de6ab;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v41 = v40;
        vvar_147{reg 48} = vvar_421{reg 48} - 8;
        *((char **)(vvar_421{reg 48} - 8)) = &g_4ddc29;
        memcpy(v40, vvar_421{reg 48} + 0x200, 640);
        *((long long *)(vvar_147{reg 48} + 112)) = 0;
        *((struct_4 **)(vvar_147{reg 48} + 120)) = v41;
        *((long long *)(vvar_147{reg 48} + 0x200)) = 0;
        *((struct_4 **)(vvar_147{reg 48} + 520)) = v41;
        v42 = *((long long *)(vvar_147{reg 48} + 104));
        if (v42 == *((long long *)(vvar_430{reg 48} + 88)))
        {
            vvar_147{reg 48} = vvar_147{reg 48} - 8;
            *((char **)(vvar_147{reg 48} - 8)) = &g_4ddc61;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0ea67d5e0df72439(vvar_430{reg 48} + 88);
        }
        v43 = *((long long *)(vvar_147{reg 48} + 96));
        v44 = v42 * 16;
        *((long long *)(v43 + v44)) = 0;
        *((struct_4 **)(v43 + v44 + 8)) = v41;
        *((unsigned long long **)(vvar_147{reg 48} + 104)) = (char *)v42 + 1;
        v45 = *((int128_t *)(vvar_147{reg 48} + 416));
        if (v32 == 0x8000000000000000)
            break;
        v46 = vvar_147{reg 48} + 416;
        v21 = v39;
        *((unsigned long long *)&v39->padding_48[0]) = v46->field_40;
        v47 = v46->field_10;
        v48 = v46->field_20;
        v49 = v46->field_30;
        *((void*)&v39->padding_38[0]) = v49;
        *((void*)&v39->field_28) = v48;
        *((void*)&v39->field_20) = v47;
        *((long long *)(vvar_147{reg 48} + 0x200)) = 0;
        *((struct_4 **)(vvar_147{reg 48} + 520)) = v41;
        *((unsigned long long *)(vvar_147{reg 48} + 528)) = v32;
        *((void*)(vvar_147{reg 48} + 536)) = v45;
        *((long long *)(vvar_147{reg 48} + 608)) = 0;
        *((long long *)(vvar_147{reg 48} + 616)) = 1;
        *((long long *)(vvar_147{reg 48} + 624)) = 0;
        v50 = *((long long *)(vvar_147{reg 48} + 80));
        if (v50 == *((long long *)(vvar_147{reg 48} + 64)))
        {
            vvar_147{reg 48} = vvar_147{reg 48} - 8;
            *((char **)(vvar_147{reg 48} - 8)) = &g_4ddd29;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha577d2da83e84cd3(vvar_147{reg 48} + 64);
        }
        v51 = *((long long *)(vvar_168{reg 48} + 72));
        v52 = v50 * 120;
        *((long long *)(v51 + v52 + 112)) = *((long long *)(vvar_168{reg 48} + 624));
        v53 = *((int128_t *)(vvar_168{reg 48} + 608));
        *((void*)(v51 + v52 + 96)) = v53;
        v54 = *((int128_t *)(vvar_168{reg 48} + 592));
        *((void*)(v51 + v52 + 80)) = v54;
        v55 = *((int128_t *)(vvar_168{reg 48} + 576));
        *((void*)(v51 + v52 + 64)) = v55;
        v56 = *((int128_t *)(vvar_168{reg 48} + 0x200));
        v57 = *((int128_t *)(vvar_168{reg 48} + 528));
        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v58 = *((int128_t *)(vvar_168{reg 48} + 544));
        v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
        v59 = *((int128_t *)(vvar_168{reg 48} + 560));
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        *((void*)(v51 + v52 + 48)) = v59;
        *((void*)(v51 + v52 + 32)) = v58;
        *((void*)(v51 + v52 + 16)) = v57;
        *((void*)(v51 + v52)) = v56;
        *((uint128_t **)(vvar_168{reg 48} + 80)) = (char *)v50 + 1;
        vvar_490{reg 48} = vvar_168{reg 48} - 8;
        *((char **)(vvar_168{reg 48} - 8)) = &g_4dddb1;
        v60 = __rust_alloc_zeroed(0x2000, 1);
        v23 = vvar_490{reg 48} + 248;
        if (!v60)
        {
            *((long long *)(vvar_490{reg 48} + 136)) = *((long long *)(vvar_490{reg 48} + 48));
            *((long long *)(vvar_490{reg 48} + 176)) = *((long long *)(vvar_490{reg 48} + 40));
            *((char **)(vvar_490{reg 48} - 8)) = &g_4de6d5;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v21->field_10 = 0;
        *((int128_t *)((char *)&v21->field_20 + 8)) = 0;
        *((int128_t *)&v21->padding_38) = 0;
        v61 = *((long long *)(vvar_490{reg 48} + 56));
        *((long long *)(vvar_490{reg 48} + 0x200)) = *((long long *)(vvar_490{reg 48} + 56));
        *((long long *)(vvar_490{reg 48} + 520)) = 0;
        *((long long *)(vvar_490{reg 48} + 528)) = 8;
        *((long long *)(vvar_490{reg 48} + 552)) = 8;
        *((long long *)(vvar_490{reg 48} + 576)) = 8;
        *((long long *)(vvar_490{reg 48} + 600)) = 8;
        *((long long *)(vvar_490{reg 48} + 608)) = 0;
        *((long long *)(vvar_490{reg 48} + 616)) = 0x2000;
        *((unsigned long long *)(vvar_490{reg 48} + 624)) = v60;
        *((long long *)(vvar_490{reg 48} + 632)) = 0x2000;
        v62 = *((long long *)(vvar_490{reg 48} + 48));
        vvar_6{reg 48} = vvar_490{reg 48} - 8;
        *((char **)(vvar_490{reg 48} - 8)) = &g_4dde66;
        std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(v23, vvar_490{reg 48} + 184, vvar_490{reg 48} + 0x200, v61);
        if (*((long long *)(vvar_503{reg 48} + 0x100)) != 0x8000000000000000)
        {
            *((unsigned long long *)(vvar_6{reg 48} + 136)) = v62;
            *((long long *)(vvar_6{reg 48} + 176)) = *((long long *)(vvar_6{reg 48} + 40));
            *((int128_t *)(vvar_6{reg 48} + 624)) = *((int128_t *)(vvar_6{reg 48} + 360));
            *((int128_t *)(vvar_6{reg 48} + 608)) = *((int128_t *)(vvar_6{reg 48} + 344));
            *((int128_t *)(vvar_6{reg 48} + 592)) = *((int128_t *)(vvar_6{reg 48} + 328));
            *((int128_t *)(vvar_6{reg 48} + 576)) = *((int128_t *)(vvar_6{reg 48} + 312));
            v65 = *((int128_t *)(vvar_6{reg 48} + 248));
            v66 = *((int128_t *)(vvar_6{reg 48} + 264));
            v67 = *((int128_t *)(vvar_6{reg 48} + 280));
            *((int128_t *)(vvar_6{reg 48} + 560)) = *((int128_t *)(vvar_6{reg 48} + 296));
            *((void*)(vvar_6{reg 48} + 544)) = v67;
            *((void*)(vvar_6{reg 48} + 528)) = v66;
            *((void*)(vvar_6{reg 48} + 0x200)) = v65;
            *((char **)(vvar_6{reg 48} - 8)) = &g_4de792;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v22 = v62 + 48;
        v20 = &v26->field_28;
        v63 = *((long long *)(vvar_6{reg 48} + 40));
        *((unsigned long long *)(vvar_6{reg 48} + 56)) = v63;
        if (v20 == *((long long *)(vvar_503{reg 48} + 240)))
        {
            v22 = *((long long *)(vvar_6{reg 48} + 240));
            *((unsigned long long *)(vvar_6{reg 48} + 56)) = v63;
            goto LABEL_4ddebd;
        }
    }
    *((long long *)(vvar_147{reg 48} + 136)) = *((long long *)(vvar_147{reg 48} + 48));
    *((long long *)(vvar_147{reg 48} + 176)) = *((long long *)(vvar_147{reg 48} + 40));
    v64 = *((long long *)(vvar_147{reg 48} + 224));
    *((void*)&(&v64->field_0)[1]) = v45;
    v64->field_0 = 3;
    v41->field_200 = vvar_1001 - 1;
    if (CasCmpNE(v41->field_200, vvar_1001))
        goto LABEL_0x4de3f2;
    if (!vvar_1001 - 1)
        goto LABEL_0x4de3fc;
}
