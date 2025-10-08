long long uu_sort::compare_by(struct_3 *a0, struct_4 *a1, struct_0 *a2, unsigned long long a3[12], unsigned long long a4[12])
{
    char v0;  // [bp-0x131]
    unsigned long v1;  // [bp-0x128]
    unsigned long v2;  // [bp-0x120]
    unsigned long v3;  // [bp-0xf0]
    unsigned long v4;  // [bp-0xe8]
    unsigned long v5;  // [bp-0xe0]
    unsigned long v6;  // [bp-0xd8]
    unsigned long v7;  // [bp-0xd0]
    unsigned long v8;  // [bp-0xc8]
    unsigned long v9;  // [bp-0xc0]
    unsigned long v10;  // [bp-0xb8]
    struct_0 *v11;  // [bp-0x98]
    unsigned long v12;  // [bp-0x90]
    unsigned long v13;  // [bp-0x88]
    unsigned long v14;  // [bp-0x80]
    unsigned long v15;  // [bp-0x78]
    unsigned long v16;  // [bp-0x70]
    unsigned long v17;  // [bp-0x58]
    unsigned long v18;  // [bp-0x50]
    unsigned long v19;  // [bp-0x48]
    unsigned long v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x38]
    unsigned long long v22;  // [bp-0x30]
    unsigned long long v23;  // [bp-0x28]
    unsigned long long v24;  // [bp-0x20]
    unsigned long long v25;  // [bp-0x18]
    unsigned long long v26;  // [bp-0x10]
    unsigned long long v28;  // r15
    unsigned long long v29;  // r14
    unsigned long long v30;  // r13
    unsigned long long v31;  // r12
    unsigned long long v32;  // rbx
    unsigned long v33;  // r11
    unsigned long v34;  // rbx
    struct_0 *v35;  // r9
    struct_2 *v36;  // rax
    unsigned long long v37;  // rsi
    unsigned long v38;  // xmm0lq
    unsigned long long v39;  // xmm1lq
    char v40;  // al
    char v43[56];  // r15
    unsigned long v44;  // rdx
    unsigned long v46;  // rax
    unsigned long v47;  // rax
    char v48;  // al

    v26 = v28;
    v25 = v29;
    v24 = v30;
    v23 = v31;
    v22 = v32;
    v33 = a0->field_10;
    v34 = a1->field_10;
    v35 = a2;
    v36 = (v34 < a4[11] ? v34 * 16 + a4[10] : 0);
    if (!a4[11] <= v34 && !a3[11] <= v33)
    {
        v37 = v33 * 16;
        if (*((int *)(a3[10] + v37)) == 1 && v36->field_0 == 1)
        {
            v38 = *((long long *)(a3[10] + v37 + 8));
            v39 = v36->field_8;
            if ((CmpF(v39, v38) & 1))
            {
                v40 = 1;
                if (!(CmpF(v38, v39) & 69 & 1))
                    goto LABEL_4d5c08;
            }
            else
            {
                v40 = 255;
                if (!(CmpF(v38, v39) & 1))
                {
                    v35 = a2;
                    if ((char)a0->field_0.equal(*((long long *)&a0->field_8), a1->field_0, *((long long *)&a1->field_8)))
                        goto LABEL_4d5c08;
                }
                else
                {
LABEL_4d5c08:
                    if (v35->field_82)
                        return -(v40);
                    return v40;
                }
            }
        }
    }
    v21 = &v35->field_8[v35->field_10];
    v20 = v33 * v35->field_58;
    v18 = a3[1];
    v19 = v34 * v35->field_58;
    v17 = a4[1];
    v9 = a4[2];
    v16 = v33 * v35->field_50;
    v15 = v34 * v35->field_50;
    v3 = a4[8];
    v14 = a4[7];
    v8 = v35->field_48 * v33;
    v7 = v34 * v35->field_48;
    v1 = a4[5];
    v6 = a4[4];
    v10 = a3[2];
    v4 = a3[8];
    v13 = a3[7];
    v2 = a3[5];
    v5 = a3[4];
    v0 = v35->field_87;
    v11 = v35;
    v12 = &v35->padding_88;
    v43 = v35->field_8;
    if (v43 == v21)
    {
        if (v43 == v21)
            goto LABEL_4d60c6;
    }
    else
    {
        if (v43 == v21)
        {
LABEL_4d60c6:
            if (v11->field_98 != 5 && !v11->field_83 && !v11->field_84)
            {
                v44 = *((long long *)&a1->field_8);
                if (*((long long *)&a0->field_8) < v44)
                    v44 = *((long long *)&a0->field_8);
                v46 = memcmp(a0->field_0, a1->field_0, v44);
                if ((unsigned int)v46)
                    v47 = v46;
                else
                    v47 = *((long long *)&a0->field_8) - v44;
                v48 = (v47 > 0) - (v47 < 0);
            }
            if (v11->field_82)
                return -(v48);
            return v48;
        }
    }
    if (!v43[55])
    {
        goto (long long)(g_428b30[v43[53]] + (char *)&g_428b30[0]);
    }
    else if (v20 >= v10)
    {
        core::panicking::panic_bounds_check(v20, v10, &g_58d2d0); /* do not return */
    }
    else if (v19 < v9)
    {
        goto (long long)(g_428b30[v43[53]] + (char *)&g_428b30[0]);
    }
    else
    {
        core::panicking::panic_bounds_check(v19, v9, &g_58d2e8); /* do not return */
    }
}
