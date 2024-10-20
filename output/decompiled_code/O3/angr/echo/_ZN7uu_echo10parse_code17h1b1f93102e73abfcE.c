long long uu_echo::parse_code::h1b1f93102e73abfc(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x10]
    unsigned long v1;  // [sp-0x8]
    unsigned long long v4;  // r8
    char v5[4];  // rcx
    unsigned int v6;  // eax
    unsigned int v7;  // r9d
    unsigned int v8;  // edx
    unsigned int v9;  // ecx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long v12;  // cc_ndep
    unsigned long long v13;  // cc_ndep
    unsigned long v14;  // rbx
    char v15[4];  // r11
    unsigned long long v16;  // r9
    char v17[4];  // r8
    unsigned long long v18;  // rcx
    unsigned int v19;  // r10d
    unsigned int v20;  // ebp
    unsigned int v21;  // ebx
    unsigned int v22;  // r10d
    unsigned long long v23;  // rax
    char v24;  // al
    unsigned long long v25;  // rcx
    unsigned int v26;  // r9d
    unsigned int v27;  // r11d
    unsigned int v28;  // r10d
    unsigned int v29;  // r10d
    unsigned long long v30;  // r8

    v4 = a0->field_10;
    if ((unsigned int)v4 == 1114113)
    {
        v5 = a0->field_0;
        if (v5 == a0->field_8)
        {
            v4 = 0x110000;
        }
        else
        {
            a0->field_0 = &v5[1];
            v4 = v5[0];
            if ((char)v4 < 0)
            {
                v6 = (unsigned int)v4 & 31;
                a0->field_0 = &v5[2];
                v7 = v5[1] & 63;
                if ((v4 & 255) <= 223)
                {
                    v4 = v6 * 64 | v7;
                }
                else
                {
                    a0->field_0 = &v5[3];
                    v8 = v5[2] & 63 | v7 * 64;
                    if ((v4 & 255) < 240)
                    {
                        v4 = v8 | v6 * 0x1000;
                    }
                    else
                    {
                        a0->field_0 = &v5[1];
                        v4 = v5[3] & 63 | v8 * 64 | (v6 & 7) * 0x40000;
                    }
                }
            }
        }
        a0->field_10 = v4;
    }
    if ((unsigned int)v4 == 0x110000)
        return 0x110000;
    v10 = a1 & 4294967295;
    v11 = v4 - 48 & 4294967295;
    if ((v10 & 255) >= 11)
    {
        if ((unsigned int)v11 < 10)
            goto LABEL_47b262;
        v11 = ((char)amd64g_calculate_condition(3, 3, (unsigned long long)(((unsigned int)v4 | 32) - 97), 10, v12) ? 4294967295 : ((unsigned int)v4 | 32) + -87);
    }
    if ((unsigned int)v11 >= (unsigned int)v10)
        return 0x110000;
LABEL_47b262:
    *((int *)&v1) = vvar_207{reg 56};
    v0 = v14;
    a0->field_10 = 1114113;
    v15 = a0->field_0;
    v16 = a0->field_8;
    if (v15 == v16)
    {
        a0->field_10 = 0x110000;
        return v9;
    }
    v17 = &v15[1];
    a0->field_0 = &v17[0];
    v18 = v15[0];
    if ((char)v18 >= 0)
    {
LABEL_47b302:
        a0->field_10 = v18;
        goto LABEL_47b305;
    }
    v19 = (unsigned int)v18 & 31;
    v17 = &v15[2];
    a0->field_0 = &v17[0];
    v20 = v15[1] & 63;
    if ((v18 & 255) <= 223)
    {
        v18 = v19 * 64 | v20;
        goto LABEL_47b302;
    }
    v17 = &v15[3];
    a0->field_0 = &v17[0];
    v21 = v15[2] & 63 | v20 * 64;
    if ((v18 & 255) <= 239)
    {
        v18 = v21 | v19 * 0x1000;
        goto LABEL_47b302;
    }
    v17 = v15 + 1;
    a0->field_0 = &v17[0];
    v18 = v15[3] & 63 | v21 * 64 | (v19 & 7) * 0x40000;
    a0->field_10 = v18;
    if ((unsigned int)v18 != 0x110000)
    {
LABEL_47b305:
        v22 = v18 - 48;
        if ((a1 & 255) >= 11)
            v22 = ((char)amd64g_calculate_condition(3, 3, (unsigned long long)(((unsigned int)v18 | 32) - 97), 10, v13) ? ((unsigned int)v18 | 32) + -87 : -1);
        if (v22 < (unsigned int)v10 && (v23 = (unsigned long long)v22, v24 = (char)(v23 + ((v11 | -0x10000 | (unsigned long long)((char)v11 * (char)a1)) & 4294967295 & 4294967295)), v11 = v23 | -0x100 | (unsigned long long)v24, a0->field_10 = (unsigned int)1114113, (char)a1 == 8))
        {
            if (v17 == v16)
            {
                a0->field_10 = 0x110000;
                return v9;
            }
            a0->field_0 = &v17[1];
            v25 = v17[0];
            if ((char)v25 >= 0)
            {
LABEL_47b3e7:
                a0->field_10 = v25;
                goto LABEL_47b3ea;
            }
            else
            {
                v26 = (unsigned int)v25 & 31;
                a0->field_0 = &v17[2];
                v27 = v17[1] & 63;
                if ((v25 & 255) < 224)
                {
                    v25 = v26 * 64 | v27;
                    goto LABEL_47b3e7;
                }
                else
                {
                    a0->field_0 = &v17[3];
                    v28 = v17[2] & 63 | v27 * 64;
                    if ((v25 & 255) < 240)
                    {
                        v29 = v28 | v26 * 0x1000;
                        v25 = v29;
                        a0->field_10 = v29;
                    }
                    else
                    {
                        a0->field_0 = &v17[1];
                        v25 = v17[3] & 63 | v28 * 64 | (v26 & 7) * 0x40000;
                        a0->field_10 = v25;
                        if ((unsigned int)v25 == 0x110000)
                            return v9;
                    }
LABEL_47b3ea:
                    v30 = v25 - 48 & 4294967295;
                    if ((a1 & 255) >= 11)
                    {
                        if ((unsigned int)v30 < 10)
                            goto LABEL_47b412;
                        v30 = ((char)amd64g_calculate_condition(3, 3, (unsigned long long)(((unsigned int)v25 | 32) - 97), 10, v13) ? ((unsigned int)v25 | 32) + -87 : 4294967295);
                    }
                    if ((unsigned int)v30 < (unsigned int)v10)
                    {
LABEL_47b412:
                        a0->field_10 = 1114113;
                        v11 = (v30 | -0x100 | v30 + (v11 | -0x10000 | v24 * (char)a1) & 255) & 4294967295;
                    }
                }
            }
        }
    }
    v9 = v11;
    return v9;
}
