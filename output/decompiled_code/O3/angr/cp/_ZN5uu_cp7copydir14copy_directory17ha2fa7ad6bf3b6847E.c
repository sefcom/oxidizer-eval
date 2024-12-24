long long uu_cp::copydir::copy_directory::ha2fa7ad6bf3b6847(struct_1 *a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    struct_0 *v0;  // [sp-0x318]
    unsigned long long v1;  // [sp-0x310]
    unsigned long long v2;  // [sp-0x308]
    unsigned long long v3;  // [sp-0x300]
    unsigned long long v4;  // [sp-0x2f8]
    unsigned long long v5;  // [sp-0x2f0]
    char v6;  // [sp-0x2e2]
    char v7;  // [sp-0x2e1]
    unsigned long long v8;  // [sp-0x2e0]
    unsigned long v9;  // [bp-0x2d8], Other Possible Types: char, unsigned long long
    unsigned long long v10;  // [sp-0x2d0]
    char v11;  // [bp-0x2c8]
    char v12;  // [bp-0x2bc], Other Possible Types: unsigned int
    int v13;  // [bp-0x2b8], Other Possible Types: char, unsigned long long
    char v14;  // [bp-0x2b0], Other Possible Types: unsigned long long
    int v15;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x2a0]
    int v17;  // [bp-0x298], Other Possible Types: void*
    unsigned long v18;  // [sp-0x288], Other Possible Types: unsigned long long
    int v19;  // [sp-0x280], Other Possible Types: unsigned long, unsigned long long
    unsigned long v20;  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long v21;  // [bp-0x270], Other Possible Types: char, unsigned long long
    void* v22;  // [sp-0x268]
    int v23;  // [sp-0x260]
    unsigned long long v24;  // [sp-0x250], Other Possible Types: unsigned long
    char v25;  // [bp-0x247]
    char v26;  // [sp-0x245]
    unsigned int v27;  // [bp-0x244]
    char v28;  // [bp-0x240]
    int v29;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long v30;  // [sp-0x230]
    char v31;  // [bp-0x228]
    char v32[12];  // [sp-0x220]
    void* v33;  // [bp-0x218], Other Possible Types: char, unsigned long, unsigned long long
    char v34;  // [bp-0x217]
    unsigned long v35;  // [sp-0x210], Other Possible Types: unsigned long long
    void* v36;  // [sp-0x208], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v37;  // [sp-0x200]
    int v38;  // [bp-0x1f8], Other Possible Types: void*
    char v39;  // [bp-0x1f0]
    char v40;  // [bp-0x1e8], Other Possible Types: unsigned long long
    int v41;  // [bp-0x1e0], Other Possible Types: char
    char v42;  // [bp-0x1d8]
    unsigned long long v43;  // [sp-0x1d0]
    void* v44;  // [sp-0x1c8]
    int v45;  // [sp-0x1c0]
    unsigned long long v46;  // [sp-0x1b0]
    int v47;  // [sp-0x1a8]
    int v48;  // [sp-0x198]
    unsigned long long v49;  // [sp-0x188]
    char v50;  // [sp-0x180]
    unsigned int v51;  // [bp-0x17f]
    unsigned int v52;  // [sp-0x17c]
    int v53;  // [sp-0x178]
    int v54;  // [bp-0x168], Other Possible Types: char
    unsigned long long v55;  // [sp-0x158]
    char v56;  // [sp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long v57;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v58;  // [sp-0x138]
    unsigned long v59;  // [sp-0x130], Other Possible Types: unsigned long long
    char v60;  // [bp-0x120]
    char v61;  // [bp-0x110]
    unsigned long long v62[10];  // [sp-0x108], Other Possible Types: unsigned long long, unsigned long
    unsigned long v63;  // [sp-0x100], Other Possible Types: unsigned long long
    int v64;  // [sp-0xf8], Other Possible Types: char, unsigned long long
    char v65;  // [sp-0xf0]
    int v66;  // [sp-0xe8]
    int v67;  // [sp-0xd8]
    int v68;  // [sp-0xc8]
    unsigned long long v69;  // [sp-0xb8]
    unsigned long long v70;  // [sp-0xb0]
    unsigned long v71;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v72;  // [sp-0xa0]
    char v73;  // [bp-0x98]
    char v74;  // [bp-0x88]
    unsigned long v75;  // [sp-0x80], Other Possible Types: unsigned long long
    int v76;  // [sp-0x78]
    int v77;  // [sp-0x68]
    int v78;  // [sp-0x58]
    int v79;  // [sp-0x48]
    unsigned long long v80;  // [sp-0x38]
    struct_0 *v81;  // [bp+0x8]
    char v82;  // [bp+0x10]
    char v83;  // [bp+0x18]
    char v84;  // [bp+0x20]
    char v85;  // [bp+0x28]
    struct_0 *v86;  // r12
    char v87;  // r14b
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rcx
    unsigned long long v91;  // rax
    char v92;  // r14b
    unsigned long long v93;  // rdx
    unsigned long long v94;  // rcx
    unsigned long long v95;  // rax
    unsigned long long v96;  // rax
    int v97;  // xmm0
    int v98;  // xmm1
    unsigned long long v99;  // rdi
    unsigned long long v100;  // rax
    unsigned long long v101;  // rsi
    int v102;  // ymm0
    int v103;  // xmm0
    int v104;  // xmm0
    unsigned long long v106;  // rbp
    unsigned long long v107;  // r13
    int v108;  // xmm0
    int v109;  // xmm0
    int v110;  // xmm1
    int v111;  // ymm1
    int v112;  // ymm1
    int v113;  // xmm2
    int v114;  // ymm2
    int v115;  // ymm2
    int v116;  // xmm3
    int v117;  // ymm3
    int v118;  // ymm3
    int v119;  // xmm0
    int v120;  // xmm0
    int v121;  // xmm0
    int v122;  // ymm0
    unsigned long long v123;  // rdx
    unsigned long long v124;  // rax
    int v125;  // xmm0
    int v126;  // xmm1
    int v127;  // xmm2
    unsigned long long v128;  // rcx
    int v129;  // xmm0
    int v130;  // xmm1
    int v131;  // xmm2
    unsigned long long v132;  // rsi
    int v133;  // xmm0
    int v134;  // xmm1
    int v135;  // xmm2
    int v136;  // xmm3
    unsigned long long v137;  // rax
    int v138;  // xmm0
    int v139;  // xmm1
    unsigned long v140;  // r14
    unsigned long v141;  // r12
    unsigned long long v142;  // rax
    unsigned long long v143;  // rax
    int v144;  // xmm0
    int v145;  // xmm1
    unsigned long long v146;  // rax
    int v147;  // xmm0
    int v148;  // xmm1
    unsigned long long v149;  // rsi
    unsigned long long v150;  // r13
    unsigned long long v151;  // rdx
    int v152;  // xmm0
    unsigned long long v153;  // rax
    int v154;  // xmm0
    int v155;  // xmm1

    v86 = v81;
    v87 = v86->field_41;
    if (!v87 && (!v85 || !v86->field_40))
    {
        v86 = v81;
        if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
        {
            v4 = v85;
            v3 = *((long long *)&v84);
            v2 = *((long long *)&v83);
            v1 = *((long long *)&v82);
            v0 = v86;
            uu_cp::copy_file::h137dae572520ab74(a0, a1, a2, a3, a4, a5);
            return a0;
        }
    }
    if (!v86->field_46)
    {
        v18 = 1;
        v19 = a2;
        v20 = a3;
        v21 = 1;
        v62 = &v18;
        v63 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v33 = &g_5b5c60;
        v35 = 1;
        v38 = 0;
        v36 = &v62;
        v37 = 1;
        ::0x50ce30::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&a0->field_8, &v33);
        a0->field_0 = 4;
        return a0;
    }
    v6 = v87;
    uu_cp::copydir::path_has_prefix::h072302cfc0a4b4bc(&v33, a4, a5, a2, v20);
    if (v33)
    {
        a0->field_0 = 2;
        a0->field_8 = v35;
        return a0;
    }
    v8 = v20;
    if (!v34)
    {
        v92 = v86->field_44;
        if (!v92 || (v95 = std::path::Path::parent::h65c9a340a6266f2d(a2, v8, v93, v94), !v95))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v54, a4, a5);
            goto LABEL_50e1de;
        }
        else
        {
            std::path::Path::join::had13380324e00d87(&v9, a4, a5, v95, v93);
            uu_cp::copydir::build_dir::h4e0004d689f7d2f4(&v33, v86->field_30, *((char *)&v86->field_30 + 2), &v9, 1);
            v96 = v33;
            if (v96 != 13)
            {
                *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v41);
                v97 = *((int128_t *)&v35);
                v98 = *((int128_t *)&v37);
                *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v39);
                *((void*)&a0->field_18) = v98;
                *((void*)&a0->field_8) = v97;
                a0->field_0 = v96;
                v99 = &v9;
            }
            else
            {
                if (v86->field_48)
                {
                    std::path::Path::join::had13380324e00d87(&v13, a4, a5, a2, v8);
                    uu_cp::aligned_ancestors::h1fdc169ff101e976(&v33, a2, v8, v14, v15);
                    ::0x50d0a0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7a50bae6b2b5697d(&v56, &v33);
                    ::0x50c5a0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v62, &v56);
                    v100 = v62;
                    if (v100)
                    {
                        do
                        {
                            v103 = *((int128_t *)&v64);
                            v102 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103;
                            v71 = v100;
                            v72 = v63;
                            v29 = v103;
                            v18 = &v71;
                            v19 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v20 = &v29;
                            v21 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v33 = &g_5b5c70;
                            v35 = 3;
                            v38 = 0;
                            v36 = &v18;
                            v37 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v33, v101, v93);
                            ::0x50c5a0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v62, &v56);
                            v100 = v62;
                        } while (v100);
                    }
                    ::0x50c860::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::hbe19afc3d61841ac(&v56);
                    ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v13);
                }
                v55 = *((long long *)&v11);
                v104 = *((int128_t *)&v9);
                v54 = v104;
