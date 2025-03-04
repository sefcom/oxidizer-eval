long long uu_cp::copydir::copy_directory::h28c1a7346111a6c9(struct_3 *a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, char *a4, unsigned long long a5, struct_1 *a6, unsigned long long a7, unsigned long a8, unsigned long a9, char a10)
{
    unsigned long long v0;  // [sp-0x310]
    unsigned long long v1;  // [sp-0x308]
    unsigned long long v2;  // [sp-0x300]
    unsigned long long v3;  // [sp-0x2f8]
    unsigned long long v4;  // [sp-0x2f0]
    char v5;  // [sp-0x2e2]
    char v6;  // [sp-0x2e1]
    unsigned long long v7;  // [sp-0x2e0]
    struct struct_0 **v8;  // [sp-0x2d8]
    unsigned long long v9;  // [sp-0x2d0]
    char v10;  // [bp-0x2c8]
    char v11;  // [bp-0x2bc], Other Possible Types: unsigned int
    struct struct_0 **v12;  // [bp-0x2b8]
    char v13;  // [sp-0x2b0], Other Possible Types: unsigned long long
    struct struct_0 **v14;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x2a0]
    struct struct_0 **v16;  // [bp-0x298]
    char *v17;  // [sp-0x288]
    struct struct_0 **v18;  // [sp-0x280]
    struct struct_0 **v19;  // [bp-0x280], Other Possible Types: unsigned long long
    struct struct_0 **v20;  // [sp-0x278]
    struct struct_2 **v21;  // [sp-0x278], Other Possible Types: unsigned long long
    struct struct_0 **v22;  // [bp-0x270], Other Possible Types: char
    struct struct_0 **v23;  // [bp-0x270]
    void* v24;  // [sp-0x268]
    struct struct_0 **v25;  // [sp-0x260]
    unsigned long v26;  // [sp-0x250]
    char v27;  // [bp-0x247]
    char v28;  // [sp-0x245]
    unsigned int v29;  // [bp-0x244]
    char v30;  // [bp-0x240]
    struct struct_0 **v31;  // [sp-0x238]
    unsigned long v32;  // [sp-0x230]
    char v33;  // [bp-0x228]
    char v34[12];  // [sp-0x220]
    void* v35;  // [sp-0x218], Other Possible Types: char, unsigned long
    char v36;  // [bp-0x217]
    struct struct_0 **v37;  // [sp-0x210], Other Possible Types: unsigned long, unsigned long long
    void* v38;  // [sp-0x208], Other Possible Types: struct struct_2 **, struct struct_0 **
    unsigned long long v39;  // [sp-0x200]
    struct struct_0 **v40;  // [bp-0x1f8], Other Possible Types: void*
    char v41;  // [bp-0x1f0]
    char v42;  // [bp-0x1e8], Other Possible Types: unsigned long long
    struct struct_0 **v43;  // [sp-0x1e0], Other Possible Types: char
    char v44;  // [bp-0x1d8]
    unsigned long long v45;  // [sp-0x1d0]
    void* v46;  // [sp-0x1c8]
    struct struct_0 **v47;  // [sp-0x1c0]
    struct struct_0 **v48;  // [sp-0x1b0]
    struct struct_0 **v49;  // [sp-0x1a8]
    struct struct_0 **v50;  // [sp-0x198]
    unsigned long long v51;  // [sp-0x188]
    char v52;  // [sp-0x180]
    unsigned int v53;  // [bp-0x17f]
    unsigned int v54;  // [sp-0x17c]
    struct struct_0 **v55;  // [sp-0x178]
    struct struct_0 **v56;  // [bp-0x168], Other Possible Types: char
    unsigned long long v57;  // [sp-0x158]
    char *v58;  // [sp-0x148], Other Possible Types: struct struct_0 **
    unsigned long v59;  // [bp-0x140], Other Possible Types: unsigned long long
    struct struct_0 **v60;  // [sp-0x138]
    unsigned long v61;  // [bp-0x130]
    char v62;  // [bp-0x120]
    char v63;  // [bp-0x110]
    struct struct_0 **v64;  // [bp-0x108], Other Possible Types: unsigned long
    unsigned long v65;  // [sp-0x100], Other Possible Types: unsigned long long
    struct struct_0 **v66;  // [bp-0xf8], Other Possible Types: unsigned long
    char v67;  // [sp-0xf0]
    struct struct_0 **v68;  // [sp-0xe8]
    struct struct_0 **v69;  // [sp-0xd8]
    struct struct_0 **v70;  // [sp-0xc8]
    unsigned long long v71;  // [sp-0xb8]
    unsigned long long v72;  // [sp-0xb0]
    unsigned long v73;  // [sp-0xa8]
    unsigned long long v74;  // [sp-0xa0]
    char v75;  // [bp-0x98]
    char v76;  // [bp-0x88]
    char *v77;  // [sp-0x80]
    struct struct_0 **v78;  // [sp-0x78]
    struct struct_0 **v79;  // [sp-0x68]
    struct struct_0 **v80;  // [sp-0x58]
    struct struct_0 **v81;  // [sp-0x48]
    unsigned long long v82;  // [sp-0x38]
    char v83;  // r14b
    struct_1 *v84;  // 4096
    struct_1 *v86;  // r12
    unsigned long long v87;  // rax
    char v88;  // r14b
    unsigned long long v89;  // rax
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rdx
    unsigned long long v92;  // rax
    struct struct_0 **v93;  // xmm0
    struct struct_0 **v94;  // xmm1
    struct struct_0 **v95;  // rdi
    unsigned long long v96;  // rax
    int v97;  // ymm0
    struct struct_0 **v98;  // xmm0
    struct struct_0 **v99;  // xmm0
    unsigned long long v101;  // rbp
    unsigned long long v102;  // r13
    struct struct_0 **v103;  // xmm0
    struct struct_0 **v104;  // xmm0
    struct struct_0 **v105;  // xmm1
    int v106;  // ymm1
    int v107;  // ymm1
    struct struct_0 **v108;  // xmm2
    int v109;  // ymm2
    int v110;  // ymm2
    struct struct_0 **v111;  // xmm3
    int v112;  // ymm3
    int v113;  // ymm3
    struct struct_0 **v114;  // xmm0
    struct struct_0 **v115;  // xmm0
    struct struct_0 **v116;  // xmm0
    int v117;  // ymm0
    char *v118;  // rax
    struct struct_0 **v119;  // xmm0
    struct struct_0 **v120;  // xmm1
    struct struct_0 **v121;  // xmm2
    unsigned long long v122;  // rcx
    struct struct_0 **v123;  // xmm0
    struct struct_0 **v124;  // xmm1
    struct struct_0 **v125;  // xmm2
    struct struct_0 **v126;  // xmm0
    struct struct_0 **v127;  // xmm1
    struct struct_0 **v128;  // xmm2
    struct struct_0 **v129;  // xmm3
    char *v130;  // rax
    struct struct_0 **v131;  // xmm0
    struct struct_0 **v132;  // xmm1
    unsigned long v133;  // r14
    unsigned long v134;  // r12
    unsigned long long v135;  // rax
    unsigned long long v136;  // rax
    struct struct_0 **v137;  // xmm0
    struct struct_0 **v138;  // xmm1
    unsigned long long v139;  // rax
    struct struct_0 **v140;  // xmm0
    struct struct_0 **v141;  // xmm1
    char *v142;  // rsi
    unsigned long long v143;  // r13
    unsigned long long v144;  // rdx
    struct struct_0 **v145;  // xmm0
    unsigned long long v146;  // rax
    struct struct_0 **v147;  // xmm0
    struct struct_0 **v148;  // xmm1

    v83 = a6->field_41;
    v84 = a6;
    if (!v83 && (!a10 || (v84 = a6, !a6->field_40)) && (char)std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3))
    {
        v3 = a10;
        v2 = a9;
        v1 = a8;
        v0 = a7;
        uu_cp::copy_file::h3a721c0b700148ba(a0, a1, a2, a3, a4, a5, a6);
        return a0;
    }
    v86 = v84;
    if (!v86->field_46)
    {
        v17 = 1;
        v19 = a2;
        v21 = a3;
        v22 = 1;
        v64 = &v17;
        v65 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v35 = &g_5b6330;
        v37 = 1;
        v40 = 0;
        v38 = &v64;
        v39 = 1;
        ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&a0->field_8, &v35);
        a0->field_0 = 4;
        return a0;
    }
    v5 = v83;
    uu_cp::copydir::path_has_prefix::hcf43da5c11f3d99b(&v35, a4, a5, a2, a3);
    if (v35)
    {
        a0->field_0 = 2;
        a0->field_8 = v37;
        return a0;
    }
    v7 = a3;
    if (!v36)
    {
        v88 = v86->field_44;
        if (!v88 || (v89 = std::path::Path::parent::h65c9a340a6266f2d(a2, v7), !v89))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v56, a4, a5);
            goto LABEL_50eb9e;
        }
        else
        {
            std::path::Path::join::hb28666e9f3e91503(&v8, a4, a5, v89, v91);
            uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&v35, v86->field_30, *((char *)&v86->field_30 + 2), &v8, 1);
            v92 = v35;
            if (v92 != 13)
            {
                *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v43);
                v93 = *((int128_t *)&v37);
                v94 = *((int128_t *)&v39);
                *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v41);
                a0->field_18 = v94;
                a0->field_8 = v93;
                a0->field_0 = v92;
                v95 = &v8;
            }
            else
            {
                if (v86->field_48)
                {
                    std::path::Path::join::hb28666e9f3e91503(&v12, a4, a5, a2, v7);
                    uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&v35, a2, v7, v13, v14);
                    ::0x50da60::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&v58, &v35);
                    ::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v64, &v58);
                    v96 = v64;
                    if (v96)
                    {
                        do
                        {
                            v98 = *((int128_t *)&v66);
                            v97 = v97 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                            v73 = v96;
                            v74 = v65;
                            v31 = v98;
                            v17 = &v73;
                            v18 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v20 = &v31;
                            v22 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v35 = &g_5b6360;
                            v37 = 3;
                            v40 = 0;
                            v38 = &v17;
                            v39 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v35);
                            ::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v64, &v58);
                            v96 = v64;
                        } while (v96);
                    }
                    ::0x50d220::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v58);
                    ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v12);
                }
                v57 = *((long long *)&v10);
                v99 = *((int128_t *)&v8);
                v56 = v99;
