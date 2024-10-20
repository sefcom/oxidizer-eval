long long uu_wc::wc::h468f76ca14048456(struct_8 *a0, struct_2 *a1)
{
    unsigned long long v1;  // [sp-0x250]
    struct_2 *v3;  // [sp-0x240]
    struct_2 *v5;  // [sp-0x230], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x1e8]
    unsigned long v15;  // [sp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x1d8]
    unsigned long v17;  // [sp-0x1d0], Other Possible Types: unsigned long long
    struct struct_0 **v18;  // [bp-0x1c8]
    struct struct_0 **v20;  // [sp-0x1b8]
    struct struct_0 **v21;  // [sp-0x1a8]
    unsigned long long v22;  // [sp-0x198]
    struct_1 *v25;  // [bp-0x180], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v26;  // [bp-0x178]
    unsigned long v27;  // [sp-0x170]
    char v28;  // [bp-0x168]
    char v29;  // [bp-0x160]
    char v30;  // [bp-0x158]
    char v31;  // [bp-0x150]
    char v32;  // [bp-0x148]
    char v33;  // [bp-0x140]
    char v34;  // [bp-0x138]
    char v35;  // [bp-0x130]
    unsigned long long v36;  // [sp-0xd0]
    unsigned long long v37;  // [sp-0xc8]
    unsigned long long v38;  // [sp-0xc0]
    unsigned long long v39;  // [sp-0xb8]
    struct_3 *v40;  // [sp-0xb0]
    struct_5 *v41;  // [sp-0xa8]
    void* v42;  // [sp-0xa0]
    struct struct_0 **v46;  // [sp-0x68]
    struct struct_0 **v47;  // [sp-0x58]
    void* v48;  // [sp-0x48]
    unsigned long long v49;  // [sp-0x38]
    unsigned long long v50;  // [sp-0x10]
    struct_2 *v52;  // rsi
    unsigned long v53;  // r15
    unsigned long long v54;  // r13
    int v55;  // ymm0
    int v56;  // ymm0
    unsigned long long v57;  // r12
    struct_2 *v58;  // rcx
    struct struct_0 **v59;  // xmm0
    int v60;  // ymm1
    int v61;  // ymm1
    unsigned long long v62;  // rcx
    struct_2 *v63;  // rcx
    struct struct_0 **v64;  // xmm0
    int v65;  // ymm1
    unsigned long long v66;  // rbx
    unsigned long long *v67;  // r13
    unsigned long long *v68;  // rbx
    unsigned long long v71;  // rdx
    unsigned int v72;  // eax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rcx
    struct_2 *v75;  // rdx
    unsigned int v76;  // ecx
    struct_2 *v77;  // rsi
    struct_2 *v78;  // rdx
    unsigned long long v79;  // rax
    unsigned long long v81;  // rax
    struct_3 *v82;  // rax
    unsigned long v83;  // rdx
    unsigned long long *v84;  // r14
    struct_3 *v85;  // rax
    struct_3 *v86;  // rsi
    struct struct_0 **v87;  // xmm0
    struct_5 *v88;  // rax
    struct_3 *v89;  // rax
    unsigned long long v90;  // rax
    struct struct_0 **v91;  // xmm0
    struct struct_0 **v92;  // xmm1
    struct struct_0 **v93;  // xmm0
    struct struct_0 **v94;  // xmm0
    struct struct_0 **v95;  // xmm1
    struct struct_0 **v96;  // xmm2
    struct struct_0 **v97;  // xmm0
    struct struct_0 **v98;  // xmm0
    struct struct_0 **v99;  // xmm1
    struct struct_0 **v100;  // xmm2
    unsigned long long v102;  // rcx
    unsigned long long v103;  // rdi
    unsigned long long v104;  // rdx
    unsigned long long v105;  // rcx
    unsigned long long v106;  // rcx
    struct_2 *v107;  // rcx
    void* v108;  // rbp
    unsigned long long v109;  // r12

    v52 = a1;
    v50 = v53;
    v54 = 0x8000000000000000;
    v56 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v47) = 0;
    *((int128_t *)&v46) = 0;
    v48 = 0;
    v3 = a1;
    v57 = a0->field_0;
    v1 = 1;
    v36 = *((char *)&a1->field_19 + 1);
    if ((unsigned int)v36 == 2)
    {
LABEL_48a5b5:
        if (!v57)
            goto LABEL_48a6ff;
        if (v57 == 2)
            goto LABEL_48a763;
        v66 = a0->field_18;
        goto LABEL_48a8fb;
    }
    else
    {
        if (!v57)
        {
            v58 = v3;
            v59 = *((int *)&(&v58->field_18)[1]);
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (amd64g_calculate_mmx_psadbw((unsigned long long)(v59 >> 64), 0) CONCAT amd64g_calculate_mmx_psadbw((unsigned long long)v59, 0));
            v62 = ((char)v61 + v58->field_18 == 1 ? 7 : 1);
            v1 = v62;
LABEL_48a6ff:
            v25 = 9223372036854775809;
            *((char *)&v26) = 1;
            v82 = __rust_alloc(24, 8);
            if (!v82)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v86 = v82;
            v86->field_10 = v27;
            v87 = *((int128_t *)&v25);
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
            v86->field_0 = v87;
            v88 = &g_4f3190.padding_0[0];
            goto LABEL_48a93b;
        }
        if (v57 != 1)
        {
            v1 = 1;
LABEL_48a763:
            if (a0->field_8 != 9223372036854775809)
            {
                uu_wc::files0_iter_file::hf6a5dbd36a9e7a80(&v25, a0->field_10, a0->field_18);
                v90 = v26;
                if (v15 == 9223372036854775809)
                    return v90;
                v22 = *((long long *)&v34);
                v91 = *((int128_t *)&v28);
                v92 = *((int128_t *)&v30);
                *((int128_t *)&v21) = *((int128_t *)&v32);
                v20 = v92;
                v18 = v91;
                v15 = v25;
                v16 = v90;
                v17 = v27;
                v86 = __rust_alloc(80, 8);
                if (!v86)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v97 = *((int128_t *)&(&v21)[1]);
                *((struct struct_0 ***)&v86->field_40) = v97;
                v98 = *((int128_t *)&v15);
                v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                v99 = *((int128_t *)&v17);
                v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                v100 = *((int128_t *)&(&v18)[1]);
                v86->field_30 = *((int128_t *)&(&v20)[1]);
                *((struct struct_0 ***)&v86->field_20) = v100;
                v86->field_10 = v99;
                v86->field_0 = v98;
                v88 = &g_4f3200.padding_0[0];
                goto LABEL_48a93b;
            }
            else
            {
                uu_wc::files0_iter_stdin::hf11601794ea351d7(&v25, v52, v83);
                v89 = __rust_alloc(88, 8);
                if (!v89)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v86 = v89;
                v86->field_50 = *((long long *)&v35);
                v93 = *((int128_t *)&v33);
                *((struct struct_0 ***)&v86->field_40) = v93;
                v94 = *((int128_t *)&v25);
                v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                v95 = *((int128_t *)&v27);
                v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                v96 = *((int128_t *)&v29);
                v86->field_30 = *((int128_t *)&v31);
                *((struct struct_0 ***)&v86->field_20) = v96;
                v86->field_10 = v95;
                v86->field_0 = v94;
                v88 = &g_4f3238.padding_0[0];
                goto LABEL_48a93b;
            }
            goto LABEL_48a93b;
        }
        v63 = v3;
        v64 = *((int *)&(&v63->field_18)[1]);
        v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v61 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (amd64g_calculate_mmx_psadbw((unsigned long long)(v64 >> 64), 0) CONCAT amd64g_calculate_mmx_psadbw((unsigned long long)v64, 0));
        v66 = a0->field_18;
        if ((!((char)v61 + v63->field_18 == 1) || !(v66 == 1)) && !(!v66))
        {
            v67 = a0->field_10;
            v1 = 1;
            v68 = 0;
            v5 = 0;
            do
            {
                if (*((long long *)(v67 + v68)) == 9223372036854775809)
                {
                    v1 = 7;
                }
                else
                {
                    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v25, *((long long *)(v67 + v68 + 8)), *((long long *)(v67 + v68 + 16)));
                    if ((int)v25 == 2)
                    {
                        ::0x482c40::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a390ff74bc7419e(v26);
                    }
                    else
                    {
                        v72 = *((int *)&v32) & 0xf000;
                        v73 = *((long long *)&v35);
                        if (v72 != 0x8000)
                            v73 = 0;
                        v71 = 7;
                        v1 = 7;
                        v5 = (char *)v5 + v73;
                    }
                }
            } while ((v68 += 24, (v66 << 3) + (v66 << 4) != v68));
            v52 = v5;
            if (!v52)
            {
                v54 = 0x8000000000000000;
                goto LABEL_48a5b5;
            }
            else
            {
                v74 = v52 >> 10;
                v75 = v52 / 0x2540be400;
                v76 = (v74 < 9765625 ? 0 : 10);
                v54 = 0x8000000000000000;
                if (v77 >= 100000)
                {
                    v78 = (v77 >> 5) / 3125;
                    v76 |= 5;
                }
                v52 = (unsigned int)(struct struct_2 *)&v78[15884].field_10 & (unsigned int)(struct struct_2 *)&v78[11915].padding_9[2];
                v71 = ((unsigned int)v78 + 514288 & (unsigned int)(struct struct_2 *)&v78[27772].field_19 ^ (unsigned int)v52) >> 17;
                v79 = (unsigned int)(v76 + v71) + 1;
                v1 = v81;
                goto LABEL_48a5b5;
            }
        }
        else
        {
            v1 = 1;
LABEL_48a8fb:
            v84 = a0->field_10;
            v85 = __rust_alloc(16, 8);
            if (!v85)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v86 = v85;
            v86->field_0 = v84;
            *((unsigned long long **)&v86->padding_8[0]) = &v84[3 * v66];
            v88 = &g_4f31c8.padding_0[0];
LABEL_48a93b:
            v102 = v3->field_0;
            v103 = 9223372036854775809;
            v104 = 9223372036854775810;
            if (v102 == 9223372036854775809)
            {
                v104 = v3->field_8;
                v106 = v54 + 1;
            }
            else if (v102 != 9223372036854775810)
            {
                v107 = v3;
                v104 = *((long long *)&v107->field_8);
                v103 = v107->field_10;
            }
            v37 = v105;
            v38 = v104;
            v49 = v103;
            v39 = v49;
            v40 = v86;
            v41 = v88;
            v42 = 0;
            v108 = 0;
            v109 = &v25;
            v5 = v54 + 3;
            v14 = v54 + 1;
        }
    }
}
