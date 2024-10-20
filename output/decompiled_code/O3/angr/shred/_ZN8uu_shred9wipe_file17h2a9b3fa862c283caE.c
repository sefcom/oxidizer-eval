int uu_shred::wipe_file::h2a9b3fa862c283ca()
{
    unsigned long long v0;  // [sp-0x30298]
    unsigned long v1;  // [sp-0x30290], Other Possible Types: unsigned long long
    unsigned int v2;  // [sp-0x30284]
    char *v3;  // [sp-0x30280], Other Possible Types: unsigned long long
    struct_0 *v4;  // [sp-0x30278]
    unsigned long long v5;  // [bp-0x30270]
    char *v6;  // [bp-0x30268], Other Possible Types: unsigned long
    void* v7;  // [sp-0x30260]
    char *v8;  // [sp-0x30258]
    char *v9;  // [sp-0x30250]
    unsigned long long v10;  // [sp-0x30248]
    unsigned long v11;  // [bp-0x30240]
    unsigned long long v12;  // [sp-0x30238]
    unsigned int v13;  // [sp-0x3022c]
    unsigned long v14;  // [sp-0x30228], Other Possible Types: unsigned long long
    struct_0 *v15;  // [sp-0x30220]
    char *v18;  // [sp-0x30208]
    char *v19;  // [sp-0x301e8], Other Possible Types: unsigned long long
    char v21;  // [bp-0x301df]
    unsigned long long v24;  // [sp-0x301c8]
    char *v28;  // [sp-0x301a0]
    unsigned long long v29[45];  // [bp-0x30198], Other Possible Types: void*, char, unsigned long long, unsigned long
    char v30;  // [bp-0x30190], Other Possible Types: unsigned int, unsigned long long
    char v31;  // [sp-0x3018f]
    unsigned short v32;  // [sp-0x3018c]
    void* v33;  // [sp-0x30188], Other Possible Types: struct struct_2 **, unsigned long, unsigned long long
    unsigned long long v34;  // [sp-0x30180]
    void* v35;  // [sp-0x30178], Other Possible Types: struct struct_2 **
    struct struct_2 **v37;  // [bp-0x30168]
    char v38;  // [bp-0x30160]
    struct struct_2 **v39;  // [bp-0x30158]
    struct struct_2 **v41;  // [sp-0x30148], Other Possible Types: unsigned long
    unsigned long long v43;  // [sp-0x30138]
    char v58;  // [bp-0x30030]
    char v60;  // [sp-0x20040], Other Possible Types: unsigned long long, unsigned long
    char v61;  // [bp-0x2003c]
    unsigned long long v62;  // [sp-0x20038]
    char v63;  // [bp-0x20030]
    unsigned int v64;  // [bp-0x20028]
    unsigned long long v69;  // [bp-0x10038]
    struct_0 *v70;  // [sp-0x10030]
    unsigned long long v71;  // [sp-0x10028]
    char v72;  // [bp-0x10020]
    void* v75;  // [sp-0x2030]
    unsigned long v76;  // [bp+0x8]
    char v77;  // [bp+0x10]
    char v79;  // [bp+0x20]
    unsigned long v80;  // r9
    unsigned long long v81;  // r15
    unsigned int v82;  // ecx
    unsigned long long v83;  // rsi
    unsigned long long v84;  // r12
    struct_0 *v85;  // rdi
    uint128_t v86[2];  // rax
    unsigned long long v87;  // rax
    uint128_t v88[2];  // rax
    char *v89;  // rdx
    unsigned long long v90;  // r14
    unsigned long long v91;  // rax
    struct struct_2 **v92;  // xmm0
    unsigned long long v93;  // rdx
    unsigned long long v94;  // rax
    char *v96;  // rsi
    struct struct_2 **v97;  // xmm0
    unsigned long v98;  // r8
    char *v99;  // r15
    char *v100;  // r14
    struct_0 *v101;  // rdi
    unsigned long long v102;  // cc_op
    void* v105;  // rax
    unsigned long long v106;  // cc_dep2
    int v107;  // ymm0
    unsigned long long v108;  // cc_ndep
    void* v109;  // cc_ndep
    unsigned long long v110;  // r12
    unsigned int v111;  // ebx
    unsigned int v112;  // r13d
    unsigned int v113;  // ebp
    unsigned long long v114;  // rax
    char *v115;  // r14
    int v116;  // ymm0
    unsigned long long v117;  // rcx
    unsigned long long v119;  // r13
    unsigned int v120;  // ebp
    char *v123;  // rax
    struct struct_5 **v124;  // fs
    struct_5 *v125;  // rax
    struct struct_1 **v126;  // rdx
    unsigned long long v127;  // cc_op
    unsigned long long v129;  // cc_dep2
    struct struct_1 **v130;  // rax
    unsigned long long v131[45];  // r13
    char *v132;  // r15
    unsigned long long v133;  // rbx
    unsigned long long v134;  // r14
    char *v135;  // r15
    char *v136;  // rbp
    unsigned int v137;  // ecx
    char *v138;  // rax
    unsigned int v139;  // r12d
    unsigned long long v140;  // r12
    void* v141;  // rcx
    unsigned long long v142;  // rdx
    unsigned long long v143;  // rax
    char *v145;  // rax
    char *v146;  // rbp
    char *v147;  // rsi
    unsigned long v149;  // rcx
    void* v151;  // rsi
    unsigned long long v152;  // rcx
    struct_0 *v155;  // rbx
    char *v156;  // rcx
    unsigned long long v159;  // r14
    char *v160;  // rdx
    unsigned long long v161;  // rbp
    void* v163;  // rax

    do
    {
        v75 = 0;
    } while (&v75 != &v58);
    v81 = v80;
    v13 = v82;
    v84 = v83;
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v29, v85, v83);
    if (*((int *)&v29) == 2)
    {
        v62 = *((long long *)&v30);
        v60 = 2;
        goto LABEL_486968;
    }
    memcpy(&v60, &v29, 176);
    if (v60 == 2)
    {
LABEL_486968:
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8eaa10ebdc4888ca(&v62);
        v69 = 1;
        v70 = v85;
        v71 = v83;
        v72 = 0;
        v14 = &v69;
        v15 = &_$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v29 = &g_4ef950;
        v30 = 2;
        v35 = 0;
        v33 = &v14;
        v34 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v60, &v29);
        v64 = 1;
        v86 = __rust_alloc(32, 8);
        if (!v86)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        goto LABEL_486a36;
    }
    if (!(char)std::path::Path::is_file::h82f08f46fb8d8099(v85, v83))
    {
        v69 = 1;
        v70 = v85;
        v71 = v83;
        v72 = 0;
        v14 = &v69;
        v15 = &_$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v29 = &g_4ef7f0;
        v30 = 2;
        v35 = 0;
        v33 = &v14;
        v34 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v60, &v29);
        v64 = 1;
        v86 = __rust_alloc(32, 8);
        if (!v86)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_486a36:
        v92 = *((int128_t *)&v60);
        v86[1] = *((int128_t *)&v63);
        *((struct struct_2 ***)&v86[0]) = v92;
        goto LABEL_48725d;
    }
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v29, v85, v83);
    if (*((int *)&v29) == 2)
    {
        v87 = v30;
        v29 = 0;
        v30 = 1;
        v33 = 0;
        v34 = v87;
        v88 = __rust_alloc(32, 8);
        if (!v88)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        goto LABEL_486c60;
    }
    v3 = v89;
    v90 = v41;
    if (v79)
    {
        v91 = *((int *)&v38);
        if ((char)v91 < 0)
            v93 = v91 & 4294967295;
        else
            v93 = 128;
        v94 = std::sys::pal::unix::fs::set_perm::h50b7c529e6585f2e(v85, v83, v93);
        if (!v94)
            goto LABEL_486c83;
        v29 = 0;
        v30 = 1;
        v33 = 0;
        v34 = v94;
        v88 = __rust_alloc(32, 8);
        if (!v88)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_486c60:
        v97 = *((int128_t *)&v29);
        v88[1] = *((int128_t *)&v33);
        *((struct struct_2 ***)&v88[0]) = v97;
        goto LABEL_48725d;
    }
