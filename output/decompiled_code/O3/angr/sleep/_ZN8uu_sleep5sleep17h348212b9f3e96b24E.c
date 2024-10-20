int uu_sleep::sleep::h348212b9f3e96b24()
{
    unsigned long long v0;  // [sp-0x378]
    char v1;  // [bp-0x258]
    char v2;  // [bp-0x248]
    unsigned int v3;  // [sp-0x234]
    unsigned int v4;  // [bp-0x230]
    unsigned int v5;  // [sp-0x22d]
    int v6;  // [sp-0x228], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v7;  // [sp-0x220]
    unsigned long long v8;  // [sp-0x218]
    int v9;  // [sp-0x208], Other Possible Types: void*, unsigned long long
    unsigned long long v10;  // [sp-0x200]
    void* v11;  // [sp-0x1f8]
    char v12;  // [bp-0x1f0]
    char v13;  // [bp-0x1ef]
    char v14;  // [bp-0x1ec]
    char v15;  // [bp-0x1e8]
    unsigned long long v16;  // [sp-0x1d8]
    unsigned int v17;  // [sp-0x1cc]
    char v18;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x1c0]
    void* v20;  // [sp-0x1b8], Other Possible Types: unsigned long, unsigned long long
    char v21;  // [bp-0x1b0], Other Possible Types: unsigned long
    unsigned int v22;  // [bp-0x1af]
    unsigned int v23;  // [sp-0x1ac]
    void* v24;  // [sp-0x1a8], Other Possible Types: unsigned long long
    int v25;  // [bp-0x188], Other Possible Types: struct struct_2 **, char, unsigned long, unsigned long long
    unsigned long v26;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long v27;  // [sp-0x178], Other Possible Types: unsigned long long
    char v28;  // [bp-0x170], Other Possible Types: unsigned long
    unsigned int v29;  // [sp-0x16f]
    unsigned short v30;  // [sp-0x16b]
    char v31;  // [sp-0x169]
    unsigned long long v32;  // [bp-0x168], Other Possible Types: char
    char v34;  // [bp-0x164]
    char v36;  // [bp-0x158]
    char v37;  // [bp-0x148]
    char v38;  // [bp-0x138]
    char v39;  // [bp-0x128]
    int v40;  // [bp-0x118], Other Possible Types: void*, unsigned long, unsigned long long
    unsigned long long v41;  // [sp-0x110]
    int v42;  // [bp-0x108], Other Possible Types: void*, struct struct_3 **, unsigned long long
    unsigned long long v43;  // [sp-0x100]
    int v44;  // [bp-0xf8], Other Possible Types: void*, unsigned long long
    unsigned long long v45;  // [sp-0xf0]
    int v46;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v47;  // [sp-0xe0]
    int v48;  // [sp-0xd8]
    int v49;  // [sp-0xc8]
    int v50;  // [sp-0xb8]
    unsigned long long v51[2];  // [sp-0xa0]
    int v52;  // [sp-0x98]
    int v53;  // [sp-0x88]
    int v54;  // [sp-0x78]
    int v55;  // [sp-0x68]
    unsigned short v56;  // [sp-0x58]
    char v57;  // [sp-0x56]
    unsigned int v58;  // [sp-0x55]
    unsigned short v59;  // [sp-0x51]
    char v60;  // [sp-0x4f]
    char v61;  // [bp-0x48]
    char v62;  // [bp-0x38]
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm0
    int v67;  // xmm0
    int v68;  // ymm0
    int v69;  // ymm0
    unsigned long long v70;  // rsi
    unsigned long long v71;  // r15
    void* v72;  // r13
    unsigned long long v73;  // rcx
    unsigned int v74;  // ecx
    void* v75;  // r12
    unsigned long long v77;  // rdi
    unsigned long long v78;  // cc_ndep
    int v79;  // ymm1
    int v80;  // ymm2
    int v81;  // ymm3
    unsigned long long v82;  // rax
    unsigned long long v83[2];  // r12
    unsigned long long v84;  // rbp
    unsigned long long v85;  // rdx
    unsigned long long v86;  // rdx
    void* v87;  // cc_ndep
    unsigned long long v88;  // xmm0lq
    char v89;  // cl
    unsigned int v90;  // esi
    unsigned long long v91;  // rdx
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // xmm0
    int v96;  // xmm1
    int v97;  // xmm2
    int v98;  // xmm3
    unsigned long long v102;  // rbx
    unsigned int v104;  // esi
    unsigned int v105;  // esi
    void* v107;  // rax
    unsigned long long v108;  // rbx
    unsigned int v109;  // edx
    unsigned int v110;  // ecx
    unsigned long long v111;  // r13
    unsigned int v112;  // ecx
    unsigned long long v113;  // r12
    unsigned long long v114;  // rcx
    int v115;  // xmm0
    unsigned long v116;  // cc_ndep
    unsigned long long v117;  // rax
    struct_0 *v118;  // rax
    struct_0 *v119;  // rax
    struct_0 *v120;  // rax
    struct_0 *v121;  // rax
    int v124;  // xmm0
    unsigned long long v125;  // rax
    int v126;  // xmm0
    unsigned long long v127;  // rsi
    unsigned long long *v129;  // rax
    unsigned long long v134;  // rdx
    char v135;  // bl
    int v138;  // xmm0
    unsigned long long v139;  // rax
    struct_1 *v140;  // rax

    v57 = 10;
    v56 = 2570;
    v59 = 2570;
    v60 = 10;
    v58 = 100992003;
    v64 = anon.5dec83f50c76d4879e3148c598308dd5.6.llvm.15089742476728497238;
    v52 = v64;
    v65 = g_4df150;
    v53 = v65;
    v66 = g_4df160;
    v54 = v66;
    v67 = g_4df170;
    v69 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
    v55 = v67;
    if (!v70)
    {
        v72 = 0;
        v3 = 0;
        goto LABEL_47e4d2;
    }
    else
    {
        v71 = -(v70);
        v72 = 0;
        v74 = v73 | -0x100 | 1;
        v16 = &v18;
        v3 = 0;
        v75 = 0;
    }
