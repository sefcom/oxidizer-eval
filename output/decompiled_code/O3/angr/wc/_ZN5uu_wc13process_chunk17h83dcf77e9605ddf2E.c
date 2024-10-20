long long uu_wc::process_chunk::h83dcf77e9605ddf2(unsigned long long a0[5], char a1[4], unsigned long a2, unsigned long long *a3, char *a4)
{
    unsigned long long *v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x20]
    unsigned long long v4;  // [sp-0x18]
    unsigned long long v5;  // [sp-0x10]
    char v7[4];  // rsi
    unsigned long v8;  // r15
    unsigned long v9;  // r14
    unsigned long v10;  // r13
    unsigned long v11;  // r12
    unsigned long v12;  // rbx
    void* v13;  // r10
    unsigned long long v14;  // r12
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned long long v17;  // r11
    char v18[4];  // rsi
    char v19[4];  // rsi
    char *v20;  // r9
    char v21[4];  // rsi
    unsigned int v22;  // ecx
    unsigned int v23;  // ebp
    unsigned int v24;  // edi
    unsigned int v25;  // ecx
    char v26;  // cl
    unsigned long long v27;  // rcx
    unsigned int v28;  // cc_dep1
    unsigned int v29;  // cc_dep2
    unsigned long long v30;  // r10
    unsigned long long v31;  // rcx
    char *v32;  // rdi
    char *v33;  // rcx
    unsigned long long v34;  // rdi
    char v35;  // cl
    unsigned int v36;  // ecx
    unsigned long long v38;  // r10

    v7 = a1;
    v5 = v8;
    v4 = v9;
    v3 = v10;
    v2 = v11;
    v1 = v12;
    v0 = a3;
    v13 = *(a3);
    if (!a2)
    {
        v17 = a0[4];
    }
    else
    {
        v14 = *(a4);
        v15 = a0[2];
        v16 = a0[3];
        v17 = a0[4];
        do
        {
            v19 = v18;
            v20 = v19[0];
            if ((char)v20 >= 0)
            {
                v21 = &v19[1];
            }
            else
            {
                v22 = (unsigned int)v20 & 31;
                v23 = v19[1] & 63;
                if ((v20 & 255) <= 223)
                {
                    v21 = &v19[2];
                    v20 = v22 * 64 | v23;
                }
                else
                {
                    v24 = v19[2] & 63 | v23 * 64;
                    if ((v20 & 255) >= 240)
                    {
                        v21 = v19 + 1;
                        v20 = v19[3] & 63 | v24 * 64 | (v22 & 7) * 0x40000;
                    }
                    else
                    {
                        v21 = &v19[3];
                        v20 = v24 | v22 * 0x1000;
                    }
                }
            }
            if (!((unsigned int)(v20 + 9) >= 5) || !((unsigned int)v20 != 32))
            {
LABEL_487749:
                *(a4) = 0;
                v14 = 0;
                goto LABEL_487750;
            }
            if ((unsigned int)v20 < 128)
                goto LABEL_4878c3;
            if ((unsigned int)v20 >> 8 <= 31)
            {
                switch (v25)
                {
                case 0:
                    v26 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v20 & 4294967295];
                    break;
                case 22:
                    v28 = (unsigned int)v20;
                    v29 = 5760;
                    goto LABEL_487889;
                default:
LABEL_4878c3:
                    if (!(!(v14 & 255 & 255)))
                        goto LABEL_487750;
                    goto LABEL_4878cc;
                }
                goto LABEL_487889;
            }
            else
            {
                switch (v25)
                {
                case 32:
                    v27 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v20 & 4294967295];
                    v26 = v27 | -0x100 | (v27 & 255) >> 1 & 255;
                    if (!(!(v26 & 1)))
                        goto LABEL_487749;
                    goto LABEL_4878c3;
                case 48:
                    v28 = (unsigned int)v20;
                    v29 = 0x3000;
LABEL_487889:
                    if (!(!v28 == v29))
                        goto LABEL_487749;
                    goto LABEL_4878c3;
                default:
LABEL_4878c3:
                    if (!(!(v14 & 255 & 255)))
                        goto LABEL_487750;
LABEL_4878cc:
                    *(a4) = 1;
                    v16 += 1;
                    a0[3] = v16;
                    v14 = v14 | -0x100 | 1;
LABEL_487750:
                    if ((unsigned int)(v20 + 12) < 2)
                    {
LABEL_487769:
                        a0[4] = v30;
                        v13 = 0;
                        goto LABEL_48785f;
                    }
                    else
                    {
                        if ((unsigned int)v20 == 9)
                        {
                            v13 = (v13 & -8) + 8;
                            *(a3) = v13;
                            continue;
                        }
                        if ((unsigned int)v20 == 10)
                            goto LABEL_487769;
                        if ((unsigned int)v20 < 127)
                        {
                            v31 = -0x100 | 32 <= (unsigned int)v20;
                            break;
                        }
                        else if ((unsigned int)v20 <= 159)
                        {
                            v31 = 0;
                            break;
                        }
                        else
                        {
                            v32 = (unsigned int)v20 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[(unsigned int)v20 >> 13] * 128;
                            if ((unsigned int)v32 > 2431)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v33 = (unsigned int)v20 >> 2 & 15 | *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v32)) * 16;
                            if ((unsigned int)v33 >= 3808)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v34 = *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v33));
                            v35 = v20 * 2 & 4294967295;
                            v36 = 1;
                            if (((char)((v34 & 255) >> (v35 & 6 & 31)) & 3) != 3)
                                v36 = (char)((v34 & 255) >> (v35 & 6 & 31)) & 3;
                            v31 = v36;
                            break;
                        }
                        v13 += v31;
LABEL_48785f:
                        *(a3) = v13;
                        if ((unsigned int)v20 == 10)
                        {
                            v15 += 1;
                            a0[2] = v15;
                        }
                    }
                }
            }
        } while (v21 != &v7[a2]);
    }
    a0[0] = a0[0] + a2;
    a0[4] = v38;
    return a3;
}
