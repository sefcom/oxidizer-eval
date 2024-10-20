long long uu_sort::merge::merge::h7b2b6f581cd19095(unsigned long a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x30]
    unsigned long long v2;  // [bp+0x8]
    unsigned long long v6;  // r15
    unsigned long long *v7;  // rbx
    unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    int v10;  // xmm0
    int v11;  // ymm0
    int v12;  // ymm0
    unsigned long long v13;  // rcx
    unsigned long long *v14;  // r15
    int v15;  // ymm1
    unsigned long long v16;  // cc_ndep
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rsi
    unsigned long long v21;  // r12
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rsi
    unsigned long v25;  // r14
    void* v26;  // r8
    unsigned long long v27;  // rbx
    char v28;  // r13b
    char v29;  // al
    void* v30;  // rdi
    unsigned long long v31;  // r8
    uint128_t v32[2];  // rcx
    int v33;  // xmm0
    int v34;  // xmm1
    char v35;  // cl
    unsigned short v36;  // dx
    uint128_t v37[2];  // rsi
    int v38;  // xmm0
    int v39;  // ymm0
    int v40;  // xmm1
    int v41;  // ymm1
    char v42;  // al
    uint128_t v43[2];  // rdx
    int v44;  // xmm0
    int v45;  // xmm1
    char v46;  // cl
    unsigned short v47;  // dx
    uint128_t v48[2];  // rsi
    int v49;  // xmm0
    int v50;  // xmm1
    unsigned long long v51;  // r9
    unsigned long long v52;  // rsi
    unsigned long long v53;  // cc_dep1
    void* v54;  // r12
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rbx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rdi
    unsigned long long v59;  // rax
    unsigned long long v60;  // rdi
    unsigned long long v61;  // rdi
    unsigned long v62;  // rdx
    unsigned long long v63;  // cc_dep1
    unsigned long long v64;  // r12
    unsigned long long v65;  // rdi
    unsigned long long v66;  // rdi
    unsigned long long v67;  // rax
    unsigned long long v68;  // rdi
    unsigned long v69;  // rdx
    unsigned long long v70;  // rdi
    unsigned long long v71;  // rax
    unsigned long v72;  // rdi
    unsigned long long *v73;  // rbx
    int v74;  // xmm1
    unsigned long v75;  // rdx
    uint128_t v76[4];  // rax
    unsigned long long v77;  // rdi
    unsigned long long v78;  // rdi
    int v79;  // xmm0
    int v80;  // xmm1
    int v81;  // xmm2
    struct_5 *v82;  // r15
    unsigned long long v83;  // r12
    unsigned long v84;  // rdi
    unsigned long long v85;  // rdi
    unsigned long long v86;  // rax

    vvar_12{reg 48} = (&v0 & -128) - 0x700;
    *((unsigned long *)(vvar_12{reg 48} + 248)) = a3;
    v6 = a2;
    v7 = a1;
    *((unsigned long *)(vvar_12{reg 48} + 184)) = a0;
    v8 = 0x8000000000000000;
    *((unsigned long long **)(vvar_12{reg 48} + 192)) = a1;
    if (a4)
    {
        v9 = 0x8000000000000000;
        vvar_12{reg 48} = vvar_12{reg 48} - 8;
        *((char **)(vvar_12{reg 48} - 8)) = &g_4d1c80;
        std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(vvar_1532{reg 48} + 896, a4, a5);
        *((long long *)(vvar_12{reg 48} + 640)) = *((long long *)(vvar_12{reg 48} + 912));
        v10 = *((int128_t *)(vvar_12{reg 48} + 896));
        v12 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10;
        *((void*)(vvar_12{reg 48} + 624)) = v10;
        v13 = *((long long *)(vvar_12{reg 48} + 624));
        *((long long *)(vvar_12{reg 48} + 176)) = 0x8000000000000000;
        if (v13 < 9223372036854775810)
        {
LABEL_4d2259:
            if (!(v13 == v8))
                goto LABEL_4d227d;
            v83 = *((long long *)(vvar_12{reg 48} + 176));
            vvar_12{reg 48} = vvar_12{reg 48} - 8;
            *((char **)(vvar_12{reg 48} - 8)) = &g_4d2273;
            ::0x4cf560::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(vvar_30{reg 48} + 632);
        }
        else
        {
            *((unsigned long long *)(vvar_12{reg 48} + 1560)) = v13;
            *((long long *)(vvar_12{reg 48} + 728)) = *((long long *)(vvar_12{reg 48} + 632));
            *((unsigned long *)(vvar_12{reg 48} + 504)) = a2;
            if (!a2)
            {
                *((long long *)(vvar_12{reg 48} + 176)) = 0x8000000000000000;
            }
            else
            {
                *((long long *)(vvar_12{reg 48} + 1712)) = *((long long *)(vvar_12{reg 48} + 640));
                *((unsigned long *)(vvar_12{reg 48} + 296)) = a2 * 24;
                v14 = 0;
                *((long long *)(vvar_12{reg 48} + 176)) = 0x8000000000000000;
                do
                {
                    v17 = *((long long *)(v7 + v14 + 8));
                    v18 = *((long long *)(v7 + v14 + 16));
                    vvar_1571{reg 48} = vvar_88{reg 48} - 8;
                    *((char **)(vvar_88{reg 48} - 8)) = &g_4d1d55;
                    std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(vvar_88{reg 48} + 0x200, v17, v18);
                    v19 = *((long long *)(vvar_1571{reg 48} + 0x200));
                    *((unsigned long long *)(vvar_1571{reg 48} + 168)) = v19;
                    if (v19 == v8)
                    {
                        vvar_1578{reg 48} = vvar_1571{reg 48} - 8;
                        *((char **)(vvar_1571{reg 48} - 8)) = &g_4d1d77;
                        ::0x4cf560::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb556c871a57c1a72(vvar_1571{reg 48} + 520);
                        continue;
                    }
                    *((unsigned long long *)(vvar_1571{reg 48} + 216)) = v9;
                    v20 = *((long long *)(vvar_1571{reg 48} + 520));
                    v21 = *((long long *)(vvar_1571{reg 48} + 528));
                    *((long long *)(vvar_1571{reg 48} + 288)) = *((long long *)(vvar_1571{reg 48} + 520));
                    vvar_1584{reg 48} = vvar_1571{reg 48} - 8;
                    *((char **)(vvar_1571{reg 48} - 8)) = &g_4d1db1;
                    std::path::Path::components::h4f3217acf0fc8653(vvar_1571{reg 48} + 1584, v20, v21);
                    v22 = *((long long *)(vvar_1584{reg 48} + 728));
                    v23 = *((long long *)(vvar_1584{reg 48} + 1712));
                    vvar_365{reg 48} = vvar_1584{reg 48} - 8;
                    *((char **)(vvar_1584{reg 48} - 8)) = &g_4d1dcf;
                    std::path::Path::components::h4f3217acf0fc8653(vvar_1584{reg 48} + 736, v22, v23);
                    v24 = *((long long *)(vvar_365{reg 48} + 1584));
                    v25 = *((long long *)(vvar_365{reg 48} + 1592));
                    v26 = *((long long *)(vvar_365{reg 48} + 736));
                    v27 = *((long long *)(vvar_365{reg 48} + 744));
                    if (v25 != v27)
                    {
                        v28 = *((char *)(vvar_365{reg 48} + 1600));
LABEL_4d1e49:
                        if (v28 == 6)
                            goto LABEL_4d1e81;
LABEL_4d1e51:
                        v32 = vvar_365{reg 48} + 1601;
                        *((long long *)(vvar_365{reg 48} + 703)) = *((long long *)((char *)&v32[1] + 15));
                        v33 = v32[0];
                        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                        v34 = v32[1];
                        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                        *((void*)(vvar_365{reg 48} + 688)) = v34;
                        *((void*)(vvar_365{reg 48} + 672)) = v33;
LABEL_4d1e81:
                        v35 = *((char *)(vvar_402{reg 48} + 1642));
                        v36 = *((short *)(vvar_402{reg 48} + 1640));
                        *((unsigned long long *)(vvar_402{reg 48} + 344)) = v24;
                        *((unsigned long *)(vvar_402{reg 48} + 352)) = v25;
                        *((char *)(vvar_402{reg 48} + 360)) = 6;
                        v37 = vvar_402{reg 48} + 361;
                        *((long long *)((char *)&v37[1] + 15)) = *((long long *)(vvar_402{reg 48} + 703));
                        v38 = *((int128_t *)(vvar_402{reg 48} + 672));
                        v39 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                        v40 = *((int128_t *)(vvar_402{reg 48} + 688));
                        v41 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                        *((void*)&v37[1]) = v40;
                        *((void*)&v37[0]) = v38;
                        *((unsigned short *)(vvar_402{reg 48} + 400)) = v36;
                        *((char *)(vvar_402{reg 48} + 402)) = v35;
                        v42 = *((char *)(vvar_402{reg 48} + 752));
                        v8 = 0x8000000000000000;
                        if (v42 != 6)
                        {
                            v43 = vvar_402{reg 48} + 753;
                            *((long long *)(vvar_402{reg 48} + 143)) = *((long long *)((char *)&v43[1] + 15));
                            v44 = v43[0];
                            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                            v45 = v43[1];
                            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
                            *((void*)(vvar_402{reg 48} + 128)) = v45;
                            *((void*)(vvar_402{reg 48} + 112)) = v44;
                        }
                        v46 = *((char *)(vvar_402{reg 48} + 794));
                        v47 = *((short *)(vvar_402{reg 48} + 792));
                        *((void* *)(vvar_402{reg 48} + 896)) = v26;
                        *((unsigned long long *)(vvar_402{reg 48} + 904)) = v27;
                        *((char *)(vvar_402{reg 48} + 912)) = v42;
                        v48 = vvar_402{reg 48} + 913;
                        *((long long *)((char *)&v48[1] + 15)) = *((long long *)(vvar_402{reg 48} + 143));
                        v49 = *((int128_t *)(vvar_402{reg 48} + 112));
                        v12 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                        v50 = *((int128_t *)(vvar_402{reg 48} + 128));
                        v15 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                        *((void*)&v48[1]) = v50;
                        *((void*)&v48[0]) = v49;
                        *((unsigned short *)(vvar_402{reg 48} + 952)) = v47;
                        *((char *)(vvar_402{reg 48} + 954)) = v46;
                        vvar_530{reg 48} = vvar_402{reg 48} - 8;
                        *((char **)(vvar_402{reg 48} - 8)) = &g_4d1f95;
                        v7 = *((long long *)(vvar_530{reg 48} + 192));
                        if (!(core::iter::traits::iterator::Iterator::eq_by::hc73832a9d2ef1f03(vvar_402{reg 48} + 344, vvar_402{reg 48} + 896, v47, v46, v26, v51) & 255 & 255 & 255))
                            goto LABEL_4d21f7;
                        if (!(*((long long *)(vvar_1689{reg 48} + 176)) == 0x8000000000000000))
                            goto LABEL_4d2166;
                        goto LABEL_4d1fb3;
                    }
                    else
                    {
                        v28 = *((char *)(vvar_365{reg 48} + 1600));
                        if (!(*((char *)(vvar_1590{reg 48} + 1640)) == *((char *)(vvar_1590{reg 48} + 792))) || !(*((char *)(vvar_1590{reg 48} + 1641)) == 2) || !(*((char *)(vvar_1590{reg 48} + 793)) == 2))
                            goto LABEL_4d1e49;
                        if (v28 != 6)
                        {
                            v29 = *((char *)(vvar_365{reg 48} + 752));
                            if (v29 == 6)
                            {
                                if (v28 < 3)
                                    goto LABEL_4d1e51;
                            }
                            else
                            {
                                if (!(!(v29 < 3 ^ v28 < 3)))
                                    goto LABEL_4d1e51;
                            }
                        }
                        else if (*((char *)(vvar_1590{reg 48} + 752)) <= 2)
                        {
                            goto LABEL_4d1e81;
                        }
                        *((unsigned long long *)(vvar_365{reg 48} + 720)) = v24;
                        v30 = *((long long *)(vvar_365{reg 48} + 720));
                        *((void* *)(vvar_365{reg 48} + 1704)) = v26;
                        vvar_530{reg 48} = vvar_365{reg 48} - 8;
                        *((char **)(vvar_365{reg 48} - 8)) = &g_4d2136;
                        v24 = *((long long *)(vvar_530{reg 48} + 720));
                        v31 = *((long long *)(vvar_530{reg 48} + 1704));
                        if (!(!bcmp(v30, v26, v25)))
                            goto LABEL_4d1e49;
                        v8 = 0x8000000000000000;
                        if (*((long long *)(vvar_1637{reg 48} + 176)) != 0x8000000000000000)
                        {
LABEL_4d2166:
                            v53 = *((long long *)(vvar_667{reg 48} + 104));
                            v54 = *((long long *)(vvar_667{reg 48} + 216));
                            if (!*((long long *)(vvar_607{reg 48} + 104)))
                            {
                                v56 = 1;
LABEL_4d21af:
                                v62 = *((long long *)(vvar_667{reg 48} + 104));
                                vvar_530{reg 48} = vvar_667{reg 48} - 8;
                                *((char **)(vvar_667{reg 48} - 8)) = &g_4d21c0;
                                memcpy(v56, v54, v62);
                                v7 = *((long long *)(vvar_530{reg 48} + 192));
                                if (*((long long *)(v7 + v14)))
                                {
                                    v65 = *((long long *)(v7 + v14 + 8));
                                    vvar_530{reg 48} = vvar_530{reg 48} - 8;
                                    *((char **)(vvar_530{reg 48} - 8)) = &g_4d21e1;
                                    __rust_dealloc(v65);
                                }
                                v67 = *((long long *)(vvar_530{reg 48} + 104));
                                *((unsigned long long *)(v7 + v14)) = v67;
                                *((unsigned long long *)(v7 + v14 + 8)) = v56;
                                *((unsigned long long *)(v7 + v14 + 16)) = v67;
LABEL_4d21f7:
                                if (*((long long *)(vvar_530{reg 48} + 168)))
                                {
                                    v68 = *((long long *)(vvar_530{reg 48} + 288));
                                    vvar_530{reg 48} = vvar_530{reg 48} - 8;
                                    *((char **)(vvar_530{reg 48} - 8)) = &g_4d221b;
                                    __rust_dealloc(v68);
                                }
                                v9 = *((long long *)(vvar_586{reg 48} + 216));
                                continue;
                            }
                            else
                            {
                                if ((char)amd64g_calculate_condition(8, 8, v53, 0, v16))
                                {
                                    *((char **)(vvar_706{reg 48} - 8)) = &g_4d6440;
                                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                }
                                v60 = *((long long *)(vvar_667{reg 48} + 104));
                                vvar_667{reg 48} = vvar_667{reg 48} - 8;
                                *((char **)(vvar_667{reg 48} - 8)) = &g_4d219c;
                                v56 = __rust_alloc(v60, 1);
                                if (v56)
                                    goto LABEL_4d21af;
                            }
                        }
LABEL_4d1fb3:
                        *((long long *)(vvar_593{reg 48} + 176)) = 0x8000000000000000;
                        v52 = v2;
                        vvar_701{reg 48} = vvar_593{reg 48} - 8;
                        *((char **)(vvar_593{reg 48} - 8)) = &g_4d1fcc;
                        uu_sort::tmp_dir::TmpDirWrapper::next_file::h1ae3bb5131807fb8(vvar_593{reg 48} + 896, v52);
                        v55 = *((long long *)(vvar_701{reg 48} + 904));
                        *((unsigned long long *)(vvar_701{reg 48} + 176)) = v55;
                        if (v55 == 0x8000000000000000)
                        {
                            v74 = *((int128_t *)(vvar_701{reg 48} + 912));
                            if (*((long long *)(vvar_1700{reg 48} + 168)))
                            {
                                v78 = *((long long *)(vvar_701{reg 48} + 288));
                                *((void*)(vvar_701{reg 48} + 192)) = v74;
                                vvar_701{reg 48} = vvar_701{reg 48} - 8;
                                *((char **)(vvar_701{reg 48} - 8)) = &g_4d5b85;
                                __rust_dealloc(v78);
                            }
                            v82 = *((long long *)(vvar_701{reg 48} + 184));
                            goto LABEL_4d5c45;
                        }
                        else
                        {
                            *((int *)(vvar_701{reg 48} + 720)) = *((int *)(vvar_701{reg 48} + 896));
                            v9 = *((long long *)(vvar_701{reg 48} + 912));
                            v57 = *((long long *)(vvar_701{reg 48} + 920));
                            v58 = *((long long *)(vvar_701{reg 48} + 288));
                            *((long long *)(vvar_701{reg 48} + 104)) = *((long long *)(vvar_701{reg 48} + 920));
                            vvar_789{reg 48} = vvar_701{reg 48} - 8;
                            *((char **)(vvar_701{reg 48} - 8)) = &g_4d201f;
                            v59 = std::sys::pal::unix::fs::copy::h1e127c57175e5969(v58, v21, v9, v57);
                            if (*((long long *)(vvar_1718{reg 48} + 168)))
                            {
                                v61 = *((long long *)(vvar_789{reg 48} + 288));
                                vvar_789{reg 48} = vvar_789{reg 48} - 8;
                                *((char **)(vvar_789{reg 48} - 8)) = &g_4d2045;
                                __rust_dealloc(v61);
                            }
                            if (!v59)
                            {
                                v63 = *((long long *)(vvar_789{reg 48} + 104));
                                if (!*((long long *)(vvar_789{reg 48} + 104)))
                                {
                                    v64 = 1;
LABEL_4d20a7:
                                    v69 = *((long long *)(vvar_910{reg 48} + 104));
                                    vvar_1025{reg 48} = vvar_910{reg 48} - 8;
                                    *((char **)(vvar_910{reg 48} - 8)) = &g_4d20b8;
                                    memcpy(v64, v9, v69);
                                    v7 = *((long long *)(vvar_1025{reg 48} + 192));
                                    if (*((long long *)(v7 + v14)))
                                    {
                                        v70 = *((long long *)(v7 + v14 + 8));
                                        vvar_1025{reg 48} = vvar_1025{reg 48} - 8;
                                        *((char **)(vvar_1025{reg 48} - 8)) = &g_4d20d9;
                                        __rust_dealloc(v70);
                                    }
                                    v71 = *((long long *)(vvar_1025{reg 48} + 104));
                                    *((unsigned long long *)(v7 + v14)) = v71;
                                    *((unsigned long long *)(v7 + v14 + 8)) = v64;
                                    *((unsigned long long *)(v7 + v14 + 16)) = v71;
                                    v72 = *((int *)(vvar_1025{reg 48} + 720));
                                    vvar_1801{reg 48} = vvar_1025{reg 48} - 8;
                                    *((char **)(vvar_1025{reg 48} - 8)) = &g_4d20f9;
                                    close(v72);
                                }
                                else
                                {
                                    if ((char)amd64g_calculate_condition(8, 8, v63, 0, v16))
                                    {
                                        *((char **)(vvar_952{reg 48} - 8)) = &g_4d6450;
                                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                    }
                                    v66 = *((long long *)(vvar_789{reg 48} + 104));
                                    vvar_789{reg 48} = vvar_789{reg 48} - 8;
                                    *((char **)(vvar_789{reg 48} - 8)) = &g_4d207b;
                                    v64 = __rust_alloc(v66, 1);
                                    if (v64)
                                        goto LABEL_4d20a7;
                                }
                            }
                            else
                            {
                                *((char *)(vvar_789{reg 48} + 896)) = 4;
                                *((unsigned long *)(vvar_789{reg 48} + 904)) = v75;
                                vvar_960{reg 48} = vvar_789{reg 48} - 8;
                                *((char **)(vvar_789{reg 48} - 8)) = &g_4d5bc5;
                                v76 = __rust_alloc(64, 8);
                                if (!v76)
                                {
                                    *((char **)(vvar_960{reg 48} - 8)) = &g_4d65f8;
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                                }
                                v79 = *((int128_t *)(vvar_960{reg 48} + 896));
                                v80 = *((int128_t *)(vvar_960{reg 48} + 912));
                                v81 = *((int128_t *)(vvar_960{reg 48} + 928));
                                v76[3] = *((int128_t *)(vvar_960{reg 48} + 944));
                                *((void*)&v76[2]) = v81;
                                *((void*)&v76[1]) = v80;
                                *((void*)&v76[0]) = v79;
                                v82 = *((long long *)(vvar_960{reg 48} + 184));
                                if (*((long long *)(vvar_1822{reg 48} + 176)))
                                {
                                    vvar_960{reg 48} = vvar_960{reg 48} - 8;
                                    *((char **)(vvar_960{reg 48} - 8)) = &g_4d5c23;
                                    __rust_dealloc(v9);
                                }
                                v84 = *((int *)(vvar_960{reg 48} + 720));
                                vvar_701{reg 48} = vvar_960{reg 48} - 8;
                                *((char **)(vvar_960{reg 48} - 8)) = &g_4d5c30;
                                close(v84);
LABEL_4d5c45:
                                if (*((long long *)(vvar_774{reg 48} + 1560)))
                                {
                                    v85 = *((long long *)(vvar_774{reg 48} + 728));
                                    *((void*)(vvar_774{reg 48} + 192)) = v74;
                                    *((char **)(vvar_774{reg 48} - 8)) = &g_4d5c6e;
                                    __rust_dealloc(v85);
                                }
                                *((void*)&v82->field_8) = v74;
                                v82->field_0 = 3;
                                return v82;
                            }
                        }
                    }
                } while ((v14 += 24, *((long long *)(vvar_210{reg 48} + 296)) != v14));
            }
            v13 = *((long long *)(vvar_12{reg 48} + 1560));
            if (v13)
            {
                v77 = *((long long *)(vvar_12{reg 48} + 728));
                vvar_12{reg 48} = vvar_12{reg 48} - 8;
                *((char **)(vvar_12{reg 48} - 8)) = &g_4d224e;
                __rust_dealloc(v77);
                v6 = *((long long *)(vvar_12{reg 48} + 504));
                goto LABEL_4d2259;
            }
            else
            {
                v6 = *((long long *)(vvar_12{reg 48} + 504));
LABEL_4d227d:
                v83 = *((long long *)(vvar_12{reg 48} + 176));
            }
        }
        if (v83 << 1)
        {
            vvar_12{reg 48} = vvar_12{reg 48} - 8;
            *((char **)(vvar_12{reg 48} - 8)) = &g_4d22a3;
            __rust_dealloc(v9);
        }
    }
    v86 = &v73[3 * v6];
    if (*((long long *)(*((long long *)(vvar_12{reg 48} + 248)) + 48)) == v8)
        goto LABEL_0x4d22bd;
    else
        goto LABEL_0x4d303d;
}
