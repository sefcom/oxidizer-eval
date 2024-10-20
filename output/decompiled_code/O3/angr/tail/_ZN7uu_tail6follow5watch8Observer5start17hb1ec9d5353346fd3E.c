long long uu_tail::follow::watch::Observer::start::hb1ec9d5353346fd3(struct_1 *a0, struct_5 *a1)
{
    unsigned long long v0;  // [sp-0x1b0]
    unsigned int v1;  // [bp-0x1a8], Other Possible Types: unsigned long
    unsigned int v2;  // [bp-0x1a0], Other Possible Types: unsigned long
    int v3;  // [bp-0x198], Other Possible Types: char, unsigned long, unsigned long long
    struct_0 *v4;  // [sp-0x190]
    int v5;  // [sp-0x188], Other Possible Types: unsigned long long, unsigned long
    struct_0 *v6;  // [sp-0x180], Other Possible Types: struct_3 *
    int v7;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x168]
    char v11;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x150], Other Possible Types: unsigned long long
    char v13;  // [bp-0x148]
    char v14;  // [bp-0x140]
    int v15;  // [sp-0x138]
    char v16;  // [bp-0x130]
    unsigned long v17;  // [sp-0x128]
    unsigned long long v18;  // [sp-0x110]
    struct_3 *v19;  // [sp-0x108]
    unsigned long v35;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned int v36;  // [sp-0x68]
    char v37;  // [sp-0x60]
    unsigned long long v38;  // [sp-0x58]
    struct_0 *v39;  // [sp-0x50]
    unsigned long long v43;  // rbp
    struct_0 *v44;  // r15
    unsigned long long v45;  // cc_dep1
    unsigned long v46;  // cc_ndep
    int v47;  // xmm0
    struct_6 *v48;  // rax
    int v49;  // xmm0
    int v50;  // xmm1
    unsigned long v51;  // cc_ndep
    unsigned long v52;  // cc_ndep
    struct_6 *v54;  // r12
    int v55;  // xmm0
    unsigned long long v71[3];  // rax
    unsigned long long v73;  // rdx
    unsigned long long v86;  // rax
    unsigned long long v87;  // rcx
    unsigned long long v88;  // r14
    void* v89;  // rbx
    struct_1 *v90;  // 4096
    struct_4 *v92;  // rbp
    void* v93;  // r14
    unsigned long v94;  // r15
    unsigned long long v95;  // r12
    struct_1 *v96;  // rbp
    unsigned long long v97;  // r15
    unsigned long long v98;  // r12
    unsigned long long v99;  // rbp
    unsigned long long v100;  // r12
    unsigned long long v101;  // r15
    unsigned long long v102;  // rcx
    unsigned long long v103;  // rax
    unsigned long long *v104;  // r14
    unsigned long long *v105;  // rax
    unsigned long long *v106;  // rcx
    unsigned long long v107[3];  // rax
    int v109;  // xmm0

    if (a1->field_4c == 2)
    {
LABEL_4c2060:
        return 0;
    }
    std::sync::mpmc::channel::h58c59d3ba2ba7038(&v3);
    v43 = v3;
    v44 = v4;
    v38 = v43;
    v39 = v44;
    v18 = v5;
    v19 = v6;
    v35 = a1->field_30;
    v36 = a1->field_38;
    v37 = 1;
    if ((char)vvar_1128)
    {
        a0->field_8d = 1;
        v1 = 0;
        v2 = 0;
        notify::poll::PollWatcher::new::h63a8614fc3a4aa4b(&v11, v43, v44, &v35);
        if (*((int *)&v11) != 6)
        {
            v9 = v17;
            v49 = *((int128_t *)&v11);
            v50 = *((int128_t *)&v13);
            v7 = v15;
            v5 = v50;
            v3 = v49;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v7 = *((long long *)&v16);
        v47 = *((int128_t *)&v12);
        *((int128_t *)&v5) = *((int128_t *)&v14);
        v3 = v47;
        v48 = __rust_alloc(40, 8);
        if (!v48)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v54 = v48;
        v54->field_20 = v7;
        v55 = (int128_t)v3;
        *((int128_t *)&v54->field_10) = (int128_t)v5;
        *((void*)&v54->field_0) = v55;
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..watch..WatcherRx$GT$$GT$::h0e16017b9dad189e(a0);
        a0->field_0 = v18;
        a0->field_8 = v19;
        a0->field_10 = v54;
        a0->field_18 = &g_55cbb8;
        v86 = a1->field_28;
        if (v86)
        {
            v87 = a1->field_20;
            v0 = &a0->field_20;
            v88 = v86 * 48;
            v89 = 0;
            v1 = v87;
            v2 = v88;
            do
            {
                v92 = v90;
                if (*((long long *)(24 + v87 + (char *)v89)) != 0x8000000000000000)
                {
                    v93 = *((long long *)(32 + v87 + (char *)v89));
                    v94 = *((long long *)(40 + v87 + (char *)v89));
                    if (!v94)
                    {
                        v95 = 1;
LABEL_4c1ed5:
                        memcpy(v95, v93, v94);
                        if (!(char)std::path::Path::is_absolute::h3431a23d91045560(v95, v94))
                        {
                            std::env::current_dir::h8e5fbaefdf378c8c(&v3);
                            v99 = v3;
                            if (v99 != 0x8000000000000000)
                            {
                                std::path::Path::_join::h609728e54bd034cb(&v11, v6, v5, v95, v94);
                                if (v94)
                                    __rust_dealloc(v95);
                                v94 = (&v12)[1];
                                if (v99)
                                    __rust_dealloc(v6);
                                v97 = v11;
                                v98 = v12;
                            }
                            else
                            {
                                v3 = 0x8000000000000000;
                                v6 = v4;
                                v107 = __rust_alloc(32, 8);
                                if (!v107)
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                v71 = v107;
                                v109 = *((int128_t *)&v3);
                                *((int128_t *)&v107[2]) = *((int128_t *)&v5);
                                *((void*)&v107[0]) = v109;
                                if (!v94)
                                    return v71;
                                goto LABEL_4c20e0;
                            }
                        }
                        v100 = v98;
                        v101 = v97;
                        v92 = v96;
                        if (!(char)uu_tail::paths::path_is_tailable::ha9fa7a9cf403217f(v100, v94))
                        {
                            v103 = std::path::Path::parent::h65c9a340a6266f2d(v100, v94, v73, v102);
                            if (!v103 || !(char)std::path::Path::is_dir::h9ac0db933706da51(v103, v73))
                            {
                                v104 = v92->field_30;
                                if (v104 == v92->field_20)
                                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc0495a57074c1bcc(v0);
                                v105 = v92->field_28;
                                v106 = v104 * 3;
                                *((unsigned long long *)((char *)v105 + 0x8 * v106)) = v101;
                                *((unsigned long long *)(8 + (char *)v105 + 0x8 * v106)) = v100;
                                *((unsigned long *)(16 + (char *)v105 + 0x8 * v106)) = v94;
                                v92->field_30 = (char *)v104 + 1;
                                v87 = v1;
                                v88 = v2;
                                continue;
                            }
                            if (!std::path::Path::parent::h65c9a340a6266f2d(v100, v94, v73, v102))
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            v71 = uu_tail::follow::watch::WatcherRx::watch::h2b5e061523dbb1d7(v92->field_10, v92->field_18);
                            v87 = v1;
                            if (v71)
                            {
                                if (!v101)
                                    return v71;
LABEL_4c20e0:
                                __rust_dealloc(v100);
                                return v71;
                            }
                        }
                        else
                        {
                            v71 = uu_tail::follow::watch::WatcherRx::watch_with_parent::he4ac7fc6071c30b2(v92->field_10, v92->field_18, v100, v94);
                            v87 = v1;
                            if (v71)
                            {
                                if (!v101)
                                    return v71;
                                goto LABEL_4c20e0;
                            }
                        }
                        v88 = v2;
                        if (v101)
                        {
                            __rust_dealloc(v100);
                            v87 = v1;
                        }
                    }
                    else
                    {
                        if (v94 < 0)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                        v95 = __rust_alloc(v94, 1);
                        if (v95)
                            goto LABEL_4c1ed5;
                    }
                }
            } while ((v89 += 48, v88 != v89));
        }
        goto LABEL_4c2060;
    }
    if (!v43)
    {
LABEL_4c1a02:
        v44->field_200 = vvar_1131 + 1;
        if (CasCmpNE(v44->field_200, vvar_1131))
            goto LABEL_4c1a02;
        if ((char)amd64g_calculate_condition(14, 24, vvar_1131 + 1, 0, amd64g_calculate_rflags_c(20, v43, 0, v46)))
            goto LABEL_0x4c1a10;
    }
    v45 = v43 & 4294967295;
    if ((unsigned int)v43 == 1)
    {
LABEL_4c1704:
        v44->field_180 = vvar_1138 + 1;
        if (CasCmpNE(v44->field_180, vvar_1138))
            goto LABEL_4c1704;
        if ((char)amd64g_calculate_condition(14, 24, vvar_1138 + 1, 0, amd64g_calculate_rflags_c(7, v45, 1, v51)))
            goto LABEL_0x4c1a1d;
    }
LABEL_4c1a12:
    v44->field_70 = vvar_1139 + 1;
    if (CasCmpNE(v44->field_70, vvar_1139))
        goto LABEL_4c1a12;
    if ((char)amd64g_calculate_condition(14, 24, vvar_1139 + 1, 0, amd64g_calculate_rflags_c(7, v45, 1, v52)))
        goto LABEL_0x4c1a1d;
}
