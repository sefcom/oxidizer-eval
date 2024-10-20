long long uu_sort::chunks::read::h01048c63dc3a6d36(struct_1 *a0, unsigned long long a1, struct_3 *a2, unsigned long a3, unsigned long long a4, unsigned long long a5[3])
{
    char v0;  // [sp-0x269]
    int v1;  // [sp-0x268]
    unsigned long long v2;  // [sp-0x258]
    struct_1 *v3;  // [bp-0x248]
    unsigned long long v4;  // [sp-0x240]
    unsigned long long v5;  // [sp-0x238]
    unsigned long long v6;  // [sp-0x230]
    unsigned long long v7;  // [sp-0x228]
    unsigned long long v8;  // [sp-0x220]
    unsigned long long v9;  // [sp-0x218]
    unsigned long long v10;  // [sp-0x210]
    unsigned long long v11;  // [sp-0x208]
    unsigned long v12;  // [bp-0x200], Other Possible Types: unsigned int
    unsigned long long v13;  // [sp-0x1f8]
    unsigned long long v14;  // [sp-0x1f0]
    void* v15;  // [bp-0x1e8], Other Possible Types: unsigned long, char
    unsigned long v16;  // [sp-0x1e0], Other Possible Types: unsigned long long
    void* v17;  // [sp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v18;  // [sp-0x1d0]
    unsigned long v19;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x1c0]
    unsigned long v21;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x1b0]
    unsigned long long v23;  // [sp-0x1a8]
    struct_2 *v24;  // [sp-0x1a0], Other Possible Types: unsigned long long [3]
    int v25;  // [sp-0x198]
    unsigned long long v26;  // [sp-0x188]
    unsigned long long v27;  // [sp-0x180]
    unsigned long long v28;  // [sp-0x178]
    unsigned long long v29;  // [sp-0x170]
    unsigned long v30;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x160]
    unsigned long long v32;  // [sp-0x150]
    unsigned long long v33;  // [sp-0x148]
    unsigned long long v34;  // [sp-0x140]
    struct_4 *v35;  // [sp-0x138]
    void* v36;  // [sp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v37;  // [sp-0x128]
    void* v38;  // [sp-0x120], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v39;  // [sp-0x118]
    unsigned long v40;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v41;  // [sp-0x108]
    unsigned long long v42;  // [sp-0x100]
    char v43;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v44;  // [sp-0xf0]
    unsigned long long v45;  // [sp-0xe8]
    unsigned long long v46;  // [sp-0xe0]
    unsigned long long v47;  // [sp-0xd8]
    unsigned long long v48;  // [sp-0xd0]
    unsigned long long v49;  // [sp-0xc8]
    unsigned long long v50;  // [sp-0xc0]
    int v51;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v52;  // [sp-0xa8]
    int v53;  // [sp-0x98]
    int v54;  // [sp-0x88]
    unsigned long long v55;  // [sp-0x78]
    int v56;  // [sp-0x68]
    int v57;  // [sp-0x58]
    int v58;  // [sp-0x48]
    unsigned long long v59;  // [sp-0x30]
    unsigned long v60;  // [bp+0x8]
    char v61;  // [bp+0x18]
    char v62;  // [bp+0x20]
    unsigned long v63;  // rbx
    unsigned long long v64;  // rbx
    unsigned long v65;  // r15
    unsigned long long v66;  // r13
    unsigned long long v67;  // r13
    unsigned long long v68;  // rbx
    unsigned long long v69;  // r14
    char *v70;  // rdi
    unsigned long long v71;  // rbx
    unsigned long long v72;  // r14
    unsigned long long v73;  // r14
    unsigned long long v75;  // rbx
    unsigned long long v76;  // rbx
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rbx
    unsigned long long v81;  // r14
    unsigned long long v82;  // rbx
    unsigned int v83;  // ebp
    unsigned long long v84;  // rcx
    unsigned long long v85;  // r15
    unsigned long long v86;  // rbx
    unsigned long long v87;  // r14
    unsigned long long v88;  // r15
    unsigned long long v89;  // r15
    unsigned long long v90;  // rbx
    unsigned long long v91;  // rax
    unsigned long long v92;  // r14
    unsigned long long v93;  // rbp
    char *v94;  // rdi
    unsigned long long v95;  // rbx
    unsigned long long v96;  // rbx
    struct_1 *v97;  // rbp
    unsigned long long v98;  // rbx
    unsigned long long v99;  // r15
    unsigned long long v100;  // r14
    unsigned long long v101;  // r15
    char *v103;  // rax
    char *v104;  // rdi
    unsigned long long v105;  // rbx
    struct_0 *v107;  // rax
    char *v108;  // rcx
    unsigned long long v110;  // rbx
    unsigned long long v111[3];  // r12
    unsigned long long v112;  // rax
    void* v113;  // r15
    unsigned long v114;  // r14
    void* v115;  // rbp
    unsigned long long v116;  // r15
    struct_4 *v117;  // rax
    struct_4 *v118;  // rbx
    unsigned long long v119;  // rdx
    uint128_t v120[4];  // rax
    unsigned long long v121;  // rax
    unsigned long long v122;  // r14
    int v123;  // xmm1
    int v124;  // xmm2
    int v125;  // xmm3
    int v126;  // xmm0
    int v127;  // xmm1
    int v128;  // xmm2
    int v129;  // xmm0
    unsigned long long v130;  // rax

    v59 = v63;
    a4 = a4;
    v12 = a3;
    a0 = a0;
    v13 = a2->field_0;
    v14 = a2->field_8;
    v6 = a2->field_18;
    v9 = a2->field_20;
    v29 = a2->field_28;
    v5 = a2->field_30;
    v8 = a2->field_38;
    v28 = a2->field_40;
    v4 = a2->field_48;
    v7 = a2->field_50;
    v27 = a2->field_58;
    v64 = a2->field_70;
    v2 = v64;
    *((uint128_t *)&v1) = a2->field_60;
    v65 = a5[2];
    v32 = a2->field_10;
    if (v64 < v65)
    {
        v66 = v65 + 0x2800;
        v67 = v66 - v64;
        if (v66 > v64)
        {
            if ((long long)v1 - v64 < v67)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v1, v64, v67);
                v68 = v2;
            }
            v69 = (long long)(&v1)[8];
            v70 = v69 + v68;
            if (v67 >= 2)
            {
                a0 = a0;
                memset(v70, 0, v67 - 1);
                v71 = v68 + v67 - 1;
                v70 = v69 + v71;
            }
            *(v70) = 0;
            v66 = v71 + 1;
        }
        v64 = v66;
        v2 = v64;
    }
    v2 = v2;
    v72 = v64;
    v73 = v72 - v65;
    if (v72 < v65)
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    v75 = (long long)(&v1)[8];
    v24 = &a5[0];
    memcpy(v75, v24->field_8, v65);
    v0 = v61;
    v76 = v75 + v65;
    v10 = a4;
    v34 = a4 >> 1;
    v11 = &g_594e98;
    v33 = v73;
    while (true)
    {
        if (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(v60, v76, v73))
        {
            if ((char)::0x517060::std::io::error::Error::kind::hb2ff5fa058639b3d(v77) == 35)
            {
                ::0x517630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(v77);
                continue;
            }
            v51 = v77;
            v15 = 0;
            v16 = 1;
            v17 = 0;
            v42 = 32;
            v43 = 3;
            v36 = 0;
            v38 = 0;
            v40 = &v15;
            v41 = &g_594b28;
            if ((char)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739(&v51, &v36))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            v107 = __rust_alloc(32, 8);
            if (!v107)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v107->field_0 = v15;
            v107->field_8 = v16;
            v107->field_10 = v17;
            v107->field_18 = 2;
            ::0x517630::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(v51);
            a0->field_0 = v107;
            *((char **)&a0->field_8) = &g_594ee8;
            if ((long long)v1)
                __rust_dealloc((long long)(&v1)[8]);
            v110 = v6;
            if (!(!v4))
                goto LABEL_518ef5;
            goto LABEL_518f09;
        }
        if (v77)
        {
            v78 = v73;
            v73 = v78 - v77;
            if (v78 < v77)
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
            v76 += v77;
            continue;
        }
        if (v73)
            break;
        v79 = v2;
        if (v12 == 1 && v79 < v10)
        {
            if (v34 <= v79)
                v10 = v10;
            v87 = v10;
            v88 = v87;
            v89 = v88 - v79;
            if (v88 > v79)
            {
                a0 = a0;
                if ((long long)v1 - v79 < v89)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v1, v79, v89);
                    v90 = v2;
                }
                v92 = v90;
                v93 = (long long)(&v1)[8];
                v94 = v92 + v93;
                if (v89 >= 2)
                {
                    memset(v94, 0, v89 - 1);
                    v92 = v92 + v89 - 1;
                    v94 = v93 + v92;
                }
                *(v94) = 0;
                v87 = v92 + 1;
            }
            v2 = v87;
            v99 = v2;
            v73 = v99 - v79;
            if (v99 < v79)
            {
                vvar_1376{stack -520} = &g_594e38;
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
            }
            v76 = v79 + (long long)(&v1)[8];
            continue;
        }
        v3 = a0;
        v81 = (long long)(&v1)[8];
        v82 = v79 + v81;
        v83 = v0;
        v85 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE(v83, v81, v82, v84);
        if (v85)
            v31 = v77 - v81;
        v91 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE(v83, v81, v86, v84);
        a0 = v3;
        if (!v91 || v91 != 1)
        {
            v95 = v2;
            if (v95 <= -10241)
            {
                if ((long long)v1 - v95 <= 10239)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(&v1, v95, 0x2800);
                    v97 = v3;
                    v98 = v2;
                }
                v100 = v98;
                memset((long long)(&v1)[8] + v100, 0, 0x2800);
            }
            v2 = v96 + 0x2800;
            v101 = v2;
            v73 = v101 - v95;
            if (v101 < v95)
            {
                v11 = &g_594e38;
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
            }
            v76 = v95 + (long long)(&v1)[8];
        }
        else
        {
            if (!v85)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v105 = v31 + 1;
            v12 = v91 | -0x100 | 1;
            v24[0] = v24;
            goto LABEL_519016;
            goto LABEL_519016;
        }
    }
    v2 = v2;
    v73 = v33;
    if (v73 != v73)
    {
        v103 = v2 - v73;
        v104 = v103 + 1;
        if (v104 >= v2)
        {
            goto LABEL_519623;
        }
        else
        {
            v108 = (long long)(&v1)[8];
            if (*((char *)(v108 + v104)) != v0)
            {
                if (v2 >= v73)
                {
                    *((char *)(v108 + v103)) = v0;
                    v73 -= 1;
                }
                else
                {
LABEL_519623:
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
            }
            if (v2 < v73)
            {
                vvar_1372{stack -520} = &g_594cd0;
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
            }
        }
    }
    v105 = v2 - v73;
    v12 = 0;
    v24[0] = v24;
LABEL_519016:
    v111 = v24;
    v30 = v105;
    v111[2] = 0;
    if (v30 > v2)
    {
        v11 = &g_594cd0;
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    }
    v112 = (long long)(&v1)[8];
    v113 = v112 + v30;
    v10 = v112;
    v114 = v112 + v2 - v113;
    v3 = a0;
    if (vvar_1277 >= v114)
    {
        v115 = 0;
    }
    else
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h683dc51e9d6b31b1(v111, 0, v114);
        v111 = v24;
        v115 = v111[2];
    }
    memcpy(v111[1] + v115, v113, v114);
    v111[2] = v115 + v114;
    if (v30)
    {
        v116 = (long long)v1;
        v36 = v6;
        v37 = v9;
        v38 = v29;
        v39 = v13;
        v40 = v14;
        v41 = v32;
        v48 = &v30;
        v42 = v5;
        v43 = v8;
        v44 = v28;
        v45 = v4;
        v46 = v7;
        v47 = v27;
        v49 = &v61;
        v50 = *((long long *)&v62);
        v117 = __rust_alloc(120, 8);
        a0 = v3;
        if (!v117)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v118 = v117;
        v117->field_0 = v116;
        v117->field_8 = v10;
        v117->field_10 = v2;
        v35 = v117;
        *((int128_t *)&v58) = *((int128_t *)&v40);
        *((int128_t *)&v57) = *((int128_t *)&v38);
        *((int128_t *)&v56) = *((int128_t *)&v36);
        v26 = (long long)(&v58)[8];
        *((int128_t *)&v25) = (int128_t)(&v57)[8];
        v119 = v30;
        if (v119 > v2)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        core::str::converts::from_utf8::ha1effb4cca6d9901(&v15, v10, v119);
        if (!v15)
        {
            v15 = v6;
            v16 = v9;
            v17 = v29;
            v18 = v5;
            v19 = v8;
            v20 = v28;
            v21 = v4;
            v22 = v7;
            v23 = v27;
            uu_sort::chunks::parse_lines::h3cf32a0aa5cf801b(v16, v17, &v25, &v15, *((int *)&v61), v50);
            v121 = (long long)v25;
            v120 = (long long)(&v25)[8];
            v122 = v26;
            v123 = *((int128_t *)&v17);
            v124 = *((int128_t *)&v19);
            v125 = *((int128_t *)&v21);
            *((int128_t *)&v51) = *((int128_t *)&v15);
            v52 = v123;
            v53 = v124;
            v54 = v125;
            v55 = v23;
            if (v121 != 0x8000000000000000)
            {
                v118->field_70 = v55;
                v129 = (int128_t)v51;
                *((void*)&v118->field_60) = v54;
                *((void*)&v118->field_50) = v53;
                *((void*)&v118->field_40) = v52;
                *((void*)&v118->field_30) = v129;
                v118->field_18 = v121;
                v118->field_20 = v120;
                v118->field_28 = v122;
                v130 = std::sync::mpmc::Sender$LT$T$GT$::send::h35e018604c6f7ac0(a1, v118, v77);
                if (!v130)
                {
                    a0->field_8 = v12;
                    a0->field_0 = 0;
                    return a0;
                }
                v36 = v130;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            goto LABEL_519498;
        }
        else
        {
            v15 = 8;
            v16 = v16;
            v17 = v17;
            v120 = __rust_alloc(64, 8);
            if (!v120)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v126 = *((int128_t *)&v15);
            v127 = *((int128_t *)&v17);
            v128 = *((int128_t *)&v19);
            v120[3] = *((int128_t *)&v21);
            *((void*)&v120[2]) = v128;
            *((void*)&v120[1]) = v127;
            *((void*)&v120[0]) = v126;
            if ((long long)v25)
                __rust_dealloc((long long)(&v25)[8]);
            if (v6)
                __rust_dealloc(v9);
            if (v5)
                __rust_dealloc(v8);
            if (v4)
                __rust_dealloc(v7);
            v122 = &g_594d38;
            goto LABEL_519498;
        }
    }
    a0 = v3;
    a0->field_8 = v12;
    a0->field_0 = 0;
    v110 = v6;
    if ((long long)v1)
        __rust_dealloc(v10);
    if (v4)
    {
LABEL_518ef5:
        __rust_dealloc(v7);
    }
LABEL_518f09:
    if (v5)
        __rust_dealloc(v8);
    if (v110)
        __rust_dealloc(v9);
    if (v13)
        __rust_dealloc(v14);
    return a0;
LABEL_519498:
    if (v118->field_0)
        __rust_dealloc(v118->field_8);
    __rust_dealloc(v118);
    a0->field_0 = v120;
    *((unsigned long long *)&a0->field_8) = v122;
    return a0;
}