LABEL_50eb9e:
                v101 = (&v56)[1];
                v102 = v57;
                v11 = v86->field_38;
                uu_cp::copydir::Context::new::h4cc136cbd57b6fd2(&v35, a2, v7, v101, v102);
                if (v35 == 0x8000000000000000)
                {
                    v12 = v37;
                    v58 = &v12;
                    v59 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v17 = &g_5b6390;
                    v19 = 1;
                    v24 = 0;
                    v21 = &v58;
                    v23 = 1;
                    ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v75, &v17);
                    a0->field_18 = *((long long *)&v76);
                    *((int128_t *)&a0->field_8) = *((int128_t *)&v75);
                    a0->field_0 = 4;
                    ::0x50d410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(v12);
                }
                else
                {
                    v6 = v88;
                    v103 = *((int128_t *)&v44);
                    v70 = v103;
                    v104 = *((int128_t *)&v35);
                    v105 = *((int128_t *)&v38);
                    v107 = v106 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105;
                    v108 = *((int128_t *)&v40);
                    v110 = v109 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
                    v111 = *((int128_t *)&v42);
                    v113 = v112 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
                    v69 = v111;
                    v68 = v108;
                    v66 = v105;
                    v64 = v104;
                    walkdir::WalkDir::new::h4dd3b028fcf7969e(&v17, a2, v7);
                    v71 = v101;
                    v72 = v102;
                    *((struct_1 **)&v34[0]) = &v86->field_30;
                    v28 = v86->field_43;
                    v51 = v26;
                    v114 = v25;
                    v50 = v114;
                    v115 = *((int128_t *)&v23);
                    v49 = v115;
                    v53 = *((int *)&v27);
                    v54 = v29;
                    v116 = *((int128_t *)&v17);
                    v47 = v116;
                    v48 = v20;
                    v35 = 0;
                    v38 = 0;
                    v39 = 8;
                    v117 = ((((((v97 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((uint128_t *)&v40) = 0;
                    v42 = 8;
                    *((uint128_t *)&v43) = 0;
                    v45 = 8;
                    v46 = 0;
                    v52 = v5;
                    *((uint128_t *)&v55) = 0;
                    v5 = v86->field_42;
                    v11 = v11;
                    while (true)
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&v58, &v35);
                        v118 = v58;
                        if (v118 != 2)
                            break;
                        v119 = *((int128_t *)&v59);
                        v120 = *((int128_t *)&v61);
                        v121 = *((int128_t *)&v62);
                        v16 = v121;
                        v14 = v120;
                        v12 = v119;
                        uu_cp::copydir::Entry::new::heaaef3e8d8dce243(&v17, &v64, v13, v14, v5);
                        if (v77 == 0x8000000000000000)
                        {
                            v130 = 7;
                            goto LABEL_50f26b;
                        }
                        v82 = *((long long *)&v30);
                        v126 = *((int128_t *)&v18);
                        v117 = (v117 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
                        v127 = *((int128_t *)&v23);
                        v107 = (v107 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127;
                        v128 = v25;
                        v110 = (v110 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v128;
                        v129 = *((int128_t *)&v26);
                        v113 = v113 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v129;
                        v81 = v129;
                        v80 = v128;
                        v79 = v127;
                        v78 = v126;
                        v77 = v17;
                        v4 = a9;
                        v3 = a8;
                        uu_cp::copydir::copy_direntry::he742c4f146ad7097(&v17, a1, &v77, a6, a7, v11);
                        v130 = v17;
                        if (v130 == 13)
                        {
                            ::0x50d490::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&v12);
                        }
                        else
                        {
                            *((unsigned long *)((char *)&a0->field_28 + 8)) = v26;
                            v131 = *((int128_t *)&v18);
                            v132 = *((int128_t *)&v23);
                            *((struct struct_0 ***)&(&a0->padding_20)[1]) = v25;
                            a0->field_18 = v132;
                            a0->field_8 = v131;
LABEL_50f26b:
                            a0->field_0 = v130;
                            ::0x50d490::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&v12);
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&v35);
                            goto LABEL_50f285;
                        }
                    }
                    if ((unsigned int)v118 != 3)
                    {
                        v122 = *((long long *)&v63);
                        v17 = v118;
                        v123 = *((int128_t *)&v59);
                        v117 = v117 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123;
                        v124 = *((int128_t *)&v61);
                        v107 = v107 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v124;
                        v125 = *((int128_t *)&v62);
                        v110 = v110 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125;
                        v25 = v125;
                        v23 = v124;
                        v19 = v123;
                        v26 = v122;
                        v8 = uucore::util_name::h60d842bf27b05e82();
                        v9 = v91;
                        v31 = &v8;
                        v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                        v12 = &g_5b63a0;
                        v13 = 2;
                        v16 = 0;
                        v14 = &v31;
                        v15 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v12);
                        v8 = &v17;
                        v9 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                        v12 = &g_5b62c0;
                        v13 = 2;
                        v16 = 0;
                        v14 = &v8;
                        v15 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v12);
                        ::0x50d420::core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::he082ec0f4c9f2f1f(&v17);
                        continue;
                    }
                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&v35);
                    v133 = v72;
                    v134 = v71;
                    if (!v6)
                    {
                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v35, a2, v7, v134, v133, v34);
                        v136 = v35;
                        if (v136 == 13)
                            goto LABEL_50f380;
                        *((struct struct_0 ***)((char *)&a0->field_28 + 8)) = v43;
                        v137 = *((int128_t *)&v37);
                        v138 = *((int128_t *)&v39);
                        *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&(&v40)[1]);
                        a0->field_18 = v138;
                        a0->field_8 = v137;
                        a0->field_0 = v136;
                    }
                    else
                    {
                        v135 = std::path::Path::file_name::h79ecbb7850a9c7f3(a2, v7);
                        if (!v135)
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_5b63c0); /* do not return */
                        std::path::Path::join::h58957b2d6fcd4dce(&v31, v134, v133, v135, v91);
                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v35, a2, v7, v32, *((long long *)&v33), v34);
                        v139 = v35;
                        if (v139 != 13)
                        {
                            *((struct struct_0 ***)((char *)&a0->field_28 + 8)) = v43;
                            v140 = *((int128_t *)&v37);
                            v141 = *((int128_t *)&v39);
                            *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&(&v40)[1]);
                            a0->field_18 = v141;
                            a0->field_8 = v140;
                            a0->field_0 = v139;
