long long uu_hashsum::hashsum::h77460a0f481ff27e(struct_2 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1d0]
    char v2;  // [sp-0x1c8], Other Possible Types: unsigned long
    int v3;  // [bp-0x1c7]
    unsigned long long v4;  // [sp-0x1c0]
    void* v5;  // [bp-0x1b8], Other Possible Types: unsigned long
    int v6;  // [bp-0x1b7]
    unsigned long long v7;  // [sp-0x1b0]
    unsigned long long v8;  // [sp-0x1a8]
    unsigned short v9;  // [sp-0x1a0], Other Possible Types: unsigned long
    char v10;  // [sp-0x19e]
    unsigned long v11;  // [sp-0x198], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x190], Other Possible Types: unsigned long long
    char v13;  // [sp-0x188], Other Possible Types: unsigned long
    int v14;  // [bp-0x187]
    unsigned long long v15;  // [sp-0x180]
    void* v16;  // [bp-0x178]
    int v17;  // [bp-0x177]
    unsigned long long v18;  // [sp-0x168]
    unsigned short v19;  // [sp-0x160]
    char v20;  // [sp-0x15e]
    int v21;  // [bp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v22;  // [sp-0x150]
    int v23;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x139]
    char v25;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    char *v26;  // [sp-0x120], Other Possible Types: unsigned long, unsigned long long
    char *v27;  // [bp-0x118], Other Possible Types: char
    char v28;  // [bp-0x117]
    char v29;  // [bp-0x107]
    char v30;  // [bp-0xf8]
    char v31;  // [bp-0xf0]
    char v32;  // [bp-0xef]
    char v33;  // [bp-0xee]
    int v34;  // [bp-0xe8], Other Possible Types: char
    char v35;  // [bp-0xe0]
    unsigned long long v36;  // [bp-0xd8], Other Possible Types: char
    char v37;  // [bp-0xd7]
    char v38;  // [bp-0xc7]
    char v39;  // [bp-0xb8]
    char v40;  // [bp-0xb0]
    char v41;  // [bp-0xaf]
    char v42;  // [bp-0xae]
    unsigned long v43;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v44;  // [sp-0xa0]
    int v45;  // [sp-0x98]
    int v46;  // [bp-0x88]
    unsigned long long v47;  // [sp-0x79]
    char v48;  // [bp-0x68]
    char v49;  // [bp-0x60]
    char v50;  // [bp-0x40]
    char v51;  // [bp-0x38]
    unsigned long long v54;  // r13
    unsigned long long v55;  // rbp
    unsigned long long v56;  // r12
    unsigned long long v57;  // r14
    char v58;  // r15b
    char v59;  // al
    int v60;  // xmm0
    char v61;  // sil
    unsigned short v62;  // di
    char v63;  // cl
    int v64;  // xmm0
    char v65;  // dl
    unsigned short v66;  // si
    int v67;  // xmm0
    unsigned long long v68;  // r8
    unsigned long long v69;  // r9
    unsigned int *v71;  // rax
    void* v72;  // r12
    unsigned long long v73;  // rcx
    unsigned long long v76;  // r15
    struct_4 *v77;  // r13
    struct struct_0 **v78;  // rax
    unsigned long long v79;  // rsi
    unsigned long long v80;  // rdx
    char *v82;  // r13
    unsigned long long v83;  // rsi
    unsigned long long v84;  // rdx
    unsigned long long v85;  // rsi
    unsigned long long v86;  // r15
    struct_1 *v87;  // rbx
    struct struct_0 **v88;  // rax
    unsigned long long v89;  // rsi
    unsigned long long v90;  // rdx
    char *v91;  // r12
    unsigned long long v92;  // rsi
    unsigned long long v93;  // rdx
    char *v95;  // rax
    char *v96;  // rcx
    int v97;  // ymm3
    int v98;  // ymm4
    int v99;  // ymm5
    int v100;  // ymm6
    int v101;  // ymm7
    int v102;  // xmm3
    int v103;  // xmm4
    int v104;  // xmm5
    int v105;  // xmm5
    int v106;  // xmm6
    int v107;  // xmm6
    int v108;  // xmm7
    int v109;  // xmm7
    int v110;  // xmm7
    int v111;  // xmm7
    int v112;  // xmm5
    int v113;  // xmm5
    int v114;  // xmm5
    int v115;  // xmm5
    int v116;  // xmm7
    int v117;  // xmm5
    char *v118;  // rdx
    char *v119;  // rcx
    char *v120;  // rax
    int v121;  // xmm4
    int v122;  // xmm4
    unsigned long long v123;  // rdx
    unsigned long long v124;  // rsi
    unsigned long long v126;  // r15
    struct_4 *v127;  // r12
    struct struct_0 **v128;  // rax
    unsigned long long v129;  // r15
    struct_1 *v130;  // rbx
    struct struct_0 **v131;  // rax

    *((int *)&v43) = (!a0->field_28 ? " *blake2b (BLAKE2b (" : "*blake2b (BLAKE2b (");
    v44 = 1;
    std::path::Path::components::h4f3217acf0fc8653(&v34, "- *blake2b (BLAKE2b (", 1);
    std::path::Path::components::h4f3217acf0fc8653(&v25, "- *blake2b (BLAKE2b (", 1);
    v54 = *((long long *)&v34);
    v55 = *((long long *)&v35);
    v56 = v25;
    v57 = v26;
    if (v55 != v57)
    {
        v58 = v36;
        goto LABEL_4fa73a;
    }
    v58 = v36;
    if (v40 == v31 && v41 == 2 && v32 == 2)
    {
        if (v58 != 6)
        {
            v59 = v27;
            if (v59 == 6)
            {
                if (v58 < 3)
                    goto LABEL_4fa742;
            }
            else
            {
                if ((v59 < 3 ^ v58 < 3))
                {
LABEL_4fa742:
                    v47 = *((long long *)&v39);
                    v60 = *((int128_t *)&v37);
                    *((int128_t *)&v46) = *((int128_t *)&v38);
                    v45 = v60;
                    goto LABEL_4fa770;
                }
            }
LABEL_4fabd0:
            if (!(!(_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he5ac47aec8dc7189(v54, v55, v56, v55) & 255 & 255 & 255)))
                goto LABEL_4fa85b;
        }
        else
        {
            if (!(v27 <= 2))
                goto LABEL_4fabd0;
LABEL_4fa770:
            v61 = v42;
            v62 = *((short *)&v40);
            v11 = v54;
            v12 = v55;
            v13 = 6;
            v18 = v47;
            *((int128_t *)&v17) = (int128_t)v46;
            v14 = v45;
            v19 = v62;
            v20 = v61;
            v63 = v27;
            if (v2 != 6)
            {
                v24 = *((long long *)&v30);
                v64 = *((int128_t *)&v28);
                *((int128_t *)&v23) = *((int128_t *)&v29);
                v21 = v64;
            }
            v65 = v33;
            v66 = *((short *)&v31);
            v0 = v56;
            v1 = v57;
            v2 = v63;
            v8 = v24;
            v67 = (int128_t)v21;
            *((int128_t *)&v6) = (int128_t)v23;
            v3 = v67;
            v9 = v66;
            v10 = v65;
            if (!(char)core::iter::traits::iterator::Iterator::eq_by::ha377a9a43251059c(&v11, &v0, v10, v24, v68, v69))
            {
                std::fs::File::open::h9800d40f151e5173(&v0, "- *blake2b (BLAKE2b (", 1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3b3d1e6b9f073093(&v11, &v0);
                v72 = v11;
                if (v72)
                {
                    goto LABEL_4fa9b2;
                }
                else
                {
                    v71 = __rust_alloc(4, 4);
                    if (!v71)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    *(v71) = v12;
                    v73 = &g_6bebb0;
                }
LABEL_4fa8f8:
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd421203165723ecd(&v48, 0x2000, v71, v73);
                uucore::features::checksum::digest_reader::hba6a230162771730(&v0, &a0->field_10, &v48, a0->field_28, a0->field_20);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfba813a87aade5e5(&v11, &v0);
                v72 = v12;
                if (v21 == 0x8000000000000000)
                {
                    if (*((long long *)&v49))
                        __rust_dealloc(*((long long *)&v48));
                    v76 = *((long long *)&v50);
                    v77 = *((long long *)&v51);
                    if (v77->field_0)
                        v78(v76);
                    if (v77->field_8)
                        __rust_dealloc(v76);
                }
                else
                {
                    v21 = v11;
                    v22 = v72;
                    v23 = *((long long *)&v13);
                    uucore::features::checksum::escape_filename::h1d054ec249beb202(&v0, "- *blake2b (BLAKE2b (", 1);
                    v36 = *((long long *)&v2);
                    *((int128_t *)&v34) = *((int128_t *)&v0);
                    *((int128_t *)&v45) = (int128_t)(&v3)[7];
                    if (!a0->field_29)
                    {
                        if (a0->field_2a)
                        {
                            v11 = &v21;
                            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v0 = &g_6beac8;
                            v1 = 2;
                            v5 = 0;
                            v2 = &v11;
                            v4 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&v0, v79, v80);
                        }
                        else if (!a0->field_2b)
                        {
                            v0 = &v45;
                            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h554b66743f850de2;
                            v2 = &v21;
                            v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v5 = &v43;
                            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h554b66743f850de2;
                            v8 = &v34;
                            v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v11 = &g_6bec60;
                            v12 = 5;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 4;
                            std::io::stdio::_print::he918bceb0c89db46(&v11, v85, &v43);
                        }
                        else
                        {
                            v25 = "- *blake2b (BLAKE2b (";
                            v26 = 1;
                            v0 = &v21;
                            v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v2 = &v43;
                            v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h554b66743f850de2;
                            v5 = &v25;
                            v7 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v11 = &g_6becb0;
                            v12 = 4;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 3;
                            std::io::stdio::_print::he918bceb0c89db46(&v11, v83, v84);
                        }
                    }
                    else
                    {
                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he5ac47aec8dc7189(a0->field_0, a0->field_8, "blake2b (BLAKE2b (", 7))
                        {
                            v82 = a0->field_8;
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h0ef6f4af185dbea5(&v0, v82, 0);
                            if (v0)
                                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                            v91 = *((long long *)&v2);
                            memcpy(v91, a0->field_0, v82);
                            if (v82)
                            {
                                if (v82 < 8)
                                {
LABEL_4faeae:
                                    do
                                    {
                                        v123 = *(v118);
                                        v124 = v123 - 97 & 4294967295;
                                        *(v118) = (char)(((v124 & 255 & 255) < 26) * 32) ^ (char)v123;
                                        v118 += 1;
                                    } while (v118 != v91 + v82);
                                }
                                else
                                {
                                    if (v82 < 32)
                                    {
                                        v95 = 0;
                                        goto LABEL_4fae4a;
                                    }
                                    v95 = v82 & -0x20;
                                    v96 = 0;
                                    do
                                    {
                                        v102 = *((int128_t *)(v91 + v96));
                                        v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                                        v103 = *((int128_t *)(v91 + v96 + 16));
                                        v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                                        v104 = v102;
                                        v105 = AddV(v104, 212176064080114571335986519928043708319);
                                        v106 = v103;
                                        v107 = AddV(v106, 212176064080114571335986519928043708319);
                                        v100 = v100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                                        v108 = v105;
                                        v109 = MinV(v108, 33361016364797888574840647787428256025);
                                        v110 = CmpEQV(v109, v105);
                                        v111 = v110 & 42702100946941297375796029167908167712;
                                        v112 = v107;
                                        v113 = MinV(v112, 33361016364797888574840647787428256025);
                                        v114 = CmpEQV(v113, v107);
                                        v115 = v114 & 42702100946941297375796029167908167712;
                                        v116 = v111 ^ v102;
                                        v101 = v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
                                        v117 = v115 ^ v103;
                                        v99 = v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117;
                                        *((void*)(v91 + v96)) = v116;
                                        *((void*)(v91 + v96 + 16)) = v117;
                                        v96 += 32;
                                    } while (v95 != v96);
                                    if (v82 != v95)
                                    {
                                        if (!((char)v82 & 24))
                                        {
                                            v120 = v95 + v91;
                                            goto LABEL_4faeae;
                                        }
LABEL_4fae4a:
                                        v118 = v82 & -8;
                                        v119 = v91 + v118;
                                        do
                                        {
                                            v97 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)(v91 + v95));
                                            v121 = (uint128_t)v97;
                                            v122 = AddV(v121, 11502087481254191007);
                                            v98 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122;
                                            v99 = v99 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MaxV(v122, 1880844493789993498)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(MaxV(v122, 1880844493789993498), v122) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v122, 1880844493789993498), v122)) & 2314885530818453536 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(MaxV(v122, 1880844493789993498), v122)) & 2314885530818453536 ^ (uint128_t)v97;
                                            *((unsigned long long *)(v91 + v95)) = (unsigned long long)v99;
                                            v95 += 8;
                                        } while (v118 != v95);
                                        if (v82 == v118)
                                            goto LABEL_4faee4;
                                        goto LABEL_4faeae;
                                    }
                                }
                            }