LABEL_50e1de:
                v106 = (long long)(&v54)[8];
                v107 = v55;
                v12 = v86->field_38;
                uu_cp::copydir::Context::new::hc5e497ae58ed9f61(&v33, a2, v8, v106, v107);
                if (v33 == 0x8000000000000000)
                {
                    v13 = v35;
                    v56 = &v13;
                    v57 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v18 = &g_5b5cd8;
                    v19 = 1;
                    v22 = 0;
                    v20 = &v56;
                    v21 = 1;
                    ::0x50ce30::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v73, &v18);
                    a0->field_18 = *((long long *)&v74);
                    *((int128_t *)&a0->field_8) = *((int128_t *)&v73);
                    a0->field_0 = 4;
                    ::0x50ca50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4f559f27cf60183f(v13);
                }
                else
                {
                    v7 = v92;
                    v108 = *((int128_t *)&v42);
                    v68 = v108;
                    v109 = *((int128_t *)&v33);
                    v110 = *((int128_t *)&v36);
                    v112 = v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                    v113 = *((int128_t *)&v38);
                    v115 = v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
                    v116 = *((int128_t *)&v40);
                    v118 = v117 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
                    v67 = v116;
                    v66 = v113;
                    v64 = v110;
                    *((void*)v62) = v109;
                    walkdir::WalkDir::new::hf7d0149d8a074d6c(&v18, a2, v8);
                    v69 = v106;
                    v70 = v107;
                    *((struct_0 **)&v32[0]) = &v86->field_30;
                    v26 = v86->field_43;
                    v49 = v24;
                    v119 = v23;
                    v48 = v119;
                    v120 = *((int128_t *)&v21);
                    v47 = v120;
                    v51 = *((int *)&v25);
                    v52 = v27;
                    v121 = *((int128_t *)&v18);
                    v45 = v121;
                    v46 = v20;
                    v33 = 0;
                    v36 = 0;
                    v37 = 8;
                    v122 = v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v38) = 0;
                    v40 = 8;
                    *((int128_t *)&v41) = 0;
                    v43 = 8;
                    v44 = 0;
                    v50 = v6;
                    *((int128_t *)&v53) = 0;
                    v6 = v86->field_42;
                    v12 = v12;
                    while (true)
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he01779e03549e115(&v56, &v33, v123);
                        v124 = v56;
                        if (v124 != 2)
                            break;
                        v125 = *((int128_t *)&v57);
                        v126 = *((int128_t *)&v59);
                        v127 = *((int128_t *)&v60);
                        v17 = v127;
                        v15 = v126;
                        v13 = v125;
                        uu_cp::copydir::Entry::new::h6368dbb787d6e233(&v18, &v62, v14, v15, -0x100 | v6);
                        if (v75 == 0x8000000000000000)
                        {
                            v137 = 7;
                            goto LABEL_50e8ab;
                        }
                        v80 = *((long long *)&v28);
                        v133 = *((int128_t *)&v19);
                        v122 = v122 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v133;
                        v134 = *((int128_t *)&v21);
                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v134;
                        v135 = v23;
                        v115 = v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v135;
                        v136 = *((int128_t *)&v24);
                        v118 = v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v136;
                        v79 = v136;
                        v78 = v135;
                        v77 = v134;
                        v76 = v133;
                        v75 = v18;
                        v5 = *((long long *)&v84);
                        v4 = *((long long *)&v83);
                        uu_cp::copydir::copy_direntry::h1b9f781b98700c6c(&v18, a1, &v75, v81, *((long long *)&v82), v12);
                        v137 = v18;
                        if (v137 == 13)
                        {
                            ::0x50cad0::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h001a5660b430fd76(&v13);
                        }
                        else
                        {
                            *((unsigned long long *)((char *)&a0->field_28 + 8)) = v24;
                            v138 = *((int128_t *)&v19);
                            v139 = *((int128_t *)&v21);
                            *((void*)&(&a0->padding_20)[1]) = v23;
                            *((void*)&a0->field_18) = v139;
                            *((void*)&a0->field_8) = v138;
LABEL_50e8ab:
                            a0->field_0 = v137;
                            ::0x50cad0::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h001a5660b430fd76(&v13);
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h9443f7804a7c060b(&v33);
                            goto LABEL_50e8c5;
                        }
                    }
                    if ((unsigned int)v124 != 3)
                    {
                        v128 = *((long long *)&v61);
                        v18 = v124;
                        v129 = *((int128_t *)&v57);
                        v122 = v122 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v129;
                        v130 = *((int128_t *)&v59);
                        v112 = v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v130;
                        v131 = *((int128_t *)&v60);
                        v115 = v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131;
                        v23 = v131;
                        *((void*)&v21) = v130;
                        v19 = v129;
                        v24 = v128;
                        v9 = uucore::util_name::h412db5e565a079f3();
                        v10 = v93;
                        v29 = &v9;
                        v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
                        v13 = &g_5b5cb8;
                        v14 = 2;
                        v17 = 0;
                        v15 = &v29;
                        v16 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v132, v93);
                        v9 = &v18;
                        v10 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hbf2d58447dc08690;
                        v13 = &g_5b5bf0;
                        v14 = 2;
                        v17 = 0;
                        v15 = &v9;
                        v16 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v132, v93);
                        ::0x50ca60::core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::he97a79dcb4f85b50(&v18);
                        continue;
                    }
                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h9443f7804a7c060b(&v33);
                    v140 = v70;
                    v141 = v69;
                    if (!v7)
                    {
                        uu_cp::copy_attributes::h42d0749b6e7cbf07(&v33, a2, v8, v141, v140, v32);
                        v143 = v33;
                        if (v143 == 13)
                            goto LABEL_50e9c0;
                        *((long long *)((char *)&a0->field_28 + 8)) = (long long)v41;
                        v144 = *((int128_t *)&v35);
                        v145 = *((int128_t *)&v37);
                        *((int128_t *)&(&a0->padding_20)[1]) = (int128_t)(&v38)[8];
                        *((void*)&a0->field_18) = v145;
                        *((void*)&a0->field_8) = v144;
                        a0->field_0 = v143;
                    }
                    else
                    {
                        v142 = std::path::Path::file_name::h79ecbb7850a9c7f3(a2, v8, v93, v94);
                        if (!v142)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        std::path::Path::join::h055a2ea05e12a03e(&v29, v141, v140, v142, v93);
                        uu_cp::copy_attributes::h42d0749b6e7cbf07(&v33, a2, v8, v30, *((long long *)&v31), v32);
                        v146 = v33;
                        if (v146 != 13)
                        {
                            *((long long *)((char *)&a0->field_28 + 8)) = (long long)v41;
                            v147 = *((int128_t *)&v35);
                            v148 = *((int128_t *)&v37);
                            *((int128_t *)&(&a0->padding_20)[1]) = (int128_t)(&v38)[8];
                            *((void*)&a0->field_18) = v148;
                            *((void*)&a0->field_8) = v147;
                            a0->field_0 = v146;
LABEL_50e994:
                            ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v29);
                        }
                        else
                        {
                            uu_cp::aligned_ancestors::h1fdc169ff101e976(&v33, a2, v8, v30, *((long long *)&v31));
                            ::0x50d0a0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7a50bae6b2b5697d(&v56, &v33);
                            ::0x50c5a0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v18, &v56);
                            v149 = v18;
                            if (v149)
                            {
                                do
                                {
                                    v150 = v21;
                                    uucore::features::fs::canonicalize::h231f0839fd3443a3(&v9, v149, v19, 0, 1);
                                    if (v9 != 0x8000000000000000)
                                    {
                                        v151 = *((long long *)&v11);
                                        v15 = *((long long *)&v11);
                                        v152 = *((int128_t *)&v9);
                                        v122 = v122 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v152;
                                        v13 = v152;
                                        uu_cp::copy_attributes::h42d0749b6e7cbf07(&v33, v14, v151, v20, v150, v32);
                                        v153 = v33;
                                        if (v153 != 13)
                                        {
                                            *((long long *)((char *)&a0->field_28 + 8)) = (long long)v41;
                                            v154 = *((int128_t *)&v35);
                                            v155 = *((int128_t *)&v37);
                                            *((int128_t *)&(&a0->padding_20)[1]) = (int128_t)(&v38)[8];
                                            *((void*)&a0->field_18) = v155;
                                            *((void*)&a0->field_8) = v154;
                                            a0->field_0 = v153;
                                            ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v13);
                                            if (v9 == 0x8000000000000000)
                                                ::0x50cd70::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h3d4a60cf871713bb(&v9);
                                            ::0x50c860::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::hbe19afc3d61841ac(&v56);
                                            goto LABEL_50e994;
                                        }
                                        else
                                        {
                                            ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v13);
                                            if ((::0x50c5a0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v18, &v56), v149 = v18, v149))
                                                continue;
                                        }
                                    }
                                    ::0x50cd70::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h3d4a60cf871713bb(&v9);
                                } while ((::0x50c5a0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v18, &v56), v149 = v18, v149));
                            }
                            ::0x50c860::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::hbe19afc3d61841ac(&v56);
                            ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v29);
