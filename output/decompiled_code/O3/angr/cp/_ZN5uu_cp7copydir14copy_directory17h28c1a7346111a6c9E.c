long long uu_cp::copydir::copy_directory::h28c1a7346111a6c9(struct_2 *a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, char *a4, unsigned long long a5)
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
    struct struct_1 **v9;  // [bp-0x2d8]
    unsigned long long v10;  // [sp-0x2d0]
    char v11;  // [bp-0x2c8]
    char v12;  // [bp-0x2bc], Other Possible Types: unsigned int
    struct struct_1 **v13;  // [bp-0x2b8]
    char v14;  // [bp-0x2b0], Other Possible Types: unsigned long long
    struct struct_1 **v15;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x2a0]
    struct struct_1 **v17;  // [bp-0x298]
    char *v18;  // [sp-0x288], Other Possible Types: unsigned long long
    struct struct_1 **v19;  // [sp-0x280], Other Possible Types: unsigned long long
    struct struct_3 **v20;  // [sp-0x278], Other Possible Types: struct struct_1 **, unsigned long long
    struct struct_1 **v21;  // [bp-0x270], Other Possible Types: char
    void* v22;  // [sp-0x268]
    struct struct_1 **v23;  // [sp-0x260]
    unsigned long long v24;  // [sp-0x250], Other Possible Types: unsigned long
    char v25;  // [bp-0x247]
    char v26;  // [sp-0x245]
    unsigned int v27;  // [bp-0x244]
    char v28;  // [bp-0x240]
    struct struct_1 **v29;  // [bp-0x238]
    unsigned long v30;  // [sp-0x230]
    char v31;  // [bp-0x228]
    char v32[12];  // [sp-0x220]
    void* v33;  // [bp-0x218], Other Possible Types: char, unsigned long, unsigned long long
    char v34;  // [bp-0x217]
    struct struct_1 **v35;  // [sp-0x210], Other Possible Types: unsigned long, unsigned long long
    void* v36;  // [sp-0x208], Other Possible Types: struct struct_3 **, struct struct_1 **
    unsigned long long v37;  // [sp-0x200]
    struct struct_1 **v38;  // [bp-0x1f8], Other Possible Types: void*
    char v39;  // [bp-0x1f0]
    char v40;  // [bp-0x1e8], Other Possible Types: unsigned long long
    struct struct_1 **v41;  // [bp-0x1e0], Other Possible Types: char
    char v42;  // [bp-0x1d8]
    unsigned long long v43;  // [sp-0x1d0]
    void* v44;  // [sp-0x1c8]
    struct struct_1 **v45;  // [sp-0x1c0]
    struct struct_1 **v46;  // [sp-0x1b0]
    struct struct_1 **v47;  // [sp-0x1a8]
    struct struct_1 **v48;  // [sp-0x198]
    unsigned long long v49;  // [sp-0x188]
    char v50;  // [sp-0x180]
    unsigned int v51;  // [bp-0x17f]
    unsigned int v52;  // [sp-0x17c]
    struct struct_1 **v53;  // [sp-0x178]
    struct struct_1 **v54;  // [bp-0x168], Other Possible Types: char
    unsigned long long v55;  // [sp-0x158]
    char *v56;  // [sp-0x148], Other Possible Types: struct struct_1 **
    char v57;  // [sp-0x140], Other Possible Types: unsigned long long
    struct struct_1 **v58;  // [sp-0x138]
    unsigned long v59;  // [sp-0x130], Other Possible Types: unsigned long long
    char v60;  // [bp-0x120]
    char v61;  // [bp-0x110]
    struct struct_1 **v62;  // [sp-0x108], Other Possible Types: unsigned long long, unsigned long
    unsigned long v63;  // [sp-0x100], Other Possible Types: unsigned long long
    struct struct_1 **v64;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    char v65;  // [sp-0xf0]
    struct struct_1 **v66;  // [sp-0xe8]
    struct struct_1 **v67;  // [sp-0xd8]
    struct struct_1 **v68;  // [sp-0xc8]
    unsigned long long v69;  // [sp-0xb8]
    unsigned long long v70;  // [sp-0xb0]
    unsigned long v71;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v72;  // [sp-0xa0]
    char v73;  // [bp-0x98]
    char v74;  // [bp-0x88]
    char *v75;  // [sp-0x80]
    struct struct_1 **v76;  // [sp-0x78]
    struct struct_1 **v77;  // [sp-0x68]
    struct struct_1 **v78;  // [sp-0x58]
    struct struct_1 **v79;  // [sp-0x48]
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
    struct struct_1 **v97;  // xmm0
    struct struct_1 **v98;  // xmm1
    struct struct_1 **v99;  // rdi
    unsigned long long v100;  // rax
    unsigned long long v101;  // rsi
    int v102;  // ymm0
    struct struct_1 **v103;  // xmm0
    struct struct_1 **v104;  // xmm0
    unsigned long long v106;  // rbp
    unsigned long long v107;  // r13
    struct struct_1 **v108;  // xmm0
    struct struct_1 **v109;  // xmm0
    struct struct_1 **v110;  // xmm1
    int v111;  // ymm1
    int v112;  // ymm1
    struct struct_1 **v113;  // xmm2
    int v114;  // ymm2
    int v115;  // ymm2
    struct struct_1 **v116;  // xmm3
    int v117;  // ymm3
    int v118;  // ymm3
    struct struct_1 **v119;  // xmm0
    struct struct_1 **v120;  // xmm0
    struct struct_1 **v121;  // xmm0
    int v122;  // ymm0
    unsigned long long v123;  // rdx
    char *v124;  // rax
    struct struct_1 **v125;  // xmm0
    struct struct_1 **v126;  // xmm1
    struct struct_1 **v127;  // xmm2
    unsigned long long v128;  // rcx
    struct struct_1 **v129;  // xmm0
    struct struct_1 **v130;  // xmm1
    struct struct_1 **v131;  // xmm2
    unsigned long long v132;  // rsi
    struct struct_1 **v133;  // xmm0
    struct struct_1 **v134;  // xmm1
    struct struct_1 **v135;  // xmm2
    struct struct_1 **v136;  // xmm3
    char *v137;  // rax
    struct struct_1 **v138;  // xmm0
    struct struct_1 **v139;  // xmm1
    unsigned long v140;  // r14
    unsigned long v141;  // r12
    unsigned long long v142;  // rax
    unsigned long long v143;  // rax
    struct struct_1 **v144;  // xmm0
    struct struct_1 **v145;  // xmm1
    unsigned long long v146;  // rax
    struct struct_1 **v147;  // xmm0
    struct struct_1 **v148;  // xmm1
    char *v149;  // rsi
    unsigned long long v150;  // r13
    unsigned long long v151;  // rdx
    struct struct_1 **v152;  // xmm0
    unsigned long long v153;  // rax
    struct struct_1 **v154;  // xmm0
    struct struct_1 **v155;  // xmm1

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
            uu_cp::copy_file::h3a721c0b700148ba(a0, a1, a2, a3, a4, a5);
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
        v63 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v33 = &g_5b6330;
        v35 = 1;
        v38 = 0;
        v36 = &v62;
        v37 = 1;
        ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&a0->field_8, &v33);
        a0->field_0 = 4;
        return a0;
    }
    v6 = v87;
    uu_cp::copydir::path_has_prefix::hcf43da5c11f3d99b(&v33, a4, a5, a2, v20);
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
            goto LABEL_50eb9e;
        }
        else
        {
            std::path::Path::join::hb28666e9f3e91503(&v9, a4, a5, v95, v93);
            uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&v33, v86->field_30, *((char *)&v86->field_30 + 2), &v9, 1);
            v96 = v33;
            if (v96 != 13)
            {
                *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v41);
                v97 = *((int128_t *)&v35);
                v98 = *((int128_t *)&v37);
                *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&v39);
                a0->field_18 = v98;
                a0->field_8 = v97;
                a0->field_0 = v96;
                v99 = &v9;
            }
            else
            {
                if (v86->field_48)
                {
                    std::path::Path::join::hb28666e9f3e91503(&v13, a4, a5, a2, v8);
                    uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&v33, a2, v8, v14, v15);
                    ::0x50da60::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&v56, &v33);
                    ::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v62, &v56);
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
                            v19 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v20 = &v29;
                            v21 = &_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                            v33 = &g_5b6360;
                            v35 = 3;
                            v38 = 0;
                            v36 = &v18;
                            v37 = 2;
                            std::io::stdio::_print::he918bceb0c89db46(&v33, v101, v93);
                            ::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v62, &v56);
                            v100 = v62;
                        } while (v100);
                    }
                    ::0x50d220::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v56);
                    ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v13);
                }
                v55 = *((long long *)&v11);
                v104 = *((int128_t *)&v9);
                v54 = v104;
