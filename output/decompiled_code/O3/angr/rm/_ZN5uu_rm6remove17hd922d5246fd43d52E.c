long long uu_rm::remove::hd922d5246fd43d52(struct_4 *a0, unsigned long a1, char a2[7], unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x2c6]
    char v1;  // [sp-0x2c5]
    char v2;  // [sp-0x2c4]
    char v3;  // [sp-0x2c3]
    char v4;  // [sp-0x2c2]
    char v5;  // [sp-0x2c1]
    char v6;  // [sp-0x2c0]
    char v7;  // [sp-0x2bf]
    char v8;  // [sp-0x2be]
    char v9;  // [sp-0x2bd]
    unsigned int v10;  // [sp-0x2bc]
    unsigned long long *v11;  // [sp-0x2b8]
    unsigned long long v12;  // [sp-0x2b0]
    unsigned long long *v13;  // [bp-0x2a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long *v14;  // [sp-0x2a0]
    struct_2 *v15;  // [sp-0x298]
    unsigned long long *v16;  // [bp-0x290], Other Possible Types: char
    void* v17;  // [sp-0x288]
    unsigned long long *v18;  // [sp-0x280], Other Possible Types: unsigned long long
    void* v19;  // [sp-0x278]
    unsigned long long v20;  // [sp-0x270]
    unsigned int v21;  // [sp-0x268]
    unsigned int v22;  // [sp-0x25c]
    unsigned int v23;  // [sp-0x258]
    unsigned int v24;  // [sp-0x254]
    void* v25;  // [sp-0x250]
    unsigned long long v26;  // [sp-0x248]
    unsigned long long *v27;  // [bp-0x240]
    unsigned long long v28;  // [sp-0x238]
    struct struct_3 **v29;  // [sp-0x230], Other Possible Types: unsigned long long
    char v30;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x220]
    unsigned long long v32;  // [sp-0x218]
    char v33;  // [bp-0x200]
    char v34;  // [bp-0x1fc]
    char v35;  // [bp-0x1f8]
    struct_2 *v36;  // [sp-0x1f0]
    unsigned long v37;  // [sp-0x1e8], Other Possible Types: unsigned long long
    char v38;  // [bp-0x1e0], Other Possible Types: unsigned long long
    struct struct_7 **v39;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x1d0]
    void* v41;  // [sp-0x1c8]
    unsigned int v42;  // [sp-0x1b4]
    unsigned long long *v43;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long *v44;  // [bp-0x1a8], Other Possible Types: char
    struct_2 *v45;  // [sp-0x1a0]
    char v46;  // [sp-0x198]
    void* v47;  // [sp-0x190]
    unsigned long long v48;  // [sp-0x188]
    void* v49;  // [sp-0x180]
    unsigned long long v50;  // [sp-0x178]
    struct_4 *v51;  // [sp-0x170]
    void* v52;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v53;  // [sp-0x160]
    void* v54;  // [sp-0x158], Other Possible Types: struct struct_7 **, char, unsigned long long
    unsigned long long v55;  // [sp-0x150]
    unsigned long long *v56;  // [bp-0x148], Other Possible Types: void*
    unsigned long long v57;  // [sp-0x138]
    int v58;  // [bp-0x130], Other Possible Types: unsigned long long *
    unsigned long long v59;  // [sp-0x120]
    void* v60;  // [sp-0x118]
    unsigned long long *v61;  // [sp-0x110]
    struct_2 *v62;  // [sp-0x100]
    unsigned long long *v63;  // [bp-0xf8], Other Possible Types: char
    unsigned long long *v64;  // [sp-0xe8]
    unsigned long long *v65;  // [sp-0xd8]
    unsigned long long *v66;  // [sp-0xc8]
    struct struct_3 **v68;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v69;  // [sp-0xa0]
    unsigned long long v70;  // [sp-0x98]
    unsigned long long v71;  // [sp-0x90]
    unsigned long long *v72;  // [sp-0x88]
    unsigned long long *v74;  // [sp-0x68]
    unsigned long long *v75;  // [sp-0x58]
    unsigned long long *v76;  // [sp-0x48]
    char v78;  // r8b
    struct struct_3 *v79[4];  // r13
    unsigned long long v80;  // r14
    char v81[7];  // 4096
    int v83;  // ymm0
    int v84;  // ymm1
    int v85;  // ymm2
    struct_2 *v86;  // rbx
    char v88;  // al
    unsigned long long v89;  // rsi
    unsigned long long *v90;  // xmm0
    struct_2 *v91;  // rdx
    unsigned long long v92;  // rax
    unsigned long long v93;  // rax
    unsigned long long v94;  // rcx
    unsigned long long v95;  // rsi
    char v96;  // al
    char v98;  // al
    unsigned long long *v101;  // r15
    unsigned long long v102;  // rax
    unsigned long long *v103;  // xmm0
    unsigned long long *v104;  // xmm1
    int v105;  // ymm1
    unsigned long long *v106;  // xmm2
    int v107;  // ymm2
    unsigned long long v108;  // rcx
    unsigned long long *v109;  // xmm0
    int v110;  // ymm0
    unsigned int v111;  // eax
    unsigned long long v112;  // rbx
    struct_2 *v113;  // rdx
    unsigned long long v114;  // rax
    unsigned long long *v115;  // xmm0
    int v116;  // ymm0
    unsigned long long *v117;  // xmm1
    unsigned long long *v118;  // xmm2
    unsigned long long v119;  // r14
    unsigned long long v120;  // r12
    unsigned long long *v121;  // xmm0
    unsigned long long v122;  // r13
    struct_5 *v123;  // r15
    unsigned long long *v125;  // xmm0
    unsigned long long *v126;  // xmm1
    unsigned long long *v127;  // xmm2
    char v128;  // al
    unsigned long long *v129;  // xmm0
    unsigned long long v130;  // rsi
    unsigned long long v131;  // rdx
    unsigned long long v132;  // rcx
    unsigned long long *v133;  // xmm0
    unsigned long long *v134;  // xmm1
    unsigned long long *v135;  // xmm2
    struct struct_3 *v136[5];  // r15
    char v137;  // cl
    void* v138;  // r13
    unsigned long long *v139;  // xmm0
    unsigned long long v151;  // rax
    struct_2 *v153;  // rsi
    unsigned long long v176;  // r8
    unsigned long long v177;  // r9
    unsigned long long v180;  // rsi
    void* v181;  // rbx
    unsigned long long v182;  // rsi
    unsigned long long v183;  // rbx
    void* v184;  // rcx
    unsigned long long v185;  // rax
    void* v186;  // rax
    unsigned long long *v187;  // xmm0
    unsigned long long *v188;  // xmm0
    unsigned long long v189;  // rcx
    unsigned long long v191;  // rax
    unsigned long long v192;  // rdi
    void* v194;  // rdx
    unsigned long long v195;  // rsi
    unsigned long long v196;  // rsi
    unsigned long long *v197;  // xmm0
    unsigned long long v198;  // rsi
    unsigned long long *v199;  // xmm0
    unsigned long long v232;  // rax

    if (!a1)
    {
        v22 = 0;
LABEL_489471:
        v232 = v22;
        return v232 | -0x100 | (char)v232 & 1;
    }
    v78 = a2[3];
    v1 = v78;
    v0 = a2[6];
    v9 = a2[5];
    v6 = !v9 & v0 != 2;
    v79 = &v30;
    v5 = a2[4];
    v2 = !vvar_2060;
    v8 = a2[0];
    v7 = !v8;
    v4 = !v78;
    v3 = vvar_2060 | !v78;
    v80 = &v52;
    v22 = 0;
    v50 = &a0[a1];
    while (true)
    {
        v51 = a0;
        v86 = a0->field_8;
        v11 = &a0->field_0->field_0;
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(v80, v11, v86);
        if (*((int *)&v52) == 2)
        {
            v37 = v53;
            if (!v8)
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                v90 = *((int128_t *)&g_4f3390);
                v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
                v13 = v90;
                v29 = &v13;
                v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                v52 = &g_4ee5f8;
                v53 = 2;
                v56 = 0;
                v54 = &v29;
                v55 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v89, v91);
                v13 = 1;
                v14 = v11;
                v15 = v86;
                v16 = 1;
                v29 = &v13;
                v30 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v52 = &g_4ee618;
                v53 = 2;
                v56 = 0;
                v54 = &v29;
                v55 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v180, v91);
            }
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v37);
            v88 = v7;
            goto LABEL_48807d;
        }
        if (((short)(int)v58 & 0xf000) != 0x4000)
        {
LABEL_48807d:
            continue;
        }
        v42 = v9;
        std::path::Path::components::h4f3217acf0fc8653(v80, v11, v86);
        v36 = v86;
        if (!((char)vvar_2079) && !((v92 = (unsigned long long)v54, v93 = v92 | -0x100 | (unsigned long long)((char)v92 - 5), (char)v92 - 5 >= 2)) || !((v93 = std::path::Path::parent::h65c9a340a6266f2d(v11, v86, v91, v94), !v93)))
        {
            if (!(!v1))
                goto LABEL_4882bf;
            v96 = v93 | -0x100 | 1;
LABEL_488292:
            if (!v5 || !v2)
            {
                if (v4)
                {
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    v187 = *((int128_t *)&g_4f3390);
                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v187;
                    v13 = v187;
                    v29 = &v13;
                    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v52 = &g_4ee5f8;
                    v53 = 2;
                    v56 = 0;
                    v54 = &v29;
                    v55 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v95, v91);
                    v13 = 1;
                    v14 = v11;
                    v15 = v36;
                    v16 = 1;
                    v29 = &v13;
                    v30 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v191 = &g_4ee6d0;
                }
                else
                {
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    v188 = *((int128_t *)&g_4f3390);
                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v188;
                    v13 = v188;
                    v29 = &v13;
                    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v52 = &g_4ee5f8;
                    v53 = 2;
                    v56 = 0;
                    v54 = &v29;
                    v55 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v95, v91);
                    v13 = 1;
                    v14 = v11;
                    v15 = v36;
                    v16 = 1;
                    v29 = &v13;
                    v30 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v191 = &g_4ee6f0;
                }
                v52 = v191;
                v53 = 2;
                v56 = 0;
                v54 = &v29;
                v55 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v195, v91);
                v98 = &v13 | -0x100 | 1;
                goto LABEL_48807f;
            }
            else
            {
                v111 = uu_rm::remove_dir::haa21060f8526e830(v11, v86, v81);
                v98 = v111 | -0x100 | (char)v111 & 1;
            }
            continue;
        }
        v2 = v2;
        v4 = v4;
        if (!(!v3))
            goto LABEL_488292;
