long long uu_sort::numeric_str_cmp::NumInfo::parse::h536ee64c31bb4548(struct_1 *a0, char a1[4], char *a2, struct_0 *a3)
{
    unsigned long long v0;  // [sp-0x150]
    unsigned int v1;  // [sp-0x54]
    char *v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x30]
    unsigned long long v4;  // [sp-0x28]
    unsigned long long v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    unsigned long long v7;  // [sp-0x10]
    unsigned long v8;  // [sp-0x8]
    unsigned long v11;  // r15
    unsigned long v12;  // r14
    unsigned long v13;  // r13
    unsigned long v14;  // r12
    unsigned long v15;  // rbx
    unsigned long long v16;  // rbx
    unsigned int v17;  // ebp
    unsigned int v18;  // eax
    unsigned long long v19;  // r8
    char *v20;  // rcx
    char v21[4];  // r14
    void* v22;  // r10
    char *v23;  // r9
    char *v25;  // rcx
    char *v27;  // rdx
    char *v28;  // rdi
    unsigned int v29;  // r13d
    unsigned int v30;  // r11d
    unsigned int v31;  // edx
    char *v32;  // rcx
    char *v33;  // rdx
    char *v34;  // rdx
    unsigned int v35;  // cc_dep1
    unsigned int v36;  // cc_dep2
    char *v38;  // r15
    char v39;  // r15b
    unsigned int v40;  // r15d
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rsi
    char *v43;  // rdx
    char v46;  // dl
    char *v47;  // rdx
    char *v50;  // rcx
    char v51[4];  // r14
    char *v52;  // rcx
    char *v53;  // rdi
    unsigned int v54;  // r9d
    unsigned int v55;  // r11d
    unsigned int v56;  // edx
    char *v57;  // rdx
    char *v60;  // rdi
    char *v61;  // rdi
    char *v68;  // rdi
    unsigned long long v69;  // rdi

    if (!a2)
    {
        v19 = 0;
        v25 = 0;
    }
    else
    {
        *((int *)&v8) = vvar_250{reg 56};
        v7 = v11;
        v6 = v12;
        v5 = v13;
        v4 = v14;
        v3 = v15;
        v16 = a1 + a2;
        v17 = a3->field_0;
        v18 = a3->field_4;
        v1 = a3 | -0x100 | 1;
        v19 = -1;
        v20 = 0;
        v2 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        do
        {
            v28 = a1[0];
            if ((char)v28 >= 0)
            {
                a1 = &a1[1];
            }
            else
            {
                v29 = (unsigned int)v28 & 31;
                v30 = a1[1] & 63;
                if ((v28 & 255) < 224)
                {
                    a1 = &a1[2];
                    v28 = v29 * 64 | v30;
                }
                else
                {
                    v31 = a1[2] & 63 | v30 * 64;
                    if ((v28 & 255) < 240)
                    {
                        a1 = &a1[3];
                        v27 = v31 | v29 * 0x1000;
                        v28 = v27 & 4294967295;
                    }
                    else
                    {
                        a1 += 1;
                        v27 = v31 * 64;
                        v28 = a1[3] & 63 | (unsigned int)v27 | (v29 & 7) * 0x40000;
                    }
                }
            }
            v23 = v23 - a1 + (char *)a1;
            if (!1)
                goto LABEL_50e4cf;
            v27 = v28 + 9 & 4294967295;
            if ((unsigned int)v27 >= 5 && (unsigned int)v28 != 32)
            {
                if ((unsigned int)v28 <= 127)
                {
                    if (!((unsigned int)v28 == 45))
                        goto LABEL_50e4cf;
                    v1 = 0;
                    continue;
                }
                v27 = (unsigned int)v28 >> 8;
                if ((unsigned int)v27 <= 31)
                {
                    switch ((unsigned int)v27)
                    {
                    case 0:
                        v33 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v28 & 4294967295];
                        break;
                    case 22:
                        v35 = (unsigned int)v28;
                        v36 = 5760;
                        goto LABEL_50e6ed;
                    default:
LABEL_50e4cf:
                        if (v17 == (unsigned int)v28)
                            goto LABEL_50e430;
                        goto LABEL_50e4d7;
                    }
                    goto LABEL_50e4d7;
                }
                switch ((unsigned int)v27)
                {
                case 32:
                    v34 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v28 & 4294967295];
                    v33 = v34 | -0x100 | (v34 & 255) >> 1 & 255;
                    v27 = v33 | -0x100 | (char)v33 & 1;
                    if (!(!((char)v33 & 1)))
                        break;
                    goto LABEL_50e4cf;
                case 48:
                    v35 = (unsigned int)v28;
                    v36 = 0x3000;
LABEL_50e6ed:
                    v27 = v27 | -0x100 | v35 == v36;
                    if (!(!v35 == v36))
                        break;
                    goto LABEL_50e4cf;
                default:
LABEL_50e4cf:
                    if (v17 != (unsigned int)v28)
                    {
LABEL_50e4d7:
                        if ((unsigned int)v28 == v18)
                        {
                            if (!((char)v2 & 1))
                            {
                                v27 = v27 | -0x100 | 1;
                                v2 = v27;
                                goto LABEL_50e430;
                            }
                            v28 = v18;
LABEL_50e775:
                            if (v22 == 1)
                                goto LABEL_50e79f;
                            goto LABEL_50e785;
                        }
                        if ((unsigned int)(v28 + 58) < -10)
                            goto LABEL_50e775;
                        v27 = v2;
                        v38 = v27 & 4294967295;
                        v39 = (char)v38 & 1;
                        v40 = v38 | -0x100 | v39;
                        v41 = v22;
                        v42 = v41 - 1;
                        if (v41 == 1 || (unsigned int)v28 != 48)
                        {
                            v43 = v40;
                            goto LABEL_50e57c;
                        }
                        else if (!v39)
                        {
                            v21 = v21 | -0x100 | 1;
                        }
                        else
                        {
                            v19 -= 1;
                            v43 = v27 | -0x100 | 1;
LABEL_50e57c:
                            v19 = ((char)v43 ^ 1) + v19;
                            v46 = (unsigned int)v28 != 48;
                            v47 = v43 | -0x100 | (char)v43 ^ 1 | -0x100 | v46;
                            v22 = !v42 | v46;
                            if (a1 == v16)
                            {
                                v61 = a2;
                                if (!v22)
                                {
                                    v19 = 0;
                                    goto LABEL_50e7df;
                                }
                                else
                                {
                                    goto LABEL_50e7df;
                                }
                            }
                            v25 = v23;
                            v51 = a1;
                            v52 = v50;
                            v53 = a1[0];
                            if ((char)v53 >= 0)
                            {
                                a1 = &v51[1];
                            }
                            else
                            {
                                v54 = (unsigned int)v53 & 31;
                                v55 = v51[1] & 63;
                                if ((v53 & 255) <= 223)
                                {
                                    a1 = &v51[2];
                                    v53 = v54 * 64 | v55;
                                }
                                else
                                {
                                    v56 = v51[2] & 63 | v55 * 64;
                                    if ((v53 & 255) >= 240)
                                    {
                                        a1 = v51 + 1;
                                        v27 = v56 * 64;
                                        v53 = v51[3] & 63 | (unsigned int)v27 | (v54 & 7) * 0x40000;
                                    }
                                    else
                                    {
                                        a1 = &v51[3];
                                        v27 = v56 | v54 * 0x1000;
                                        v53 = v27 & 4294967295;
                                    }
                                }
                            }
                            v23 = v25 - v51 + (char *)a1;
                            v21 = v51 | -0x100 | 1;
                            if (v17 != (unsigned int)v53)
                            {
                                if ((unsigned int)v53 != v18)
                                {
                                    v27 = v53 + 58 & 4294967295;
                                    if ((unsigned int)v27 < -10)
                                        goto LABEL_50e796;
                                    v42 = v22 - 1;
                                    if (v22 == 1 || (unsigned int)v53 != 48)
                                    {
                                        v57 = v40;
                                    }
                                    else if (!v39)
                                    {
                                        v22 = 0;
                                        goto LABEL_50e430;
                                    }
                                    else
                                    {
                                        v19 -= 1;
                                        v57 = v27 | -0x100 | 1;
                                    }
                                    v19 = ((char)v57 ^ 1) + v19;
                                    v47 = v57 | -0x100 | (unsigned int)v53 != 48;
                                    continue;
                                }
                                if (v39)
                                {
                                    v53 = v18;
                                }
                                else
                                {
                                    v21 = v21 | -0x100 | 1;
                                    v27 = v27 | -0x100 | 1;
                                    v2 = v27;
                                    break;
                                }
LABEL_50e796:
                                if (v22 == 1)
                                {
LABEL_50e79f:
                                    if (a3->field_8)
                                    {
                                        v69 = (unsigned int)v68 - 69;
                                        if ((unsigned int)v69 <= 38)
                                        {
                                            v0 = 274881087813;
                                            if (((char)(*((char *)&v0 + ((v69 & 63) >> 3)) >> (char)(v69 & 63 & 7)) & 1))
                                                v23 += 1;
                                        }
                                    }
                                    goto LABEL_50e7df;
                                }
LABEL_50e785:
                                v19 = 0;
                                goto LABEL_50e7df;
                            }
                        }
                    }
LABEL_50e430:
                    break;
                }
            }
        } while ((v20 = v32, a1 != v16));
        v60 = a2;
LABEL_50e7df:
    }
    a0->field_0 = v19;
    a0->field_8 = 1;
    a0->field_10 = v25;
    a0->field_18 = 0;
    return a0;
}
