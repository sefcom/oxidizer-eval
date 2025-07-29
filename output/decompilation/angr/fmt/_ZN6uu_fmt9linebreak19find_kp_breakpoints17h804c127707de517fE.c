void uu_fmt::linebreak::find_kp_breakpoints(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_5 *a3)
{
    char v0;  // [bp-0x1a1]
    struct_1 *v1;  // [bp-0x1a0]
    unsigned long long v2[8];  // [bp-0x198]
    unsigned long long v3;  // [bp-0x190]
    struct_3 *v4;  // [bp-0x188]
    unsigned long long v5;  // [bp-0x180]
    unsigned long long v6;  // [bp-0x178]
    void* v7;  // [bp-0x170]
    unsigned int v8;  // [bp-0x164]
    void* v9;  // [bp-0x160]
    unsigned long long v10;  // [bp-0x158]
    void* v11;  // [bp-0x150]
    unsigned long long v12;  // [bp-0x148]
    unsigned long long *v13;  // [bp-0x140]
    unsigned long long v14;  // [bp-0x138]
    void* v15;  // [bp-0x130]
    unsigned long long v16;  // [bp-0x128]
    void* v17;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long long v18;  // [bp-0x118]
    unsigned long v19;  // [bp-0x110]
    unsigned long long v20;  // [bp-0x108]
    unsigned long long v21;  // [bp-0x100]
    unsigned long long v22;  // [bp-0xf8]
    char v23[59];  // [bp-0xe8]
    unsigned long long *v24;  // [bp-0xe0]
    unsigned long v25;  // [bp-0xd8]
    char v26;  // [bp-0xd0]
    void* v27;  // [bp-0xd0]
    struct_1 *v28;  // [bp-0xc8]
    int v29;  // [bp-0xc0]
    void* v30;  // [bp-0xb0]
    struct_1 *v31;  // [bp-0xa8]
    unsigned long long v32;  // [bp-0xa0]
    unsigned long v33;  // [bp-0x98]
    unsigned int v34;  // [bp-0x90]
    unsigned short v35;  // [bp-0x8c]
    int v36;  // [bp-0x88]
    int v37;  // [bp-0x78]
    unsigned long v38;  // [bp-0x6b]
    char v39;  // [bp-0x63]
    unsigned short v40;  // [bp-0x62]
    char v41;  // [bp-0x58]
    struct_4 *v43;  // rax
    unsigned long long v44;  // rcx
    void* *v45;  // rax
    unsigned long long v46[8];  // rax
    unsigned long long v47;  // rdi
    unsigned int v48;  // ebx
    unsigned int v49;  // ymm0
    struct_7 **v50;  // rax
    char v51[59];  // r15
    unsigned int v52;  // eax
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rdx
    void* *v56;  // rax
    unsigned long long v57;  // r12
    void* v58;  // rbx
    void* v59;  // r13
    unsigned long long v60;  // rcx
    struct_3 *v61;  // rbp
    unsigned long long v62;  // r15
    unsigned long v63;  // rdx
    unsigned long long v64;  // rax
    struct_2 *v65;  // rbp
    unsigned long long v66;  // r14
    void* v67;  // rax
    unsigned long v68;  // rcx
    unsigned long long v69;  // r14
    unsigned long long v70;  // rdx
    char v71;  // al
    struct_0 *v72;  // rcx
    unsigned short v73;  // dx
    int v74;  // xmm0
    char v75;  // sil

    v26.peekable(a1, a2);
    v43 = 40.alloc_impl();
    if (!v43)
        alloc::alloc::handle_alloc_error(8, 40); /* do not return */
    v44 = a3->field_20;
    v43->field_0 = 0;
    v43->field_10 = 0;
    v43->field_18 = v44;
    v43->field_20 = 0;
    v43->field_24 = 0;
    v3 = 1;
    v4 = &v43->field_0;
    v5 = 1;
    v45 = 8.alloc_impl();
    if (!v45)
        alloc::alloc::handle_alloc_error(8, 8); /* do not return */
    *(v45) = 0;
    v12 = 1;
    v13 = v45;
    v14 = 1;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v46 = a3->field_0;
    v2[0] = v46;
    v47 = v46[7];
    v20 = v46[6] - v47;
    v6 = 1;
    if (v47 >= 11)
        v6 = ::0x4a65a0::core::cmp::max_by(v47, v20 + 1) - v20;
    v15 = 0;
    v16 = 8;
    v17 = 0;
    v0 = a3->field_30;
    v19 = a3->field_28;
    v7 = 0;
    v18 = &g_583f20;
    v48 = 0;
    while (true)
    {
        v27 = 0;
        if (!((char)v27 & 1))
            v28 = v29.next();
        if (!v28)
        {
            uu_fmt::linebreak::build_best_path(a0, v4, v5, v13, v14);
            core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(&v15);
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v9);
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v12);
            core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(&v3);
            return;
        }
        v50 = v27.get_or_insert_with(&v29);
        v51 = *(v50);
        v52 = (unsigned int)v50 & 0xffffff00 | 1;
        if (v51 && v51[56] != 1)
            v52 = (v51[58] == 1 ? v28->field_39 : 0);
        v8 = v52;
        v53 = ((v0 & 1) ? (v48 & 1) + 1 : 0);
        if (v0 != v28->field_3a)
            v55 = v54;
        else
            v55 = v53;
        v22 = v55;
        v17 = 0;
        v11 = 0;
        v24 = v13;
        v25 = &v13[v14];
        if (v24.next())
        {
            *((char *[59])&v23[0]) = v51;
            v1 = v28;
            v57 = 9223372036854775807;
            v21 = 9223372036854775807;
            v58 = 0;
            while (true)
            {
                v59 = *(v56);
                if (v59 >= v5)
                    break;
                v60 = v57;
                v61 = v4;
                v62 = v59 * 5;
                v57 = (&v61->field_10)[v62] - v7;
                v63 = (&v61->field_18)[v62];
                (&v61->field_10)[v62] = v57;
                if (v57 < v60)
                {
                    v58 = v59;
                    if (!((char)amd64g_calculate_condition(13, 8, v57, v60, 0)))
                        goto LABEL_4a77f7;
                    goto LABEL_4a77f6;
                }
                v58 = v58;
                if ((char)amd64g_calculate_condition(13, 8, v57, v60, 0))
                {
LABEL_4a77f6:
                    v57 = v60;
                    goto LABEL_4a77f9;
                }
LABEL_4a77f7:
LABEL_4a77f9:
                v64 = v2.compute_width(v1, v63, *((char *)&(&v61->field_24)[4 * v62] + 1));
                v65 = (char *)v61 + 8 * v62;
                v66 = v1->field_28 + v22 + v64 + v65->field_18;
                if (v66 <= v2[6])
                {
                    v9.push(v59, &g_583f38);
                    v65->field_25 = 0;
                    v65->field_18 = v66;
                    if (v66 >= v6)
                    {
                        if (v23)
                        {
                            v49 = v65->field_20;
                            v67 = uu_fmt::linebreak::compute_demerits(v2[7] - v66, v20, v1->field_28);
                            if (!(v67 <= 99999999999999))
                                goto LABEL_4a77a0;
                        }
                        else
                        {
                            v67 = 0;
                            if (!(1))
                                goto LABEL_4a77a0;
                        }
                        v68 = v65->field_10;
                        v69 = v68 + v67;
                        if (v69 < v21 && (v68 < 0 || !v67 < 0 && !(!v67 & v68)))
                        {
                            v30 = v59;
                            v31 = v1;
                            v35 = 0x100;
                            v32 = v69;
                            v34 = v49;
                            v33 = v19;
                            v15.push(&v30, &g_583f50);
                            v21 = v69;
                        }
                    }
                }
LABEL_4a77a0:
                v56 = v24.next();
                if (!v56)
                {
                    if (v17)
                    {
                        v17 -= 1;
                        v70 = v17 * 5;
                        v71 = *((char *)(8 + v70 * 8 + 37));
                        if (v71 != 2)
                        {
                            v72 = 8 + v70 * 8;
                            v73 = v72->field_26;
                            v38 = *((long long *)&v72->padding_11[12]);
                            v74 = v72->field_0;
                            *((int128_t *)&v37) = *((int128_t *)&v72->field_10);
                            v36 = v74;
                            v39 = v71;
                            v40 = v73;
                            v9.push(v5, &g_583ea8);
                            v28 = v1;
                            v3.push(&v36, &g_583ec0);
                            goto LABEL_4a79c0;
                        }
                    }
                    v28 = v1;
                    goto LABEL_4a79c0;
                }
            }
        }
        else
        {
            v57 = 9223372036854775807;
            v58 = 0;
        }
LABEL_4a79c0:
        if (v58 < v5)
        {
            uu_fmt::linebreak::restart_active_breaks(&v41, v2, v19, *((long long *)(24 + (char *)&v4->field_0 + 0x28 * v58)), *(37 + (char *)&v4->field_0 + 0x28 * v58), v58, v28, v22, v6);
            v9.push(v5, &g_583ef0);
            v3.push(&v41, &g_583f08);
            v7 = 0;
            core::intrinsics::typed_swap_nonoverlapping(&v12, &v9);
            v48 = v8;
        }
        else
        {
            v59 = v58;
            v18 = &g_583ed8;
            break;
        }
    }
    core::panicking::panic_bounds_check(v59, v75, v18); /* do not return */
}