LABEL_486c83:
    v7 = 0;
    v8 = 1;
    v9 = 0;
    v12 = v83;
    v4 = v85;
    if (!v90)
    {
        v3 = 0;
        goto LABEL_4871c9;
    }
    v96 = v3;
    if (v96 <= 3)
    {
        if (!v96)
        {
            v3 = 0;
            goto LABEL_487189;
        }
        else
        {
            v100 = 0;
            do
            {
                if (v100 == v7)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h6118a24872784605(&v7);
            } while ((*((int *)((char *)v8 + 0x4 * (unsigned long long)v100)) = 2, v100 += 1, v9 = v100, v3 != v9));
            v101 = v4;
            goto LABEL_487189;
        }
    }
    v90 = v90;
    v19 = v98;
    v11 = v80;
    v1 = v96 / 22;
    v99 = 0;
    if (v96 >= 22)
    {
        v102 = 19;
        v105 = 0;
        do
        {
            v109 = amd64g_calculate_rflags_c(v102, 0, v106, v108);
            v6 = v105 + 1;
            v30 = 22;
            *((int128_t *)&v41) = 0xcc000000bb000000990000008800;
            *((int128_t *)&v39) = 0x7700000066000000440000003300;
            *((int128_t *)&v37) = 689601926604450170026677061268993;
            *((int128_t *)&v35) = 48234206897958065916534445818495771649;
            v107 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
            *((int128_t *)&v33) = 0xaa00000055000000ff0000000000;
            v43 = 0xee000000dd00;
            v110 = 4;
            while (true)
            {
                v111 = (&v29)[4 * v110];
                if (v111 == 2)
                    break;
                v112 = (&v29)[4 * v110];
                v113 = *((short *)&(&v29)[4 * v110]);
                if (v99 == v7)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h6118a24872784605(&v7);
                *((unsigned int *)(v8 + 0x4 * v99)) = v112 * 0x1000000 | v113 * 0x100 | v111;
                v99 += 1;
                v9 = v99;
                v109 = 0;
                v110 += 1;
                if (v110 == 26)
                    break;
            }
            v105 = v6;
            v102 = 8;
            v106 = v1;
        } while (v105 != v1);
    }
    v114 = v1 * 22;
    v115 = v3;
    v30 = 22;
    *((int128_t *)&v33) = 0xaa00000055000000ff0000000000;
    *((int128_t *)&v35) = 48234206897958065916534445818495771649;
    *((int128_t *)&v37) = 689601926604450170026677061268993;
    *((int128_t *)&v39) = 0x7700000066000000440000003300;
    v116 = v107 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800;
    *((int128_t *)&v41) = 0xcc000000bb000000990000008800;
    v117 = 0xee000000dd00;
    v43 = 0xee000000dd00;
    if (v115 != v114)
    {
        v6 = v99 * 4;
        while (true)
        {
            v119 = 0;
            if (!(v119 != 22) || !((v120 = (unsigned int)(char)*((char *)((char *)&v33 + 4)), v120 != 2)))
                break;
            if (&v99[v119] == v7)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h6118a24872784605(&v7);
            v123 = v8;
            *((unsigned int *)(v123 + v6 + v119 * 4)) = *((char *)&v33 + 3) * 0x1000000 | *((short *)((char *)&v33 + 5)) * 0x100 | v120;
            v117 = v119 + 1;
            v9 = &v99[v119 + 1];
            if (&v115[-1 * v114] == v117)
                break;
        }
    }
    v125 = *(v124);
    v126 = v125[2].field_-10;
    if (!v126)
    {
        v130 = std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::initialize::h9005663a195c887c(v125 + 2, 0, v126);
        v127 = 20;
        v129 = 0;
        v12 = v12;
        if (!v130)
        {
LABEL_488993:
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
    }
    else
    {
        v127 = 7;
        v129 = 1;
        if (!((unsigned int)v126 == 1))
            goto LABEL_488993;
        v130 = v125 + 1;
        v12 = v12;
    }
    v84 = v12;
    v131 = *(v130);
    v131[0] = v131[0] + 1;
    if ((char)amd64g_calculate_condition(4, 24, vvar_3106 + 1, 0, amd64g_calculate_rflags_c(v127, v126 & 4294967295, v129, (v123 + vvar_3103 <= v123 ? 0 : 1))))
        [D] Unsupported jumpkind Ijk_NoDecode at address 4753851()
    v29[0] = v131;
    v132 = v9;
    if (v132 >= 2)
    {
        v6 = v8;
        v133 = &v131[2];
        v134 = &v131[36];
        v1 = &g_4ef740;
        do
        {
            v136 = v135;
            if (v136 >> 32)
            {
                v138 = rand::rng::Rng::gen_range::h0ae4080ab5d44b43(&v29, 0, v136, v117);
            }
            else
            {
                v137 = (ExpCmpNE(v136 & 4294967295, 0) ? (ExpCmpNE(v136 & 4294967295, 0) ? 63 - Clz(v136 & 4294967295) : v117 & 4294967295) : (ExpCmpNE(v136 & 4294967295, 0) ? 63 - Clz(v136 & 4294967295) : v117 & 4294967295));
                v139 = (((char)~(v137) & 31) ? (unsigned int)((v136 & 4294967295 & 4294967295) << ((char)~(v137) & 31)) : (unsigned int)((v136 & 4294967295 & 4294967295) << ((char)~(v137) & 31)));
                v141 = v131[34];
                do
                {
                    if (v141 >= 64)
                    {
                        v142 = _ZN4rand4rngs7adapter9reseeding4fork26RESEEDING_RNG_FORK_COUNTER17h2e05f8738cf1edf4E.llvm.15031738488007737614;
                        v143 = v131[43];
                        if (v143 <= 0 || (char)(v131[44] - v142 >> 63))
                        {
                            _ZN4rand4rngs7adapter9reseeding29ReseedingCore$LT$R$C$Rsdr$GT$19reseed_and_generate17h9a4b698ae2e49b73E.llvm.3858165728884320330(v134, v133, v142);
                        }
                        else
                        {
                            v131[43] = v143 - 0x100;
                            rand_chacha::guts::refill_wide::ha6ca58b303937e3d(v134, 6, v133);
                        }
                        v141 = 0;
                    }
                } while ((*((int *)((char *)v8 + 0x4 * (unsigned long long)v100)) = 2, v100 += 1, v9 = v100, v3 != v9));
                v138 = v145 >> 32;
                v140 = v12;
            }
            v84 = v140;
            v146 = v136 + 1;
            if (!(v146 < v132))
                goto LABEL_488767;
            if (v138 >= v132)
                goto LABEL_488767;
            v147 = v6;
            v117 = *((int *)(v147 + 0x4 * v146));
            *((int *)(v147 + 0x4 * v146)) = *((int *)(v147 + 0x4 * v138));
            *((unsigned int *)(v147 + 0x4 * v138)) = v117;
        } while (v146 > 1);
    }
    v149 = v3 / 10;
    v151 = 0;
    do
    {
        v152 = v149 + 3;
        if ((!(v151 | v149 + 2) >> 32 ? (0 CONCAT (unsigned int)v151) /m (unsigned int)(v149 + 2) & 4294967295 & 4294967295 : (0 CONCAT v151) /m (v149 + 2)) >= v9)
        {
            v1 = &g_4ef8b8;
LABEL_488767:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
    } while ((*((int *)((char *)v8 + 0x4 * (unsigned long long)v100)) = 2, v100 += 1, v9 = v100, v3 != v9));
    v131[0] = vvar_3112 - 1;
    if (vvar_3112 == 1)
    {
        v131[1] = v131[1] - 1;
        if (vvar_3114 == 1)
            __rust_dealloc(v131);
    }
    v3 = v9;
    v81 = v11;
    v5 = v90;
    v101 = v4;
LABEL_487189:
    v5 = v5;
    if (v77)
    {
        if (v3 == v7)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h6118a24872784605(&v7);
        v156 = v3;
        *((int *)(v8 + 0x4 * v156)) = 0;
        v3 = v156 + 1;
        v9 = v3;
    }
LABEL_4871c9:
    v28 = v3;
    v29 = 0x1b600000000;
    v30 = 0;
    v32 = 0;
    v31 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v60, &v29, v155, v84);
    if (!(int)v60)
    {
        v2 = *((int *)&v61);
        v0 = v7;
        v160 = v8;
        v19 = v160 + 0x4 * v9;
        v161 = &v21;
        v3 = v159 >> 16;
        v10 = v159 & 4294967295;
        if ((char)v76)
            v10 = v10;
        v1 = v10;
        v163 = 0;
        v24 = &anon.6037b39626056305f6e119c4fe5cdbce.10.llvm.10757439607192978579;
        v18 = v160;
    }
    else
    {
        _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h04e77a60cd71f0b8(v62, v155, v84);
        if (v7)
            __rust_dealloc(v8);
LABEL_48725d:
        return;
    }
}
