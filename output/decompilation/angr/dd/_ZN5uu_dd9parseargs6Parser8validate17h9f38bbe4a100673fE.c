long long uu_dd::parseargs::Parser::validate(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x61]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x5f]
    char v3;  // [bp-0x5e]
    char v4;  // [bp-0x5d]
    unsigned int v5;  // [bp-0x5c]
    int v6;  // [bp-0x58]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    char v10;  // r15b
    char v11;  // sil
    char v12;  // cl
    char v13;  // al
    char v14;  // r12b
    unsigned long long v15;  // rdx
    char v16;  // cl
    char v17;  // bpl
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    char v20;  // r15b
    unsigned long v21;  // r15
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    char v25;  // dl
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rsi
    unsigned long long v31;  // rdi
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rdi
    unsigned long v34;  // r9
    unsigned long long v35;  // r8
    unsigned long long v36;  // r11
    char v37;  // r10b

    v10 = a1->field_98;
    v11 = *((char *)&a1->field_98 + 2);
    v12 = *((char *)&a1->field_98 + 3);
    v13 = *((char *)&a1->field_98 + 4);
    v14 = *((char *)&a1->field_98 + 6);
    v2 = *((char *)&a1->field_98 + 7);
    v1 = a1->field_a1;
    v4 = a1->field_a6;
    v3 = a1->field_a7;
    *((char [1])&v0) = a1->padding_a0;
    if (v10)
    {
        v15 = 1;
        if (!*((char *)&a1->field_98 + 1) && !v11)
        {
            if (!v12)
                goto LABEL_4c8c0b;
            v15 = 2;
            if (!v13)
            {
                v16 = 1;
                goto LABEL_4c8c0d;
            }
        }
    }
    else if (*((char *)&a1->field_98 + 1))
    {
        v15 = 1;
        if (!v11)
        {
            if (!v12)
            {
                v17 = 1;
                goto LABEL_4c8c0b;
            }
            v16 = 1;
            v15 = 2;
            v17 = 1;
            if (!v13)
                goto LABEL_4c8c0d;
        }
    }
    else if (v11)
    {
        if (!v12)
        {
            v17 = 2;
            goto LABEL_4c8c0b;
        }
        v15 = 2;
        if (!v13)
        {
            v17 = 2;
            v16 = 1;
            goto LABEL_4c8c0d;
        }
    }
    else if (v12)
    {
        v15 = 2;
        if (!v13)
        {
            v17 = 3;
            v16 = 1;
            v10 = 0;
LABEL_4c8c0d:
            v5 = v17;
            *((uint128_t *)&v6) = *((int *)&a1->field_a2);
            v18 = uu_dd::parseargs::get_ctable(v17, v16);
            v19 = (unsigned int)v6 >> 16 & (unsigned int)v6 >> 8;
            v15 = 4;
            if (!((char)v19 & 1))
            {
                if (a1->field_30 == 1)
                {
                    v19 = a1->field_38;
                    v20 = 32;
                    if (v17)
                    {
                        if (v5 != 3)
                        {
LABEL_4c8c92:
                            v22 = 0;
                            goto LABEL_4c8cc1;
                        }
                        if (*((char *)&a1->field_98 + 5))
                        {
                            v15 = 3;
                            if (!v14)
                                goto LABEL_4c8c92;
                        }
                        else
                        {
                            v21 = v14;
                            v22 = 2 - v21;
                            v20 = (char)v21 * 32;
LABEL_4c8cc1:
                            uu_dd::parseargs::conversion_mode(&v7, v18, v22, v19, v10, v0);
                            if (a1->field_0)
                            {
                                v23 = a1->padding_8;
                                v24 = v23;
                                v25 = 1;
                                if (!(!a1->field_0))
                                    goto LABEL_4c8d24;
                            }
                            else
                            {
                                v24 = 0x200;
                                v23 = 0x200;
                                if (a1->field_10)
                                {
                                    v23 = a1->field_18;
                                    if (!(!(a1->field_20 & 1)))
                                        goto LABEL_4c8e6e;
LABEL_4c8d1a:
                                    v25 = 1;
                                    if (!(1))
                                        goto LABEL_4c8d24;
                                }
                                else
                                {
                                    if (!(a1->field_20 & 1))
                                        goto LABEL_4c8d1a;
LABEL_4c8e6e:
                                    v24 = a1->field_28;
                                    v25 = 1;
                                    if (false)
                                    {
LABEL_4c8d24:
                                        v25 = *((int *)&a1->padding_b1[5]);
                                    }
                                }
                            }
                            if ((a1->padding_b1[4] & 1))
                                v27 = 1;
                            else
                                v27 = v23;
                            v28 = v27;
                            if (a1->field_40)
                                v28 = 1;
                            v29 = a1->field_48 * v28;
                            if (((&a1->field_c0)[5] & 1))
                                v31 = 1;
                            else
                                v31 = v24;
                            v32 = v31;
                            if (a1->field_50)
                                v32 = 1;
                            v33 = a1->field_58 * v32;
                            v34 = a1->padding_b1[3];
                            if (a1->field_60 - 1 < 2)
                                v34 = a1->field_60;
                            v35 = a1->field_68;
                            a0->field_20 = a1->field_80;
                            a0->field_10 = a1->field_70;
                            *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)((char *)&a1->field_88 + 8));
                            *((int128_t *)&(&a0->field_20)[1]) = *((int128_t *)&(&a1->field_80)[1]);
                            *((int128_t *)&a0->field_38) = *((int128_t *)&a1->field_a8);
                            v36 = *((long long *)&a1->padding_b1[13]);
                            *((long long *)((char *)&a0->field_80 + 6)) = *((long long *)&a1->padding_b1[6]);
                            *((unsigned long long *)((char *)&a0->field_88 + 5)) = v36;
                            v37 = a1->field_c1;
                            *((long long *)&a0->field_50) = *((long long *)&v8);
                            *((void*)&a0->field_40) = v7;
                            a0->field_0 = v34;
                            a0->field_8 = v35;
                            *((char *)&a0->field_50 + 8) = v0;
                            *((char *)&a0->field_50 + 9) = v20;
                            *((char *)&a0->field_50 + 10) = v2;
                            *((char *)&a0->field_50 + 11) = v1;
                            a0->field_60 = v23;
                            *((unsigned long long *)&a0->field_68) = v24;
                            a0->field_70 = v29;
                            a0->field_78 = v33;
                            *((unsigned int *)&a0->field_80) = (unsigned int)v6;
                            *((char *)&a0->field_80 + 4) = v4;
                            *((char *)&a0->field_80 + 5) = v3;
                            a0->field_95 = v25;
                            a0->field_96[0] = v37;
                            return a0;
                        }
                    }
                    else
                    {
                        v22 = 1;
                        goto LABEL_4c8cc1;
                    }
                }
                else
                {
                    v15 = 9;
                    if (!*((char *)&a1->field_98 + 5) && !v14)
                    {
                        v22 = 2;
                        goto LABEL_4c8cc1;
                    }
                }
            }
        }
    }
    else
    {
        v17 = 3;
        v10 = 0;
LABEL_4c8c0b:
        goto LABEL_4c8c0d;
    }
    a0->field_8 = v15;
    a0->field_0 = 3;
    core::ptr::drop_in_place<uu_dd::parseargs::Parser>(a1);
    return a0;
}
