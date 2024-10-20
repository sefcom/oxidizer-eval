long long uu_sort::merge::merge_without_limit::h948927bf668a40ca(unsigned long a0, uint128_t a1[3], unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp+0x0]
    int v3;  // xmm0
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    int v6;  // xmm0
    int v7;  // ymm0
    int v8;  // ymm0
    int v9;  // xmm1
    int v10;  // ymm1
    int v11;  // ymm1
    int v12;  // xmm2
    int v13;  // ymm2
    int v14;  // ymm2
    struct_3 *v15;  // r14
    unsigned long long v16;  // rbx
    void* v17;  // r15
    unsigned long long v18;  // r12
    unsigned long long v19;  // rdx
    int v20;  // ymm3
    struct_0 *v21;  // rcx
    int v22;  // xmm0
    unsigned long long v23;  // r15
    struct_3 *v24;  // r14
    void* v25;  // r12
    int v26;  // ymm2
    int v27;  // ymm3
    struct_0 *v28;  // rcx
    int v29;  // xmm0
    unsigned long long v30;  // r14
    struct_2 *v31;  // rax
    struct_2 *v32;  // r15
    unsigned long long v33;  // r13
    unsigned long long *v34;  // r12
    unsigned long long *v35;  // rax
    unsigned long long *v36;  // rcx
    int v37;  // xmm0
    unsigned long long v38;  // rax
    uint128_t *v39;  // rbx
    uint128_t *v40;  // rax
    uint128_t *v41;  // rcx
    int v42;  // xmm0
    int v43;  // xmm1
    int v44;  // xmm2
    int v45;  // xmm3
    unsigned long long v46;  // rax
    unsigned long long v47;  // r15
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rdx
    unsigned long long v51;  // r8
    unsigned long long v52;  // r9
    struct_1 *v53;  // rax
    unsigned long long v54[23];  // rcx
    int v55;  // xmm0
    int v56;  // xmm1
    int v57;  // xmm2
    unsigned long long v65;  // rbx
    void* v66;  // r12
    unsigned long long v67;  // rax
    int v69;  // ymm0
    unsigned long long v70;  // rsi
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // ymm0
    unsigned long long v79;  // rcx
    uint128_t *v80;  // rax
    unsigned long long v81;  // rdx
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rbx
    int v84;  // xmm0
    unsigned long long v85;  // r13
    unsigned long long v86;  // rax
    struct_0 *v87;  // rax
    unsigned long long v88;  // rax
    struct_4 *v89;  // r13
    int v90;  // xmm0
    int v91;  // xmm0
    unsigned long long v92;  // r13
    uint128_t *v93;  // rax
    uint128_t *v94;  // rcx
    int v95;  // xmm0
    int v96;  // xmm1
    unsigned long long v98;  // rsi
    unsigned long long v104;  // rsi
    unsigned long long v105;  // rdx
    int v107;  // xmm0
    struct_5 *v108;  // rcx
    int v109;  // xmm0
    unsigned long long v110;  // rax

    vvar_295{reg 48} = (&v0 & -128) - 0x500;
    *((unsigned long *)(vvar_295{reg 48} + 280)) = a2;
    *((unsigned long *)(vvar_295{reg 48} + 288)) = a0;
    vvar_11{reg 48} = vvar_295{reg 48} - 8;
    *((char **)(vvar_295{reg 48} - 8)) = &g_4e0d08;
    std::sync::mpmc::channel::h0c4124d0ce0eccd6(vvar_295{reg 48} + 0x200);
    v3 = *((int128_t *)(vvar_11{reg 48} + 0x200));
    v4 = *((long long *)(vvar_11{reg 48} + 528));
    v5 = *((long long *)(vvar_11{reg 48} + 536));
    *((void*)(vvar_11{reg 48} + 240)) = v3;
    *((unsigned long long *)(vvar_11{reg 48} + 344)) = v4;
    *((unsigned long long *)(vvar_11{reg 48} + 264)) = v4;
    *((unsigned long long *)(vvar_11{reg 48} + 336)) = v5;
    *((unsigned long long *)(vvar_11{reg 48} + 272)) = v5;
    *((long long *)(vvar_11{reg 48} + 168)) = 0;
    *((long long *)(vvar_11{reg 48} + 176)) = 8;
    *((long long *)(vvar_11{reg 48} + 184)) = 0;
    *((long long *)(vvar_11{reg 48} + 192)) = 0;
    *((long long *)(vvar_11{reg 48} + 200)) = 8;
    *((long long *)(vvar_11{reg 48} + 208)) = 0;
    v6 = a1[0];
    v8 = v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
    v9 = a1[1];
    v11 = v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9;
    v12 = a1[2];
    v14 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12;
    *((void*)(vvar_11{reg 48} + 112)) = v6;
    *((void*)(vvar_11{reg 48} + 144)) = v12;
    *((void*)(vvar_11{reg 48} + 128)) = v9;
    v15 = vvar_11{reg 48} + 520;
    v16 = *((long long *)(vvar_11{reg 48} + 112));
    *((long long *)(vvar_11{reg 48} + 296)) = *((long long *)(vvar_11{reg 48} + 144));
    *((long long *)(vvar_11{reg 48} + 0x100)) = *((long long *)(vvar_11{reg 48} + 152));
    v17 = 0;
    v18 = vvar_11{reg 48} + 0x200;
    *((long long *)(vvar_11{reg 48} + 216)) = 0x8000000000000000;
    if (v16 == 9223372036854775809)
        goto LABEL_4e0fe0;