LABEL_4faee4:
                            v25 = v1;
                            v26 = v91;
                            v27 = v82;
                            v0 = &v45;
                            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h554b66743f850de2;
                            v2 = &v25;
                            v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v5 = &v34;
                            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v8 = &v21;
                            v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v11 = &g_6becf0;
                            v12 = 5;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 4;
                            std::io::stdio::_print::he918bceb0c89db46(&v11, v124 | -0x100 | (char)(((v124 & 255 & 255) < 26) * 32) ^ (char)v123, v118);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
                            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb06cca9011fdd7e(&v25);
                        }
                        else if (a0->field_18->field_30(a0->field_10) == 0x200)
                        {
                            v11 = &v34;
                            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v13 = &v21;
                            v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v0 = &g_6bed40;
                            v1 = 3;
                            v5 = 0;
                            v2 = &v11;
                            v4 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v0, v89, v90);
                        }
                        else
                        {
                            v25 = a0->field_18->field_30(a0->field_10);
                            v0 = &v25;
                            v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            v2 = &v34;
                            v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v5 = &v21;
                            v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v11 = &g_6bed70;
                            v12 = 4;
                            v16 = 0;
                            v13 = &v0;
                            v15 = 3;
                            std::io::stdio::_print::he918bceb0c89db46(&v11, v92, v93);
                        }
                    }
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb06cca9011fdd7e(&v34);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7ab0c1d41fc7d27b();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb06cca9011fdd7e(&v21);
                    if (*((long long *)&v49))
                        __rust_dealloc(*((long long *)&v48));
                    v126 = *((long long *)&v50);
                    v127 = *((long long *)&v51);
                    if (v127->field_0)
                        v128(v126);
                    if (v127->field_8)
                        __rust_dealloc(v126);
                    v129 = a0->field_10;
                    v130 = a0->field_18;
                    if (v130->field_0)
                        v131(v129);
                    if (!v130->field_8)
                        return 0;
                    __rust_dealloc(v129);
                }
LABEL_4fa9b2:
                v86 = a0->field_10;
                v87 = a0->field_18;
                if (v87->field_0)
                    v88(v86);
                if (v87->field_8)
                {
                    __rust_dealloc(v86);
                    return v72;
                }
                return v72;
            }
LABEL_4fa85b:
            v71 = __rust_alloc(8, 8);
            if (!v71)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *((long long *)&v71) = std::io::stdio::stdin::h7215cc131abb55d8();
            v73 = &g_6bec08;
            goto LABEL_4fa8f8;
        }
    }
LABEL_4fa73a:
    if (!(v58 == 6))
        goto LABEL_4fa742;
    goto LABEL_4fa770;
}
