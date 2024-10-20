long long uu_cut::cut_fields_explicit_out_delim::_$u7b$$u7b$closure$u7d$$u7d$::hb82926d931740a42(struct_3 *a0, struct_6 *a1, char *a2, unsigned long long a3)
{
    char v0;  // [sp-0xd9]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0xc0]
    char v4;  // [bp-0xb8]
    char *v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6[2];  // [sp-0xa8]
    unsigned long long v7;  // [sp-0x98]
    struct_2 *v8;  // [sp-0x90]
    char *v9;  // [sp-0x88]
    unsigned long long v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x78]
    unsigned long long v12;  // [sp-0x70]
    unsigned long long v13;  // [sp-0x68]
    unsigned long long v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    unsigned long long v16;  // [sp-0x50]
    unsigned long long v17;  // [sp-0x48]
    unsigned long long v18;  // [sp-0x40]
    unsigned long long v19;  // [sp-0x38]
    unsigned long long v21;  // r14
    struct_4 *v22;  // rax
    unsigned long long v23;  // rcx
    char *v24;  // rax
    unsigned long long v25;  // r13
    unsigned long long v26[2];  // r15
    unsigned long long v27;  // rbx
    char v28;  // al
    void* v30;  // r8
    char *v31;  // rdi
    char *v32;  // 4096
    unsigned long long v33;  // 4096
    struct_2 *v34;  // r14
    unsigned long long v35;  // r12
    char *v36;  // rbp
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // r8
    unsigned long long v40;  // rbx
    unsigned long long v41;  // rbx
    unsigned long long v42;  // rcx
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rcx
    unsigned long long v48;  // rcx
    unsigned long long v49;  // r13
    unsigned long long v50;  // r8
    unsigned long long v51;  // r13
    unsigned long long v52;  // rax
    unsigned int v53;  // r12d
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rsi
    unsigned long long v56;  // r13
    char *v57;  // rbp
    unsigned long long v59;  // r8
    unsigned long long v61;  // rdx
    char *v62;  // rbp
    char *v63;  // rax
    unsigned long long v64;  // rax
    unsigned long long v66;  // r15
    unsigned long long v67;  // rbx
    unsigned long long v68;  // r15
    unsigned long v69;  // r14
    unsigned long long v70;  // rcx
    unsigned long long v71;  // rsi
    unsigned long long v72;  // r13
    char *v74;  // rbp
    unsigned long long v75;  // rax
    unsigned long long v77[2];  // r15
    struct_3 *v79;  // rcx
    struct_3 *v80;  // rcx
    struct_3 *v81;  // rcx
    struct_2 *v82;  // rax
    unsigned long long v83;  // rdi
    struct_1 *v84;  // rax

    a0 = a0;
    v21 = a1->field_0;
    _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v2, v21, a2, a3);
    if (!*((long long *)&v2))
    {
        if (a1->field_8->field_0)
        {
            *((short *)&a0->field_0) = 0x100;
            return v24;
        }
        v34 = a1->field_10;
        v24 = v34->field_8->field_38(v34->field_0, a2, a3);
        if (v24)
        {
            a0->field_8 = v24;
            a0->field_0 = 1;
            return v24;
        }
        if (a3 < 1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v24 = a1->field_18->field_0;
        if (a2[1 + a3] != v2)
        {
            v2 = (char)v24;
            v83 = v34->field_0;
            v84 = v34->field_8;
            goto LABEL_48d3a2;
        }
    }
    else
    {
        v8 = a1->field_10;
        v22 = a1->field_20;
        v23 = v22->field_8;
        if (!v23)
        {
            v9 = a1->field_18;
        }
        else
        {
            a0 = a0;
            v18 = *((long long *)&v3);
            v25 = *((long long *)&v4);
            v26 = v22->field_0;
            v19 = &v26[v23];
            v9 = &a1->field_18->field_0;
            v14 = a1->field_28;
            v13 = a1->field_30;
            v17 = a3 - 1;
            v27 = 1;
            v28 = 0;
            v11 = v25;
            v30 = 0;
            v31 = 0;
            v7 = v21;
            while (true)
            {
                v35 = v33;
                v36 = v32;
                v37 = v26[0];
                v15 = v26[1];
                v10 = 1;
                v12 = v37;
                if (v37 == v10)
                {
                    v6[0] = v26;
                    goto LABEL_48d0d0;
                }
                v40 = ~(v10) + v37;
                if ((v28 & 1))
                {
                    v31 = v31;
                    if (v40)
                    {
                        while (true)
                        {
                            v41 = v40;
                            v42 = v35;
                            if (v42 < v25)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                            _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v2, v21, &v36[v25], v42 - v25);
                            if (!*((long long *)&v2))
                                break;
                            v25 += *((long long *)&v4);
                            if (v41 == 1)
                                goto LABEL_48d076;
                        }
                    }
                }
                if (!v40)
                {
                    v6[0] = v26;
                    v27 = 2;
                    v39 = v11;
                }
                else
                {
                    v31 = v31;
                    if (v40 != 1)
                    {
                        while (true)
                        {
                            v45 = v40 - 1;
                            v46 = v35;
                            if (v46 < v25)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                            _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v2, v21, &v36[v25], v46 - v25);
                            if (!*((long long *)&v2))
                                break;
                            v25 += *((long long *)&v4);
                            if (v45 == 1)
                                goto LABEL_48d076;
                        }
                    }
LABEL_48d076:
                    v48 = v35;
                    if (v48 < v25)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                    _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v2, v21, &v36[v25], v48 - v25);
                    if (!*((long long *)&v2))
                        break;
                    v6[0] = v26;
                    v49 = v25 + *((long long *)&v4);
                    v27 = 2;
                    v38 = v12;
                }
LABEL_48d0d0:
                v51 = v25;
                v52 = v15;
                v16 = v52 - v38;
                v0 = v52 != v38;
                v53 = v35 | -0x100 | 1;
                if (((char)v5 & 1) && (v5 = v31, v24 = (unsigned long long)v8->field_8->field_38(v8->field_0, v14, v13), v53 = (unsigned int)v5, v24))
                {
LABEL_48d3d5:
                    v79 = a0;
                    v79->field_8 = v24;
                    v79->field_0 = 1;
                    return v24;
                }
                if (v27 != 2)
                {
                    v18 = v18;
                    v11 = v11;
                    v5 = v5;
                    goto LABEL_48d19d;
                }
                v5 = v50;
                v54 = a3;
                if (v54 < v51)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v2, v21, &v36[v51], v54 - v51);
                if (!*((long long *)&v2))
                {
                    v10 = v10;
                    v5 = v5;
                    goto LABEL_48d320;
                }
                v55 = *((long long *)&v3) + v51;
                v56 = v51 + *((long long *)&v4);
                v5 = v5;