LABEL_4e0fca:
    v21 = vvar_11{reg 48} + 120;
    v15->field_10 = v21->field_10;
    v22 = v21->field_0;
    v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
    *((void*)&v15->field_0) = v22;
    while (true)
    {
        v28 = vvar_49{reg 48} + 312;
        v28->field_10 = v24->field_10;
        v29 = v24->field_0;
        *((void*)&v28->field_0) = v29;
        *((unsigned long long *)(vvar_49{reg 48} + 304)) = v16;
        vvar_334{reg 48} = vvar_49{reg 48} - 8;
        *((char **)(vvar_49{reg 48} - 8)) = &g_4e1035;
        std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(v25, 2, v19, v28);
        v30 = v23;
        *((long long *)(vvar_334{reg 48} + 0x400)) = 1;
        *((long long *)(vvar_334{reg 48} + 1032)) = 1;
        *((char *)(vvar_334{reg 48} + 1040)) = 0;
        vvar_341{reg 48} = vvar_334{reg 48} - 8;
        *((char **)(vvar_334{reg 48} - 8)) = &g_4e1072;
        v31 = __rust_alloc(640, 128);
        if (!v31)
        {
            *((long long *)(vvar_341{reg 48} + 112)) = 9223372036854775809;
            *((unsigned long long *)(vvar_341{reg 48} + 160)) = v30 + 1;
            *((char **)(vvar_341{reg 48} - 8)) = &g_4e18c3;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v32 = v31;
        v33 = v25;
        vvar_72{reg 48} = vvar_341{reg 48} - 8;
        *((char **)(vvar_341{reg 48} - 8)) = &g_4e1092;
        memcpy(v31, v25, 640);
        *((long long *)(vvar_72{reg 48} + 224)) = 0;
        *((struct_2 **)(vvar_72{reg 48} + 232)) = v32;
        *((long long *)(vvar_72{reg 48} + 0x200)) = 0;
        *((struct_2 **)(vvar_72{reg 48} + 520)) = v32;
        v34 = *((long long *)(vvar_72{reg 48} + 208));
        if (v34 == *((long long *)(vvar_351{reg 48} + 192)))
        {
            vvar_72{reg 48} = vvar_72{reg 48} - 8;
            *((char **)(vvar_72{reg 48} - 8)) = &g_4e10d9;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h0ea67d5e0df72439(vvar_351{reg 48} + 192);
        }
        v35 = *((long long *)(vvar_72{reg 48} + 200));
        v36 = v34 * 16;
        *((long long *)(v35 + v36)) = 0;
        *((struct_2 **)(v35 + v36 + 8)) = v32;
        *((unsigned long long **)(vvar_72{reg 48} + 208)) = (char *)v34 + 1;
        v37 = *((int128_t *)(vvar_72{reg 48} + 312));
        if (v16 == *((long long *)(vvar_72{reg 48} + 216)))
            break;
        v38 = *((long long *)(vvar_72{reg 48} + 328));
        *((long long *)(vvar_72{reg 48} + 0x200)) = 0;
        *((struct_2 **)(vvar_72{reg 48} + 520)) = v32;
        *((unsigned long long *)(vvar_72{reg 48} + 528)) = v16;
        *((void*)(vvar_72{reg 48} + 536)) = v37;
        *((unsigned long long *)(vvar_72{reg 48} + 552)) = v38;
        *((long long *)(vvar_72{reg 48} + 560)) = 0;
        *((long long *)(vvar_72{reg 48} + 568)) = 1;
        *((long long *)(vvar_72{reg 48} + 576)) = 0;
        v39 = *((long long *)(vvar_72{reg 48} + 184));
        if (v39 == *((long long *)(vvar_72{reg 48} + 168)))
        {
            vvar_72{reg 48} = vvar_72{reg 48} - 8;
            *((char **)(vvar_72{reg 48} - 8)) = &g_4e0e87;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd955f8c048d0d574(vvar_72{reg 48} + 168);
        }
        v40 = *((long long *)(vvar_108{reg 48} + 176));
        v41 = v39 * 9;
        *((long long *)(64 + (char *)v40 + 0x8 * v41)) = *((long long *)(vvar_108{reg 48} + 576));
        v42 = *((int128_t *)(vvar_108{reg 48} + 0x200));
        v43 = *((int128_t *)(vvar_108{reg 48} + 528));
        v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v44 = *((int128_t *)(vvar_108{reg 48} + 544));
        v14 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
        v45 = *((int128_t *)(vvar_108{reg 48} + 560));
        v20 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
        *((void*)(48 + (char *)v40 + 0x8 * v41)) = v45;
        *((void*)(32 + (char *)v40 + 0x8 * v41)) = v44;
        *((void*)(16 + (char *)v40 + 0x8 * v41)) = v43;
        *((void*)((char *)v40 + 0x8 * v41)) = v42;
        *((uint128_t **)(vvar_108{reg 48} + 184)) = (char *)v39 + 1;
        vvar_396{reg 48} = vvar_108{reg 48} - 8;
        *((char **)(vvar_108{reg 48} - 8)) = &g_4e0eee;
        v46 = __rust_alloc_zeroed(0x2000, 1);
        v47 = v30;
        if (!v46)
        {
            *((long long *)(vvar_396{reg 48} + 112)) = 9223372036854775809;
            *((unsigned long long *)(vvar_396{reg 48} + 160)) = v47 + 1;
            *((char **)(vvar_396{reg 48} - 8)) = &g_4e18ed;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v18 = v33;
        v15 = vvar_396{reg 48} + 520;
        v8 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v15->field_10) = 0;
        *((int128_t *)&(&v15->padding_18)[1]) = 0;
        *((int128_t *)&v15->padding_38) = 0;
        *((unsigned long long *)(vvar_396{reg 48} + 0x200)) = v47;
        *((long long *)(vvar_396{reg 48} + 520)) = 0;
        *((long long *)(vvar_396{reg 48} + 528)) = 8;
        *((long long *)(vvar_396{reg 48} + 552)) = 8;
        *((long long *)(vvar_396{reg 48} + 576)) = 8;
        *((long long *)(vvar_396{reg 48} + 600)) = 8;
        *((long long *)(vvar_396{reg 48} + 608)) = 0;
        *((long long *)(vvar_396{reg 48} + 616)) = 0x2000;
        *((unsigned long long *)(vvar_396{reg 48} + 624)) = v46;
        *((long long *)(vvar_396{reg 48} + 632)) = 0x2000;
        vvar_11{reg 48} = vvar_396{reg 48} - 8;
        *((char **)(vvar_396{reg 48} - 8)) = &g_4e0fa9;
        std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_396{reg 48} + 352, vvar_396{reg 48} + 240, v33, v48);
        if (*((long long *)(vvar_410{reg 48} + 360)) != *((long long *)(vvar_410{reg 48} + 216)))
        {
            *((long long *)(vvar_11{reg 48} + 112)) = 9223372036854775809;
            *((unsigned long long *)(vvar_11{reg 48} + 160)) = v47 + 1;
            *((int128_t *)(vvar_11{reg 48} + 624)) = *((int128_t *)(vvar_11{reg 48} + 464));
            *((int128_t *)(vvar_11{reg 48} + 608)) = *((int128_t *)(vvar_11{reg 48} + 448));
            *((int128_t *)(vvar_11{reg 48} + 592)) = *((int128_t *)(vvar_11{reg 48} + 432));
            *((int128_t *)(vvar_11{reg 48} + 576)) = *((int128_t *)(vvar_11{reg 48} + 416));
            v55 = *((int128_t *)(vvar_11{reg 48} + 352));
            v56 = *((int128_t *)(vvar_11{reg 48} + 368));
            v57 = *((int128_t *)(vvar_11{reg 48} + 384));
            *((int128_t *)(vvar_11{reg 48} + 560)) = *((int128_t *)(vvar_11{reg 48} + 400));
            *((void*)(vvar_11{reg 48} + 544)) = v57;
            *((void*)(vvar_11{reg 48} + 528)) = v56;
            *((void*)(vvar_11{reg 48} + 0x200)) = v55;
            *((char **)(vvar_11{reg 48} - 8)) = &g_4e19a5;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v17 = v47 + 1;
        v16 = 9223372036854775809;
        if (false)
            goto LABEL_4e0fca;
LABEL_4e0fe0:
        v49 = *((long long *)(vvar_30{reg 48} + 296));
        v50 = *((long long *)(vvar_30{reg 48} + 0x100));
        vvar_11{reg 48} = vvar_30{reg 48} - 8;
        *((char **)(vvar_30{reg 48} - 8)) = &g_4e0ff8;
        itertools::groupbylazy::IntoChunks$LT$I$GT$::step::hb58a1d82dddeaa0c(v18, v49, v50, v5, v51, v52, *((long long *)&v1));
        v16 = *((long long *)(vvar_11{reg 48} + 0x200));
        if (v16 == 9223372036854775809)
        {
            v54 = *((long long *)(vvar_11{reg 48} + 296));
            if (v54[0])
            {
                *((char **)(vvar_11{reg 48} - 8)) = &g_4e1a87;
                core::cell::panic_already_borrowed::h817960682eb5d2c7(); /* do not return */
            }
            if (v54[22] == -1 || v54[22] < *((long long *)(vvar_425{reg 48} + 0x100)))
                v54[22] = *((long long *)(vvar_11{reg 48} + 0x100));
            v54[0] = 0;
            v65 = *((long long *)(vvar_11{reg 48} + 184));
            if (v65)
            {
                v66 = 0;
                do
                {
                    vvar_557{reg 48} = vvar_90{reg 48} - 8;
                    *((char **)(vvar_90{reg 48} - 8)) = &g_4e1310;
                    v67 = __rust_alloc_zeroed(0x2000, 1);
                    if (!v67)
                    {
                        *((char **)(vvar_557{reg 48} - 8)) = &g_4e19b5;
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    v8 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v15->field_10) = 0;
                    *((int128_t *)&(&v15->padding_18)[1]) = 0;
                    *((int128_t *)&v15->padding_38) = 0;
                    *((void* *)(vvar_557{reg 48} + 0x200)) = v66;
                    *((long long *)(vvar_557{reg 48} + 520)) = 0;
                    *((long long *)(vvar_557{reg 48} + 528)) = 8;
                    *((long long *)(vvar_557{reg 48} + 552)) = 8;
                    *((long long *)(vvar_557{reg 48} + 576)) = 8;
                    *((long long *)(vvar_557{reg 48} + 600)) = 8;
                    *((long long *)(vvar_557{reg 48} + 608)) = 0;
                    *((long long *)(vvar_557{reg 48} + 616)) = 0x2000;
                    *((unsigned long long *)(vvar_557{reg 48} + 624)) = v67;
                    *((long long *)(vvar_557{reg 48} + 632)) = 0x2000;
                    vvar_77{reg 48} = vvar_557{reg 48} - 8;
                    *((char **)(vvar_557{reg 48} - 8)) = &g_4e13ae;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(vvar_557{reg 48} + 352, vvar_425{reg 48} + 240, vvar_425{reg 48} + 0x200, v48);
                    if (*((long long *)(vvar_567{reg 48} + 360)) != *((long long *)(vvar_567{reg 48} + 216)))
                    {
                        *((int128_t *)(vvar_77{reg 48} + 624)) = *((int128_t *)(vvar_77{reg 48} + 464));
                        *((int128_t *)(vvar_77{reg 48} + 608)) = *((int128_t *)(vvar_77{reg 48} + 448));
                        *((int128_t *)(vvar_77{reg 48} + 592)) = *((int128_t *)(vvar_77{reg 48} + 432));
                        *((int128_t *)(vvar_77{reg 48} + 576)) = *((int128_t *)(vvar_77{reg 48} + 416));
                        v71 = *((int128_t *)(vvar_77{reg 48} + 352));
                        v72 = *((int128_t *)(vvar_77{reg 48} + 368));
                        v73 = *((int128_t *)(vvar_77{reg 48} + 384));
                        *((int128_t *)(vvar_77{reg 48} + 560)) = *((int128_t *)(vvar_77{reg 48} + 400));
                        *((void*)(vvar_77{reg 48} + 544)) = v73;
                        *((void*)(vvar_77{reg 48} + 528)) = v72;
                        *((void*)(vvar_77{reg 48} + 0x200)) = v71;
                        *((char **)(vvar_77{reg 48} - 8)) = &g_4e1a5d;
                        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                    }
                    v66 += 1;
                } while (v65 != v66);
            }
            v70 = *((long long *)(vvar_77{reg 48} + 280));
            vvar_588{reg 48} = vvar_77{reg 48} - 8;
            *((char **)(vvar_77{reg 48} - 8)) = &g_4e13e8;
            _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::hd3e39bd05377cda4(vvar_77{reg 48} + 352, v70);
            *((long long *)(vvar_588{reg 48} + 0x200)) = *((long long *)(vvar_588{reg 48} + 344));
            *((long long *)(vvar_588{reg 48} + 520)) = *((long long *)(vvar_588{reg 48} + 336));
            v76 = *((int128_t *)(vvar_588{reg 48} + 168));
            *((void*)(vvar_588{reg 48} + 528)) = v76;
            *((long long *)(vvar_588{reg 48} + 544)) = *((long long *)(vvar_588{reg 48} + 184));
            vvar_633{reg 48} = vvar_588{reg 48} - 8;
            *((char **)(vvar_588{reg 48} - 8)) = &g_4e1443;
            memcpy(vvar_588{reg 48} + 552, vvar_588{reg 48} + 352, 160);
            *((long long *)(vvar_633{reg 48} + 368)) = *((long long *)(vvar_633{reg 48} + 216));
            *((long long *)(vvar_633{reg 48} + 352)) = 0;
            vvar_126{reg 48} = vvar_633{reg 48} - 8;
            *((char **)(vvar_633{reg 48} - 8)) = &g_4e147c;
            std::thread::Builder::spawn_unchecked::h168758b872083059(vvar_633{reg 48} + 112, vvar_633{reg 48} + 352, vvar_633{reg 48} + 0x200);
            if (!*((long long *)(vvar_644{reg 48} + 112)))
            {
                *((long long *)(vvar_126{reg 48} + 352)) = *((long long *)(vvar_126{reg 48} + 120));
                *((char **)(vvar_126{reg 48} - 8)) = &g_4e1abc;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            *((long long *)(vvar_126{reg 48} + 320)) = *((long long *)(vvar_126{reg 48} + 128));
            v77 = *((int128_t *)(vvar_126{reg 48} + 112));
            v78 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
            *((void*)(vvar_126{reg 48} + 304)) = v77;
            *((long long *)(vvar_126{reg 48} + 112)) = 0;
            *((long long *)(vvar_126{reg 48} + 120)) = 8;
            *((long long *)(vvar_126{reg 48} + 128)) = 0;
            v79 = *((long long *)(vvar_126{reg 48} + 192));
            v80 = *((long long *)(vvar_126{reg 48} + 200));
            v81 = *((long long *)(vvar_126{reg 48} + 208));
            v82 = &v80[v81];
            *((uint128_t **)(vvar_126{reg 48} + 352)) = v80;
            *((uint128_t **)(vvar_126{reg 48} + 360)) = v80;
            *((unsigned long long *)(vvar_126{reg 48} + 368)) = v79;
            *((unsigned long long *)(vvar_126{reg 48} + 376)) = v82;
            *((long long *)(vvar_126{reg 48} + 384)) = 0;
            if (v81)
            {
                v83 = vvar_126{reg 48} + 232;
                do
                {
                    *((uint128_t **)(vvar_150{reg 48} + 360)) = v80 + 1;
                    v84 = *(v80);
                    v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                    v85 = *((long long *)(vvar_150{reg 48} + 384));
                    *((unsigned long long *)(vvar_150{reg 48} + 384)) = v85 + 1;
                    *((void*)(vvar_150{reg 48} + 224)) = v84;
                    vvar_692{reg 48} = vvar_150{reg 48} - 8;
                    *((char **)(vvar_150{reg 48} - 8)) = &g_4e15ca;
                    v86 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(vvar_644{reg 48} + 224, v82, v81);
                    if (v86)
                    {
                        *((long long *)(vvar_692{reg 48} + 0x200)) = 1;
                        *((long long *)(vvar_692{reg 48} + 520)) = 1;
                        *((unsigned long long *)(vvar_692{reg 48} + 528)) = v86;
                        vvar_218{reg 48} = vvar_692{reg 48} - 8;
                        *((char **)(vvar_692{reg 48} - 8)) = &g_4e160d;
                        v87 = __rust_alloc(24, 8);
                        if (!v87)
                        {
                            *((char **)(vvar_218{reg 48} - 8)) = &g_4e1a6d;
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        }
                        v87->field_10 = *((long long *)(vvar_218{reg 48} + 528));
                        v90 = *((int128_t *)(vvar_218{reg 48} + 0x200));
                        *((void*)&v87->field_0) = v90;
                        v91 = *((int128_t *)(vvar_218{reg 48} + 224));
                        *((struct_0 **)(vvar_218{reg 48} + 528)) = v87;
                        *((long long *)(vvar_218{reg 48} + 536)) = 0;
                        *((void*)(vvar_218{reg 48} + 0x200)) = v91;
                        *((unsigned long long *)(vvar_218{reg 48} + 544)) = v85;
                        v92 = *((long long *)(vvar_218{reg 48} + 128));
                        if (v92 == *((long long *)(vvar_701{reg 48} + 112)))
                        {
                            vvar_218{reg 48} = vvar_218{reg 48} - 8;
                            *((char **)(vvar_218{reg 48} - 8)) = &g_4e1674;
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd2c7d3e4c5d28c3a(vvar_644{reg 48} + 112);
                        }
                        v93 = *((long long *)(vvar_218{reg 48} + 120));
                        v94 = 5 * v92;
                        v95 = *((int128_t *)(vvar_218{reg 48} + 0x200));
                        v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                        v96 = *((int128_t *)(vvar_218{reg 48} + 528));
                        v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                        v81 = *((long long *)(vvar_218{reg 48} + 544));
                        *((unsigned long long *)(32 + (char *)v93 + 0x8 * v94)) = v81;
                        *((void*)(16 + (char *)v93 + 0x8 * v94)) = v96;
                        *((void*)((char *)v93 + 0x8 * v94)) = v95;
                        *((unsigned long long *)(vvar_218{reg 48} + 128)) = v92 + 1;
                    }
                    else
                    {
                        v88 = *((long long *)(vvar_692{reg 48} + 224));
                        if (!v88)
                        {
                            v89 = *((long long *)(vvar_692{reg 48} + 232));
                            v89->field_208 = vvar_953 - 1;
                            if (CasCmpNE(v89->field_208, vvar_953))
                                goto LABEL_0x4e16a7;
                            if (!vvar_953 - 1)
                                goto LABEL_4e16b5;
                            continue;
LABEL_4e16b5:
                            vvar_734{reg 48} = vvar_692{reg 48} - 8;
                            *((char **)(vvar_692{reg 48} - 8)) = &g_4e16bd;
                            std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v89);
                            v89->field_210 = 1;
                            if (CasCmpNE(v89->field_210, v89->field_210))
                                goto LABEL_0x4e16bf;
                            if (!vvar_954)
                                continue;
                            vvar_747{reg 48} = vvar_734{reg 48} - 8;
                            *((char **)(vvar_734{reg 48} - 8)) = &g_4e16d6;
                            _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v89);
                        }
                        else if ((unsigned int)v88 != 1)
                        {
                            vvar_731{reg 48} = vvar_692{reg 48} - 8;
                            *((char **)(vvar_692{reg 48} - 8)) = &g_4e16e3;
                            std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(v83);
                            continue;
                        }
                        else
                        {
                            vvar_728{reg 48} = vvar_692{reg 48} - 8;
                            *((char **)(vvar_692{reg 48} - 8)) = &g_4e169a;
                            std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(v83);
                        }
                    }
                } while ((v80 = *((long long *)(vvar_200{reg 48} + 360)), v80 != *((long long *)(vvar_200{reg 48} + 376))));
            }
            vvar_162{reg 48} = vvar_126{reg 48} - 8;
            *((char **)(vvar_126{reg 48} - 8)) = &g_4e16f5;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h03900b1c52c58887(vvar_126{reg 48} + 352);
            v98 = *((long long *)(vvar_162{reg 48} + 128));
            *((unsigned long long *)(vvar_162{reg 48} + 528)) = v98;
            *((int128_t *)(vvar_162{reg 48} + 0x200)) = *((int128_t *)(vvar_162{reg 48} + 112));
            *((long long *)(vvar_162{reg 48} + 536)) = *((long long *)(vvar_162{reg 48} + 280));
            if (v98)
            {
                while (true)
                {
                    vvar_162{reg 48} = vvar_963{reg 48};
                    v104 = (v98 >> 1) - 1;
                    if (v104 == -1)
                        break;
                    v105 = *((long long *)(vvar_162{reg 48} + 528));
                    vvar_162{reg 48} = vvar_162{reg 48} - 8;
                    *((char **)(vvar_162{reg 48} - 8)) = &g_4e175a;
                    _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(vvar_771{reg 48} + 0x200, v104, v105);
                }
            }
            v107 = *((int128_t *)(vvar_162{reg 48} + 0x200));
            v108 = *((long long *)(vvar_162{reg 48} + 288));
            v108->field_20 = *((long long *)(vvar_162{reg 48} + 528));
            v108->field_28 = *((long long *)(vvar_162{reg 48} + 536));
            *((void*)&v108->field_10) = v107;
            v109 = *((int128_t *)(vvar_162{reg 48} + 240));
            v108->field_30 = *((int128_t *)(vvar_162{reg 48} + 304));
            v110 = *((long long *)(vvar_162{reg 48} + 320));
            v108->field_40 = v110;
            *((void*)&v108->field_0) = v109;
            v108->field_48 = 0;
            return v110;
        }
    }
    *((long long *)(vvar_72{reg 48} + 112)) = 9223372036854775809;
    *((unsigned long long *)(vvar_72{reg 48} + 160)) = v30 + 1;
    v53 = *((long long *)(vvar_72{reg 48} + 288));
    *((void*)&(&v53->field_0)[1]) = v37;
    v53->field_0 = 3;
    v32->field_200 = vvar_951 - 1;
    if (CasCmpNE(v32->field_200, vvar_951))
        goto LABEL_0x4e1143;
    if (!vvar_951 - 1)
        goto LABEL_0x4e114d;
}