LABEL_4882bf:
        if (!v6)
            break;
        v101 = v11;
        v102 = std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all::h1a7f3e92f19c2463(v101, v86);
        if (!v102)
        {
            v98 = 0;
        }
        else
        {
            v112 = v102;
            v37 = v102;
            v52 = std::sys::pal::unix::fs::rmdir::h028ffaebae6b55a1(v101, v86);
            if (!v52)
            {
                v181 = 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(v80);
                if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v112) == 1)
                {
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    v197 = *((int128_t *)&g_4f3390);
                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v197;
                    v13 = v197;
                    v29 = &v13;
                    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v52 = &g_4ee5f8;
                    v53 = 2;
                    v56 = 0;
                    v54 = &v29;
                    v55 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v196, v91);
                    v13 = 1;
                    v14 = v11;
                    v15 = v36;
                    v16 = 1;
                    v29 = &v13;
                    v30 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v52 = &g_4ee638;
                    v53 = 2;
                    v56 = 0;
                    v54 = &v29;
                    v55 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v180, v91);
                }
                else
                {
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    v199 = *((int128_t *)&g_4f3390);
                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v199;
                    v13 = v199;
                    v29 = &v13;
                    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v52 = &g_4ee5f8;
                    v53 = 2;
                    v56 = 0;
                    v54 = &v29;
                    v55 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v198, v91);
                    v13 = 1;
                    v14 = v11;
                    v15 = v36;
                    v16 = 1;
                    v29 = &v13;
                    v30 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v31 = &v37;
                    v32 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v52 = &g_4ee658;
                    v53 = 3;
                    v56 = 0;
                    v54 = &v29;
                    v55 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(v80, v180, v91);
                }
                v181 = v112 | -0x100 | 1;
            }
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v37);
            v98 = v181 | -0x100 | (char)v181 & 1;
        }
