long long uu_sort::FieldSelector::get_range::resolve_index::hf7b31684476c2c1a(char *a0, char *a1, struct struct_0 **a2, unsigned long a3, struct_1 *a4)
{
    char v0[4];  // [sp-0x38], Other Possible Types: unsigned long long
    struct_1 *v2;  // r8
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // r9
    char *v7;  // rdx
    char *v8;  // rdx
    struct struct_0 **v9;  // rax
    struct struct_0 **v10;  // rax
    char *v12;  // 4096
    char v13[4];  // r12
    struct_1 *v14;  // rcx
    char v15[4];  // r12
    struct_1 *v16;  // r11
    char v17[4];  // r15
    unsigned long long v18;  // r13
    unsigned int v19;  // ebp
    unsigned int v20;  // r11d
    unsigned int v21;  // r14d
    unsigned int v22;  // r11d
    char *v24;  // rdx
    char *v25;  // r8
    unsigned long long v26;  // r10
    void* v27;  // rcx
    char *v29;  // r8
    char *v30;  // r8
    char *v31;  // r11
    unsigned long long v32;  // r9
    char *v33;  // rbx
    unsigned long long v37;  // rax

    v0 = v3;
    v4 = a4->field_0;
    if (a2 && v4 > a3)
        return 3;
    v6 = a4->field_8;
    if (v6)
    {
        if (v4 == 1)
        {
            v7 = 0;
            if (!(!a4->field_10))
                goto LABEL_4c4f66;
        }
        else
        {
            if (!a2)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v10 = v4 - 1;
            if (v10 >= a3)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v7 = *((long long *)((char *)a2 + 0x10 * v10));
            if (!a4->field_10)
            {
LABEL_4c510f:
                if (v7)
                {
                    if (v7 >= a1)
                    {
                        if (v7 != a1)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(a0 + v7)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
            }
            else
            {
                if (!v7)
                {
                    v7 = 0;
                    goto LABEL_4c4f5e;
                }
                else
                {
                    if (v7 >= a1)
                    {
                        if (v7 != a1)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(a0 + v7)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
LABEL_4c4f5e:
LABEL_4c4f66:
                        v13 = a0 + v7;
                        v14 = a1 - v7;
                        if (a1 != v7)
                        {
                            v16 = 0;
                            *(&v0) = v13;
                            do
                            {
                                v17 = v13;
                                v2 = v16;
                                v18 = v17[0];
                                if ((char)v18 >= 0)
                                {
                                    v13 = &v17[1];
                                }
                                else
                                {
                                    v19 = (unsigned int)v18 & 31;
                                    v20 = v17[1] & 63;
                                    if ((v18 & 255) <= 223)
                                    {
                                        v13 = &v17[2];
                                        v18 = v19 * 64 | v20;
                                    }
                                    else
                                    {
                                        v21 = v17[2] & 63 | v20 * 64;
                                        if ((v18 & 255) < 240)
                                        {
                                            v13 = &v17[3];
                                            v18 = v21 | v19 * 0x1000;
                                        }
                                        else
                                        {
                                            v13 = v17 + 1;
                                            v18 = v17[3] & 63 | v21 * 64 | (v19 & 7) * 0x40000;
                                        }
                                    }
                                }
                                if ((unsigned int)(v18 - 9) >= 5 && (unsigned int)v18 != 32)
                                {
                                    if ((unsigned int)v18 < 128)
                                        goto LABEL_4c50dc;
                                    if ((unsigned int)v18 >> 8 > 31)
                                    {
                                        switch (v22)
                                        {
                                        case 32:
                                            break;
                                        case 48:
LABEL_4c50a9:
                                            if (!(!(unsigned int)v18 == 5760))
                                                continue;
                                            goto LABEL_4c50dc;
                                        default:
LABEL_4c50dc:
                                            goto LABEL_4c50df;
                                        }
                                    }
                                    else
                                    {
                                        switch (v22)
                                        {
                                        case 0:
                                            break;
                                        case 22:
                                            goto LABEL_4c50a9;
                                        default:
LABEL_4c50dc:
                                            goto LABEL_4c50df;
                                        }
                                    }
                                    goto LABEL_4c50a9;
                                }
                            } while ((v16 = v2 - v17 + v13, v13 != a0 + a1));
LABEL_4c50df:
                            *(&v15) = v0;
                        }
                    }
                    v7 = v12;
                    goto LABEL_4c510f;
                }
            }
        }
        v24 = v8;
        v25 = a0 + v24;
        v26 = a0 + a1;
        v27 = 0;
        if (v6 == 1)
            goto LABEL_4c5191;
        while (true)
        {
            v31 = v29;
            v32 = v6 - 1;
            if (v31 == v26)
            {
                break;
            }
            else
            {
                v33 = (*(v31) < 0 ? (*(v31) < 224 ? v31 + 2 : (*(v31) < 240 ? v31 + 3 : v31 + 4)) : v31 + 1);
                v27 += v33 - v31;
                if (v32 == 1)
                {
LABEL_4c5191:
                    if (v30 != v26)
                        break;
                }
            }
        }
        v5 = (-0x100 | a1 <= &v24[v37]) * 3;
        return v5;
    }
    else if (!a2)
    {
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
    else
    {
        v9 = v4 - 1;
        if (v9 >= a3)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v5 = 1 + (*((long long *)(8 + (char *)a2 + 0x10 * v9)) < 1);
        return v5;
    }
}
