void uu_fmt::linebreak::find_kp_breakpoints(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    char v0;  // [bp-0x1b1]
    unsigned int v1;  // [bp-0x1a4]
    void* *v2;  // [bp-0x1a0]
    unsigned long long v3;  // [bp-0x198]
    unsigned long long v4[8];  // [bp-0x188]
    unsigned long long v5;  // [bp-0x180]
    struct_3 *v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x170]
    void* v8;  // [bp-0x168]
    unsigned long long v9;  // [bp-0x160]
    void* v10;  // [bp-0x158]
    void* v11;  // [bp-0x150]
    void* v12;  // [bp-0x148]
    unsigned long long v13;  // [bp-0x140]
    void* v14;  // [bp-0x138], Other Possible Types: unsigned long
    unsigned long long v15;  // [bp-0x130]
    void* *v16;  // [bp-0x128]
    unsigned long long v17;  // [bp-0x120]
    unsigned long long v18;  // [bp-0x118]
    unsigned long v19;  // [bp-0x110]
    unsigned long long v20;  // [bp-0x108]
    unsigned long long v21;  // [bp-0x100]
    unsigned long long v22;  // [bp-0xf8]
    unsigned long long v23;  // [bp-0xe8]
    char v24[59];  // [bp-0xe0]
    unsigned long long v25;  // [bp-0xd8]
    char v26;  // [bp-0xd0]
    void* v27;  // [bp-0xd0]
    struct_0 *v28;  // [bp-0xc8]
    char v29;  // [bp-0xc0]
    void* v30;  // [bp-0xb0]
    struct_0 *v31;  // [bp-0xa8]
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
    struct_3 *v43;  // rax
    struct_3 *v44;  // r14
    unsigned long long v45;  // rax
    void* *v46;  // rax
    unsigned long long v47[8];  // rax
    char *v48;  // r14
    unsigned int v49;  // ebx
    unsigned long long v50;  // rbp
    char v51[59];  // rsi
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rdx
    unsigned long long v55;  // r12
    void* v56;  // rbx, Other Possible Types: unsigned long
    struct_3 *v57;  // r14
    void* *v58;  // r13
    unsigned long long v59;  // rax
    unsigned long long v60;  // r15
    unsigned long v61;  // rdx
    unsigned long long v62;  // rax
    struct_4 *v63;  // r15
    unsigned long long v64;  // rbp
    void* v65;  // rax
    unsigned long long v66;  // r15
    unsigned long long v67;  // rdx
    char v68;  // al
    unsigned long v69;  // rcx
    unsigned short v70;  // dx
    int v71;  // xmm0
    unsigned int v72;  // ymm0

    v26.peekable(a1, a2);
    v43 = 8.alloc_impl(40);
    if (!v43)
        alloc::alloc::handle_alloc_error(8, 40); /* do not return */
    v44 = v43;
    v45 = a3->field_20;
    v44->field_0 = 0;
    v44->field_10 = 0;
    v44->field_18 = v45;
    v44->field_20 = 0;
    v44->field_24 = 0;
    v5 = 1;
    v6 = v44;
    v7 = 1;
    v46 = 8.alloc_impl(8);
    if (!v46)
        alloc::alloc::handle_alloc_error(8, 8); /* do not return */
    *(v46) = 0;
    v15 = 1;
    v16 = v46;
    v17 = 1;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v47 = a3->field_0;
    v4[0] = v47;
    v23 = v47[6] - v47[7];
    v21 = v47[7].max(v23 + 1) - v23;
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v48 = &v29;
    v0 = a3->field_30;
    v19 = a3->field_28;
    v11 = 0;
    v18 = &g_4f03b0;
    v49 = 0;
    while (true)
    {
        v27 = 0;
        if (!((char)v27 & 1))
            v28 = v48.next();
        if (!v28)
        {
            uu_fmt::linebreak::build_best_path(a0, v6, v7, v16, v17);
            core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(v12, v13);
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v8, 8);
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v15, v16);
            core::ptr::drop_in_place<alloc::vec::Vec<uu_fmt::linebreak::LineBreak>>(v5, v6);
            return;
        }
        v51 = *((long long *)v27.get_or_insert_with(v48));
        v50 = v50 & 0xffffffffffffff00 | 1;
        if (v51 && v51[56] != 1)
            v50 = (v51[58] == 1 ? v28->field_39 : 0);
        v52 = ((v0 & 1) ? (v49 & 1) + 1 : 0);
        if (v0 != v28->field_3a)
            v54 = v53;
        else
            v54 = v52;
        v22 = v54;
        v14 = 0;
        v10 = 0;
        v2 = v16;
        v55 = 9223372036854775807;
        v56 = 0;
        if (v17)
        {
            *((char *[59])&v24[0]) = v51;
            v1 = v50;
            v57 = v6;
            v3 = v7;
            v25 = v17 * 8;
            v58 = 0;
            v20 = 9223372036854775807;
            v56 = 0;
            while (true)
            {
                v56 = *((long long *)(v2 + v58));
                if (v56 >= v3)
                    break;
                v59 = v55;
                v60 = v56 * 5;
                v55 = (&v57->field_10)[v60] - v11;
                v61 = (&v57->field_18)[v60];
                (&v57->field_10)[v60] = v55;
                if (v55 < v59)
                    v56 = v56;
                if ((char)_ccall(13, 8, v55, v59, 0))
                    v55 = v59;
                v62 = v4.compute_width(v28, v61, *((char *)&(&v57->field_24)[4 * v60] + 1));
                v63 = (char *)v57 + 8 * v60;
                v64 = v28->field_28 + v22 + v62 + v63->field_18;
                if (v64 <= v4[6])
                {
                    v8.push(v56, &g_4f03c8);
                    v63->field_25 = 0;
                    v63->field_18 = v64;
                    if (v64 >= v21)
                    {
                        if (v24)
                        {
                            v72 = v63->field_20;
                            v65 = uu_fmt::linebreak::compute_demerits(v4[7] - v64, v23, v28->field_28);
                            if (v65 > 99999999999999)
                                goto LABEL_461ef0;
                        }
                        else
                        {
                            v65 = 0;
                            if (!(1))
                                goto LABEL_461ef0;
                        }
                        v66 = v63->field_10 + v65;
                        if (v66 < v20 && (char)((v63->field_10 > 0) - (v63->field_10 < 0)) <= (char)((v65 > 0) - (v65 < 0)))
                        {
                            v30 = v56;
                            v31 = v28;
                            v35 = 0x100;
                            v32 = v66;
                            v34 = v72;
                            v33 = v19;
                            v12.push(&v30, &g_4f03e0);
                            v20 = v66;
                        }
                    }
                }
LABEL_461ef0:
                v58 += 1;
                if (v25 == v58)
                {
                    if (!v14)
                    {
                        v48 = &v29;
                        v50 = v1;
                        goto LABEL_461cf6;
                    }
                    else
                    {
                        v14 -= 1;
                        v67 = v14 * 5;
                        v68 = *((char *)(v13 + v67 * 8 + 37));
                        v48 = &v29;
                        v50 = v1;
                        if (v68 != 2)
                        {
                            v69 = v13 + v67 * 8;
                            v70 = *((short *)(v69 + 38));
                            v38 = *((long long *)(v69 + 29));
                            v71 = *((int128_t *)v69);
                            *((int128_t *)&v37) = *((int128_t *)(v69 + 16));
                            v36 = v71;
                            v39 = v68;
                            v40 = v70;
                            v8.push(v7, &g_4f0338);
                            v5.push(&v36, &g_4f0350);
                            goto LABEL_461cf6;
                        }
                    }
                }
            }
        }
LABEL_461cf6:
        v3 = v7;
        if (v56 < v7)
        {
            uu_fmt::linebreak::restart_active_breaks(&v41, v4, v19, *((long long *)(24 + (char *)v6 + 0x28 * v56)), *(37 + (char *)v6 + 0x28 * v56), v56, v28, v22, v21);
            v8.push(v3, &g_4f0380);
            v5.push(&v41, &g_4f0398);
            v11 = 0;
            core::intrinsics::typed_swap_nonoverlapping(&v15, &v8);
            v49 = v50;
        }
        else
        {
            v18 = &g_4f0368;
            break;
        }
    }
    core::panicking::panic_bounds_check(v56, v3, v18); /* do not return */
}