LABEL_48807f:
        v22 = v22 | -0x100 | (char)v22 | v98;
        a0 = v51 + 1;
        if (a0 == v50)
            goto LABEL_489471;
    }
    v25 = 0;
    *((int128_t *)&v27) = 0;
    v26 = 8;
    v47 = 0;
    v48 = 8;
    v49 = 0;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v13, v11, v86);
    v16 = 0;
    v18 = 10;
    v19 = 0;
    v20 = -1;
    v21 = 0x100;
    v103 = *((int128_t *)&v16);
    v104 = *((int128_t *)&v18);
    v105 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
    v106 = *((int128_t *)&v20);
    v107 = v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
    v108 = &v63;
    v65 = v106;
    v64 = v104;
    v63 = v103;
    v62 = v15;
    v109 = *((int128_t *)&v13);
    v61 = v109;
    v52 = 0;
    v54 = 0;
    v55 = 8;
    v110 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v56) = 0;
    v57 = 8;
    *((int128_t *)&v58) = 0;
    v59 = 8;
    v60 = 0;
    *((int128_t *)&v66) = 0;
    for (v10 = 0; v0 != 2; v10 = v151 | -0x100 | 1)
    {
        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he01779e03549e115(&v29, v80, v113, v108, v176, v177);
        v114 = v29;
        if (v114 == 3)
        {
LABEL_488e78:
            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hf8199692072fca67(v80);
            v182 = v28;
            v183 = v10;
            if (!v182)
            {
                v186 = 0;
                v184 = 0;
            }
            else
            {
                v184 = v25;
                v185 = v27;
                v186 = v185 - v189;
                v192 = v184 - v186;
                v194 = v182 - v192;
                v184 = v182 + v186;
            }
            v194 = 0;
        }
        v125 = *((int128_t *)&v79[0]);
        v116 = v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125;
        v126 = *((int128_t *)&v79[2]);
        v105 = v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
        v127 = *((int128_t *)&v79[1]);
        v107 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127;
        v76 = v127;
        v75 = v126;
        v74 = v125;
        if ((unsigned int)v114 != 2)
        {
LABEL_488930:
            v132 = *((long long *)&v35);
            v13 = v114;
            v133 = v74;
            v134 = v75;
            v105 = v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v134;
            v135 = v76;
            v107 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v135;
            v18 = v135;
            v16 = v134;
            v14 = v133;
            v20 = v132;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            v139 = *((int128_t *)&g_4f3390);
            v110 = v116 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v133 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v139;
            v43 = v139;
            v68 = &v43;
            v69 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
            v37 = &g_4ee5f8;
            v38 = 2;
            v41 = 0;
            v39 = &v68;
            v40 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v130, v131);
            v43 = 1;
            v44 = v11;
            v45 = v86;
            v46 = 1;
            v68 = &v43;
            v69 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v70 = &v13;
            v71 = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hbf2d58447dc08690;
            v37 = &g_4ee6a0;
            v38 = 3;
            v41 = 0;
            v39 = &v68;
            v40 = 2;
            v151 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v180, v91);
            if (!v13)
            {
                v153 = v15;
                if (v153 != 0x8000000000000000 && v153)
                    __rust_dealloc(v16);
                v151 = core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v14);
            }
            else
            {
                if (v14)
                    v151 = __rust_dealloc(v15);
                if (v17)
                    v151 = __rust_dealloc(v18);
            }
        }
        else
        {
            v12 = v30;
            v119 = v31;
            v120 = v32;
            v129 = *((int128_t *)&v79[3]);
            v110 = v116 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v129;
            v72 = v129;
            v23 = *((int *)&v33);
            if (((unsigned short)v23 & 0xf000) != 0x4000)
                v128 = uu_rm::remove_file::h5547a9e00aec6c4f(v119, v120, v42, v0);
            else
                v24 = *((int *)&v34);
            break;
        }
    }
    while (true)
    {
        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he01779e03549e115(&v29, v80, v113, v108, v176, v177);
        v114 = v29;
        if (v114 == 3)
            goto LABEL_488e78;
        v115 = *((int128_t *)&v79[0]);
        v116 = v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
        v117 = *((int128_t *)&v79[2]);
        v105 = v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117;
        v118 = *((int128_t *)&v79[1]);
        v107 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v118;
        v76 = v118;
        v75 = v117;
        v74 = v115;
        if (!((unsigned int)v114 == 2))
            goto LABEL_488930;
        v12 = v30;
        v119 = v31;
        v120 = v32;
        v121 = *((int128_t *)&v79[3]);
        v110 = v116 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121;
        v72 = v121;
        v23 = *((int *)&v33);
        v24 = *((int *)&v34);
        v122 = v49 * 24;
        v48 = v48;
        v123 = v48;
        if (!v122)
            break;
        v122 -= 24;
        if (!(std::path::Path::_starts_with::h98ec86359c41a446(v119, v120, v123->field_-20, *((long long *)&v123->padding_-18[0])) & 255 & 255 & 255))
            continue;
        if (v12)
            __rust_dealloc(v119);
        v79 = &v30;
        v80 = &v52;
    }
    if (((unsigned short)v23 & 0xf000) == 0x4000)
    {
        std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v13, v119, v120);
        v136 = &v38;
        v137 = (char)v14;
        if (v137 == 2)
        {
            v13 = v43;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v43 = v13;
        v44 = v137;
        v138 = 0;
    }
    else
    {
        v128 = uu_rm::remove_file::h5547a9e00aec6c4f(v119, v120, v42, 2);
        v108 = v10 | -0x100 | ((char)v10 | v128) & 1;
        v10 = v108;
        if (v12)
            __rust_dealloc(v119);
        v79 = &v30;
        v80 = &v52;
    }
}
