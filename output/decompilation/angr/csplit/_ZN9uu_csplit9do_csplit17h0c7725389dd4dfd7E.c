void uu_csplit::do_csplit(struct_0 *a0, struct_2 *a1, unsigned long long a2, void* a3)
{
    unsigned int v0;  // [bp-0x188]
    unsigned int v1;  // [bp-0x184]
    struct_0 *v2;  // [bp-0x180]
    char v3;  // [bp-0x170]
    unsigned long long v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    int v6;  // [bp-0x158]
    int v8;  // [bp-0x148]
    unsigned long long v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x130]
    unsigned long long v11;  // [bp-0x128]
    unsigned long v12;  // [bp-0x118]
    int v13;  // [bp-0x110]
    int v14;  // [bp-0x100]
    unsigned long long v15;  // [bp-0xf0]
    struct struct_1 v16[16];  // [bp-0xe8]
    struct struct_1 v17[16];  // [bp-0xe8]
    unsigned int v18;  // [bp-0xe4]
    unsigned long long v19;  // [bp-0xe0]
    int v20;  // [bp-0xd8]
    unsigned long long v21;  // [bp-0xd0]
    int v22;  // [bp-0xc8]
    unsigned long long v23;  // [bp-0xc0]
    unsigned long long v24;  // [bp-0xb8]
    int v25;  // [bp-0xa8]
    unsigned long long v26;  // [bp-0xa0]
    char v27;  // [bp-0x98]
    char v28;  // [bp-0x88]
    char v29;  // [bp-0x68]
    int v30;  // [bp-0x68]
    int v31;  // [bp-0x58]
    int v32;  // [bp-0x48]
    char v33;  // [bp-0x38]
    struct_0 *v35;  // r14
    char *v36;  // rdi
    char *v37;  // rsi
    unsigned int v38;  // eax
    unsigned int v39;  // ebp
    unsigned long long v40;  // r15
    unsigned long long v41;  // r15
    unsigned long v42;  // r13
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v46;  // r13
    unsigned long long v47;  // r15
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    void* v50;  // r14, Other Possible Types: unsigned long long
    void* v51;  // r14, Other Possible Types: unsigned long long
    unsigned long long v52;  // r15
    unsigned long v53;  // r13

    v35 = a0;
    v28.into_iter(a2);
    v29.next(&v28);
    if (*((int *)&v29) != 3)
    {
        v36 = &v3;
        v37 = &v17;
        v2 = a0;
        while (true)
        {
            v24 = *((long long *)&v33);
            v22 = v32;
            v20 = v31;
            *((void*)&v16->field_0) = v30;
            v38 = v36.spec_to_string(v37);
            v39 = *((int *)&v16[0]);
            if (v39 == 2)
            {
                v1 = v38 & 0xffffff00 | 1;
                v0 = 0;
LABEL_5933cd:
                memcpy(&v27, &v20, 16);
                *((int128_t *)&v25) = *((int128_t *)&v19);
                v12 = v18;
                v46 = v24;
                if (v23 == 1)
                {
                    v47 = 1;
                    if (!v46)
                        goto LABEL_5935c0;
                    if (!(v39 == 2))
                        goto LABEL_593438;
                }
                else
                {
                    v47 = 0;
                    if (v39 != 2)
                    {
LABEL_593438:
                        if (!(!a1.new_writer()))
                            goto LABEL_593687;
LABEL_59344a:
                        v13.do_to_match(a1, v4, v5, (long long)v25, v26, v12, a3);
                        v9 = v15;
                        v8 = v14;
                        v6 = v13;
                        v10 = v47;
                        v11 = v46;
                        v49 = (long long)v6;
                        if (v49 != 13)
                        {
                            v50 = 0;
LABEL_5936a3:
                            if (v47)
                            {
                                if ((unsigned int)v49 != 3 || !v50 || v46 == 1)
                                    goto LABEL_593723;
                                v13.clone(&v3);
                                v2->field_20 = (long long)v14;
                                *((void*)&v2->field_10) = v13;
                                *((unsigned long long *)&v2->field_0) = 4;
                                *((void* *)&v2->padding_1[7]) = v50;
                                if ((int)v6 == 13)
                                    goto LABEL_593742;
                            }
                            else if ((unsigned int)v49 == 3)
                            {
                                *((unsigned long long *)&v2->field_0) = 13;
                            }
                            else
                            {
LABEL_593723:
                                v2->field_20 = v9;
                                *((void*)&v2->field_10) = v8;
                                *((void*)&v2->field_0) = v6;
LABEL_593742:
                                ::0x58e990::core::ptr::drop_in_place<regex::regex::string::Regex>(&(char)v25);
                                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v28);
                                return;
                            }
                            core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v6);
                            goto LABEL_593742;
                        }
                        v50 = 1;
                        if (!(!(v23 & 255)))
                            goto LABEL_5934f0;
                        while (true)
                        {
                            do
                            {
                                v47 = 0;
                                if (v39 != 2)
                                {
LABEL_5934d8:
                                    v48 = a1.new_writer();
                                    if (!v48)
                                        goto LABEL_59350a;
LABEL_593687:
                                    *((unsigned long long *)&v2->field_0) = 0;
                                    *((unsigned long long *)&v2->padding_1[7]) = v48;
                                    goto LABEL_593742;
                                }
LABEL_593504:
                                a1->field_38 = 1;
LABEL_59350a:
                                v13.do_to_match(a1, v4, v5, (long long)v25, v26, v12, a3);
                                v9 = v15;
                                v8 = v14;
                                v6 = v13;
                                v10 = v47;
                                v11 = v46;
                                if (!((long long)v6 == 13))
                                    goto LABEL_5936a3;
                                v50 += 1;
                            } while (!(char)v23);
LABEL_5934f0:
                            v47 = 1;
                            if (v46 != v50)
                            {
                                if (v39 == 2)
                                    goto LABEL_593504;
                                else
                                    goto LABEL_5934d8;
                            }
                            else
                            {
LABEL_5935c0:
                                ::0x58e990::core::ptr::drop_in_place<regex::regex::string::Regex>(&(char)v25);
                                v35 = v2;
                                goto LABEL_5935d9;
                            }
                        }
                    }
                }
                a1->field_38 = 1;
                goto LABEL_59344a;
            }
            if (v39 == 1)
            {
                v0 = v38 & 0xffffff00 | 1;
                v1 = 0;
                goto LABEL_5933cd;
            }
            if ((!v21 & (char)v20))
                goto LABEL_5935d9;
            v40 = v19;
            if (((char)v20 & 1))
            {
                v51 = 0;
                v41 = v40;
                v42 = v41;
                if (!(!a1.new_writer()))
                    goto LABEL_5937a0;
                v6.do_to_line(a1, v4, v5, v42, a3);
                v44 = (long long)v6;
                if (v44 != 13)
                {
LABEL_5937b2:
                    if (((unsigned int)v44 == 1 & v51))
                    {
                        v13.clone(&v3);
                        v2->field_20 = (long long)v14;
                        *((void*)&v2->field_10) = v13;
                        *((unsigned long long *)&v2->field_0) = 2;
                        *((unsigned long long *)&v2->padding_1[7]) = v51;
                        core::ptr::drop_in_place<uu_csplit::csplit_error::CsplitError>(&v6);
                        ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v28);
                        return;
                    }
                    v2->field_20 = v9;
                    *((void*)&v2->field_10) = v8;
                    *((void*)&v2->field_0) = v6;
                    ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v28);
                    return;
                }
                v51 += 1;
                v41 = v42 + v40;
                if (!(v21 == v51))
                    continue;
                v35 = v2;
LABEL_5935d9:
                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                v29.next(&v28);
                v36 = &v3;
                v37 = &v17;
                if ((int)v30 == 3)
                    break;
            }
            else
            {
                v51 = 0;
                v52 = v40;
                while (true)
                {
                    v53 = v52;
                    if (a1.new_writer())
                        break;
                    v6.do_to_line(a1, v4, v5, v53, a3);
                    if (!((long long)v6 == 13))
                        goto LABEL_5937b2;
                    v51 += 1;
                    v52 = v53 + v40;
                }
LABEL_5937a0:
                *((unsigned long long *)&v2->field_0) = 0;
                *((unsigned long long *)&v2->padding_1[7]) = v43;
                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v28);
                return;
            }
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_csplit::patterns::Pattern>>(&v28);
    *((unsigned long long *)&v35->field_0) = 13;
    return;
}
