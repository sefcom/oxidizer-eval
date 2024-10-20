long long uu_sort::chunks::read::hf2997ea7d5cb1085(struct_2 *a0, unsigned long long a1, struct_8 *a2, unsigned long a3, unsigned long a4, unsigned long long a5[3])
{
    char v0;  // [sp-0x271]
    unsigned long long v1;  // [sp-0x270]
    unsigned long long v2;  // [sp-0x268]
    unsigned long long v3;  // [sp-0x260]
    int v4;  // [sp-0x258]
    unsigned long long v5;  // [sp-0x248]
    unsigned long long v6;  // [sp-0x238]
    unsigned long long v7;  // [sp-0x230]
    unsigned long long v8;  // [sp-0x228]
    unsigned long long v9;  // [sp-0x220]
    unsigned long long v10;  // [sp-0x218]
    unsigned long long v11;  // [bp-0x208], Other Possible Types: unsigned int
    unsigned long long v12;  // [sp-0x200]
    unsigned long long v13;  // [sp-0x1f8]
    void* v14;  // [bp-0x1f0], Other Possible Types: char, unsigned long
    unsigned long v15;  // [sp-0x1e8], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x1e0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x1d8]
    unsigned long v18;  // [sp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x1c8]
    unsigned long v20;  // [sp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x1b8]
    unsigned long long v22;  // [sp-0x1b0]
    int v23;  // [sp-0x1a8]
    unsigned long long v24;  // [sp-0x198]
    unsigned long long v25;  // [sp-0x190]
    unsigned long long v26;  // [sp-0x188]
    unsigned long long v27;  // [sp-0x180]
    unsigned long long v28;  // [sp-0x178]
    struct_3 *v29;  // [sp-0x170]
    unsigned long v30;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v31;  // [bp-0x160], Other Possible Types: unsigned long, unsigned long long
    struct_5 *v32;  // [sp-0x158], Other Possible Types: unsigned long long
    void* v33;  // [sp-0x150], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v34;  // [sp-0x148]
    unsigned long v35;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x138]
    unsigned long long v37;  // [sp-0x130]
    char v38;  // [bp-0x128], Other Possible Types: unsigned long
    unsigned long long v39;  // [sp-0x120]
    unsigned long long v40;  // [sp-0x118]
    unsigned long long v41;  // [sp-0x110]
    unsigned long long v42;  // [sp-0x108]
    unsigned long long v43;  // [sp-0x100]
    unsigned long long v44;  // [sp-0xf8]
    unsigned long long v45;  // [sp-0xf0]
    unsigned long long v46;  // [sp-0xe0]
    unsigned long long v47[2];  // [sp-0xd8]
    unsigned long long v48;  // [sp-0xd0]
    struct_0 *v49;  // [sp-0xc0]
    int v50;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v51;  // [sp-0xa8]
    int v52;  // [sp-0x98]
    int v53;  // [sp-0x88]
    unsigned long long v54;  // [sp-0x78]
    int v55;  // [sp-0x68]
    int v56;  // [sp-0x58]
    int v57;  // [sp-0x48]
    unsigned long long v58;  // [sp-0x28]
    unsigned long long v59;  // [sp-0x10]
    struct_7 *v60;  // [bp+0x8]
    char v61;  // [bp+0x10]
    char v62;  // [bp+0x18]
    char v63;  // [bp+0x20]
    unsigned long v64;  // r15
    unsigned long v65;  // r12
    unsigned long long v66;  // r15
    unsigned long v67;  // rbx
    unsigned long long v68;  // 4096
    unsigned long long v69;  // r12
    unsigned long long v70;  // r12
    unsigned long long v71;  // r15
    unsigned long long v72;  // r14
    char *v73;  // rdi
    unsigned long long v75;  // rbp
    unsigned long long v76;  // rbp
    struct struct_4 **v77;  // r14
    unsigned long long v78;  // r13
    unsigned long long v79;  // r13
    unsigned long long v80;  // rcx
    unsigned long long v81;  // r12
    struct_7 *v82;  // rax
    unsigned long long v83;  // rdx
    unsigned long long v84;  // rbx
    struct_7 *v85;  // rax
    unsigned long long v86;  // r15
    struct_6 *v87;  // r14
    unsigned long long v99;  // rcx
    unsigned long long v100;  // r12
    unsigned long long v101;  // r12
    unsigned long long v102;  // r13
    unsigned int v103;  // ebp
    unsigned long long v104;  // rax
    unsigned long long v105;  // r13
    unsigned long long v106;  // rax
    unsigned long long v107;  // r13
    unsigned long long v108;  // r13
    unsigned long long v109;  // r13
    unsigned long long v110;  // rbp
    unsigned long long v111;  // r12
    unsigned long long v113;  // rbp
    char *v114;  // rbx
    char *v115;  // rdi
    char *v116;  // r13
    unsigned long long v117[2];  // rcx
    void* v118;  // rsi
    unsigned long long v119;  // rax
    struct_5 *v120;  // r12
    unsigned long long v121;  // rbp
    struct struct_1 **v122;  // rax
    unsigned long long v123;  // rsi
    struct_7 *v124;  // rax
    unsigned long long v125;  // rbx
    unsigned long long v126;  // rax
    unsigned long long v128[3];  // r14
    unsigned long long v129;  // rax
    void* v130;  // r12
    unsigned long v131;  // r15
    void* v132;  // r13
    struct_2 *v133;  // rax
    unsigned long long v134;  // r15
    struct_0 *v135;  // rax
    struct_2 *v136;  // rax
    struct_0 *v137;  // rbx
    unsigned long long v138;  // rdx
    uint128_t v139[4];  // rax
    unsigned long long v140;  // rax
    unsigned long long v141;  // r15
    int v142;  // xmm1
    int v143;  // xmm2
    int v144;  // xmm3
    int v145;  // xmm0
    int v146;  // xmm1
    int v147;  // xmm2
    int v148;  // xmm0
    unsigned long long v149;  // rax

    v59 = v64;
    v58 = v65;
    v13 = a2->field_0;
    v12 = a2->field_8;
    v46 = a2->field_10;
    v28 = a2->field_28;
    v6 = a2->field_38;
    v27 = a2->field_40;
    v7 = a2->field_50;
    v26 = a2->field_58;
    v66 = a2->field_70;
    v5 = v66;
    *((uint128_t *)&v4) = a2->field_60;
    v67 = a5[2];
    v9 = a4;
    v3 = a2->field_18;
    v8 = a2->field_20;
    v2 = a2->field_30;
    v1 = a2->field_48;
    if (v66 < v67)
    {
        v69 = v67 + 0x2800;
        v70 = v69 - v66;
        if (v69 > v66)
        {
            if ((long long)v4 - v66 < v70)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v4, v66, v70);
                v71 = v5;
            }
            v72 = (long long)(&v4)[8];
            v73 = v72 + v71;
            if (v70 >= 2)
            {
                memset(v73, 0, v70 - 1);
                v71 = v71 + v70 - 1;
                v73 = v72 + v71;
            }
            *(v73) = 0;
            v69 = v71 + 1;
        }
        v66 = v69;
        v5 = v66;
        v68 = v9;
    }
    v5 = v5;
    v75 = v66;
    v76 = v75 - v67;
    if (v75 < v67)
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    v77 = *((long long *)&v61);
    v78 = (long long)(&v4)[8];
    v29 = &a5[0];
    memcpy(v78, v29->field_8, v67);
    v0 = v62;
    v79 = v78 + v67;
    v11 = v68 >> 1;
    v47[0] = *(v77);
    v25 = &g_594e50;
    v10 = &g_594e98;
