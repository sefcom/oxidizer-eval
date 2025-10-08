void uu_csplit::do_csplit(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3[7])
{
    unsigned int v0;  // [bp-0x180]
    unsigned int v1;  // [bp-0x180]
    unsigned int v2;  // [bp-0x17c]
    unsigned int v3;  // [bp-0x17c]
    struct_0 *v4;  // [bp-0x178]
    void* v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x150]
    void* v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    char v11;  // [bp-0x108]
    int v12;  // [bp-0x108]
    unsigned int v13;  // [bp-0x104]
    unsigned long long v14;  // [bp-0x100]
    int v15;  // [bp-0xf8]
    unsigned long long v16;  // [bp-0xf0]
    int v17;  // [bp-0xe8]
    void* v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    int v20;  // [bp-0xd0]
    int v21;  // [bp-0xc0]
    unsigned long v22;  // [bp-0xb0]
    int v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0xa0]
    char v25;  // [bp-0x98]
    char v26;  // [bp-0x88]
    char v27;  // [bp-0x68]
    int v28;  // [bp-0x68]
    int v29;  // [bp-0x58]
    int v30;  // [bp-0x48]
    char v31;  // [bp-0x38]
    struct_0 *v33;  // rbp
    void* v34;  // r12
    char *v35;  // rsi
    unsigned int v36;  // r13d
    void* v37;  // r14
    void* v38;  // r15
    struct_0 *v39;  // rsi
    unsigned long long v40;  // rax
    void* v41;  // rax
    unsigned long long v42;  // rbx
    void* v43;  // r14
    unsigned long long v44;  // rbx
    unsigned long long v45;  // r13
    void* v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v49;  // rbx
    unsigned long long v50;  // r13
    unsigned long v52;  // rax
    int v53;  // [bp-0x148]
    int v54;  // [bp-0x138]
    unsigned long v55;  // [bp-0x128]

    v33 = a1;
    v34 = a0;
    v26.into_iter(a2);
    v27.next(&v26);
    if (*((int *)&v27) != 3)
    {
        v35 = &v11;
        v4 = a1;
        v5 = a0;
        do
        {
            v19 = *((long long *)&v31);
            v17 = v30;
            v15 = v29;
            v12 = v28;
            v6.spec_to_string(v35);
            v36 = (int)v12;
            if (v36)
            {
                if (v36 == 1)
                {
                    v0 = v2;
                    v3 = 0;
                }
                else
                {
                    v2 = v0;
                    v1 = 0;
                }
                memcpy(&v25, &v15, 16);
                *((int128_t *)&v23) = *((int128_t *)&v14);
                v37 = 0;
                if (!(v18 & 255))
                    goto LABEL_5199e0;
                while (true)
                {
                    v38 = v18;
                    if (v19 == v37)
                        break;
                    if (v36 == 2)
                        goto LABEL_519a22;
                    else
                        goto LABEL_5199e9;
                    do
                    {
LABEL_5199e0:
                        v38 = 0;
                        if (v36 != 2)
                        {
LABEL_5199e9:
                            v41 = v4.new_writer();
                            v39 = v4;
                            if (v41)
                            {
                                *((unsigned long long *)v5) = 0;
                                *((void* *)&v5[8]) = v41;
                                goto LABEL_519ba0;
                            }
                        }
                        else
                        {
LABEL_519a22:
                            v39 = v4;
                            v4->field_38 = 1;
                        }
                        v20.do_to_match(v39, v7, v8, (long long)v23, v24, v13, a3);
                        v55 = v22;
                        v54 = v21;
                        v53 = v20;
                        v9 = v38;
                        v10 = v19;
                        v40 = (long long)v53;
                        if (v40 != 13)
                        {
                            if (v38)
                            {
                                if ((unsigned int)v40 != 3 || !v37 || v19 == 1)
                                    goto LABEL_519b84;
                                v20.clone(&v6);
                                *((long long *)&v5[32]) = (long long)v21;
                                v5[16] = v20;
                                *((unsigned long long *)v5) = 4;
                                *((void* *)&v5[8]) = v37;
                            }
                            else if ((unsigned int)v40 == 3)
                            {
                                *((unsigned long long *)v5) = 13;
                            }
                            else
                            {
LABEL_519b84:
                                *((unsigned long *)&v5[32]) = v55;
                                v5[16] = v54;
                                *(v5) = v53;
LABEL_519ba0:
                                core::ptr::drop_in_place<regex::regex::string::Regex>(&(char)v23);
                                core::ptr::drop_in_place<alloc::string::String>(&v6);
                                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v26);
                                return;
                            }
                            core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v53);
                            goto LABEL_519ba0;
                        }
                        v37 += 1;
                    } while (!(char)v18);
                }
                core::ptr::drop_in_place<regex::regex::string::Regex>(&(char)v23);
                v34 = v5;
                v33 = v4;
                goto LABEL_519abf;
            }
            if (!(!v16 & (char)v15))
            {
                v42 = v14;
                if (((char)v15 & 1))
                {
                    v43 = 0;
                    v44 = v42;
                    while (true)
                    {
                        v45 = v44;
                        if (v33.new_writer())
                            break;
                        v53.do_to_line(v33, v7, v8, v45, a3);
                        v47 = (long long)v53;
                        if (v47 == 13)
                        {
                            v43 += 1;
                            v44 = v45 + v42;
                            if (v16 == v43)
                                goto LABEL_519abf;
                        }
                        else
                        {
LABEL_519c35:
                            if (!!v43 && !(unsigned int)v47 != 1)
                            {
                                v20.clone(&v6);
                                v52 = (long long)v21;
                                *((unsigned long *)&v34[32]) = v52;
                                v34[16] = v20;
                                *((unsigned long long *)v34) = 2;
                                *((void* *)&v34[8]) = v43;
                                v2 = (unsigned int)v52 & 0xffffff00 | 1;
                                v0 = v2 & 0xffffff00 | 1;
                                core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v53);
                                core::ptr::drop_in_place<alloc::string::String>(&v6);
                                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v26);
                                return;
                            }
                            *((unsigned long *)&v34[32]) = v55;
                            v34[16] = v54;
                            *(v34) = v53;
                            core::ptr::drop_in_place<alloc::string::String>(&v6);
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v26);
                            return;
                        }
                    }
                }
                else
                {
                    v43 = 0;
                    v49 = v42;
                    while (true)
                    {
                        v50 = v49;
                        if (v4.new_writer())
                            break;
                        v53.do_to_line(v4, v7, v8, v50, a3);
                        if ((long long)v53 != 13)
                            goto LABEL_519c35;
                        v43 += 1;
                        v49 = v50 + v42;
                    }
                    goto LABEL_519c35;
                }
                *((unsigned long long *)v34) = 0;
                *((void* *)&v34[8]) = v46;
                core::ptr::drop_in_place<alloc::string::String>(&v6);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v26);
                return;
            }
LABEL_519abf:
            core::ptr::drop_in_place<alloc::string::String>(&v6);
            v27.next(&v26);
            v35 = &v11;
        } while (*((int *)&v27) != 3);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v26);
    *((unsigned long long *)v34) = 13;
    return;
}