LABEL_50f354:
                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v31);
                        }
                        else
                        {
                            uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&v35, a2, v7, v32, *((long long *)&v33));
                            ::0x50da60::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&v58, &v35);
                            ::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v17, &v58);
                            v142 = v17;
                            if (v142)
                            {
                                do
                                {
                                    v143 = v23;
                                    uucore::features::fs::canonicalize::hb17a5541a57984e7(&v8, v142, v18, 0, 1);
                                    if (v8 != 0x8000000000000000)
                                    {
                                        v144 = *((long long *)&v10);
                                        v14 = *((long long *)&v10);
                                        v145 = *((int128_t *)&v8);
                                        v117 = v117 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v145;
                                        v12 = v145;
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v35, v13, v144, v20, v143, v34);
                                        v146 = v35;
                                        if (v146 != 13)
                                        {
                                            *((struct struct_0 ***)((char *)&a0->field_28 + 8)) = v43;
                                            v147 = *((int128_t *)&v37);
                                            v148 = *((int128_t *)&v39);
                                            *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&(&v40)[1]);
                                            a0->field_18 = v148;
                                            a0->field_8 = v147;
                                            a0->field_0 = v146;
                                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v12);
                                            if (v8 == 0x8000000000000000)
                                                ::0x50d730::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v8);
                                            ::0x50d220::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v58);
                                            goto LABEL_50f354;
                                        }
                                        else
                                        {
                                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v12);
                                            if (!(v8 == 0x8000000000000000))
                                                continue;
                                        }
                                    }
                                    ::0x50d730::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v8);
                                } while ((::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v17, &v58), v142 = v17, v142));
                            }
                            ::0x50d220::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v58);
                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v31);
LABEL_50f380:
                            a0->field_0 = 13;
                            core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&v64);
                            goto LABEL_50f292;
                        }
                    }
LABEL_50f285:
                    core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&v64);
                }
LABEL_50f292:
                v95 = &v56;
            }
        }
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(v95);
        return a0;
    }
    else
    {
        v64 = 1;
        v65 = a2;
        v66 = v7;
        v67 = 1;
        v87 = std::path::Path::file_name::h79ecbb7850a9c7f3(a2, v7);
        if (v87)
        {
            std::path::Path::join::h58957b2d6fcd4dce(&v12, a4, a5, v87, v90);
            v17 = 1;
            *((int128_t *)&v19) = *((int128_t *)&v13);
            v22 = 1;
            v58 = &v64;
            v59 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v60 = &v17;
            v61 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v35 = &g_5b6340;
            v37 = 2;
            v40 = 0;
            v38 = &v58;
            v39 = 2;
            ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v8, &v35);
            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v12);
            a0->field_18 = *((long long *)&v10);
            *((int128_t *)&a0->field_8) = *((int128_t *)&v8);
            a0->field_0 = 4;
            return a0;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(&g_5b63d8); /* do not return */
    }
}