LABEL_50e9c0:
                            a0->field_0 = 13;
                            core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::hb35630fc6f8517dd(&v62);
                            goto LABEL_50e8d2;
                        }
                    }
LABEL_50e8c5:
                    core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::hb35630fc6f8517dd(&v62);
                }
LABEL_50e8d2:
                v99 = &v54;
            }
        }
        ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(v99);
        return a0;
    }
    else
    {
        v62 = 1;
        v63 = a2;
        v64 = v8;
        v65 = 1;
        v91 = std::path::Path::file_name::h79ecbb7850a9c7f3(a2, v8, v89, v90);
        if (v91)
        {
            std::path::Path::join::h055a2ea05e12a03e(&v13, a4, a5, v91, v89);
            v18 = 1;
            *((int128_t *)&v19) = *((int128_t *)&v14);
            v21 = 1;
            v56 = &v62;
            v57 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v58 = &v18;
            v59 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v33 = &g_5b5d00;
            v35 = 2;
            v38 = 0;
            v36 = &v56;
            v37 = 2;
            ::0x50ce30::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v9, &v33);
            ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v13);
            a0->field_18 = *((long long *)&v11);
            *((int128_t *)&a0->field_8) = *((int128_t *)&v9);
            a0->field_0 = 4;
            return a0;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
}
