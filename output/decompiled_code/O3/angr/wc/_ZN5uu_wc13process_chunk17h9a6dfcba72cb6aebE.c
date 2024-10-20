long long uu_wc::process_chunk::h9a6dfcba72cb6aeb(unsigned long long a0[5], char a1[4], unsigned long a2, unsigned long long *a3, char *a4)
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
    void* v13;  // r11
    unsigned long long v14;  // r12
    unsigned long long v15;  // r15
    unsigned long long v16;  // rbx
    char v17[4];  // rsi
    char v18[4];  // rsi
    char *v19;  // rcx
    char v20[4];  // rsi
    unsigned int v21;  // r9d
    unsigned int v22;  // r13d
    unsigned int v23;  // r10d
    unsigned int v24;  // r9d
    char v25;  // r9b
    unsigned long long v26;  // r9
    unsigned int v27;  // cc_dep1
    unsigned int v28;  // cc_dep2
    unsigned long long v29;  // r11
    unsigned long long v30;  // r9
    char *v31;  // r10
    char *v32;  // r9
    unsigned long long v33;  // r9
    unsigned int v34;  // ecx
    unsigned long long v36;  // r11

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
        v16 = a0[4];
    }
    else
    {
        v14 = *(a4);
        v15 = a0[3];
        v16 = a0[4];
        do
        {
            v18 = v17;
            v19 = v18[0];
            if ((char)v19 >= 0)
            {
                v20 = &v18[1];
            }
            else
            {
                v21 = (unsigned int)v19 & 31;
                v22 = v18[1] & 63;
                if ((v19 & 255) <= 223)
                {
                    v20 = &v18[2];
                    v19 = v21 * 64 | v22;
                }
                else
                {
                    v23 = v18[2] & 63 | v22 * 64;
                    if ((v19 & 255) < 240)
                    {
                        v20 = &v18[3];
                        v19 = v23 | v21 * 0x1000;
                    }
                    else
                    {
                        v20 = v18 + 1;
                        v19 = v18[3] & 63 | v23 * 64 | (v21 & 7) * 0x40000;
                    }
                }
            }
            if (!((unsigned int)(v19 + 9) >= 5) || !((unsigned int)v19 != 32))
            {
LABEL_487a1a:
                *(a4) = 0;
                v14 = 0;
                goto LABEL_487a21;
            }
            if ((unsigned int)v19 < 128)
                goto LABEL_487ba0;
            if ((unsigned int)v19 >> 8 <= 31)
            {
                switch (v24)
                {
                case 0:
                    v25 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v19 & 4294967295];
                    break;
                case 22:
                    v27 = (unsigned int)v19;
                    v28 = 5760;
                    goto LABEL_487b5f;
                default:
LABEL_487ba0:
                    if (!(!(v14 & 255 & 255)))
                        goto LABEL_487a21;
                    goto LABEL_487ba9;
                }
                goto LABEL_487b5f;
            }
            else
            {
                switch (v24)
                {
                case 32:
                    v26 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v19 & 4294967295];
                    v25 = v26 | -0x100 | (v26 & 255) >> 1 & 255;
                    if (!(!(v25 & 1)))
                        goto LABEL_487a1a;
                    goto LABEL_487ba0;
                case 48:
                    v27 = (unsigned int)v19;
                    v28 = 0x3000;
LABEL_487b5f:
                    if (!(!v27 == v28))
                        goto LABEL_487a1a;
                    goto LABEL_487ba0;
                default:
LABEL_487ba0:
                    if (!(!(v14 & 255 & 255)))
                        goto LABEL_487a21;
LABEL_487ba9:
                    *(a4) = 1;
                    v15 += 1;
                    a0[3] = v15;
                    v14 = v14 | -0x100 | 1;
LABEL_487a21:
                    if ((unsigned int)(v19 + 12) < 2)
                    {
LABEL_487a35:
                        a0[4] = v29;
                        v13 = 0;
                        continue;
                    }
                    else
                    {
                        if ((unsigned int)v19 == 9)
                        {
                            v13 = (v13 & -8) + 8;
                            continue;
                        }
                        if ((unsigned int)v19 == 10)
                            goto LABEL_487a35;
                        if ((unsigned int)v19 < 127)
                        {
                            v30 = -0x100 | 32 <= (unsigned int)v19;
                            break;
                        }
                        else if ((unsigned int)v19 <= 159)
                        {
                            v30 = 0;
                            break;
                        }
                        else
                        {
                            v31 = (unsigned int)v19 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[(unsigned int)v19 >> 13] * 128;
                            if ((unsigned int)v31 > 2431)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v32 = (unsigned int)v19 >> 2 & 15 | *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v31)) * 16;
                            if ((unsigned int)v32 >= 3808)
                                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                            v33 = *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v32));
                            v34 = 1;
                            if (((char)((v33 & 255) >> ((char)v19 << 1 & 6 & 31)) & 3) != 3)
                                v34 = (char)((v33 & 255) >> ((char)v19 * 2 & 6 & 31)) & 3;
                            v30 = v34;
                            break;
                        }
                        v13 += v30;
                        continue;
                    }
                }
            }
        } while ((*(a3) = (unsigned long long)v13, v20 != v7 + a2));
    }
    a0[0] = a0[0] + a2;
    a0[4] = v36;
    return a3;
}
