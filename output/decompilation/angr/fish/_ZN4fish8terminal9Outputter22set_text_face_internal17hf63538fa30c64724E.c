long long fish::terminal::Outputter::set_text_face_internal(void* a0, struct_0 *a1, char a2)
{
    char v0;  // [bp-0x71]
    unsigned int v1;  // [bp-0x70]
    unsigned int v2;  // [bp-0x6c]
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x67]
    unsigned int v5;  // [bp-0x50]
    char v6;  // [bp-0x4c]
    unsigned int v7;  // [bp-0x44]
    unsigned long v8;  // [bp-0x40]
    unsigned long v9;  // [bp-0x38]
    unsigned long v11;  // r15
    char v12;  // r13b
    unsigned long v14;  // r12
    unsigned long v15;  // r15
    unsigned long v16;  // r14
    char v17;  // bpl
    unsigned long v18;  // rax
    char v19;  // cl
    char v20;  // cl
    unsigned long long v21;  // rax

    v11 = *((int *)&(&a1->field_4)[1]);
    v1 = v11;
    v2 = *((int *)((char *)&a1->field_5 + 1));
    v7 = *((int *)((char *)&a1->field_9 + 1));
    v12 = a1->field_1;
    v0 = a1->field_4;
    v9 = a1->field_2;
    v8 = a1->field_0;
    v5 = (short)a0[34] * 0x10000 | (char)a0[32] | 0x500000000.difference_prefer_empty((unsigned int)v9 * 0x10000 | v8 | 0x500000000);
    v6 = 0;
    if (!(char)v5.is_empty())
        a0.reset_text_face();
    if (((char)(v2 - 1) < 2 & a2) && (char)v1.eq(&v2))
    {
        v11 = ((char)v2.eq(&g_550fc0) ? 1 : 1793);
        v1 = v11;
        v14 = a0 + 37;
        if ((char)v1.eq(v14))
            goto LABEL_14144de;
        goto LABEL_14144c8;
    }
    else
    {
        if ((char)v11)
        {
            v14 = a0 + 37;
            if (!(char)v1.eq(v14))
            {
                if ((char)v11 == 3)
                {
                    v3 = 0;
                    a0.write_command(&v3);
                    *((char *)&a0[41]) = 3;
                    *((char *)&a0[45]) = 3;
                    *((unsigned int *)&a0[32]) = 0;
                    *((char *)&a0[36]) = 5;
                }
                else
                {
                    if ((v11 - 3 & 255) < 254)
                        core::panicking::panic("assertion failed: !fg.is_special()buffer_count underflow", 34, &g_14e2ab0); /* do not return */
LABEL_14144c8:
                    a0.write_color(0, v11);
                }
                *((unsigned int *)v14) = v11;
            }
        }
        if (!(v2 & 255))
            goto LABEL_141450c;
LABEL_14144de:
        v15 = a0 + 41;
        if (!(char)v2.eq(v15))
        {
            if ((char)v2 != 3)
            {
                a0.write_color(1, v2);
                *((unsigned int *)v15) = v2;
            }
            else
            {
                v3 = 14;
                a0.write_command(&v3);
                *((unsigned int *)v15) = v2;
                if ((char)v7)
                {
LABEL_1414511:
                    v16 = a0 + 45;
                    if (!(char)v7.eq(v16))
                    {
                        if ((char)v7 == 3)
                        {
                            v3 = 15;
                            a0.write_command(&v3);
                            *((unsigned int *)v16) = v7;
                        }
                        else
                        {
                            a0.write_color(2, v7);
                            *((unsigned int *)v16) = v7;
                        }
                    }
                }
LABEL_1414571:
                if (((char)v8 & 1) && !(char)a0[32])
                {
                    v3 = 1;
                    if ((char)a0.write_command(&v3))
                        *((char *)&a0[32]) = 1;
                }
                if (v0 == 5)
                {
                    if ((char)a0[36] != 5)
                    {
                        v3 = 8;
                        v17 = 5;
                        if ((char)a0.write_command(&v3))
                            goto LABEL_14145f5;
                    }
                }
                else
                {
                    if (!(v0 == (char)a0[36] & (char)a0[36] != 5))
                    {
                        v4 = v0;
                        v3 = 4;
                        if ((char)a0.write_command(&v3))
                        {
LABEL_14145f5:
                            *((char *)&a0[36]) = v17;
                        }
                    }
                }
                v18 = (char)a0[33];
                v19 = v18;
                v20 = ~(v19) | v12;
                if (!((~(v19) | v12) & 1))
                {
                    v3 = 7;
                    v18 = a0.write_command(&v3);
                    if ((char)v18)
                    {
LABEL_1414645:
                        *((char *)&a0[33]) = v20;
                    }
                }
                else if (!((~(v12) | (char)v18) & 1))
                {
                    v3 = 3;
                    v18 = a0.write_command(&v3);
                    v20 = 1;
                    if ((v18 & 255))
                        goto LABEL_1414645;
                }
                if (((char)v9 & 1) && (char)a0[34] != 1)
                {
                    v3 = 2;
                    v18 = a0.write_command(&v3);
                    if ((char)v18)
                        *((char *)&a0[34]) = 1;
                }
                if (!((unsigned short)v9 & 0x100))
                {
                    return v18;
                }
                else if ((char)a0[35] != 1)
                {
                    v3 = 5;
                    v21 = a0.write_command(&v3);
                    if (!(char)v21)
                    {
                        v3 = 6;
                        v21 = a0.write_command(&v3);
                        if (!(char)v21)
                            return v21;
                    }
                    *((char *)&a0[35]) = 1;
                    return v21;
                }
                else
                {
                    return v18;
                }
            }
        }
LABEL_141450c:
        if ((v7 & 255))
            goto LABEL_1414511;
        goto LABEL_1414571;
    }
}
