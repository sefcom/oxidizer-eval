long long uu_pr::write_columns(unsigned long long a0, unsigned long long a1, struct_1 *a2)
{
    char v0;  // [bp-0x199]
    void* v1;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x190]
    unsigned long v3;  // [bp-0x188]
    unsigned long v4;  // [bp-0x168]
    unsigned long v5;  // [bp-0x160]
    unsigned int v6;  // [bp-0x154]
    unsigned long long v7;  // [bp-0x150]
    unsigned long long v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x140]
    char v11;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x130]
    unsigned long long v13;  // [bp-0x128]
    unsigned long v14;  // [bp-0x120]
    unsigned long v15;  // [bp-0x118]
    void* v16;  // [bp-0x108]
    unsigned long long v17;  // [bp-0x100]
    void* v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xf0]
    unsigned long long v20;  // [bp-0xe8]
    void* v21;  // [bp-0xe0]
    void* v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xd0]
    void* v24;  // [bp-0xc8]
    int v25;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0xb8]
    int v27;  // [bp-0xb0], Other Possible Types: struct_1 *
    unsigned long v28;  // [bp-0xa8]
    void* v29;  // [bp-0xa0], Other Possible Types: unsigned long long
    char v30;  // [bp-0x98]
    void* v31;  // [bp-0x90]
    unsigned long long v32;  // [bp-0x88]
    unsigned long v33;  // [bp-0x78]
    unsigned long long v34;  // [bp-0x70]
    char v35;  // [bp-0x68]
    char v36;  // [bp-0x48]
    unsigned long v38;  // rdi
    unsigned long long v39;  // r12
    unsigned long v40;  // rax
    unsigned int v41;  // ecx
    unsigned long long v42;  // rax
    void* v43;  // r15
    unsigned long long v44;  // rbx
    unsigned long v45;  // r13
    unsigned long long v46;  // rax
    struct_0 *v47;  // r15
    unsigned long long v48;  // rbp
    unsigned long long v49;  // rbp
    unsigned long v51;  // r13
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rax
    unsigned long long *v54;  // rdx
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rax
    unsigned long long v57;  // r15
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rax
    unsigned long long *v60;  // rdx
    unsigned long long *v61;  // rdx
    unsigned long long *v62;  // rdx

    v38 = a2->field_10;
    v39 = a2->field_138 >> (a2->field_140 & 63);
    if (v38 == 1)
    {
        v3 = a2->field_18;
        v40 = a2->field_100;
    }
    else
    {
        v40 = a2->field_100;
        v3 = 1;
        if (v40 != 0x8000000000000000)
            v3 = a2->field_120;
    }
    v41 = 0;
    if (v40 != 0x8000000000000000)
        v41 = a2->field_128;
    v6 = v41;
    v15 = a2->field_68;
    v14 = a2->field_70;
    v5 = a2->field_20;
    v4 = a2->field_28;
    v0 = a2->field_142;
    v16 = 0;
    v17 = 8;
    v18 = 0;
    v33 = v38;
    if (v38 && v3)
    {
        v34 = a1 * 64;
        v42 = 1;
        v43 = 0;
        v44 = 0;
        do
        {
            if (v43 > a1)
                core::slice::index::slice_start_index_len_fail(v43, a1, &g_6695d8); /* do not return */
            v1 = v43;
            v2 = v42;
            if (v43 == a1)
            {
                v45 = 0;
            }
            else
            {
                v46 = v43 * 64;
                v47 = a0 + v46;
                v48 = v34 - v46;
                v45 = 0;
                while (true)
                {
                    v49 = v48;
                    if (v47->field_18 != v44)
                        break;
                    v16.push(v47, &g_6695a8);
                    v45 += 1;
                    v47 += 2;
                    v48 = v49 - 64;
                    if (v49 == 64)
                        break;
                }
            }
            v43 = v1 + v45;
            v51 = v45 - 1;
            while (true)
            {
                v51 += 1;
                if (v51 >= v39)
                    break;
                v16.push(0, &g_6695c0);
            }
            v44 = v2;
            v42 = v44 + (v44 < v3);
        } while (v44 < v3);
    }
    v24 = 0;
    v22 = v16;
    v23 = 8;
    v31 = 0;
    v32 = v39;
    v25 = a0;
    v26 = a1;
    v27 = a2;
    v28 = v3;
    v29 = v39;
    v30 = v6;
    v36.collect(&v22);
    v22 = 0;
    *((uint128_t *)&v25) = 0;
    *((uint128_t *)&v27) = 0;
    v23 = 1;
    v24 = 0;
    v29 = 0;
    v35.into_iter(&v36);
    v11.next(&v35);
    if (v11 != 0x8000000000000000)
    {
        v1 = v11;
        if (v33)
        {
            do
            {
                v52 = v12;
                v2 = v52;
                v19 = v52;
                v20 = v52 + v13 * 8;
                v21 = 0;
                while (true)
                {
                    v53 = v19.next();
                    if (!v54)
                        break;
                    if (*(v54))
                    {
                        uu_pr::get_line_for_printing(&v7, a2, *(v54), v3, v53, v5, v4, v13);
                        if (v55.write_all(v9, v10))
                            goto LABEL_537777;
                        core::ptr::drop_in_place<alloc::string::String>(&v7);
                    }
                    else
                    {
                        uu_pr::get_line_for_printing(&v7, a2, &v22, v3, v53, v5, v4, v13);
                        v56 = v55.write_all(v9, v10);
                        core::ptr::drop_in_place<alloc::string::String>(&v7);
                        if (v56)
                            goto LABEL_537781;
                    }
                }
                if (v55.write_all(v15, v14))
                    goto LABEL_537781;
                core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v1, v2);
                v11.next(&v35);
                v1 = v11;
            } while (v11 != 0x8000000000000000);
            goto LABEL_537781;
        }
        else
        {
            v57 = 0;
            while (true)
            {
                v58 = v12;
                v2 = v58;
                v19 = v58;
                v20 = v58 + v13 * 8;
                v21 = 0;
                v59 = v19.next();
                if (v60)
                {
                    while (true)
                    {
                        v62 = v61;
                        if (!*(v62))
                        {
                            v57 = v57 & 0xffffffffffffff00 | 1;
                            if (v0)
                                goto LABEL_5377c4;
                            goto LABEL_537714;
                        }
                        uu_pr::get_line_for_printing(&v7, a2, *(v62), v3, v59, v5, v4, v13);
                        if (v55.write_all(v9, v10))
                            break;
                        core::ptr::drop_in_place<alloc::string::String>(&v7);
                        v59 = v19.next();
                        v61 = v60;
                        if (!v61)
                            goto LABEL_5376f6;
                    }
LABEL_537777:
                    core::ptr::drop_in_place<alloc::string::String>(&v7);
LABEL_537781:
                    core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v1, v2);
                    v35.drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>();
                    core::ptr::drop_in_place<uu_pr::FileLine>(&v22);
                    return 1;
                }
LABEL_5376f6:
                if (((char)v57 & v0 & 1))
                    break;
LABEL_537714:
                if (v55.write_all(v15, v14))
                    goto LABEL_537781;
                core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v1, v2);
                v11.next(&v35);
                v1 = v11;
                if (v11 == 0x8000000000000000)
                {
                    v35.drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>();
                    core::ptr::drop_in_place<uu_pr::FileLine>(&v22);
                    return 0;
                }
            }
LABEL_5377c4:
            core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v1, v2);
        }
    }
    v35.drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>();
    core::ptr::drop_in_place<uu_pr::FileLine>(&v22);
    return 0;
}
