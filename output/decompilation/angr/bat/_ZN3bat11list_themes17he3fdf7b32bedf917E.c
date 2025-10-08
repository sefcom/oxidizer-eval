long long bat::list_themes(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x438], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x438]
    unsigned long long v2;  // [bp-0x438]
    void* v3;  // [bp-0x430], Other Possible Types: unsigned long long
    int v4;  // [bp-0x429]
    int v5;  // [bp-0x428], Other Possible Types: char *, unsigned long long
    int v6;  // [bp-0x420], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x420]
    int v8;  // [bp-0x418], Other Possible Types: void*
    int v9;  // [bp-0x409]
    char v10;  // [bp-0x408]
    void* v11;  // [bp-0x407]
    unsigned long long v12;  // [bp-0x401]
    unsigned long long v13;  // [bp-0x3ff]
    int v14;  // [bp-0x3e8], Other Possible Types: char
    int v15;  // [bp-0x3d8]
    unsigned long long v16;  // [bp-0x3d0]
    int v17;  // [bp-0x3c8], Other Possible Types: char
    int v18;  // [bp-0x3b8]
    unsigned long long v19;  // [bp-0x3b0]
    char v20;  // [bp-0x3a8]
    unsigned long long v21;  // [sp-0x348]
    char *v22;  // [bp-0x348]
    char *v23;  // [bp-0x340], Other Possible Types: unsigned long long
    char *v24;  // [bp-0x338]
    unsigned long long v25;  // [bp-0x330]
    void* v26;  // [bp-0x328]
    unsigned long v27;  // [bp-0x318]
    unsigned long v28;  // [bp-0x310]
    char v29;  // [bp-0x308]
    unsigned long long v30;  // [bp-0x2f8]
    unsigned long long v31;  // [bp-0x2e0]
    unsigned long long v32;  // [bp-0x2d8]
    unsigned long long v33;  // [bp-0x2d0]
    unsigned long long v34;  // [bp-0x2c8]
    char *v35;  // [bp-0x2c0]
    unsigned long long v36;  // [bp-0x2b8]
    char *v37;  // [bp-0x2b0]
    unsigned long long v38;  // [bp-0x2a8]
    unsigned long long v39;  // [bp-0x2a0]
    void* v40;  // [bp-0x298]
    unsigned long long v41;  // [bp-0x290]
    unsigned long long v42;  // [bp-0x288]
    unsigned long long v43;  // [bp-0x280]
    void* v44;  // [bp-0x278]
    unsigned long long v45;  // [bp-0x270]
    unsigned long long v46;  // [bp-0x268]
    unsigned long long v47;  // [bp-0x260]
    int v48;  // [bp-0x258]
    int v49;  // [bp-0x248], Other Possible Types: char
    int v50;  // [bp-0x238], Other Possible Types: char
    char v51;  // [bp-0x228]
    char v52;  // [bp-0x218]
    char v53;  // [bp-0x208]
    unsigned long long v54;  // [bp-0x1f8]
    unsigned long long v55;  // [bp-0x1f0]
    int v56;  // [bp-0x1e8]
    char v57;  // [bp-0x1d8]
    char v58;  // [bp-0x1c8]
    char v59;  // [bp-0x1b8]
    int v60;  // [bp-0x1a8]
    int v61;  // [bp-0x198]
    int v62;  // [bp-0x188]
    unsigned long long v63;  // [bp-0x180]
    int v64;  // [bp-0x178]
    unsigned long long v65;  // [bp-0x168]
    char v66;  // [bp-0x160], Other Possible Types: unsigned long long
    char v67;  // [bp-0x158]
    int v68;  // [bp-0x150]
    char v69;  // [bp-0x148]
    unsigned long long v70;  // [bp-0x140]
    char v71;  // [bp-0x138]
    int v72;  // [bp-0x128]
    char v73;  // [bp-0x118]
    int v74;  // [bp-0x108]
    int v75;  // [bp-0xf8]
    int v76;  // [bp-0xe8]
    char v77;  // [bp-0xd8]
    int v78;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v79;  // [bp-0x98]
    char v80;  // [bp-0x90]
    char v81;  // [bp-0x80]
    unsigned long long v82;  // [bp-0x70]
    unsigned long long v83;  // [bp-0x68]
    unsigned long long v84;  // [bp-0x50]
    char v85;  // [bp-0x48]
    char v86;  // [bp-0x3d]
    int v87;  // [bp-0x3c]
    char v88;  // [bp-0x37]
    char v89;  // [bp-0x36]
    int v91;  // ymm0
    uint256_t v92;  // ymm0
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // xmm1
    int v96;  // xmm2
    int v97;  // xmm0
    int v98;  // xmm0
    int v99;  // xmm0
    int v100;  // xmm0
    int v101;  // xmm0
    char v102;  // al
    char v103;  // al
    uint256_t v104;  // ymm0
    char v105;  // al
    unsigned long long v106;  // rax
    unsigned long long v107;  // rax
    unsigned long long v109[3];  // rax
    unsigned long long v110;  // rcx
    unsigned long long v111;  // rdx
    unsigned long v112;  // rax
    uint256_t v113;  // ymm0
    char v114;  // al
    int v115;  // xmm0
    int v116;  // xmm0
    void* v117;  // rax
    void* v118;  // r15
    char v119;  // al
    int v120;  // xmm0
    int v121;  // xmm1
    int v122;  // xmm2
    int v123;  // xmm0
    int v124;  // xmm1
    int v125;  // xmm2
    int v126;  // xmm0
    int v127;  // xmm1
    int v128;  // xmm2
    int v129;  // xmm0
    int v130;  // xmm2
    int v131;  // xmm3
    int v132;  // xmm0
    int v133;  // xmm1
    int v134;  // xmm2
    int v135;  // xmm0
    int v136;  // xmm1

    bat::assets::assets_from_cache_or_binary(&v66, a1->field_127, a4, a5);
    v92 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v67);
    memcpy(&v14, &v67, 16);
    v93 = *((int128_t *)&v69);
    v15 = v93;
    memcpy(&v17, &v71, 16);
    v18 = v72;
    memcpy(&v20, &v73, 16);
    if (v66 == 9223372036854775809)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v20);
        v94 = *((int128_t *)&v14);
        v95 = (int128_t)v15;
        v96 = *((int128_t *)&v17);
        *((int128_t *)&a0[48]) = (int128_t)v18;
        a0[32] = v96;
        a0[16] = v95;
        *(a0) = v94;
        return v66;
    }
    v65 = *((long long *)&v77);
    v97 = v74;
    v64 = v76;
    v62 = v75;
    v61 = v97;
    v98 = *((int128_t *)&v14);
    v56 = v98;
    memcpy(&v57, &v15, 16);
    memcpy(&v58, &v17, 16);
    memcpy(&v59, &v18, 16);
    v99 = *((int128_t *)&v20);
    v60 = v99;
    v55 = v66;
    v66.clone(a1);
    v14.default();
    v100 = *((int128_t *)&v14);
    memcpy(&v50, &v17, 16);
    memcpy(&v49, &v15, 16);
    v48 = v100;
    v48.insert(11);
    v82 = "Rustdumb";
    v83 = 4;
    v17 = v50;
    v15 = v49;
    v14 = v48;
    core::ptr::drop_in_place<bat::style::StyleComponents>(*((long long *)&v78), v79);
    v101 = (int128_t)v14;
    memcpy(&v81, &v17, 16);
    memcpy(&v80, &v15, 16);
    v78 = v101;
    v14.from_mode(v89, v88, v84, *((long long *)&v85));
    v102 = (char)v14;
    if (v102 == 13)
    {
        v12 = v19;
        memcpy(&v51, &(char)v14, 16);
        memcpy(&v52, &v15, 16);
        memcpy(&v53, &v17, 16);
        v54 = v19;
        v14.handle(&v51);
        v103 = (char)v14;
        if (v103 == 13)
        {
            v104 = ...;
            memcpy(&v29, &v14, 16);
            v30 = v16;
            v105 = bat::theme::color_scheme(0);
            *((int *)&v32) = ((v105 & 1) ? "Monokai Extended Lightthemes (default dark) (default)" : "Monokai Extended");
            *((int *)&v31) = ((v105 & 1) ? 22 : 16);
            v106 = (long long)v62;
            v107 = v106;
            if (v107)
                v107 = (long long)v64;
            v39 = v106;
            v40 = 0;
            v41 = v106;
            v42 = v63;
            v43 = v39;
            v44 = 0;
            v45 = v106;
            v46 = v42;
            v47 = v107;
            do
            {
                v109 = v39.next();
                if (v109)
                {
                    v27 = v109[1];
                    v28 = v109[2];
                    v110 = 10;
                    v111 = " (default)";
                    if (!(char)v32.equal(v31, v27, v28))
                    {
                        v110 = 15;
                        v111 = " (default dark) (default)";
                        if (!(char)"Monokai Extended".equal(16, v27, v28))
                        {
                            v112 = (unsigned int)"Monokai Extended Lightthemes (default dark) (default)".equal(22, v27, v28);
                            v110 = (unsigned int)v112 * 16;
                            v111 = ((v112 & 255) ? " (default light)the subcommand '" : 1);
                        }
                    }
                    v33 = v111;
                    v34 = v110;
                    if ((char)v87)
                    {
                        v22.to_vec(v27, v28);
                        v5 = v24;
                        v113 = v104 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v22);
                        memcpy(&v2, &v22, 16);
                        v10 = 1;
                        v11 = 0;
                        v13 = 90194313237;
                        v7 = 9223372036854775810;
                        v35 = &v2;
                        v36 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
                        v37 = &v33;
                        v38 = <&T as core::fmt::Display>::fmt;
                        v21 = &g_ac8848;
                        v23 = 3;
                        v26 = 0;
                        v24 = &v35;
                        v25 = 2;
                        v14.write_fmt(&v29, &v21);
                        v114 = (char)v14;
                        if (v114 == 13)
                        {
                            core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v2);
                            v14.to_vec(v27, v28);
                            v5 = (long long)v15;
                            v115 = (int128_t)v14;
                            v0 = v115;
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v68);
                            v70 = v5;
                            v116 = (int128_t)v0;
                            v68 = v116;
                            v22 = &v66;
                            v23 = &v55;
                            v117 = 8.alloc_impl(160);
                            if (!v117)
                                alloc::alloc::handle_alloc_error(8, 160); /* do not return */
                            v118 = v117;
                            bat::theme_preview_file(&v14);
                            ::libc.so.0::memcpy(v118, &v14, 160);
                            v1 = 1;
                            v3 = v118;
                            v5 = 1;
                            v14.run(&v22, &v1, &v29);
                            if ((char)v14 != 13)
                                core::ptr::drop_in_place<core::result::Result<bat::assets::SyntaxReferenceInSet,bat::error::Error>>(&v14);
                            v2 = &g_ac8878;
                            v3 = 1;
                            v5 = 8;
                            v104 = ((v113 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            *((uint128_t *)&v6) = 0;
                            v14.write_fmt(&v29, &v2);
                        }
                        else
                        {
                            *((int128_t *)&a0[64]) = *((int128_t *)&v20);
                            v126 = (int128_t)(&v14)[1];
                            v127 = (int128_t)(&v15)[1];
                            v128 = (int128_t)(&v17)[1];
                            *((int128_t *)&a0[49]) = (int128_t)(&v18)[1];
                            a0[33] = v128;
                            a0[17] = v127;
                            a0[1] = v126;
                            *((char *)a0) = v114;
                            core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v2);
                            goto LABEL_7af08d;
                        }
                    }
                    else
                    {
                        if (v86)
                        {
                            v22 = &v27;
                            v23 = <&T as core::fmt::Display>::fmt;
                            v2 = &g_ac8198;
                            v3 = 2;
                            v8 = 0;
                            v5 = &v22;
                            v6 = 1;
                            v14.write_fmt(&v29, &v2);
                        }
                        else
                        {
                            v22 = &v27;
                            v23 = <&T as core::fmt::Display>::fmt;
                            v24 = &v33;
                            v25 = <&T as core::fmt::Display>::fmt;
                            v2 = &g_ac8888;
                            v3 = 3;
                            v8 = 0;
                            v5 = &v22;
                            v6 = 2;
                            v14.write_fmt(&v29, &v2);
                        }
                    }
                }
                else if ((char)v87)
                {
                    v39.join(a2, a3, "themes (default dark) (default)", 6);
                    v22.from_utf8_lossy(0, v41);
                    v35 = &v22;
                    v36 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v0 = &g_ac88b8;
                    v3 = 2;
                    v8 = 0;
                    v5 = &v35;
                    v6 = 1;
                    v14.write_fmt(&v29, &v0);
                    v119 = (char)v14;
                    if (v119 == 13)
                    {
                        core::ptr::drop_in_place<regex::error::Error>(&v22);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v39);
                        goto LABEL_7af039;
                    }
                    else
                    {
                        *((int128_t *)&a0[64]) = *((int128_t *)&v20);
                        v120 = (int128_t)(&v14)[1];
                        v121 = (int128_t)(&v15)[1];
                        v122 = (int128_t)(&v17)[1];
                        *((int128_t *)&a0[49]) = (int128_t)(&v18)[1];
                        a0[33] = v122;
                        a0[17] = v121;
                        a0[1] = v120;
                        *((char *)a0) = v119;
                        core::ptr::drop_in_place<regex::error::Error>(&v22);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v39);
                        goto LABEL_7af08d;
                    }
                }
                else
                {
LABEL_7af039:
                    *((char *)a0) = 13;
                    core::ptr::drop_in_place<bat::output::OutputType>(&v51);
                    core::ptr::drop_in_place<bat::config::Config>(&v66);
                    return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v55);
                }
                v103 = (char)v14;
            } while (v103 == 13);
            *((int128_t *)&a0[64]) = *((int128_t *)&v20);
            v123 = (int128_t)(&v14)[1];
            v124 = (int128_t)(&v15)[1];
            v125 = (int128_t)(&v17)[1];
            *((int128_t *)&a0[49]) = (int128_t)(&v18)[1];
            a0[33] = v125;
            a0[17] = v124;
        }
        else
        {
            v129 = (int128_t)(&v14)[1];
            v130 = (int128_t)v17;
            v131 = (int128_t)v18;
            *((int128_t *)&v4) = (int128_t)v15;
            v0 = v129;
            *((int128_t *)&a0[64]) = *((int128_t *)&v20);
            a0[48] = v131;
            a0[32] = v130;
            *((int128_t *)&a0[16]) = (int128_t)(&v0)[15];
            v123 = (int128_t)v0;
        }
        a0[1] = v123;
        *((char *)a0) = v103;
LABEL_7af08d:
        core::ptr::drop_in_place<bat::output::OutputType>(&v51);
    }
    else
    {
        v132 = (int128_t)(&v14)[1];
        v133 = (int128_t)(&v15)[1];
        v134 = (int128_t)(&v17)[1];
        *((int128_t *)&v9) = (int128_t)v18;
        v8 = v134;
        v5 = v133;
        v0 = v132;
        *((int128_t *)&a0[64]) = *((int128_t *)&v20);
        *((int128_t *)&a0[48]) = (int128_t)(&v8)[15];
        v135 = (int128_t)v0;
        v136 = (int128_t)v5;
        *((int128_t *)&a0[33]) = (int128_t)v8;
        a0[17] = v136;
        a0[1] = v135;
        *((char *)a0) = v102;
    }
    core::ptr::drop_in_place<bat::config::Config>(&v66);
    return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v55);
}