LABEL_50eb9e:
                v106 = (&v54)[1];
                v107 = v55;
                v12 = v86->field_38;
                uu_cp::copydir::Context::new::h4cc136cbd57b6fd2(&v33, a2, v8, v106, v107);
                if (v33 == 0x8000000000000000)
                {
                    v13 = v35;
                    v56 = &v13;
                    v57 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v18 = &g_5b6390;
                    v19 = 1;
                    v22 = 0;
                    v20 = &v56;
                    v21 = 1;
                    ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v73, &v18);
                    a0->field_18 = *((long long *)&v74);
                    *((int128_t *)&a0->field_8) = *((int128_t *)&v73);
                    a0->field_0 = 4;
                    ::0x50d410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(v13);
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
                    v62 = v109;
                    walkdir::WalkDir::new::h4dd3b028fcf7969e(&v18, a2, v8);
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
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&v56, &v33, v123);
                        v124 = v56;
                        if (v124 != 2)
                            break;
                        v125 = *((int128_t *)&v57);
                        v126 = *((int128_t *)&v59);
                        v127 = *((int128_t *)&v60);
                        v17 = v127;
                        v15 = v126;
                        v13 = v125;
                        uu_cp::copydir::Entry::new::heaaef3e8d8dce243(&v18, &v62, v14, v15, -0x100 | v6);
                        if (v75 == 0x8000000000000000)
                        {
                            v137 = 7;
                            goto LABEL_50f26b;
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
                        uu_cp::copydir::copy_direntry::he742c4f146ad7097(&v18, a1, &v75, v81, *((long long *)&v82), v12);
                        v137 = v18;
                        if (v137 == 13)
                        {
                            ::0x50d490::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&v13);
                        }
                        else
                        {
                            *((unsigned long long *)((char *)&a0->field_28 + 8)) = v24;
                            v138 = *((int128_t *)&v19);
                            v139 = *((int128_t *)&v21);
                            *((struct struct_1 ***)&(&a0->padding_20)[1]) = v23;
                            a0->field_18 = v139;
                            a0->field_8 = v138;
LABEL_50f26b:
                            a0->field_0 = v137;
                            ::0x50d490::core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&v13);
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&v33);
                            goto LABEL_50f285;
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
                        v21 = v130;
                        v19 = v129;
                        v24 = v128;
                        v9 = uucore::util_name::h60d842bf27b05e82();
                        v10 = v93;
                        v29 = &v9;
                        v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                        v13 = &g_5b63a0;
                        v14 = 2;
                        v17 = 0;
                        v15 = &v29;
                        v16 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v132, v93);
                        v9 = &v18;
                        v10 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                        v13 = &g_5b62c0;
                        v14 = 2;
                        v17 = 0;
                        v15 = &v9;
                        v16 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v132, v93);
                        ::0x50d420::core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::he082ec0f4c9f2f1f(&v18);
                        continue;
                    }
                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&v33);
                    v140 = v70;
                    v141 = v69;
                    if (!v7)
                    {
                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v33, a2, v8, v141, v140, v32);
                        v143 = v33;
                        if (v143 == 13)
                            goto LABEL_50f380;
                        *((struct struct_1 ***)((char *)&a0->field_28 + 8)) = v41;
                        v144 = *((int128_t *)&v35);
                        v145 = *((int128_t *)&v37);
                        *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&(&v38)[1]);
                        a0->field_18 = v145;
                        a0->field_8 = v144;
                        a0->field_0 = v143;
                    }
                    else
                    {
                        v142 = std::path::Path::file_name::h79ecbb7850a9c7f3(a2, v8, v93, v94);
                        if (!v142)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        std::path::Path::join::h58957b2d6fcd4dce(&v29, v141, v140, v142, v93);
                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v33, a2, v8, v30, *((long long *)&v31), v32);
                        v146 = v33;
                        if (v146 != 13)
                        {
                            *((struct struct_1 ***)((char *)&a0->field_28 + 8)) = v41;
                            v147 = *((int128_t *)&v35);
                            v148 = *((int128_t *)&v37);
                            *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&(&v38)[1]);
                            a0->field_18 = v148;
                            a0->field_8 = v147;
                            a0->field_0 = v146;
