long long uu_sort::chunks::read::h3ffb63022d852be4(struct_3 *a0, unsigned long long a1, struct_7 *a2, unsigned long a3, unsigned long long a4, unsigned long long a5[3])
{
    char v0;  // [sp-0x259]
    int v1;  // [sp-0x258]
    unsigned long long v2;  // [sp-0x248]
    unsigned long long v3;  // [sp-0x240]
    unsigned long long v4;  // [sp-0x238]
    unsigned long long v5;  // [sp-0x230]
    unsigned long long v6;  // [sp-0x228]
    unsigned long long v7;  // [sp-0x220]
    unsigned long long v8;  // [sp-0x218]
    unsigned long long v9;  // [sp-0x210]
    unsigned long v10;  // [bp-0x200], Other Possible Types: unsigned int
    unsigned long long v11;  // [sp-0x1f8]
    unsigned long long v12;  // [sp-0x1f0]
    void* v13;  // [bp-0x1e8], Other Possible Types: char, unsigned long
    unsigned long v14;  // [sp-0x1e0], Other Possible Types: unsigned long long
    void* v15;  // [sp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v16;  // [sp-0x1d0]
    unsigned long v17;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x1c0]
    unsigned long v19;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x1b0]
    unsigned long long v21;  // [sp-0x1a8]
    struct_6 *v22;  // [sp-0x1a0], Other Possible Types: unsigned long long [3]
    int v23;  // [sp-0x198]
    unsigned long long v24;  // [sp-0x188]
    unsigned long long v25;  // [sp-0x180]
    unsigned long long v26;  // [sp-0x178]
    unsigned long long v27;  // [sp-0x170]
    unsigned long v28;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x160]
    unsigned long long v30;  // [sp-0x150]
    unsigned long long v31;  // [sp-0x148]
    unsigned long long v32;  // [sp-0x140]
    struct_4 *v33;  // [sp-0x138]
    void* v34;  // [sp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v35;  // [sp-0x128]
    void* v36;  // [sp-0x120], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v37;  // [sp-0x118]
    unsigned long v38;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v39;  // [sp-0x108]
    unsigned long long v40;  // [sp-0x100]
    char v41;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v42;  // [sp-0xf0]
    unsigned long long v43;  // [sp-0xe8]
    unsigned long long v44;  // [sp-0xe0]
    unsigned long long v45;  // [sp-0xd8]
    unsigned long long v46;  // [sp-0xd0]
    unsigned long long v47;  // [sp-0xc8]
    unsigned long long v48;  // [sp-0xc0]
    int v49;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v50;  // [sp-0xa8]
    int v51;  // [sp-0x98]
    int v52;  // [sp-0x88]
    unsigned long long v53;  // [sp-0x78]
    int v54;  // [sp-0x68]
    int v55;  // [sp-0x58]
    int v56;  // [sp-0x48]
    unsigned long long v57;  // [sp-0x30]
    struct_2 *v58;  // [bp+0x8]
    char v59;  // [bp+0x18]
    char v60;  // [bp+0x20]
    unsigned long v61;  // rbx
    unsigned long long v62;  // rbx
    unsigned long v63;  // rbp
    unsigned long long v64;  // r13
    unsigned long long v65;  // r13
    unsigned long long v66;  // rbx
    unsigned long long v67;  // r14
    char *v68;  // rdi
    unsigned long long v69;  // r15
    unsigned long long v70;  // r15
    struct_2 *v71;  // r14
    unsigned long long v72;  // rbx
    unsigned long long v73;  // rbx
    struct struct_0 **v75;  // r12
    unsigned long long v76;  // rcx
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rbx
    unsigned long long v81;  // r14
    unsigned long long v82;  // rbx
    unsigned int v83;  // ebp
    unsigned long long v84;  // r15
    unsigned long long v85;  // rbx
    unsigned long long v86;  // r14
    unsigned long long v87;  // r15
    unsigned long long v88;  // r15
    unsigned long long v89;  // rbx
    unsigned long long v90;  // rax
    unsigned long long v91;  // r14
    unsigned long long v92;  // rbp
    char *v93;  // rdi
    unsigned long long v94;  // rbx
    unsigned long long v95;  // rbx
    unsigned long long v96;  // rbx
    unsigned long long v97;  // r15
    unsigned long long v98;  // r14
    unsigned long long v99;  // r15
    char *v100;  // rax
    char *v101;  // rdi
    unsigned long long v102;  // rbx
    struct_5 *v104;  // rax
    char *v105;  // rcx
    struct_3 *v106;  // rcx
    unsigned long long v107;  // rbx
    unsigned long long v108[3];  // r12
    unsigned long long v109;  // rax
    void* v110;  // r15
    unsigned long v111;  // r14
    void* v112;  // rbp
    unsigned long long v113;  // r15
    struct_4 *v114;  // rax
    struct_3 *v115;  // rax
    struct_4 *v116;  // rbx
    unsigned long long v117;  // rdx
    uint128_t v118[4];  // rax
    unsigned long long v119;  // rax
    unsigned long long v120;  // r14
    int v121;  // xmm1
    int v122;  // xmm2
    int v123;  // xmm3
    int v124;  // xmm0
    int v125;  // xmm1
    int v126;  // xmm2
    int v127;  // xmm0
    unsigned long long v128;  // rax
    struct_3 *v129;  // rax
    struct_3 *v130;  // rax

    v57 = v61;
    a4 = a4;
    v10 = a3;
    v11 = a2->field_0;
    v12 = a2->field_8;
    v5 = a2->field_18;
    v8 = a2->field_20;
    v27 = a2->field_28;
    v4 = a2->field_30;
    v7 = a2->field_38;
    v26 = a2->field_40;
    v3 = a2->field_48;
    v6 = a2->field_50;
    v25 = a2->field_58;
    v62 = a2->field_70;
    v2 = v62;
    *((uint128_t *)&v1) = a2->field_60;
    v63 = a5[2];
    v30 = a2->field_10;
    if (v62 < v63)
    {
        v64 = v63 + 0x2800;
        v65 = v64 - v62;
        if (v64 > v62)
        {
            if ((long long)v1 - v62 < v65)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v1, v62, v65);
                v66 = v2;
            }
            v67 = (long long)(&v1)[8];
            v68 = v67 + v66;
            if (v65 >= 2)
            {
                memset(v68, 0, v65 - 1);
                v66 = v66 + v65 - 1;
                v68 = v67 + v66;
            }
            *(v68) = 0;
            v64 = v66 + 1;
        }
        v62 = v64;
        v2 = v62;
    }
    v2 = v2;
    v69 = v62;
    v70 = v69 - v63;
    if (v69 < v63)
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    v71 = v58;
    v72 = (long long)(&v1)[8];
    v22 = &a5[0];
    memcpy(v72, v22->field_8, v63);
    v0 = v59;
    v73 = v72 + v63;
    v9 = a4;
    v32 = a4 >> 1;
    v75 = v71->field_8->field_18;
    v31 = v70;
    while (true)
    {
        if (v75(v71->field_0, v73, v70, v76))
        {
            if ((char)::0x517060::std::io::error::Error::kind::hb2ff5fa058639b3d(v77) == 35)
            {
                ::0x517630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(v77);
                continue;
            }
            v49 = v77;
            v13 = 0;
            v14 = 1;
            v15 = 0;
            v40 = 32;
            v41 = 3;
            v34 = 0;
            v36 = 0;
            v38 = &v13;
            v39 = &g_594b28;
            if ((char)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739(&v49, &v34))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v104 = __rust_alloc(32, 8);
            if (!v104)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v104->field_0 = v13;
            v104->field_8 = v14;
            v104->field_10 = v15;
            v104->field_18 = 2;
            ::0x517630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(v49);
            v106 = a0;
            v106->field_0 = v104;
            *((char **)&v106->field_8) = &g_594ee8;
            if ((long long)v1)
                __rust_dealloc((long long)(&v1)[8]);
            v107 = v5;
            if (!(!v3))
                goto LABEL_519d85;
            goto LABEL_519d99;
        }
        if (v77)
        {
            v78 = v70;
            v70 = v78 - v77;
            if (v78 < v77)
            {
                goto LABEL_51a488;
            }
            else
            {
                v73 += v77;
                continue;
            }
        }
        if (v70)
            break;
        v79 = v2;
        if (v10 == 1 && v79 < v9)
        {
            if (v32 <= v79)
                v9 = v9;
            v86 = v9;
            v87 = v86;
            v88 = v87 - v79;
            if (v87 > v79)
            {
                if ((long long)v1 - v79 < v88)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v1, v79, v88);
                    v89 = v2;
                }
                v91 = v89;
                v92 = (long long)(&v1)[8];
                v93 = v91 + v92;
                if (v88 >= 2)
                {
                    memset(v93, 0, v88 - 1);
                    v91 = v91 + v88 - 1;
                    v93 = v92 + v91;
                }
                *(v93) = 0;
                v86 = v91 + 1;
            }
            v2 = v86;
            v97 = v2;
            v70 = v97 - v79;
            if (v97 < v79)
            {
                goto LABEL_51a488;
            }
            else
            {
                v73 = v79 + (long long)(&v1)[8];
                continue;
            }
        }
        v81 = (long long)(&v1)[8];
        v82 = v79 + v81;
        v83 = v0;
        v84 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE(v83, v81, v82, v76);
        if (v84)
            v29 = v77 - v81;
        v90 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE(v83, v81, v85, v76);
        if (v90 == 1)
        {
            if (!v84)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v102 = v29 + 1;
            v10 = v90 | -0x100 | 1;
            v22[0] = v22;
            goto LABEL_519ea2;
            goto LABEL_519ea2;
        }
        v94 = v2;
        if (v94 <= -10241)
        {
            if ((long long)v1 - v94 <= 10239)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v1, v94, 0x2800);
                v96 = v2;
            }
            v98 = v96;
            memset((long long)(&v1)[8] + v98, 0, 0x2800);
        }
        v2 = v95 + 0x2800;
        v99 = v2;
        v70 = v99 - v94;
        if (v99 >= v94)
            v73 = v94 + (long long)(&v1)[8];
        else
            goto LABEL_51a488;
    }
    v2 = v2;
    v70 = v31;
    if (v70 != v70)
    {
        v100 = v2 - v70;
        v101 = v100 + 1;
        if (v101 >= v2)
            goto LABEL_51a49a;
        v105 = (long long)(&v1)[8];
        if (*((char *)(v105 + v101)) != v0)
        {
            if (v2 >= v70)
            {
                *((char *)(v105 + v100)) = v0;
                v70 -= 1;
            }
            else
            {
LABEL_51a49a:
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
        }
        if (v2 < v70)
            goto LABEL_51a488;
    }
    v102 = v2 - v70;
    v10 = 0;
    v22[0] = v22;
LABEL_519ea2:
    v108 = v22;
    v28 = v102;
    v108[2] = 0;
    if (v28 <= v2)
    {
        v109 = (long long)(&v1)[8];
        v110 = v109 + v28;
        v9 = v109;
        v111 = v109 + v2 - v110;
        if (v108[0] >= v111)
        {
            v112 = 0;
        }
        else
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(v108, 0, v111);
            v108 = v22;
            v112 = v108[2];
        }
        memcpy(v108[1] + v112, v110, v111);
        v108[2] = v112 + v111;
        if (v28)
        {
            v113 = (long long)v1;
            v34 = v5;
            v35 = v8;
            v36 = v27;
            v37 = v11;
            v38 = v12;
            v39 = v30;
            v46 = &v28;
            v40 = v4;
            v41 = v7;
            v42 = v26;
            v43 = v3;
            v44 = v6;
            v45 = v25;
            v47 = &v59;
            v48 = *((long long *)&v60);
            v114 = __rust_alloc(120, 8);
            if (!v114)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v116 = v114;
            v114->field_0 = v113;
            v114->field_8 = v9;
            v114->field_10 = v2;
            v33 = v114;
            *((int128_t *)&v56) = *((int128_t *)&v38);
            *((int128_t *)&v55) = *((int128_t *)&v36);
            *((int128_t *)&v54) = *((int128_t *)&v34);
            v24 = (long long)(&v56)[8];
            *((int128_t *)&v23) = (int128_t)(&v55)[8];
            v117 = v28;
            if (v117 > v2)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v13, v9, v117);
            if (v13)
            {
                v13 = 8;
                v14 = v14;
                v15 = v15;
                v118 = __rust_alloc(64, 8);
                if (!v118)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v124 = *((int128_t *)&v13);
                v125 = *((int128_t *)&v15);
                v126 = *((int128_t *)&v17);
                v118[3] = *((int128_t *)&v19);
                *((void*)&v118[2]) = v126;
                *((void*)&v118[1]) = v125;
                *((void*)&v118[0]) = v124;
                if ((long long)v23)
                    __rust_dealloc((long long)(&v23)[8]);
                if (v5)
                    __rust_dealloc(v8);
                if (v4)
                    __rust_dealloc(v7);
                if (v3)
                    __rust_dealloc(v6);
                v120 = &g_594d38;
                goto LABEL_51a313;
            }
            else
            {
                v13 = v5;
                v14 = v8;
                v15 = v27;
                v16 = v4;
                v17 = v7;
                v18 = v26;
                v19 = v3;
                v20 = v6;
                v21 = v25;
                uu_sort::chunks::parse_lines::h3cf32a0aa5cf801b(v14, v15, &v23, &v13, *((int *)&v59), v48);
                v119 = (long long)v23;
                v118 = (long long)(&v23)[8];
                v120 = v24;
                v121 = *((int128_t *)&v15);
                v122 = *((int128_t *)&v17);
                v123 = *((int128_t *)&v19);
                *((int128_t *)&v49) = *((int128_t *)&v13);
                v50 = v121;
                v51 = v122;
                v52 = v123;
                v53 = v21;
                if (v119 != 0x8000000000000000)
                {
                    v116->field_70 = v53;
                    v127 = (int128_t)v49;
                    *((void*)&v116->field_60) = v52;
                    *((void*)&v116->field_50) = v51;
                    *((void*)&v116->field_40) = v50;
                    *((void*)&v116->field_30) = v127;
                    v116->field_18 = v119;
                    v116->field_20 = v118;
                    v116->field_28 = v120;
                    v128 = std::sync::mpmc::Sender$LT$T$GT$::send::h35e018604c6f7ac0(a1, v116, v77);
                    if (!v128)
                    {
                        v129 = a0;
                        v129->field_8 = v10;
                        v129->field_0 = 0;
                        return a0;
                    }
                    v34 = v128;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                goto LABEL_51a313;
            }
        }
        v115 = a0;
        v115->field_8 = v10;
        v115->field_0 = 0;
        v107 = v5;
        if ((long long)v1)
            __rust_dealloc(v9);
        if (v3)
        {
LABEL_519d85:
            __rust_dealloc(v6);
        }
LABEL_519d99:
        if (v4)
            __rust_dealloc(v7);
        if (v107)
            __rust_dealloc(v8);
        if (!v11)
            return a0;
        __rust_dealloc(v12);
    }
LABEL_51a488:
    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
LABEL_51a313:
    if (v116->field_0)
        __rust_dealloc(v116->field_8);
    __rust_dealloc(v116);
    v130 = a0;
    v130->field_0 = v118;
    *((unsigned long long *)&v130->field_8) = v120;
    return a0;
}
