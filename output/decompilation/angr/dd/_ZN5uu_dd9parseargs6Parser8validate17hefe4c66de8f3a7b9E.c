long long uu_dd::parseargs::Parser::validate(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x6b]
    char v1;  // [bp-0x6a]
    char v2;  // [bp-0x69]
    unsigned long long v3;  // [sp-0x68]
    unsigned int v4;  // [bp-0x68]
    char v5;  // [bp-0x5b]
    char v6;  // [bp-0x5a]
    char v7;  // [bp-0x59]
    unsigned int v8;  // [bp-0x58]
    unsigned int v9;  // [bp-0x54]
    int v10;  // [bp-0x50], Other Possible Types: char
    char v11;  // [bp-0x40]
    char v13;  // sil
    char v14;  // cl
    char v15;  // al
    unsigned int v16;  // r11d
    char v17;  // r13b
    char v18;  // r8b
    unsigned long long v19;  // rdx
    char v20;  // cl
    unsigned int v21;  // ecx
    unsigned int v22;  // eax
    unsigned long long v23;  // rax
    char v24;  // cl
    char v25;  // dl
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    char v28;  // dl
    unsigned long v29;  // rsi
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdi
    unsigned long long v33;  // r8
    unsigned long v34;  // r9
    unsigned long long v35;  // r8
    unsigned long long v36;  // r11

    v13 = *((char *)&a1->field_98 + 2);
    v14 = *((char *)&a1->field_98 + 3);
    v15 = *((char *)&a1->field_98 + 4);
    v2 = *((char *)&a1->field_98 + 5);
    v0 = *((char *)&a1->field_98 + 6);
    v7 = a1->field_a1;
    v16 = *((int *)&a1->field_a2);
    v17 = a1->field_a6;
    v18 = a1->field_a7;
    v6 = a1->field_98;
    if ((char)a1->field_98)
    {
        v19 = 1;
        if (!*((char *)&a1->field_98 + 1) && !v13)
        {
            if (!v14)
            {
                v4 = 0;
                goto LABEL_48cab9;
            }
            v19 = 2;
            if (!v15)
            {
                v20 = 1;
                v4 = 0;
                goto LABEL_48cabb;
            }
        }
    }
    else if (*((char *)&a1->field_98 + 1))
    {
        v19 = 1;
        if (!v13)
        {
            if (!v14)
            {
                v21 = 1;
                goto LABEL_48cab5;
            }
            v20 = 1;
            v19 = 2;
            v4 = 1;
            if (!v15)
                goto LABEL_48cabb;
        }
    }
    else if (v13)
    {
        if (v14)
        {
            v19 = 2;
            if (!v15)
            {
                v22 = 2;
                goto LABEL_48ca97;
            }
        }
        else
        {
            v21 = 2;
            goto LABEL_48cab5;
        }
    }
    else
    {
        if (v14)
        {
            v19 = 2;
            if (!v15)
            {
                v22 = 3;
LABEL_48ca97:
                v4 = v22;
                v20 = 1;
LABEL_48cabb:
                v9 = v16;
                v5 = *((char *)&a1->field_98 + 7);
                v8 = (char)v4;
                v1 = a1->field_a0;
                v23 = uu_dd::parseargs::get_ctable(v4, v20);
                v19 = 4;
                if (!((char)(UnaryOp GetMSBs >> 8) & (char)UnaryOp GetMSBs & 1))
                {
                    v19 = v4;
                    if (a1->field_30 != 1)
                    {
                        v24 = v2 | v0;
                        v19 = 9;
                        if (!v2 && !v0)
                        {
                            v3 = 0;
                            goto LABEL_48cc0b;
                        }
                    }
                    else if ((char)v19)
                    {
                        if (v8 != 3)
                        {
LABEL_48cbbc:
                            v3 = v19 & 0xffffffffffffff00 | 32;
                            goto LABEL_48cc0b;
                        }
                        if (v2)
                        {
                            v19 = 3;
                            if (!v0)
                                goto LABEL_48cbbc;
                        }
                        else
                        {
                            v3 = v0 * 32;
LABEL_48cc0b:
                            uu_dd::parseargs::conversion_mode(&v10, v23, v25, v24, v6, v1);
                            if (a1->field_0)
                            {
                                v26 = a1->padding_8;
                                v27 = v26;
                                v28 = 1;
                                if (a1->field_0)
                                    goto LABEL_48cc7b;
                                goto LABEL_48cc3b;
                            }
                            else
                            {
                                v27 = 0x200;
                                v26 = 0x200;
                                if (a1->field_10)
                                {
                                    v26 = a1->field_18;
                                    if (a1->field_20)
                                        goto LABEL_48ccf1;
LABEL_48cc71:
                                    v28 = 1;
                                    if (!(1))
                                        goto LABEL_48cc7b;
LABEL_48cc3b:
                                    v29 = a1->field_48;
                                    v26 = 1;
                                    if (a1->field_40 != 1)
                                        goto LABEL_48cc92;
                                    goto LABEL_48cc9f;
                                }
                                else
                                {
                                    if (!a1->field_20)
                                        goto LABEL_48cc71;
LABEL_48ccf1:
                                    v27 = a1->field_28;
                                    v28 = 1;
                                    if (1)
                                        goto LABEL_48cc3b;
LABEL_48cc7b:
                                    v28 = *((int *)&a1->field_b0[6]);
                                    v29 = a1->field_48;
                                    v26 = 1;
                                    if (a1->field_40 != 1)
                                    {
LABEL_48cc92:
                                        if (a1->field_b0[5] == 1)
                                            goto LABEL_48cca3;
                                    }
LABEL_48cc9f:
                                    v29 *= v26;
                                }
                            }
LABEL_48cca3:
                            v30 = v26;
                            v31 = a1->field_58;
                            v33 = 1;
                            if (a1->field_50 != 1)
                            {
                                v33 = v27;
                                if (a1->field_c0[3] == 1)
                                    goto LABEL_48ccc5;
                            }
                            v31 = v33 * a1->field_58;
LABEL_48ccc5:
                            v34 = &a1->field_b0[7];
                            v35 = a1->padding_60;
                            if (v35 == 2)
                            {
                                v35 = 2;
                            }
                            else
                            {
                                v36 = a1->field_68;
                                if (!((char)v35 & 1) && a1->field_b0[4])
                                    v35 = 1;
                            }
                            a0->field_20 = a1->field_80;
                            a0->field_10 = a1->field_70;
                            *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)((char *)&a1->field_88 + 8));
                            *((int128_t *)&(&a0->field_20)[1]) = *((int128_t *)&(&a1->field_80)[1]);
                            *((int128_t *)&a0->field_38) = *((int128_t *)&a1->field_a8);
                            *((long long *)((char *)&a0->field_88 + 5)) = *((long long *)(v34 + 7));
                            *((long long *)((char *)&a0->field_80 + 6)) = *((long long *)v34);
                            a0->field_0 = v35;
                            a0->field_8 = v36;
                            *((long long *)&a0->field_50) = *((long long *)&v11);
                            *((void*)&a0->field_40) = v10;
                            *((char *)&a0->field_50 + 8) = v1;
                            *((char *)&a0->field_50 + 9) = v3;
                            *((char *)&a0->field_50 + 10) = v5;
                            *((char *)&a0->field_50 + 11) = v7;
                            a0->field_60 = v30;
                            *((unsigned long long *)&a0->field_68) = v27;
                            a0->field_70 = v29;
                            a0->field_78 = v31;
                            *((unsigned int *)&a0->field_80) = v9;
                            *((char *)&a0->field_80 + 4) = v17;
                            *((char *)&a0->field_80 + 5) = v18;
                            a0->field_95 = v28;
                            a0->field_96[0] = a1->field_c0[4];
                            return a0;
                        }
                    }
                    else
                    {
                        v3 = v19 & 0xffffff00 | 32;
                        goto LABEL_48cc0b;
                    }
                }
            }
        }
        else
        {
            v21 = 3;
LABEL_48cab5:
            v4 = v21;
LABEL_48cab9:
            goto LABEL_48cabb;
        }
    }
    a0->field_8 = v19;
    a0->field_0 = 3;
    core::ptr::drop_in_place<uu_dd::parseargs::Parser>(a1);
    return a0;
}