LABEL_48d19d:
                v59 = v5;
                v51 = v51;
                v61 = v18;
                if (v61 < v59)
                    core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                if (v61 > a3)
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                v62 = a2;
                v63 = v8->field_8->field_38(v8->field_0, &a2[v59], v61 - v59);
                if (v63)
                {
                    v80 = a0;
                    v80->field_8 = v63;
                    v24 = v63 | -0x100 | 1;
                    v80->field_0 = 1;
                    return v24;
                }
                v64 = v15;
                if (v64 == v12)
                {
                    v10 = v10;
                    v7 = v7;
                    goto LABEL_48cf71;
                }
                v10 = v64 + 1;
                v66 = -0x100 | v0;
                v64 = v16;
                if (v64 < v66)
                    goto LABEL_48d2f0;
                v67 = v11;
                v51 = v51;
                v68 = v66;
                v69 = v68 + (v68 < v64);
                v62 = v62 | -0x100 | 1;
                if ((v24 = (unsigned long long)v8->field_8->field_38(v8->field_0, v14, v13), v62 = (unsigned long long)v53, v24))
                    goto LABEL_48d3d5;
                v70 = a3;
                if (v70 < v51)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                _$LT$uu_cut..matcher..ExactMatcher$u20$as$u20$uu_cut..matcher..Matcher$GT$::next_match::h9e7608d0bf04f0e5(&v2, v7, &a2[v51], v70 - v51);
                if (!*((long long *)&v2))
                {
                    v53 = (unsigned int)v62;
                    v10 = v10;
                    v7 = v7;
LABEL_48d320:
                    v74 = v57;
                    v30 = v5;
                    v10 = v10;
                    if (a3 < v30)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                    v63 = v8->field_8->field_38(v8->field_0, v30 + v74);
                    if (v63)
                    {
                        vvar_1100{reg 24} = a0;
                        v80->field_8 = v63;
                        v80->field_0 = 1;
                        return v24;
                    }
                    v75 = a3;
                    if (!v75)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v64 = v74[1 + v75];
                    v10 = v10;
                    if ((char)v64 == *(v9))
                    {
                        v81 = a0;
                        v81->padding_1[0] = 1;
                        v81->field_0 = 0;
                        return 0;
                    }
                }
                else
                {
                    v71 = *((long long *)&v3) + v51;
                    if (v71 < v67)
                        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                    if (v71 > v70)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    v72 = v51 + *((long long *)&v4);
                    v63 = v8->field_8->field_38(v8->field_0, &a2[v67]);
                    if (v63)
                    {
                        vvar_1106{reg 24} = a0;
                        v80->field_8 = v63;
                        v80->field_0 = 1;
                        return v24;
                    }
                    v64 = v16;
                    if (!(v68 >= v64) && !((v53 = (unsigned int)v62, v69 > v64)))
                        continue;
                    v53 = (unsigned int)v62;
LABEL_48d2f0:
                    v10 = v10;
                    v7 = v7;
                }
LABEL_48cf71:
                v26 = v77 + 1;
                v27 = 2;
                v28 = v64 | -0x100 | 1;
                v31 = v53;
                if (v26 == v19)
                    break;
            }
        }
        v2 = *(v9);
        v82 = v8;
        v83 = v82->field_0;
        v84 = v82->field_8;
LABEL_48d3a2:
        v24 = v84->field_38(v83, &v2, 1);
        if (v24)
        {
            a0->field_8 = v24;
            a0->field_0 = 1;
            return v24;
        }
    }
    *((short *)&a0->field_0) = 0x100;
    return v24;
}
