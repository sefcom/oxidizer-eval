long long uu_sort::merge::merge_without_limit::h467ad4cb0e74eb03(unsigned long a0, uint128_t a1[6], unsigned long a2)
{
    char v0;  // [bp-0x30]
    int v2;  // xmm0
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    int v5;  // xmm0
    int v6;  // xmm1
    int v7;  // ymm1
    int v8;  // ymm1
    int v9;  // xmm2
    int v10;  // ymm2
    int v11;  // ymm2
    int v12;  // xmm3
    int v13;  // ymm3
    int v14;  // ymm3
    int v15;  // xmm0
    int v16;  // xmm0
    int v17;  // ymm0
    int v18;  // ymm0
    struct_6 *v19;  // r13
    unsigned long long v20;  // r12
    void* v21;  // r14
    unsigned long long v22;  // rdx
    struct_7 *v23;  // rcx
    int v24;  // xmm0
    int v25;  // ymm0
    int v26;  // xmm1
    int v27;  // ymm1
    int v28;  // xmm2
    int v29;  // xmm3
    struct_7 *v30;  // rcx
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2
    int v34;  // xmm3
    struct_1 *v35;  // rax
    struct_1 *v36;  // r13
    unsigned long long *v37;  // r15
    unsigned long long *v38;  // rax
    unsigned long long *v39;  // rcx
    int v40;  // xmm0
    struct_5 *v41;  // rdx
    struct_8 *v42;  // rcx
    int v43;  // xmm1
    int v44;  // xmm2
    int v45;  // xmm3
    uint128_t *v46;  // r12
    uint128_t *v47;  // rax
    uint128_t *v48;  // rcx
    int v49;  // xmm0
    int v50;  // xmm0
    int v51;  // xmm0
    int v52;  // xmm0
    int v53;  // xmm1
    int v54;  // xmm2
    int v55;  // xmm3
    unsigned long long v56;  // rax
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    struct_9 *v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    unsigned long long v66;  // rbx
    void* v71;  // r12
    unsigned long long v72;  // rax
    struct_2 *v73;  // rcx
    unsigned long long v74;  // rsi
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    int v78;  // xmm0
    int v79;  // xmm0
    int v80;  // ymm0
    unsigned long long v81;  // rcx
    uint128_t *v82;  // rax
    unsigned long long v83;  // rdx
    unsigned long long v84;  // rsi
    unsigned long long v85;  // rbx
    int v87;  // xmm0
    unsigned long long v88;  // r13
    unsigned long long v89;  // rax
    struct_3 *v90;  // rax
    unsigned long long v91;  // rax
    struct_4 *v92;  // r13
    int v93;  // xmm0
    int v94;  // xmm0
    unsigned long long v95;  // r13
    uint128_t *v96;  // rax
    uint128_t *v97;  // rcx
    int v98;  // xmm0
    int v99;  // xmm1
    unsigned long long v100;  // rsi
    unsigned long long v104;  // rsi
    unsigned long long v105;  // rdx
    int v107;  // xmm0
    struct_0 *v108;  // rcx
    int v109;  // xmm0
    unsigned long long v110;  // rax

    vvar_260{reg 48} = (&v0 & -128) - 1408;
    *((unsigned long *)(vvar_260{reg 48} + 304)) = a2;
    *((unsigned long *)(vvar_260{reg 48} + 312)) = a0;
    vvar_7{reg 48} = vvar_260{reg 48} - 8;
    *((char **)(vvar_260{reg 48} - 8)) = &g_4dfcc8;
    std::sync::mpmc::channel::h0c4124d0ce0eccd6(vvar_260{reg 48} + 0x200);
    v2 = *((int128_t *)(vvar_7{reg 48} + 0x200));
    v3 = *((long long *)(vvar_7{reg 48} + 528));
    v4 = *((long long *)(vvar_7{reg 48} + 536));
    *((void*)(vvar_7{reg 48} + 160)) = v2;
    *((unsigned long long *)(vvar_7{reg 48} + 328)) = v3;
    *((unsigned long long *)(vvar_7{reg 48} + 288)) = v3;
    *((unsigned long long *)(vvar_7{reg 48} + 320)) = v4;
    *((unsigned long long *)(vvar_7{reg 48} + 296)) = v4;
    *((long long *)(vvar_7{reg 48} + 88)) = 0;
    *((long long *)(vvar_7{reg 48} + 96)) = 8;
    *((long long *)(vvar_7{reg 48} + 104)) = 0;
    *((long long *)(vvar_7{reg 48} + 112)) = 0;
    *((long long *)(vvar_7{reg 48} + 120)) = 8;
    *((long long *)(vvar_7{reg 48} + 128)) = 0;
    v5 = a1[0];
    v6 = a1[1];
    v8 = v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
    v9 = a1[2];
    v11 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9;
    v12 = a1[3];
    v14 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12;
    *((void*)(vvar_7{reg 48} + 176)) = v5;
    v15 = a1[5];
    *((void*)(vvar_7{reg 48} + 0x100)) = v15;
    v16 = a1[4];
    v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
    *((void*)(vvar_7{reg 48} + 240)) = v16;
    *((void*)(vvar_7{reg 48} + 224)) = v12;
    *((void*)(vvar_7{reg 48} + 208)) = v9;
    *((void*)(vvar_7{reg 48} + 192)) = v6;
    v19 = vvar_7{reg 48} + 520;
    v20 = *((long long *)(vvar_7{reg 48} + 176));
    *((long long *)(vvar_7{reg 48} + 344)) = *((long long *)(vvar_7{reg 48} + 0x100));
    *((long long *)(vvar_7{reg 48} + 336)) = *((long long *)(vvar_7{reg 48} + 264));
    v21 = 0;
    *((long long *)(vvar_7{reg 48} + 136)) = 0x8000000000000000;
    if (v20 == 9223372036854775809)
        goto LABEL_4e0010;
LABEL_4dffd7:
    v23 = vvar_7{reg 48} + 184;
    *((unsigned long long *)&v19->padding_38[0]) = v23->field_40;
    v24 = v23->field_0;
    v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24;
    v26 = v23->field_10;
    v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
    v28 = v23->field_20;
    v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28;
    v29 = v23->field_30;
    v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
    *((void*)&v19->field_28) = v29;
    *((void*)&v19->field_20) = v28;
    *((void*)&v19->field_10) = v26;
    *((void*)&v19->field_0) = v24;
    while (true)
    {
        v30 = vvar_43{reg 48} + 1272;
        *((char [8])&v30->field_40) = v19->padding_38;
        v31 = v19->field_0;
        v32 = v19->field_10;
        v33 = v19->field_20;
        v34 = v19->field_28;
        *((void*)&v30->field_30) = v34;
        *((void*)&v30->field_20) = v33;
        *((void*)&v30->field_10) = v32;
        *((void*)&v30->field_0) = v31;
        *((unsigned long long *)(vvar_43{reg 48} + 1264)) = v20;
        vvar_317{reg 48} = vvar_43{reg 48} - 8;
        *((char **)(vvar_43{reg 48} - 8)) = &g_4e008b;
        std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_43{reg 48} + 0x200, 2, v22, v30);
        *((long long *)(vvar_317{reg 48} + 0x400)) = 1;
        *((long long *)(vvar_317{reg 48} + 1032)) = 1;
        *((char *)(vvar_317{reg 48} + 1040)) = 0;
        vvar_323{reg 48} = vvar_317{reg 48} - 8;
        *((char **)(vvar_317{reg 48} - 8)) = &g_4e00c5;
        v35 = __rust_alloc(640, 128);
        if (!v35)
        {
            *((long long *)(vvar_323{reg 48} + 176)) = 9223372036854775809;
            *((void* *)(vvar_323{reg 48} + 272)) = v21 + 1;
            *((char **)(vvar_323{reg 48} - 8)) = &g_4e087c;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v36 = v35;
        vvar_86{reg 48} = vvar_323{reg 48} - 8;
        *((char **)(vvar_323{reg 48} - 8)) = &g_4e00e7;
        memcpy(v35, vvar_323{reg 48} + 0x200, 640);
        *((long long *)(vvar_86{reg 48} + 144)) = 0;
        *((struct_1 **)(vvar_86{reg 48} + 152)) = v36;
        *((long long *)(vvar_86{reg 48} + 0x200)) = 0;
        *((struct_1 **)(vvar_86{reg 48} + 520)) = v36;
        v37 = *((long long *)(vvar_86{reg 48} + 128));
        if (v37 == *((long long *)(vvar_332{reg 48} + 112)))
        {
            vvar_86{reg 48} = vvar_86{reg 48} - 8;
            *((char **)(vvar_86{reg 48} - 8)) = &g_4e0128;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0ea67d5e0df72439(vvar_332{reg 48} + 112);
        }
        v38 = *((long long *)(vvar_86{reg 48} + 120));
        v39 = v37 * 16;
        *((long long *)(v38 + v39)) = 0;
        *((struct_1 **)(v38 + v39 + 8)) = v36;
        *((unsigned long long **)(vvar_86{reg 48} + 128)) = (char *)v37 + 1;
        v40 = *((int128_t *)(vvar_86{reg 48} + 1272));
        if (v20 == *((long long *)(vvar_86{reg 48} + 136)))
            break;
        v41 = vvar_86{reg 48} + 1272;
        v42 = vvar_86{reg 48} + 520;
        v42->field_50 = v41->field_40;
        v43 = v41->field_10;
        v44 = v41->field_20;
        v45 = v41->field_30;
        *((void*)&v42->field_40) = v45;
        *((void*)&v42->field_30) = v44;
        *((void*)&v42->field_20) = v43;
        *((long long *)(vvar_86{reg 48} + 0x200)) = 0;
        *((struct_1 **)(vvar_86{reg 48} + 520)) = v36;
        *((unsigned long long *)(vvar_86{reg 48} + 528)) = v20;
        *((void*)(vvar_86{reg 48} + 536)) = v40;
        *((long long *)(vvar_86{reg 48} + 608)) = 0;
        *((long long *)(vvar_86{reg 48} + 616)) = 1;
        *((long long *)(vvar_86{reg 48} + 624)) = 0;
        v46 = *((long long *)(vvar_86{reg 48} + 104));
        if (v46 == *((long long *)(vvar_86{reg 48} + 88)))
        {
            vvar_86{reg 48} = vvar_86{reg 48} - 8;
            *((char **)(vvar_86{reg 48} - 8)) = &g_4dfe7e;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::ha577d2da83e84cd3(vvar_86{reg 48} + 88);
        }
        v47 = *((long long *)(vvar_98{reg 48} + 96));
        v48 = v46 * 120;
        *((long long *)(v47 + v48 + 112)) = *((long long *)(vvar_98{reg 48} + 624));
        v49 = *((int128_t *)(vvar_98{reg 48} + 608));
        *((void*)(v47 + v48 + 96)) = v49;
        v50 = *((int128_t *)(vvar_98{reg 48} + 592));
        *((void*)(v47 + v48 + 80)) = v50;
        v51 = *((int128_t *)(vvar_98{reg 48} + 576));
        *((void*)(v47 + v48 + 64)) = v51;
        v52 = *((int128_t *)(vvar_98{reg 48} + 0x200));
        v53 = *((int128_t *)(vvar_98{reg 48} + 528));
        v8 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
        v54 = *((int128_t *)(vvar_98{reg 48} + 544));
        v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
        v55 = *((int128_t *)(vvar_98{reg 48} + 560));
        v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
        *((void*)(v47 + v48 + 48)) = v55;
        *((void*)(v47 + v48 + 32)) = v54;
        *((void*)(v47 + v48 + 16)) = v53;
        *((void*)(v47 + v48)) = v52;
        *((uint128_t **)(vvar_98{reg 48} + 104)) = (char *)v46 + 1;
        vvar_391{reg 48} = vvar_98{reg 48} - 8;
        *((char **)(vvar_98{reg 48} - 8)) = &g_4dff06;
        v56 = __rust_alloc_zeroed(0x2000, 1);
        if (!v56)
        {
            *((long long *)(vvar_391{reg 48} + 176)) = 9223372036854775809;
            *((void* *)(vvar_391{reg 48} + 272)) = v21 + 1;
            *((char **)(vvar_391{reg 48} - 8)) = &g_4e089f;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v19 = vvar_391{reg 48} + 520;
        v18 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v19->field_10 = 0;
        *((int128_t *)((char *)&v19->field_20 + 8)) = 0;
        *((int128_t *)&v19->padding_38) = 0;
        *((void* *)(vvar_391{reg 48} + 0x200)) = v21;
        *((long long *)(vvar_391{reg 48} + 520)) = 0;
        *((long long *)(vvar_391{reg 48} + 528)) = 8;
        *((long long *)(vvar_391{reg 48} + 552)) = 8;
        *((long long *)(vvar_391{reg 48} + 576)) = 8;
        *((long long *)(vvar_391{reg 48} + 600)) = 8;
        *((long long *)(vvar_391{reg 48} + 608)) = 0;
        *((long long *)(vvar_391{reg 48} + 616)) = 0x2000;
        *((unsigned long long *)(vvar_391{reg 48} + 624)) = v56;
        *((long long *)(vvar_391{reg 48} + 632)) = 0x2000;
        vvar_7{reg 48} = vvar_391{reg 48} - 8;
        *((char **)(vvar_391{reg 48} - 8)) = &g_4dffb6;
        std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_391{reg 48} + 352, vvar_391{reg 48} + 160, vvar_391{reg 48} + 0x200, v57);
        if (*((long long *)(vvar_402{reg 48} + 360)) != *((long long *)(vvar_402{reg 48} + 136)))
        {
            *((long long *)(vvar_7{reg 48} + 176)) = 9223372036854775809;
            *((void* *)(vvar_7{reg 48} + 272)) = v21 + 1;
            *((int128_t *)(vvar_7{reg 48} + 624)) = *((int128_t *)(vvar_7{reg 48} + 464));
            *((int128_t *)(vvar_7{reg 48} + 608)) = *((int128_t *)(vvar_7{reg 48} + 448));
            *((int128_t *)(vvar_7{reg 48} + 592)) = *((int128_t *)(vvar_7{reg 48} + 432));
            *((int128_t *)(vvar_7{reg 48} + 576)) = *((int128_t *)(vvar_7{reg 48} + 416));
            v61 = *((int128_t *)(vvar_7{reg 48} + 352));
            v62 = *((int128_t *)(vvar_7{reg 48} + 368));
            v63 = *((int128_t *)(vvar_7{reg 48} + 384));
            *((int128_t *)(vvar_7{reg 48} + 560)) = *((int128_t *)(vvar_7{reg 48} + 400));
            *((void*)(vvar_7{reg 48} + 544)) = v63;
            *((void*)(vvar_7{reg 48} + 528)) = v62;
            *((void*)(vvar_7{reg 48} + 0x200)) = v61;
            *((char **)(vvar_7{reg 48} - 8)) = &g_4e095a;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v21 += 1;
        v20 = 9223372036854775809;
        if (false)
            goto LABEL_4dffd7;
LABEL_4e0010:
        v58 = *((long long *)(vvar_25{reg 48} + 344));
        v59 = *((long long *)(vvar_25{reg 48} + 336));
        vvar_7{reg 48} = vvar_25{reg 48} - 8;
        *((char **)(vvar_25{reg 48} - 8)) = &g_4e002d;
        itertools::groupbylazy::IntoChunks$LT$I$GT$::step::h6cb1ad1b47743ebf(vvar_25{reg 48} + 0x200, v58, v59);
        v20 = *((long long *)(vvar_7{reg 48} + 0x200));
        if (v20 == 9223372036854775809)
        {
            *((long long *)(vvar_7{reg 48} + 176)) = 9223372036854775809;
            *((void* *)(vvar_7{reg 48} + 272)) = v21;
            vvar_61{reg 48} = vvar_7{reg 48} - 8;
            *((char **)(vvar_7{reg 48} - 8)) = &g_4e028b;
            core::ptr::drop_in_place$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::habbc7027f71c902f(vvar_417{reg 48} + 176);
            v66 = *((long long *)(vvar_61{reg 48} + 104));
            if (v66)
            {
                v71 = 0;
                do
                {
                    vvar_522{reg 48} = vvar_76{reg 48} - 8;
                    *((char **)(vvar_76{reg 48} - 8)) = &g_4e02d0;
                    v72 = __rust_alloc_zeroed(0x2000, 1);
                    if (!v72)
                    {
                        *((char **)(vvar_522{reg 48} - 8)) = &g_4e096a;
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    v73 = vvar_522{reg 48} + 520;
                    v25 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v73->field_10 = 0;
                    *((int128_t *)&(&v73->padding_20)[1]) = 0;
                    *((int128_t *)&v73->padding_38) = 0;
                    *((void* *)(vvar_522{reg 48} + 0x200)) = v71;
                    *((long long *)(vvar_522{reg 48} + 520)) = 0;
                    *((long long *)(vvar_522{reg 48} + 528)) = 8;
                    *((long long *)(vvar_522{reg 48} + 552)) = 8;
                    *((long long *)(vvar_522{reg 48} + 576)) = 8;
                    *((long long *)(vvar_522{reg 48} + 600)) = 8;
                    *((long long *)(vvar_522{reg 48} + 608)) = 0;
                    *((long long *)(vvar_522{reg 48} + 616)) = 0x2000;
                    *((unsigned long long *)(vvar_522{reg 48} + 624)) = v72;
                    *((long long *)(vvar_522{reg 48} + 632)) = 0x2000;
                    vvar_61{reg 48} = vvar_522{reg 48} - 8;
                    *((char **)(vvar_522{reg 48} - 8)) = &g_4e036e;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_438{reg 48} + 352, vvar_438{reg 48} + 160, vvar_438{reg 48} + 0x200, v73);
                    if (*((long long *)(vvar_533{reg 48} + 360)) != *((long long *)(vvar_533{reg 48} + 136)))
                    {
                        *((int128_t *)(vvar_61{reg 48} + 624)) = *((int128_t *)(vvar_61{reg 48} + 464));
                        *((int128_t *)(vvar_61{reg 48} + 608)) = *((int128_t *)(vvar_61{reg 48} + 448));
                        *((int128_t *)(vvar_61{reg 48} + 592)) = *((int128_t *)(vvar_61{reg 48} + 432));
                        *((int128_t *)(vvar_61{reg 48} + 576)) = *((int128_t *)(vvar_61{reg 48} + 416));
                        v75 = *((int128_t *)(vvar_61{reg 48} + 352));
                        v76 = *((int128_t *)(vvar_61{reg 48} + 368));
                        v77 = *((int128_t *)(vvar_61{reg 48} + 384));
                        *((int128_t *)(vvar_61{reg 48} + 560)) = *((int128_t *)(vvar_61{reg 48} + 400));
                        *((void*)(vvar_61{reg 48} + 544)) = v77;
                        *((void*)(vvar_61{reg 48} + 528)) = v76;
                        *((void*)(vvar_61{reg 48} + 0x200)) = v75;
                        *((char **)(vvar_61{reg 48} - 8)) = &g_4e0a12;
                        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                    }
                    v71 += 1;
                } while (v66 != v71);
            }
            v74 = *((long long *)(vvar_61{reg 48} + 304));
            vvar_557{reg 48} = vvar_61{reg 48} - 8;
            *((char **)(vvar_61{reg 48} - 8)) = &g_4e03a8;
            _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::hd3e39bd05377cda4(vvar_61{reg 48} + 352, v74);
            *((long long *)(vvar_557{reg 48} + 0x200)) = *((long long *)(vvar_557{reg 48} + 328));
            *((long long *)(vvar_557{reg 48} + 520)) = *((long long *)(vvar_557{reg 48} + 320));
            v78 = *((int128_t *)(vvar_557{reg 48} + 88));
            *((void*)(vvar_557{reg 48} + 528)) = v78;
            *((long long *)(vvar_557{reg 48} + 544)) = *((long long *)(vvar_557{reg 48} + 104));
            vvar_601{reg 48} = vvar_557{reg 48} - 8;
            *((char **)(vvar_557{reg 48} - 8)) = &g_4e03fd;
            memcpy(vvar_557{reg 48} + 552, vvar_557{reg 48} + 352, 160);
            *((long long *)(vvar_601{reg 48} + 368)) = *((long long *)(vvar_601{reg 48} + 136));
            *((long long *)(vvar_601{reg 48} + 352)) = 0;
            vvar_103{reg 48} = vvar_601{reg 48} - 8;
            *((char **)(vvar_601{reg 48} - 8)) = &g_4e0439;
            std::thread::Builder::spawn_unchecked::h0da587a24e0bf58f(vvar_601{reg 48} + 176, vvar_601{reg 48} + 352, vvar_601{reg 48} + 0x200);
            if (!*((long long *)(vvar_612{reg 48} + 176)))
            {
                *((long long *)(vvar_103{reg 48} + 352)) = *((long long *)(vvar_103{reg 48} + 184));
                *((char **)(vvar_103{reg 48} - 8)) = &g_4e0a5a;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            *((long long *)(vvar_103{reg 48} + 0x500)) = *((long long *)(vvar_103{reg 48} + 192));
            v79 = *((int128_t *)(vvar_103{reg 48} + 176));
            v80 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            *((void*)(vvar_103{reg 48} + 1264)) = v79;
            *((long long *)(vvar_103{reg 48} + 176)) = 0;
            *((long long *)(vvar_103{reg 48} + 184)) = 8;
            *((long long *)(vvar_103{reg 48} + 192)) = 0;
            v81 = *((long long *)(vvar_103{reg 48} + 112));
            v82 = *((long long *)(vvar_103{reg 48} + 120));
            v83 = *((long long *)(vvar_103{reg 48} + 128));
            v84 = &v82[v83];
            *((uint128_t **)(vvar_103{reg 48} + 352)) = v82;
            *((uint128_t **)(vvar_103{reg 48} + 360)) = v82;
            *((unsigned long long *)(vvar_103{reg 48} + 368)) = v81;
            *((unsigned long long *)(vvar_103{reg 48} + 376)) = v84;
            *((long long *)(vvar_103{reg 48} + 384)) = 0;
            if (v83)
            {
                v85 = vvar_103{reg 48} + 152;
                do
                {
                    *((uint128_t **)(vvar_120{reg 48} + 360)) = v82 + 1;
                    v87 = *(v82);
                    v80 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                    v88 = *((long long *)(vvar_120{reg 48} + 384));
                    *((unsigned long long *)(vvar_120{reg 48} + 384)) = v88 + 1;
                    *((void*)(vvar_120{reg 48} + 144)) = v87;
                    vvar_669{reg 48} = vvar_120{reg 48} - 8;
                    *((char **)(vvar_120{reg 48} - 8)) = &g_4e058d;
                    v89 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(vvar_612{reg 48} + 144, v84, v83);
                    if (v89)
                    {
                        *((long long *)(vvar_669{reg 48} + 0x200)) = 1;
                        *((long long *)(vvar_669{reg 48} + 520)) = 1;
                        *((unsigned long long *)(vvar_669{reg 48} + 528)) = v89;
                        vvar_186{reg 48} = vvar_669{reg 48} - 8;
                        *((char **)(vvar_669{reg 48} - 8)) = &g_4e05d0;
                        v90 = __rust_alloc(24, 8);
                        if (!v90)
                        {
                            *((char **)(vvar_186{reg 48} - 8)) = &g_4e0a22;
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        }
                        v90->field_10 = *((long long *)(vvar_186{reg 48} + 528));
                        v93 = *((int128_t *)(vvar_186{reg 48} + 0x200));
                        *((void*)&v90->field_0) = v93;
                        v94 = *((int128_t *)(vvar_186{reg 48} + 144));
                        *((struct_3 **)(vvar_186{reg 48} + 528)) = v90;
                        *((long long *)(vvar_186{reg 48} + 536)) = 0;
                        *((void*)(vvar_186{reg 48} + 0x200)) = v94;
                        *((unsigned long long *)(vvar_186{reg 48} + 544)) = v88;
                        v95 = *((long long *)(vvar_186{reg 48} + 192));
                        if (v95 == *((long long *)(vvar_678{reg 48} + 176)))
                        {
                            vvar_186{reg 48} = vvar_186{reg 48} - 8;
                            *((char **)(vvar_186{reg 48} - 8)) = &g_4e063a;
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd2c7d3e4c5d28c3a(vvar_612{reg 48} + 176);
                        }
                        v96 = *((long long *)(vvar_186{reg 48} + 184));
                        v97 = 5 * v95;
                        v98 = *((int128_t *)(vvar_186{reg 48} + 0x200));
                        v80 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                        v99 = *((int128_t *)(vvar_186{reg 48} + 528));
                        v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                        v83 = *((long long *)(vvar_186{reg 48} + 544));
                        *((unsigned long long *)(32 + (char *)v96 + 0x8 * v97)) = v83;
                        *((void*)(16 + (char *)v96 + 0x8 * v97)) = v99;
                        *((void*)((char *)v96 + 0x8 * v97)) = v98;
                        *((unsigned long long *)(vvar_186{reg 48} + 192)) = v95 + 1;
                    }
                    else
                    {
                        v91 = *((long long *)(vvar_669{reg 48} + 144));
                        if (!v91)
                        {
                            v92 = *((long long *)(vvar_669{reg 48} + 152));
                            v92->field_208 = vvar_901 - 1;
                            if (CasCmpNE(v92->field_208, vvar_901))
                                goto LABEL_0x4e0667;
                            if (!vvar_901 - 1)
                                goto LABEL_4e0675;
                            continue;
LABEL_4e0675:
                            vvar_711{reg 48} = vvar_669{reg 48} - 8;
                            *((char **)(vvar_669{reg 48} - 8)) = &g_4e067d;
                            std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v92);
                            v92->field_210 = 1;
                            if (CasCmpNE(v92->field_210, v92->field_210))
                                goto LABEL_0x4e067f;
                            if (!vvar_902)
                                continue;
                            vvar_724{reg 48} = vvar_711{reg 48} - 8;
                            *((char **)(vvar_711{reg 48} - 8)) = &g_4e0696;
                            _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v92);
                        }
                        else if ((unsigned int)v91 == 1)
                        {
                            vvar_705{reg 48} = vvar_669{reg 48} - 8;
                            *((char **)(vvar_669{reg 48} - 8)) = &g_4e065a;
                            std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(v85);
                            continue;
                        }
                        else
                        {
                            vvar_708{reg 48} = vvar_669{reg 48} - 8;
                            *((char **)(vvar_669{reg 48} - 8)) = &g_4e06a3;
                            std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(v85);
                        }
                    }
                } while ((v82 = *((long long *)(vvar_175{reg 48} + 360)), v82 != *((long long *)(vvar_175{reg 48} + 376))));
            }
            vvar_147{reg 48} = vvar_103{reg 48} - 8;
            *((char **)(vvar_103{reg 48} - 8)) = &g_4e06b5;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h03900b1c52c58887(vvar_103{reg 48} + 352);
            v100 = *((long long *)(vvar_147{reg 48} + 192));
            *((unsigned long long *)(vvar_147{reg 48} + 528)) = v100;
            *((int128_t *)(vvar_147{reg 48} + 0x200)) = *((int128_t *)(vvar_147{reg 48} + 176));
            *((long long *)(vvar_147{reg 48} + 536)) = *((long long *)(vvar_147{reg 48} + 304));
            if (v100)
            {
                while (true)
                {
                    vvar_147{reg 48} = vvar_911{reg 48};
                    v104 = (v100 >> 1) - 1;
                    if (v104 == -1)
                        break;
                    v105 = *((long long *)(vvar_147{reg 48} + 528));
                    vvar_147{reg 48} = vvar_147{reg 48} - 8;
                    *((char **)(vvar_147{reg 48} - 8)) = &g_4e071a;
                    _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(vvar_747{reg 48} + 0x200, v104, v105);
                }
            }
            v107 = *((int128_t *)(vvar_147{reg 48} + 0x200));
            v108 = *((long long *)(vvar_147{reg 48} + 312));
            v108->field_20 = *((long long *)(vvar_147{reg 48} + 528));
            v108->field_28 = *((long long *)(vvar_147{reg 48} + 536));
            *((void*)&v108->field_10) = v107;
            v109 = *((int128_t *)(vvar_147{reg 48} + 160));
            v108->field_30 = *((int128_t *)(vvar_147{reg 48} + 1264));
            v110 = *((long long *)(vvar_147{reg 48} + 0x500));
            v108->field_40 = v110;
            *((void*)&v108->field_0) = v109;
            v108->field_48 = 0;
            return v110;
        }
    }
    *((long long *)(vvar_86{reg 48} + 176)) = 9223372036854775809;
    *((void* *)(vvar_86{reg 48} + 272)) = v21 + 1;
    v60 = *((long long *)(vvar_86{reg 48} + 312));
    *((void*)&(&v60->field_0)[1]) = v40;
    v60->field_0 = 3;
    v36->field_200 = vvar_899 - 1;
    if (CasCmpNE(v36->field_200, vvar_899))
        goto LABEL_0x4e0188;
    if (!vvar_899 - 1)
        goto LABEL_0x4e0192;
}