LABEL_51b79c:
    v48 = v76;
    v48 = v48;
    while (true)
    {
        v81 = v48;
        v84 = v83;
        if (v82->field_8->field_18(v60->field_0, v79, v81, v80))
        {
            if ((char)::0x517060::std::io::error::Error::kind::hb2ff5fa058639b3d(v84) != 35)
            {
                v50 = v84;
                v14 = 0;
                v15 = 1;
                v16 = 0;
                v37 = 32;
                v38 = 3;
                v31 = 0;
                v33 = 0;
                v35 = &v14;
                v36 = &g_594b28;
                if ((char)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739(&v50, &v31))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v120 = __rust_alloc(32, 8);
                if (!v120)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v120->field_0 = v14;
                v120->field_8 = v15;
                v120->field_10 = v16;
                v120->field_18 = 2;
                ::0x517630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(v50);
                v121 = &g_594ee8;
                goto LABEL_51bbbb;
            }
            else
            {
                ::0x517630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(v84);
                continue;
            }
            goto LABEL_51bbbb;
        }
        v85 = v60;
        v86 = v85->field_0;
        v87 = v85->field_8;
        if (a3 == 1)
            continue;
        if (v83)
        {
            v100 = v81 - v84;
            if (v81 >= v84)
            {
                v79 += v84;
                continue;
            }
            goto LABEL_51c261;
        }
        if (v81)
            break;
        v5 = v5;
        v5 = v5;
        v101 = (long long)(&v4)[8];
        v102 = v5 + v101;
        v103 = v0;
        v104 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE(v103, v101, v102, v99);
        if (v104)
            v84 = v83 - v101;
        v106 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE(v103, v101, v105, v99);
        if (v106 == 1)
        {
            if (v104)
            {
                v125 = v84 + 1;
                v11 = v106 | -0x100 | 1;
                goto LABEL_51bcb0;
            }
            else
            {
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            }
        }
        v107 = v5;
        if (v107 <= -10241)
        {
            if ((long long)v4 - v107 <= 10239)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v4, v107, 0x2800);
                v109 = v5;
            }
            v110 = v109;
            memset((long long)(&v4)[8] + v110, 0, 0x2800);
        }
        v5 = v108 + 0x2800;
        v111 = v5;
        if (v111 < v107)
        {
            v126 = &g_594e38;
            goto LABEL_51c25c;
        }
        else
        {
            v79 = v107 + (long long)(&v4)[8];
        }
    }
    v76 = v48;
    if (v76 == v81)
    {
LABEL_51ba34:
        v117 = v47;
        v118 = v117[0];
        if (!(v118 == v117[1]) && !((v117[0] = (unsigned long long)(v118 + 24), uu_sort::open::h34a29c8718a6934d(&v31, v118), v119 = v31, v119 == 2)))
        {
            v120 = v32;
            v121 = v33;
            if (!v119)
            {
                if (v87->field_0)
                    v122(v86, v123);
                if (v87->field_8)
                    __rust_dealloc(v86);
                v124 = v60;
                v124->field_0 = v120;
                v124->field_8 = v121;
                goto LABEL_51b79c;
            }
LABEL_51bbbb:
            v133 = a0;
            v133->field_0 = v120;
            a0 = v133;
            *((unsigned long long *)&a0->field_8) = v121;
            if ((long long)v4)
                __rust_dealloc((long long)(&v4)[8]);
            if (v1)
                __rust_dealloc(v7);
            if (v2)
                __rust_dealloc(v6);
            if (v3)
                __rust_dealloc(v8);
            if (!v13)
                return a0;
        }
        else
        {
            v5 = v5;
            v125 = v5 - v76;
            v11 = 0;
LABEL_51bcb0:
            v30 = v125;
            v128 = v29;
            v128[2] = 0;
            if (v30 > v5)
            {
                v126 = &g_594cd0;
                goto LABEL_51c25c;
            }
            else
            {
                v129 = (long long)(&v4)[8];
                v130 = v129 + v30;
                v9 = v129;
                v131 = v129 + v5 - v130;
                if (v128[0] < v131)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(v128, 0, v131);
                    v128 = v29;
                    v132 = v128[2];
                }
                else
                {
                    v132 = 0;
                }
                memcpy(v128[1] + v132, v130, v131);
                v128[2] = v132 + v131;
                if (v30)
                {
                    v134 = (long long)v4;
                    v31 = v3;
                    v32 = v8;
                    v33 = v28;
                    v34 = v13;
                    v35 = v12;
                    v36 = v46;
                    v43 = &v30;
                    v37 = v2;
                    v38 = v6;
                    v39 = v27;
                    v40 = v1;
                    v41 = v7;
                    v42 = v26;
                    v44 = &v62;
                    v45 = *((long long *)&v63);
                    v135 = __rust_alloc(120, 8);
                    if (!v135)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    v137 = v135;
                    v135->field_0 = v134;
                    v135->field_8 = v9;
                    v135->field_10 = v5;
                    v49 = v135;
                    *((int128_t *)&v57) = *((int128_t *)&v35);
                    *((int128_t *)&v56) = *((int128_t *)&v33);
                    *((int128_t *)&v55) = *((int128_t *)&v31);
                    v24 = (long long)(&v57)[8];
                    *((int128_t *)&v23) = (int128_t)(&v56)[8];
                    v138 = v30;
                    if (v138 > v5)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    core::str::converts::from_utf8::ha1effb4cca6d9901(&v14, v9, v138);
                    if (!v14)
                    {
                        v14 = v3;
                        v15 = v8;
                        v16 = v28;
                        v17 = v2;
                        v18 = v6;
                        v19 = v27;
                        v20 = v1;
                        v21 = v7;
                        v22 = v26;
                        uu_sort::chunks::parse_lines::h3cf32a0aa5cf801b(v15, v16, &v23, &v14, *((int *)&v62), v45);
                        v140 = (long long)v23;
                        v139 = (long long)(&v23)[8];
                        v141 = v24;
                        v142 = *((int128_t *)&v16);
                        v143 = *((int128_t *)&v18);
                        v144 = *((int128_t *)&v20);
                        *((int128_t *)&v50) = *((int128_t *)&v14);
                        v51 = v142;
                        v52 = v143;
                        v53 = v144;
                        v54 = v22;
                        a0 = a0;
                        if (v140 != 0x8000000000000000)
                        {
                            v137->field_70 = v54;
                            v148 = (int128_t)v50;
                            *((void*)&v137->field_60) = v53;
                            *((void*)&v137->field_50) = v52;
                            *((void*)&v137->field_40) = v51;
                            *((void*)&v137->field_30) = v148;
                            v137->field_18 = v140;
                            v137->field_20 = v139;
                            v137->field_28 = v141;
                            v149 = std::sync::mpmc::Sender$LT$T$GT$::send::h35e018604c6f7ac0(a1, v137, v83);
                            if (!v149)
                            {
                                a0->field_8 = v11;
                                a0->field_0 = 0;
                                return a0;
                            }
                            v31 = v149;
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                    }
                    else
                    {
                        v14 = 8;
                        v15 = v15;
                        v16 = v16;
                        v139 = __rust_alloc(64, 8);
                        if (!v139)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        v145 = *((int128_t *)&v14);
                        v146 = *((int128_t *)&v16);
                        v147 = *((int128_t *)&v18);
                        v139[3] = *((int128_t *)&v20);
                        *((void*)&v139[2]) = v147;
                        *((void*)&v139[1]) = v146;
                        *((void*)&v139[0]) = v145;
                        if ((long long)v23)
                            __rust_dealloc((long long)(&v23)[8]);
                        if (v3)
                            __rust_dealloc(v8);
                        if (v2)
                            __rust_dealloc(v6);
                        if (v1)
                            __rust_dealloc(v7);
                        v141 = &g_594d38;
                    }
                    if (v137->field_0)
                        __rust_dealloc(v137->field_8);
                    __rust_dealloc(v137);
                    a0->field_0 = v139;
                    *((unsigned long long *)&a0->field_8) = v141;
                    return a0;
                }
                else
                {
                    v136 = a0;
                    v136->field_8 = v11;
                    v136->field_0 = 0;
                    if ((long long)v4)
                        __rust_dealloc(v9);
                    if (v1)
                        __rust_dealloc(v7);
                    if (v2)
                        __rust_dealloc(v6);
                    if (v3)
                        __rust_dealloc(v8);
                    a0 = a0;
                    if (!v13)
                        return a0;
                }
            }
        }
        __rust_dealloc(v12);
        return a0;
    }
    else
    {
        v113 = v5;
        v114 = v113 - v81;
        v115 = v114 + 1;
        if (v115 >= v113)
        {
LABEL_51c2e4:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v116 = (long long)(&v4)[8];
        if (*((char *)(v116 + v115)) != v0)
        {
            if (v113 < v81)
            {
                v25 = &g_594e68;
                goto LABEL_51c2e4;
            }
            else
            {
                *((char *)(v116 + v114)) = v0;
                v81 -= 1;
                v114 = v113 - v81;
            }
        }
        if (v81 <= v113)
        {
            v79 = v116 + v114;
            goto LABEL_51ba34;
        }
        else
        {
            v126 = &g_594e80;
        }
LABEL_51c25c:
        v10 = v126;
LABEL_51c261:
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    }
}