LABEL_47dc15:
    v17 = v74;
    v82 = v75 + 1;
    v83 = v75 * 16 + v77;
    do
    {
        v75 = v82;
        v51[0] = v83;
        v84 = v83[1];
        v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h16ad02b2c0a5c4a5(v83[0], v84);
        if (v85)
            v86 = v18;
        v19 = v85;
        v20 = 0;
        v21 = v86;
        v24 = 0;
        fundu_core::parse::ReprParserTemplate::parse::haa88756f2bd9cf61(&v25, &v18, &v52, &v56, &g_4def20, 0, *((long long *)&v1), 0, *((long long *)&v2));
        if (*((int *)&v25) == 2)
        {
            v88 = v28;
            v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v88;
            v89 = v32;
            v90 = *((int *)&v34);
            v4 = *((int *)&(&v32)[1]);
            v5 = v90;
            v91 = *((long long *)&(&v32)[8]);
            v26 = v26;
            v27 = v27;
        }
        else
        {
            v92 = *((int128_t *)&v39);
            v50 = v92;
            v93 = *((int128_t *)&v38);
            v49 = v93;
            v94 = *((int128_t *)&v37);
            v48 = v94;
            v95 = *((int128_t *)&v25);
            v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
            v96 = *((int128_t *)&v27);
            v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
            v97 = *((int128_t *)&v32);
            v80 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
            v98 = *((int128_t *)&v36);
            v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
            v46 = v98;
            v44 = v97;
            v42 = v96;
            v40 = v95;
            v102 = v9;
            if (v102 != 8)
            {
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | (uint256_t)v11;
                v89 = v12;
                v104 = *((int *)&v14);
                v4 = *((int *)&v13);
                v5 = v104;
                v91 = *((long long *)&v15);
                v27 = v10;
            }
            else
            {
                v89 = v12;
                if (!(v89 & 1))
                {
                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | (uint256_t)v11;
                    v91 = *((int *)&v13);
                    v105 = *((int *)&v14);
                    v4 = v91;
                    v5 = v105;
                    v27 = v10;
                }
            }
        }
        v107 = v27;
        v108 = v26;
        if (v108 != 8)
        {
            v18 = v108;
            v19 = v107;
            v20 = v88;
            v21 = v89;
            v23 = v5;
            v22 = v4;
            v24 = v91;
            switch (v108)
            {
            case 0:
                if (!v84)
                {
                    v121 = __rust_alloc(15, 1);
                    if (v121)
                    {
                        *((long long *)((char *)&v121->field_0 + 7)) = 8751743591038088033;
                        v121->field_0 = 7023117828466175561;
                        v6 = 15;
                        v7 = v121;
                        v8 = 15;
                        v135 = 0;
                        goto LABEL_47e2b2;
                    }
                }
                else
                {
                    v120 = __rust_alloc(30, 1);
                    if (v120)
                    {
                        *((int128_t *)((char *)&v120->field_7 + 6)) = 154800226621007434702568829447197386100;
                        v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154800226621007434702568829447197386100 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 134856471939471803278597808034311139142;
                        *((int128_t *)&v120->field_0) = 134856471939471803278597808034311139142;
                        v6 = 30;
                        v7 = v120;
                        v8 = 30;
                        break;
                    }
                }
            case 1: case 3:
                v11 = v24;
                v115 = *((int128_t *)&v20);
                v9 = v115;
                v116 = (&g_418a94.padding_0[v114] <= v114 ? 1 : 0);
                v117 = v107 + 1;
                if ((char)amd64g_calculate_condition(4, 24, v107 + 1, 0, amd64g_calculate_rflags_c(4, v114, &g_418a94.padding_0[0], v87)))
                    v117 = -1;
                v6 = v117;
                v25 = &v9;
                v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v27 = &v6;
                v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v40 = &g_4def48;
                v41 = 2;
                v44 = 0;
                v42 = &v25;
                v43 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v61, &v40);
                v126 = *((int128_t *)&v61);
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
                v6 = v126;
                v8 = *((long long *)&v62);
                v127 = v9;
                if (v127)
                {
                    __rust_dealloc(v10);
                    break;
                }
            case 4: case 5:
                v118 = __rust_alloc(26, 1);
                if (v118)
                {
                    *((int128_t *)((char *)&v118->field_7 + 2)) = 153382689570341687825259406027227427681;
                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 153382689570341687825259406027227427681 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154800200161974626375509876661948545093;
                    *((int128_t *)&v118->field_0) = 154800200161974626375509876661948545093;
                    v6 = 26;
                    v7 = v118;
                    v8 = 26;
                    break;
                }
            case 6:
                v119 = __rust_alloc(19, 1);
                if (v119)
                {
                    v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154696197430644291176200158173155128654;
                    *((int128_t *)&v119->field_0) = 154696197430644291176200158173155128654;
                    *((int *)((char *)&v119->field_7 + 7)) = 1702259060;
                    v6 = 19;
                    v7 = v119;
                    v8 = 19;
                    break;
                }
            default:
                v32 = v24;
                v27 = v20;
                v28 = v21;
                v29 = v22;
                v30 = *((short *)((char *)&v23 + 1));
                v31 = *((char *)&v23 + 3);
                v25 = v18;
                v26 = v19;
                v9 = 0;
                v10 = 1;
                v11 = 0;
                v46 = 32;
                v47 = 3;
                v40 = 0;
                v42 = 0;
                v44 = &v9;
                v45 = &g_4ded30;
                if ((char)_$LT$fundu_core..error..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h5e56a2b34059f6b2(&v25, &v40))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v124 = *((int128_t *)&v9);
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v124;
                v6 = v124;
                v8 = v11;
                v125 = v25;
                if (v125 > 6)
                {
                    v129 = 8;
                }
                else
                {
                    v0 = 117;
                    v87 = 0;
                    if ((*((char *)&v0 + 1) >> (char)(v125 & 63 & 7) & 1 & 1))
                        goto LABEL_47e477;
                    v129 = 16;
                }
                v127 = *((long long *)(&v25 + v129));
                if (v127)
                    __rust_dealloc(*((long long *)(&v26 + v129)));
LABEL_47e477:
                v135 = v108 | -0x100 | 1;
LABEL_47e2b2:
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                v138 = g_4e3b08;
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v138;
                v25 = v138;
                v9 = &v25;
                v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4f85133804ad1171;
                v40 = &g_4def68;
                v41 = 2;
                v44 = 0;
                v42 = &v9;
                v43 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v40, v127, v134);
                v25 = &v51[0];
                v26 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h626629e5612f9ced;
                v27 = &v6;
                v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v40 = &g_4def88;
                v41 = 3;
                v44 = 0;
                v42 = &v25;
                v43 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v40, v70, v85);
                if (v6)
                    __rust_dealloc(v7);
                if (!v135)
                {
                    v139 = v18;
                    if (((unsigned int)v139 | 2) != 3 && (v139 > 6 || (v0 = (unsigned long long)117, v87 = 0, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + 1)) >> (unsigned long long)(char)(v139 & 63 & 7)) & 1))))
                    {
                        if (v19)
                            __rust_dealloc(v20);
                    }
                }
                v74 = 0;
                if (!v71 + v75)
                    goto LABEL_47e488;
                goto LABEL_47dc15;
            }
        }
        v109 = (unsigned int)v69;
        if (v109 != 0x3b9aca00)
        {
            if (!v107)
            {
                if (!v109)
                    goto LABEL_47de67;
                v107 = 0;
                if (!v21)
                    goto LABEL_47de69;
            }
            else if (!v21)
            {
                goto LABEL_47de69;
            }
            v109 = 0;
LABEL_47de67:
            v107 = 0;
LABEL_47de69:
            v110 = 0x3b9aca00;
            v111 = v72 + v107;
            if (!((char)__CFADD__(v72, v107)))
            {
                v110 = v109 + v3;
                if (v110 >= 0x3b9aca00)
                {
                    if (v111 == -1)
                        goto LABEL_47dc30;
                    v110 -= 0x3b9aca00;
                    v111 += 1;
                }
            }
LABEL_47dc30:
            v109 = v110;
            v112 = (v109 == 0x3b9aca00 ? v109 : 999999999);
            if (v109 == 0x3b9aca00)
                v111 = -1;
            v3 = v112;
        }
        v78 = v109 < 0x3b9aca00;
        v113 = v75 + 1;
        v83 += 1;
    } while (v71 + v75 + 1 != 1);
    if (!((char)v17 & 1))
    {
LABEL_47e488:
        v140 = __rust_alloc(32, 8);
        if (!v140)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v140->field_0 = 0;
        v140->field_8 = 1;
        v140->field_10 = 0;
        v140->field_18 = 1;
        goto LABEL_47e4e1;
    }
LABEL_47e4d2:
    std::thread::sleep::hdad53e7e356cecc8(v72, v3);
LABEL_47e4e1:
    return;
}
