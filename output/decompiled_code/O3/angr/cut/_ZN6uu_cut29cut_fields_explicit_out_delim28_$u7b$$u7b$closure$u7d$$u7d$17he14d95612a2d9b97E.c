long long uu_cut::cut_fields_explicit_out_delim::_$u7b$$u7b$closure$u7d$$u7d$::he14d95612a2d9b97(struct_3 *a0, struct_6 *a1, char *a2, char *a3)
{
    char v0;  // [sp-0xc3]
    char v1;  // [sp-0xc2]
    char v2;  // [sp-0xc1]
    unsigned long long v4[2];  // [sp-0xb8]
    unsigned long long v5;  // [sp-0xa0]
    struct_2 *v6;  // [sp-0x98]
    char *v7;  // [sp-0x90]
    unsigned long long v8;  // [sp-0x88]
    unsigned long long v9;  // [sp-0x80]
    char *v10;  // [sp-0x78], Other Possible Types: unsigned long long
    char *v11;  // [sp-0x70]
    unsigned long long v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x60]
    unsigned long long v14;  // [sp-0x58]
    unsigned long long v15;  // [sp-0x50]
    unsigned long long v16;  // [sp-0x48]
    unsigned long long v17;  // [sp-0x40]
    unsigned long long v18;  // [sp-0x38]
    unsigned long v20;  // rdx
    unsigned long long v21;  // rdx
    char *v22;  // rbp
    char *v23;  // rbp
    char *v24;  // rax
    unsigned int v25;  // eax
    struct_2 *v26;  // r14
    char *v27;  // rbp
    struct_4 *v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30[2];  // r15
    char v31;  // al
    char *v32;  // r14
    char *v35;  // rdx
    char *v37;  // 4096
    char *v38;  // r12
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rdi
    unsigned long long v42;  // rdi
    unsigned long long v43;  // rsi
    unsigned long long v44[2];  // r15
    char *v45;  // r13
    char *v46;  // r8
    unsigned long long v47;  // r15
    void* v48;  // r14
    unsigned long long v49;  // r12
    unsigned long long v50;  // rbx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    char *v53;  // rdx
    unsigned int v54;  // ecx
    void* v55;  // r14
    unsigned long long v56;  // r12
    unsigned long long v57;  // rbx
    unsigned long long v58;  // rax
    unsigned long long v59;  // rax
    char *v60;  // rdx
    unsigned int v61;  // ecx
    char *v62;  // r14
    unsigned long long v63;  // r14
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rax
    char *v66;  // rdx
    unsigned long long v67;  // rax
    unsigned int v68;  // ecx
    char *v71;  // rbp
    char *v73;  // r8
    char *v75;  // rbp
    char *v76;  // r13
    char *v77;  // rcx
    char *v78;  // r14
    char *v79;  // r12
    unsigned long long v80;  // rsi
    char *v81;  // rax
    char *v82;  // rax
    char *v83;  // rdx
    unsigned int v84;  // ecx
    unsigned long long v85;  // rsi
    char *v86;  // rbp
    char *v87;  // rbp
    unsigned long long v88;  // rdx
    char *v89;  // rax
    unsigned long long v90;  // rcx
    unsigned long long v91;  // rax
    unsigned long long v92;  // rcx
    unsigned long long v93;  // r12
    unsigned long long v94;  // r13
    unsigned long long v95;  // rsi
    unsigned long long v96;  // r13
    unsigned long long v97;  // r13
    char *v98;  // rdx
    unsigned int v99;  // eax
    unsigned long long v100;  // rsi
    unsigned long long v101;  // rdi
    struct_1 *v102;  // rax
    struct_3 *v103;  // rcx
    struct_3 *v104;  // rcx
    struct_3 *v105;  // rcx
    struct_2 *v106;  // rax

    a0 = a0;
    v8 = a3 + a2;
    if (!_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E(32, 9, a2, a3 + a2))
    {
        if (a1->field_8->field_0)
        {
            *((short *)&a0->field_0) = 0x100;
            return v24;
        }
        v26 = a1->field_10;
        v24 = v26->field_8->field_38(v26->field_0, a2, a3);
        if (v24)
        {
            a0->field_8 = v24;
            a0->field_0 = 1;
            return v24;
        }
        if (a3 < 1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v24 = a1->field_18->field_0;
        if (*((char *)(a2 + a3 + 1)) != v1)
        {
            v1 = (char)v24;
            v101 = v26->field_0;
            v102 = v26->field_8;
            goto LABEL_48db46;
        }
    }
    else
    {
        v21 = v20 - a2;
        v22 = v21 + 1;
        if (v22 < a3)
        {
            while (true)
            {
                v25 = *((char *)(a2 + v22));
                if (v25 != 32 && v25 != 9)
                    break;
                v22 += 1;
            }
        }
        v27 = v23;
        v6 = a1->field_10;
        v28 = a1->field_20;
        v29 = v28->field_8;
        if (!v29)
        {
            v7 = a1->field_18;
        }
        else
        {
            v17 = v21;
            a0 = a0;
            v30 = v28->field_0;
            v18 = &v30[v29];
            v7 = &a1->field_18->field_0;
            v14 = a1->field_28;
            v13 = a1->field_30;
            v16 = a3 + 1;
            v31 = 0;
            v11 = v27;
            v32 = 1;
            v35 = 0;
            while (true)
            {
                v38 = v37;
                v10 = v35;
                v40 = v30[0];
                v41 = v30[1];
                v4[0] = v30;
                v12 = 1;
                v5 = v40;
                v9 = v41;
                if (v40 != v12)
                {
                    v47 = ~(v12) + v40;
                    if ((v31 & 1))
                    {
                        if (v47)
                        {
                            v48 = 0;
                            while (true)
                            {
                                v49 = v38 - v27;
                                if (v38 < v27)
                                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                                v50 = a2 + v27;
                                if (!_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E(32, 9, v50, v8))
                                    break;
                                v51 = v20 - v50 + 1;
                                if (v51 < v49)
                                {
                                    v53 = v20 + 1;
                                    while (true)
                                    {
                                        v54 = *(v53);
                                        if (v54 != 32 && v54 != 9)
                                            break;
                                        v51 += 1;
                                        v53 += 1;
                                    }
                                }
                                v27 = &v27[v52];
                                v48 += 1;
                                v38 = a3;
                                if (v48 == v47)
                                    goto LABEL_48d770;
                            }
                        }
                    }
                    else
                    {
                        if (!v47)
                        {
                            v32 = 2;
                            v42 = v9;
                            v43 = v5;
                            v44[0] = v4;
                            v46 = v11;
                        }
                        else
                        {
                            if (v47 != 1)
                            {
                                v55 = 0;
                                while (true)
                                {
                                    v56 = v38 - v27;
                                    if (v38 < v27)
                                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                                    v57 = a2 + v27;
                                    if (!_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E(32, 9, v57, v8))
                                        break;
                                    v58 = v20 - v57 + 1;
                                    if (v58 < v56)
                                    {
                                        v60 = v20 + 1;
                                        while (true)
                                        {
                                            v61 = *(v60);
                                            if (v61 != 32 && v61 != 9)
                                                break;
                                            v58 += 1;
                                            v60 += 1;
                                        }
                                    }
                                    v27 = &v27[v59];
                                    v55 += 1;
                                    v38 = a3;
                                    if (v55 == v47 - 1)
                                        goto LABEL_48d770;
                                }
                            }
LABEL_48d770:
                            v62 = v38;
                            v63 = v62 - v27;
                            if (v62 < v27)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                            v64 = a2 + v27;
                            if (!_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E(32, 9, v64, v8))
                                break;
                            v65 = v20 - v64 + 1;
                            if (v65 >= v63)
                            {
                                v42 = v9;
                                v43 = v5;
                            }
                            else
                            {
                                v66 = v20 + 1;
                                while (true)
                                {
                                    v68 = *(v66);
                                    if (v68 != 32 && (v9 = v9, v5 = v5, v68 != 9))
                                        break;
                                    v65 += 1;
                                    v66 += 1;
                                    if (v65 >= v63)
                                    {
                                        v42 = v9;
                                        v43 = v5;
                                        break;
                                    }
                                }
                            }
                            v71 = &v27[v67];
                            v32 = 2;
                            v44[0] = v4;
                        }
                    }
                }
                v75 = v27;
                v15 = v42 - v43;
                v0 = v42 != v43;
                v45 = v45 | -0x100 | 1;
                v77 = v10;
                if (((char)v77 & 1) && (v24 = (unsigned long long)v6->field_8->field_38(v6->field_0, v14, v13), v76 = v77 & 4294967295, v24))
                {
LABEL_48db74:
                    v103 = a0;
                    v103->field_8 = v24;
                    v103->field_0 = 1;
                    return v24;
                }
                if (v32 != 2)
                {
                    v17 = v17;
                    v11 = v11;
                    goto LABEL_48d91b;
                }
                v78 = v38;
                v32 = v78 - v75;
                if (v78 < v75)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                v73 = v73;
                v10 = a2 + v75;
                if (!_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E(32, 9, a2 + v75, v8))
                {
LABEL_48daab:
                    v38 = v79;
                    if (v38 < v73)
                        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                    v89 = v6->field_8->field_38(v6->field_0, a2 + v73);
                    if (v89)
                    {
                        vvar_1408{reg 24} = a0;
                        v104->field_8 = v89;
                        v104->field_0 = 1;
                        return v24;
                    }
                    else if (!v38)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    }
                    else
                    {
                        v91 = *((char *)(a2 + v38 - 1));
                        if ((char)v91 == *(v7))
                        {
                            v105 = a0;
                            v105->padding_1[0] = 1;
                            v105->field_0 = 0;
                            return 0;
                        }
                    }
                    goto LABEL_48daf9;
                }
                else
                {
                    v80 = v20 - v10;
                    v81 = v80 + 1;
                    if (v81 < v32)
                    {
                        v83 = v20 + 1;
                        while (true)
                        {
                            v84 = *(v83);
                            if (v84 != 32 && v84 != 9)
                                break;
                            v81 += 1;
                            v83 += 1;
                        }
                    }
                    v85 = &v75[v80];
                    v86 = v75 + v82;
LABEL_48d91b:
                    v73 = v11;
                    v87 = v75;
                    v88 = v17;
                    if (v88 < v73)
                        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                    if (v88 > v38)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    v89 = v6->field_8->field_38(v6->field_0, v73 + a2, v88 - v73);
                    if (v89)
                    {
                        v104 = a0;
                        v104->field_8 = v89;
                        v24 = v89 | -0x100 | 1;
                        v104->field_0 = 1;
                        return v24;
                    }
                    v90 = v9;
                    v91 = v90 + 1;
                    v12 = v91;
                    if (v90 != v5 && (v92 = -0x100 | (unsigned long long)v0, v91 = v15, v91 >= v92))
                    {
                        v75 = v87;
                        v5 = v92;
                        v92 = v5 + (v5 < v91);
                        v32 = v32 | -0x100 | 1;
                        if ((v24 = (unsigned long long)v6->field_8->field_38(v6->field_0, v14, v13), v32 = v76 & 4294967295, v24))
                            goto LABEL_48db74;
                        v93 = v38 - v75;
                        if (v38 < v75)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        v94 = a2 + v75;
                        if (!_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E(32, 9, v94, v8))
                        {
                            v76 = v32 & 4294967295;
                            v44[0] = v4;
                            goto LABEL_48daab;
                        }
                        else
                        {
                            v95 = v20 - v94;
                            v96 = v95 + 1;
                            if (v96 < v93)
                            {
                                v98 = v20 + 1;
                                while (true)
                                {
                                    v99 = *(v98);
                                    if (v99 != 32 && v99 != 9)
                                        break;
                                    v96 += 1;
                                    v98 += 1;
                                }
                            }
                            v100 = &v75[v95];
                            v38 = a3;
                            if (v100 < v73)
                                core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
                            if (v100 > v38)
                                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                            v89 = v6->field_8->field_38(v6->field_0, v73 + a2);
                            if (v89)
                            {
                                vvar_1414{reg 24} = a0;
                                v104->field_8 = v89;
                                v104->field_0 = 1;
                                return v24;
                            }
                            v73 = &v75[v97];
                            v91 = v15;
                            if (!(v5 >= v91) && !((v76 = v32 & 4294967295, v92 > v91)))
                                continue;
                            v76 = v32 & 4294967295;
                        }
                    }
LABEL_48daf9:
                    v30 = v4 + 1;
                    v32 = 2;
                    v31 = v91 | -0x100 | 1;
                    v35 = v76 & 4294967295;
                    if (v30 == v18)
                        break;
                }
            }
        }
        v2 = *(v7);
        v106 = v6;
        v101 = v106->field_0;
        v102 = v106->field_8;
LABEL_48db46:
        v24 = v102->field_38(v101);
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
