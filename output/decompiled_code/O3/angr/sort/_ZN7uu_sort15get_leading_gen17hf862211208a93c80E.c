long long uu_sort::get_leading_gen::hf862211208a93c80(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    struct_0 *v0;  // [sp-0x80], Other Possible Types: void*
    void* v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v4;  // [sp-0x60], Other Possible Types: unsigned long
    struct_0 *v5;  // [sp-0x58]
    unsigned long long v6;  // [sp-0x50]
    void* v7;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    struct_0 *v11;  // rax
    unsigned long v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rcx
    struct_2 *v15;  // rsi
    unsigned long long v16;  // r8
    unsigned long long v17;  // r9
    unsigned long long v18;  // rcx
    struct_4 *v19;  // rsi
    unsigned long long v22;  // rcx
    struct_3 *v23;  // rsi
    struct_0 *v26;  // rax
    unsigned long long v27;  // rax
    void* v28;  // rcx
    unsigned long long v29;  // rdx
    struct_0 *v30;  // rcx
    char v31;  // dl
    void* v32;  // r12
    unsigned long long v33;  // rcx
    unsigned long long v34;  // r9
    unsigned long long v35;  // r8
    struct_0 *v36;  // r15
    unsigned long long v37;  // rbp
    unsigned long long v38;  // rcx
    unsigned long long v40;  // r8
    unsigned int v41;  // eax
    struct_0 *v42;  // r15
    unsigned long long v43;  // r9
    unsigned int v44;  // eax
    unsigned int v45;  // r13d
    unsigned int v46;  // r14d
    struct_1 *v48;  // rax
    unsigned int v49;  // eax
    struct_1 *v50;  // rax
    struct_0 *v51;  // rax
    void* v52;  // rcx
    unsigned long long v53;  // rdx
    struct_0 *v54;  // rax
    struct_0 *v55;  // rcx
    char v56;  // dl

    v11 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hbc31e6a1a7ae7468(a0, a1);
    v13 = a1 - v12;
    if (v12 <= 3)
    {
        if (!(v12 == 3))
            goto LABEL_4ccc21;
        if (!v11)
            goto LABEL_4cd159;
    }
    else if (v11->field_3 <= 191)
    {
        goto LABEL_4ccc21;
    }
    v14 = v11->field_0;
    if (((char)(((v14 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v14) == 105)
    {
        v15 = 0;
        do
        {
            if (v15 == 2)
                return v13;
        } while ((v16 = (unsigned long long)(char)*((char *)(v11 + v15 + 1)), v17 = (unsigned long long)(char)*((char *)(v15 + &g_429d2b)), v15 += 1, ((char)((unsigned long long)(char)((v16 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v16) == ((char)((unsigned long long)(char)((v17 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v17)));
        if (&v15->padding_0[1] >= 2)
            return v13;
    }
LABEL_4ccc21:
    if (v12 <= 4)
    {
        if (!(v12 == 4))
            goto LABEL_4cccbe;
        if (!v11)
        {
LABEL_4cd160:
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
    else if (v11->field_4 < 192)
    {
        goto LABEL_4cccbe;
    }
    v18 = v11->field_0;
    if (((char)(((v18 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v18) == 45)
    {
        v19 = -1;
        do
        {
            if (v19 == 2)
                return v13;
        } while ((v16 = (unsigned long long)(char)*((char *)(v11 + v15 + 1)), v17 = (unsigned long long)(char)*((char *)(v15 + &g_429d2b)), v15 += 1, ((char)((unsigned long long)(char)((v16 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v16) == ((char)((unsigned long long)(char)((v17 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v17)));
        if (v19 > 2)
            return v13;
    }
LABEL_4cccbe:
    if (v12 <= 3)
    {
        if (!(v12 == 3))
            goto LABEL_4ccd61;
        if (v11)
        {
LABEL_4cccde:
            v22 = v11->field_0;
            if (((char)(((v22 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v22) == 110)
            {
                v23 = 0;
                do
                {
                    if (v23 == 2)
                        return v13;
                } while ((v16 = (unsigned long long)(char)*((char *)(v11 + v15 + 1)), v17 = (unsigned long long)(char)*((char *)(v15 + &g_429d2b)), v15 += 1, ((char)((unsigned long long)(char)((v16 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v16) == ((char)((unsigned long long)(char)((v17 - 65 & 4294967295 & 255 & 255) < 26) << 5) | (char)v17)));
                if (&v23->padding_0[1] <= 1)
                    goto LABEL_4ccd61;
            }
        }
    }
    else
    {
        if (!(v11->field_3 < 192))
            goto LABEL_4cccde;
LABEL_4ccd61:
        v5 = v11;
        v6 = &(&v11->field_0)[v12];
        v7 = 0;
        v1 = 0;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        v26 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h3d6241ba4675decc(&v1, 0);
        v13 = v13;
        if (v26)
        {
            v26 = v26->field_8;
            if ((unsigned int)v26 == 45 || (unsigned int)v26 == 43)
            {
                v27 = v4;
                if (v27)
                {
                    v28 = v1;
                    v29 = v3;
                    if (v28 > v29 + 1)
                        v28 = 0;
                    v3 = v29 + -(v28) + 1;
                    v26 = v27 - 1;
                    v4 = v26;
                }
                else
                {
                    v26 = v5;
                    if (v26 && v26 != v6)
                    {
                        v30 = &v26->field_1;
                        v5 = v30;
                        v31 = v26->field_0;
                        if (v31 < 0)
                        {
                            v30 = &v26->field_2;
                            v5 = v30;
                            if (v31 >= 224)
                            {
                                v30 = &v26->field_3;
                                v5 = v30;
                                if (v31 >= 240)
                                {
                                    v30 = &v26->field_4;
                                    v5 = v30;
                                }
                            }
                        }
                        v7 += v30 - v26;
                    }
                }
            }
        }
        v9 = a1;
        v0 = v26 | -0x100 | 1;
        v32 = 0;
        while (true)
        {
            v33 = v1;
            v5 = v5;
            v7 = v7;
            v3 = v3;
            v4 = v4;
            do
            {
                v32 = v32;
                v4 = v4;
                v3 = v3;
                v7 = v7;
                v5 = v5;
                do
                {
                    v37 = v34;
                    if (v4)
                    {
                        v40 = v3 + -(v38) + 1;
                        v3 = v40;
                        v4 = &v4->field_1;
                        v4 = v4;
                        v41 = *((int *)(v2 + v3 * 16 + 8));
                        goto LABEL_4cce6a;
                    }
                    if (!(v5) || !(v5 != v6))
                    {
                        if (!v1)
                            return v13;
                        __rust_dealloc(v2);
                    }
                    v42 = &v5->field_1;
                    v5 = v42;
                    v43 = v5->field_0;
                    if ((char)v43 >= 0)
                    {
LABEL_4ccea5:
                        v41 = v43;
                        goto LABEL_4ccf20;
                    }
                    v44 = (unsigned int)v43 & 31;
                    v42 = &v5->field_2;
                    v5 = v42;
                    v45 = v5->field_1 & 63;
                    if ((v43 & 255) <= 223)
                    {
                        v41 = v44 * 64 | v45;
                        goto LABEL_4ccf20;
                    }
                    v42 = &v5->field_3;
                    v5 = v42;
                    v46 = v5->field_2 & 63 | v45 * 64;
                    if ((v43 & 255) >= 240)
                    {
                        v42 = &v5->field_4;
                        v5 = v42;
                        v43 = v5->field_3 & 63 | v46 * 64 | (v44 & 7) * 0x40000;
                        goto LABEL_4ccea5;
                    }
                    v41 = v46 | v44 * 0x1000;
LABEL_4ccf20:
                    v7 = v42 - v5 + v37;
                    v7 = v7;
LABEL_4cce6a:
                    v3 = v35;
                    v5 = v36;
                } while (v41 - 48 < 10);
                switch (v41)
                {
                case 46:
                    v32 = v32 | -0x100 | 1;
                    if (!(!(!(char)v32 & (char)v0)))
                        break;
                    goto LABEL_4cd12b;
                case 69: case 101:
                    if (((char)v0 & 1) && (v48 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h3d6241ba4675decc(&v1, 0), v48))
                        goto LABEL_4ccf8b;
                    else
                        goto LABEL_4cd12b;
                default:
LABEL_4cd12b:
                    if (!v1)
                        return v13;
                    __rust_dealloc(v2);
                }
LABEL_4ccf8b:
                v49 = v48->field_8;
                if (v49 != 45 && v49 != 43)
                {
                    v0 = 0;
                    if (v49 - 48 < 10)
                        break;
                }
                else
                {
                    v50 = itertools::peek_nth::PeekNth$LT$I$GT$::peek_nth::h3d6241ba4675decc(&v1, 2);
                    if (!(v50 && v50->field_8 - 48 <= 9))
                        goto LABEL_4cd12b;
                    v51 = v4;
                    if (v51)
                    {
                        v52 = v1;
                        v53 = v3;
                        v0 = 0;
                        if (v52 > v53 + 1)
                            v52 = 0;
                        v3 = v53 + -(v52) + 1;
                        v4 = &v51->field_1;
                        break;
                    }
                    else
                    {
                        v54 = v5;
                        v0 = 0;
                        if (v54)
                        {
                            v0 = 0;
                            if (v54 != v6)
                            {
                                v55 = &v54->field_1;
                                v5 = v55;
                                v56 = v54->field_0;
                                if (v56 < 0)
                                {
                                    v55 = &v54->field_2;
                                    v5 = v55;
                                    if (v56 >= 224)
                                    {
                                        v55 = &v54->field_3;
                                        v5 = v55;
                                        if (v56 >= 240)
                                        {
                                            v55 = &v54->field_4;
                                            v5 = v55;
                                        }
                                    }
                                }
                                v7 += v55 - v54;
                                v0 = 0;
                                break;
                            }
                        }
                    }
                }
            } while (v49 - 48 >= 10);
        }
    }
LABEL_4cd159:
    goto LABEL_4cd160;
}