LABEL_50f354:
                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v29);
                        }
                        else
                        {
                            uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&v33, a2, v8, v30, *((long long *)&v31));
                            ::0x50da60::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&v56, &v33);
                            ::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v18, &v56);
                            v149 = v18;
                            if (v149)
                            {
                                do
                                {
                                    v150 = v21;
                                    uucore::features::fs::canonicalize::hb17a5541a57984e7(&v9, v149, v19, 0, 1);
                                    if (v9 != 0x8000000000000000)
                                    {
                                        v151 = *((long long *)&v11);
                                        v15 = *((long long *)&v11);
                                        v152 = *((int128_t *)&v9);
                                        v122 = v122 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v152;
                                        v13 = v152;
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v33, v14, v151, v20, v150, v32);
                                        v153 = v33;
                                        if (v153 != 13)
                                        {
                                            *((struct struct_1 ***)((char *)&a0->field_28 + 8)) = v41;
                                            v154 = *((int128_t *)&v35);
                                            v155 = *((int128_t *)&v37);
                                            *((int128_t *)&(&a0->padding_20)[1]) = *((int128_t *)&(&v38)[1]);
                                            a0->field_18 = v155;
                                            a0->field_8 = v154;
                                            a0->field_0 = v153;
                                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v13);
                                            if (v9 == 0x8000000000000000)
                                                ::0x50d730::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v9);
                                            ::0x50d220::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v56);
                                            goto LABEL_50f354;
                                        }
                                        else
                                        {
                                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v13);
                                            if ((::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v18, &v56), v149 = v18, v149))
                                                continue;
                                        }
                                    }
                                    ::0x50d730::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v9);
                                } while ((::0x50cf60::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v18, &v56), v149 = v18, v149));
                            }
                            ::0x50d220::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v56);
                            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v29);
LABEL_50f380:
                            a0->field_0 = 13;
                            core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&v62);
                            goto LABEL_50f292;
                        }
                    }
LABEL_50f285:
                    core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&v62);
                }
LABEL_50f292:
                v99 = &v54;
            }
        }
        ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(v99);
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
            std::path::Path::join::h58957b2d6fcd4dce(&v13, a4, a5, v91, v89);
            v18 = 1;
            *((int128_t *)&v19) = *((int128_t *)&v14);
            v21 = 1;
            v56 = &v62;
            v57 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v58 = &v18;
            v59 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v33 = &g_5b6340;
            v35 = 2;
            v38 = 0;
            v36 = &v56;
            v37 = 2;
            ::0x50d7f0::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v9, &v33);
            ::0x50d3f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v13);
            a0->field_18 = *((long long *)&v11);
            *((int128_t *)&a0->field_8) = *((int128_t *)&v9);
            a0->field_0 = 4;
            return a0;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
}
