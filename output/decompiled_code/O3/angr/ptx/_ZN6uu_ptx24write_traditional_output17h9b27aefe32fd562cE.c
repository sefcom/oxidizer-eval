long long uu_ptx::write_traditional_output::h9b27aefe32fd562c(struct_0 *a0, struct_6 *a1, unsigned long long a2[3], char *a3, unsigned long long a4)
{
    struct_0 *v0;  // [sp-0x328]
    char v1;  // [sp-0x312]
    char v2;  // [sp-0x311]
    char *v3;  // [sp-0x310], Other Possible Types: unsigned long long
    char v4;  // [sp-0x301]
    void* v5;  // [sp-0x300], Other Possible Types: char *
    int v6;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    void* v7;  // [sp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v8;  // [bp-0x2e0], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [sp-0x2df]
    char v10;  // [sp-0x2dd]
    char v11;  // [bp-0x2dc], Other Possible Types: unsigned short
    struct struct_0 **v12;  // [sp-0x2d8], Other Possible Types: void*, unsigned long long
    unsigned long v13;  // [sp-0x2d0], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x2c8], Other Possible Types: unsigned long long
    unsigned long v15;  // [sp-0x2c0]
    unsigned long long v16;  // [sp-0x2b8]
    unsigned long long v17;  // [sp-0x2b0]
    unsigned long v18;  // [sp-0x2a8]
    unsigned long long v19;  // [sp-0x2a0]
    char v20;  // [bp-0x298]
    char v21;  // [bp-0x290]
    unsigned long long v22;  // [sp-0x288]
    unsigned long long v23;  // [sp-0x280]
    unsigned long long v24;  // [sp-0x278]
    unsigned long long v25;  // [sp-0x270]
    unsigned long long v26;  // [sp-0x268]
    unsigned long long v27;  // [sp-0x260]
    unsigned long long v28;  // [sp-0x258]
    unsigned long long v29;  // [sp-0x250]
    void* v30;  // [sp-0x240], Other Possible Types: unsigned long
    unsigned long long v31;  // [sp-0x238]
    void* v32;  // [sp-0x230]
    int v33;  // [bp-0x228], Other Possible Types: unsigned long, unsigned long long
    void* v34;  // [sp-0x210], Other Possible Types: struct_0 *, unsigned long long
    unsigned long long v35;  // [sp-0x208]
    unsigned long long v36;  // [sp-0x200]
    char v37;  // [bp-0x1f8], Other Possible Types: unsigned long long
    void* v38;  // [sp-0x1f0]
    unsigned long long v39;  // [sp-0x1e0]
    unsigned long v40;  // [sp-0x1d8], Other Possible Types: unsigned long long
    void* v41;  // [sp-0x1d0], Other Possible Types: unsigned long
    void* v42;  // [sp-0x1c8], Other Possible Types: unsigned long long
    void* v43;  // [sp-0x1c0]
    unsigned long v44;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v45;  // [sp-0x1b0]
    unsigned long long v46;  // [sp-0x1a8]
    unsigned long long v47;  // [sp-0x1a0]
    unsigned long long v48;  // [sp-0x198]
    unsigned long v49;  // [sp-0x190], Other Possible Types: unsigned long long
    char v50;  // [bp-0x188]
    char v51;  // [bp-0x178]
    char v52;  // [bp-0x170]
    char v53;  // [bp-0x160]
    char v54;  // [bp-0x158]
    char v55;  // [bp-0x148]
    char v56;  // [bp-0x140]
    unsigned int v57;  // [sp-0x12c]
    int v58;  // [sp-0x128]
    unsigned long long v59;  // [sp-0x118]
    unsigned long long v60;  // [sp-0x108]
    unsigned long long v61;  // [sp-0x100]
    unsigned long long v62;  // [sp-0xf8]
    uint128_t *v63;  // [sp-0xf0]
    unsigned long long v64;  // [sp-0xe8]
    unsigned long long v65;  // [sp-0xe0]
    int v66;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    char v67;  // [bp-0xd4]
    void* v68;  // [sp-0xd0], Other Possible Types: unsigned long
    unsigned long long v69;  // [sp-0xc8]
    unsigned long long v70;  // [sp-0xc0]
    unsigned long long v71;  // [sp-0xb8]
    void* v72;  // [sp-0xb0]
    unsigned long long v73;  // [sp-0xa8]
    unsigned long long v74;  // [sp-0xa0]
    unsigned long long v75;  // [sp-0x98]
    unsigned long long v76;  // [sp-0x90]
    int v77;  // [sp-0x88]
    int v78;  // [sp-0x78]
    unsigned long long v79;  // [sp-0x60]
    unsigned long long v80;  // [sp-0x58]
    void* v81;  // [sp-0x50]
    char v82;  // [sp-0x48]
    unsigned int *v83;  // [sp-0x40]
    unsigned long long v84;  // [sp-0x38]
    unsigned int *v87;  // rax
    struct_5 *v88;  // rax
    unsigned long long v90;  // r13
    struct_0 *v91;  // 4096
    int v92;  // xmm0
    struct_0 *v94;  // rbp
    unsigned long long v95;  // rax
    int v96;  // xmm0
    int v97;  // ymm0
    int v98;  // ymm0
    unsigned long long v99;  // rax
    unsigned long long v101;  // rax
    struct_1 *v103;  // rbx
    uint128_t *v104;  // rax
    int v105;  // xmm0
    int v106;  // xmm0
    int v107;  // xmm0
    int v108;  // xmm0
    int v109;  // ymm0
    void* v110;  // rax
    uint128_t *v111;  // r14
    int v112;  // xmm0
    int v114;  // ymm0
    unsigned long long v115;  // rbp
    unsigned long v116;  // r15
    unsigned long long v117;  // rbp
    unsigned long long v119;  // r13
    void* v120;  // r12
    unsigned long long v121;  // rax
    int v123;  // xmm0
    unsigned long long v125;  // rax
    unsigned long long v126;  // rbp
    uint128_t *v127;  // rax
    struct_3 *v128;  // r13
    unsigned long long v129;  // rax
    unsigned long long v130;  // r14
    unsigned long long v132;  // rcx
    unsigned long long v133;  // r14
    unsigned long long v134;  // r15
    struct_0 *v135;  // 4096
    unsigned long long v136;  // rdx
    unsigned long long v137;  // rdx
    unsigned long long v138;  // rdx
    unsigned long v139;  // r12
    unsigned long long v140;  // rbp
    struct_0 *v143;  // rdx
    struct_4 *v144;  // rax
    unsigned int v145;  // ecx
    unsigned long long v146;  // rcx
    unsigned long long v147;  // r15
    unsigned long long v148;  // r14
    char *v149;  // rbp
    char *v150;  // r12
    unsigned long long v151;  // rcx
    unsigned long long v152;  // r15
    unsigned long long v153;  // r14
    char *v154;  // rbp
    char *v155;  // r12
    char *v156;  // rcx
    char *v157;  // rcx
    unsigned long long v158;  // r15
    unsigned long long v160;  // r15
    char *v164;  // rax
    char *v165;  // rax
    char *v166;  // rbp
    char *v167;  // rbp
    char *v168;  // rdx
    char *v169;  // rdx
    char *v175;  // rbx
    unsigned long v176;  // rbx
    char *v180;  // rbx
    unsigned long v181;  // rbx
    unsigned long long v186;  // r9
    unsigned long long v187;  // r9
    unsigned long long v188;  // rsi
    unsigned long long v190;  // rsi
    unsigned long long v192;  // rdx
    int v193;  // xmm0
    unsigned long long v194;  // rax
    unsigned long long v195;  // rsi
    unsigned long long v196;  // rcx
    unsigned long long v197;  // r8
    unsigned long long v198;  // r9
    int v199;  // xmm0
    unsigned long long v200;  // rsi
    unsigned long long v201;  // rcx
    unsigned long long v202;  // r8
    unsigned long long v203;  // r9

    if (a4 != 1 || *(a3) != 45)
    {
        v7 = 0x1b600000000;
        v8 = 0;
        v11 = 0;
        v9 = 1;
        v11 = 1;
        v10 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v66, &v7, a3, a4);
        if (*((int *)&v66))
        {
            v7 = 0;
            v8 = 1;
            v12 = 0;
            v13 = v68;
            v88 = __rust_alloc(32, 8);
            if (v88)
            {
                v92 = *((int128_t *)&v7);
                v88->field_10 = *((int128_t *)&v12);
                *((void*)&v88->field_0) = v92;
                return v88;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v87 = __rust_alloc(4, 4);
        if (!v87)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v87) = *((int *)&v67);
        v90 = &g_67b9d8;
    }
    else
    {
        v87 = __rust_alloc(8, 8);
        if (!v87)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *((long long *)&v87) = std::io::stdio::stdout::h077da66234850927();
        v90 = &g_67ba28;
    }
    v94 = v91;
    v95 = __rust_alloc(0x2000, 1);
    if (!v95)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v79 = 0x2000;
    v80 = v95;
    v81 = 0;
    v82 = 0;
    v83 = v87;
    v84 = v90;
    regex::regex::string::Regex::new::hbbaac77ef03d753b(&v7, v94->field_38, v94->field_40);
    if (!v7)
    {
        v69 = v13;
        *((int128_t *)&v66) = *((int128_t *)&v8);
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v96 = *((int128_t *)&v7);
    v98 = v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
    *((int128_t *)&v78) = *((int128_t *)&v12);
    v77 = v96;
    v99 = a2[0];
    v66 = -0x100 | v99;
    v68 = 0;
    v69 = v99;
    v70 = a2[1];
    v71 = v66;
    v72 = 0;
    v73 = v99;
    v74 = v70;
    v75 = v101;
    if (a1->field_18)
    {
        v76 = a1 + 1;
        v64 = a1->field_8;
        v63 = &a1->field_0->field_0;
        v65 = v63 + 5;
        v1 = v94->field_5a;
        v4 = v94->field_59;
        v2 = v1 | v4;
        v57 = v94->field_5d;
        v5 = 0;
        v61 = &g_67b8e0;
        v29 = &g_67b8c8;
        v62 = &g_67bad8;
        v60 = &g_67b790;
        v28 = &g_67b778;
        while (true)
        {
LABEL_53bb00:
            v103 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha1ed3b3b6281f80d(&v66);
            if (!v103)
                break;
            v104 = core::hash::BuildHasher::hash_one::hfe371896cd9d17d0(v76, &v103->padding_0[24]);
            v105 = v104 >> 57;
            v106 = InterleaveLOV(v105, v105);
            v107 = (unsigned long long)(v106 >> 64) CONCAT (unsigned short)v106 CONCAT (unsigned short)v106 CONCAT (unsigned short)v106 CONCAT (unsigned short)v106;
            v108 = (unsigned int)v107 CONCAT (unsigned int)v107 CONCAT (unsigned int)v107 CONCAT (unsigned int)v107;
            v109 = v98 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
            v6 = v108;
            v110 = 0;
            while (true)
            {
                v3 = v110;
                v111 = v104 & v64;
                v112 = *((int128_t *)(v63 + v111));
                v33 = v112;
                v114 = v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v112, (int128_t)v6);
                v115 = UnaryOp GetMSBs;
                if ((unsigned int)v115)
                {
                    v116 = v103->field_28;
                    do
                    {
                        v117 = v115;
                        v119 = -((!(v117 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + (char *)v111 & v64) * 80;
                        if (v116 == *((long long *)(v65 + v119 + 16)) && (v120 = v103->field_20, !bcmp(v120, *((long long *)(v65 + v119 + 8)), v116)))
                        {
                            v126 = v103->field_38;
                            v127 = v63;
                            if (v126 >= *((long long *)(-40 + (char *)v127 + v119)))
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v128 = v119 + (char *)v127;
                            v129 = *((long long *)&v128[1].padding_-28[0]);
                            v130 = 3 * v126;
                            if (v4)
                            {
                                v33 = v129;
                                v34 = 0;
                                v35 = v120;
                                v36 = v116;
                                v37 = 0;
                                v49 = v126 + 1;
                                v44 = &v34;
                                v45 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                                v46 = &v49;
                                v47 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                                v7 = &g_67b5a0;
                                v8 = 2;
                                v14 = 0;
                                v12 = &v44;
                                v13 = 2;
                                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v41, &v7);
                                v42 = v42;
                                v48 = v48;
                                goto LABEL_53be92;
                            }
                            if (!v1)
                            {
                                v41 = 0;
                                v42 = 1;
                                v43 = 0;
                                goto LABEL_53be9a;
                            }
                            v132 = *((long long *)(v129 + v130 * 8 + 8));
                            v3 = v130;
                            v33 = v129;
                            v133 = v132;
                            v134 = *((long long *)(v129 + v130 * 8 + 16));
                            regex::regex::string::Regex::find_at::h3b0262d10b90d061(&v7, (long long)v77, (long long)(&v77)[8], v133, *((long long *)(v129 + v130 * 8 + 16)));
                            v136 = v7;
                            if (v136)
                            {
                                v137 = v12;
                                v136 = v13;
                            }
                            v138 = v137;
                            if (v136 < v138)
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                            if (v138)
                            {
                                if (v138 >= v134)
                                {
                                    if (v138 != v134)
                                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                }
                                else
                                {
                                    if (*((char *)(v133 + v138)) <= 191)
                                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                }
                            }
                            if (v136)
                            {
                                if (v136 >= v134)
                                {
                                    if (v136 != v134)
                                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                }
                                else
                                {
                                    if (*((char *)(v133 + v136)) <= 191)
                                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                }
                            }
                            v6 = v133;
                            v139 = v136 - v138;
                            if (v136 == v138)
                            {
                                v140 = 1;
                            }
                            else
                            {
                                if ((char)amd64g_calculate_condition(8, 8, v136, v138, 0))
                                {
LABEL_53cd81:
                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                }
                                v140 = __rust_alloc(v139, 1);
                                if (!v140)
                                {
                                    v48 = v139;
                                    goto LABEL_53cd81;
                                }
                            }
                            memcpy(v42, v6 + v138, v139);
                            v41 = v139;
                            v42 = v140;
                            v43 = v139;
                            v42 = v42;
                            v48 = v42;
                            v130 = v3;
LABEL_53be92:
                            v42 = v42;
                            v129 = v33;
LABEL_53be9a:
                            v143 = v135;
                            v144 = v129 + v130 * 8;
                            v145 = v57;
                            v48 = v48;
                            if (v145 != 1)
                            {
                                if (v145 != 2)
                                {
                                    v88 = __rust_alloc(24, 8);
                                    if (!v88)
                                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                    v88->field_0 = 0;
LABEL_53caeb:
                                    if (v41)
                                        __rust_dealloc(v42);
                                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h553259d1d5e70ac5(&v77);
                                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h168b2864b7c5ffa5(&v79, v200, v192, v201, v202, v203);
                                    return v88;
                                }
                                if (v126 >= *((long long *)&v128->padding_-28[8]))
                                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                v151 = v128->field_-18;
                                v3 = &v144->field_8->field_0;
                                v6 = v144->field_10;
                                v152 = *((long long *)(v151 + v130 * 8 + 8));
                                v153 = *((long long *)(v151 + v130 * 8 + 16));
                                v33 = v42;
                                v40 = v43;
                                v154 = v103->field_40;
                                v155 = v103->field_48;
                                v30 = 0;
                                v31 = 1;
                                v32 = 0;
                                v34 = v143;
                                v35 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v7 = &g_67b728;
                                v8 = 2;
                                v14 = 0;
                                v12 = &v34;
                                v13 = 1;
                                if ((char)core::fmt::write::h1b95545231c46caf(&v30, &g_67b300, &v7))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                v157 = v154;
                                if (!v1)
                                {
                                    if (v157 > v153)
                                    {
                                        v60 = &g_67b760;
                                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                                    }
                                }
                                else
                                {
                                    if (v157)
                                    {
                                        if (v157 >= v6)
                                        {
                                            if (v157 != v6)
                                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                        else
                                        {
                                            if (*((char *)(v3 + v157)) <= 191)
                                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                    core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h8de6a627e6eabace(core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hc35b2914e6c52107(v3, v157, v33, v40), v192);
                                    v165 = &v154[-1 * v192];
                                    v169 = v167;
                                    if (v169 > v153)
                                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                                }
                                v180 = v155;
                                v181 = v180 - v5;
                                if (v180 < v5)
                                {
                                    v5 = v157;
                                    v28 = &g_67b7a8;
                                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                }
                                if (v5)
                                {
                                    if (v154 >= v6)
                                    {
                                        if (v154 != v6)
                                        {
                                            vvar_2291{stack -768} = v154;
                                            vvar_2293{stack -600} = &g_67b7a8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        if (*((char *)(v3 + v154)) <= 191)
                                        {
                                            vvar_2296{stack -768} = v154;
                                            vvar_2298{stack -600} = &g_67b7a8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                }
                                if (v155)
                                {
                                    if (v155 >= v6)
                                    {
                                        if (v155 != v6)
                                        {
                                            v5 = v154;
                                            vvar_2273{stack -600} = &g_67b7a8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        if (*((char *)(v3 + v155)) <= 191)
                                        {
                                            vvar_2301{stack -768} = v154;
                                            vvar_2303{stack -600} = &g_67b7a8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                }
                                v187 = v153;
                                if (v187 < v155)
                                    core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                                v0 = a0;
                                uu_ptx::get_output_chunks::h48c7e9be3157e40e(&v7, v160, v169 - v165, v181, v152 + v155 * 4, v187 - v155);
                                v24 = v7;
                                v190 = v8;
                                v23 = v13;
                                v6 = v14;
                                v22 = v16;
                                v27 = v17;
                                v25 = v19;
                                v26 = *((long long *)&v20);
                                v39 = v190;
                                uu_ptx::format_tex_field::h2ceb27aed3046f70(&v51, v39, v12);
                                uu_ptx::format_tex_field::h2ceb27aed3046f70(&v53, v6, v15);
                                uu_ptx::format_tex_field::h2ceb27aed3046f70(&v55, v3 + v154, v181);
                                uu_ptx::format_tex_field::h2ceb27aed3046f70(&v49, v27, v18);
                                uu_ptx::format_tex_field::h2ceb27aed3046f70(&v44, v26, *((long long *)&v21));
                                v7 = &v51;
                                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v12 = &v53;
                                v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v14 = &v55;
                                v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v16 = &v49;
                                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v18 = &v44;
                                v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v34 = &g_67b7d8;
                                v35 = 6;
                                v38 = 0;
                                v36 = &v7;
                                v37 = 5;
                                if ((char)core::fmt::write::h1b95545231c46caf(&v30, &g_67b300, &v34))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                if (v44)
                                    __rust_dealloc(v45);
                                if (v49)
                                    __rust_dealloc(*((long long *)&v50));
                                if (*((long long *)&v55))
                                    __rust_dealloc(*((long long *)&v56));
                                if (*((long long *)&v53))
                                    __rust_dealloc(*((long long *)&v54));
                                if (*((long long *)&v51))
                                    __rust_dealloc(*((long long *)&v52));
                                if (!v2)
                                    goto LABEL_53c8ae;
                                uu_ptx::format_tex_field::h2ceb27aed3046f70(&v34, v33, v40);
                                v44 = &v34;
                                v45 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v7 = &g_67b850;
                                v8 = 2;
                                v14 = 0;
                                v12 = &v44;
                                v13 = 1;
                                if ((char)core::fmt::write::h1b95545231c46caf(&v30, &g_67b300, &v7))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            else
                            {
                                if (v126 >= *((long long *)&v128->padding_-28[8]))
                                {
                                    v62 = &g_67bac0;
                                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                }
                                v146 = v128->field_-18;
                                v3 = &v144->field_8->field_0;
                                v6 = v144->field_10;
                                v147 = *((long long *)(v146 + v130 * 8 + 8));
                                v148 = *((long long *)(v146 + v130 * 8 + 16));
                                v33 = v42;
                                v40 = v43;
                                v149 = v103->field_40;
                                v150 = v103->field_48;
                                v30 = 0;
                                v31 = 1;
                                v32 = 0;
                                v34 = v143;
                                v35 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v7 = &g_67b888;
                                v8 = 1;
                                v14 = 0;
                                v12 = &v34;
                                v13 = 1;
                                if ((char)core::fmt::write::h1b95545231c46caf(&v30, &g_67b300, &v7))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                v156 = v149;
                                if (!v1)
                                {
                                    if (v156 > v148)
                                    {
                                        v61 = &g_67b8b0;
                                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                                    }
                                }
                                else
                                {
                                    if (v156)
                                    {
                                        if (v156 >= v6)
                                        {
                                            if (v156 != v6)
                                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                        else
                                        {
                                            if (*((char *)(v3 + v156)) <= 191)
                                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                    core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h8de6a627e6eabace(core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hc35b2914e6c52107(v3, v156, v33, v40), v192);
                                    v164 = &v149[-1 * v192];
                                    v168 = v166;
                                    if (v168 > v148)
                                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                                }
                                v175 = v150;
                                v176 = v175 - v5;
                                if (v175 < v5)
                                {
                                    v5 = v156;
                                    v29 = &g_67b8f8;
                                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                }
                                if (v5)
                                {
                                    if (v149 >= v6)
                                    {
                                        if (v149 != v6)
                                        {
                                            vvar_2276{stack -768} = v149;
                                            vvar_2278{stack -592} = &g_67b8f8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        if (*((char *)(v3 + v149)) <= 191)
                                        {
                                            vvar_2281{stack -768} = v149;
                                            vvar_2283{stack -592} = &g_67b8f8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                }
                                if (v150)
                                {
                                    if (v150 >= v6)
                                    {
                                        if (v150 != v6)
                                        {
                                            v5 = v149;
                                            vvar_2270{stack -592} = &g_67b8f8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        if (*((char *)(v3 + v150)) <= 191)
                                        {
                                            vvar_2286{stack -768} = v149;
                                            vvar_2288{stack -592} = &g_67b8f8;
                                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                                        }
                                    }
                                }
                                v186 = v148;
                                if (v186 < v150)
                                    core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                                v0 = a0;
                                uu_ptx::get_output_chunks::h48c7e9be3157e40e(&v7, v158, v168 - v164, v176, v147 + v150 * 4, v186 - v150);
                                v24 = v7;
                                v188 = v8;
                                v23 = v13;
                                v6 = v14;
                                v22 = v16;
                                v27 = v17;
                                v25 = v19;
                                v26 = *((long long *)&v20);
                                v39 = v188;
                                uu_ptx::format_roff_field::ha022cfdf24e54258(&v51, v39, v12);
                                uu_ptx::format_roff_field::ha022cfdf24e54258(&v53, v6, v15);
                                uu_ptx::format_roff_field::ha022cfdf24e54258(&v55, v3 + v149, v176);
                                uu_ptx::format_roff_field::ha022cfdf24e54258(&v49, v27, v18);
                                uu_ptx::format_roff_field::ha022cfdf24e54258(&v44, v26, *((long long *)&v21));
                                v7 = &v51;
                                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v12 = &v53;
                                v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v14 = &v55;
                                v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v16 = &v49;
                                v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v18 = &v44;
                                v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v34 = &g_67b928;
                                v35 = 6;
                                v38 = 0;
                                v36 = &v7;
                                v37 = 5;
                                if ((char)core::fmt::write::h1b95545231c46caf(&v30, &g_67b300, &v34))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                                if (v44)
                                    __rust_dealloc(v45);
                                if (v49)
                                    __rust_dealloc(*((long long *)&v50));
                                if (*((long long *)&v55))
                                    __rust_dealloc(*((long long *)&v56));
                                if (*((long long *)&v53))
                                    __rust_dealloc(*((long long *)&v54));
                                if (*((long long *)&v51))
                                    __rust_dealloc(*((long long *)&v52));
                                if (!v2)
                                    goto LABEL_53c8ae;
                                uu_ptx::format_roff_field::ha022cfdf24e54258(&v34, v33, v40);
                                v44 = &v34;
                                v45 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v7 = &g_67b9a0;
                                v8 = 2;
                                v14 = 0;
                                v12 = &v44;
                                v13 = 1;
                                if ((char)core::fmt::write::h1b95545231c46caf(&v30, &g_67b300, &v7))
                                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            if (v34)
                                __rust_dealloc(v35);
LABEL_53c8ae:
                            v59 = v32;
                            v193 = *((int128_t *)&v30);
                            v98 = v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v193;
                            v58 = v193;
                            if (v25)
                                __rust_dealloc(v26);
                            if (v22)
                                __rust_dealloc(v27);
                            if (v23)
                                __rust_dealloc(v6);
                            if (v24)
                                __rust_dealloc(v39);
                            v34 = &v58;
                            v35 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            v7 = &g_67baf0;
                            v8 = 2;
                            v14 = 0;
                            v12 = &v34;
                            v13 = 1;
                            v194 = std::io::Write::write_fmt::hbb5cce034a9c41d6(&v79, &v7);
                            if (!v194)
                            {
                                if ((long long)v58)
                                    __rust_dealloc((long long)(&v58)[8]);
                                if (v41)
                                {
                                    __rust_dealloc(v33);
                                    goto LABEL_53bb00;
                                }
                            }
                            else
                            {
                                v7 = 0;
                                v8 = 1;
                                v12 = 0;
                                v13 = v194;
                                v88 = __rust_alloc(32, 8);
                                if (!v88)
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                v199 = *((int128_t *)&v7);
                                v88->field_10 = *((int128_t *)&v12);
                                *((void*)&v88->field_0) = v199;
                                if ((long long)v58)
                                {
                                    __rust_dealloc((long long)(&v58)[8]);
                                    goto LABEL_53caeb;
                                }
                            }
                        }
                    } while ((v121 = v117 - 1 & 4294967295, ((unsigned short)v121 & (unsigned short)v117)));
                }
                v123 = (int128_t)v33;
                v109 = v114 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v123, 340282366920938463463374607431768211455);
                if (UnaryOp GetMSBs)
                    core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
                v125 = v3;
                v104 = 16 + (char *)v111 + v125;
                v110 = v125 + 16;
            }
        }
    }
    else if (_$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha1ed3b3b6281f80d(&v66))
    {
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    }
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h553259d1d5e70ac5(&v77);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h168b2864b7c5ffa5(&v79, v195, v192, v196, v197, v198);
    return 0;
}
