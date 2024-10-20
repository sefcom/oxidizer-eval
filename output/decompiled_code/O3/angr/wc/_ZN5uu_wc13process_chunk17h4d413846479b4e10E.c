long long uu_wc::process_chunk::h4d413846479b4e10(unsigned long long a0[5], char a1[4], unsigned long a2, unsigned long long *a3)
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
    unsigned long long v14;  // r11
    unsigned long long v15;  // r14
    char v16[4];  // rsi
    char v17[4];  // rsi
    unsigned long long v18;  // rcx
    char v19[4];  // rsi
    unsigned int v20;  // r8d
    unsigned int v21;  // ebp
    unsigned int v22;  // r9d
    unsigned long long v23;  // r10
    unsigned long long v24;  // r8
    char *v25;  // r9
    char *v26;  // r8
    unsigned long long v27;  // r8
    unsigned int v28;  // ecx
    unsigned long long v30;  // r10

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
        v14 = a0[4];
    }
    else
    {
        v14 = a0[4];
        v15 = a0[1] + 1;
        do
        {
            v17 = v16;
            v18 = v17[0];
            if ((char)v18 >= 0)
            {
                v19 = &v17[1];
            }
            else
            {
                v20 = (unsigned int)v18 & 31;
                v21 = v17[1] & 63;
                if ((v18 & 255) <= 223)
                {
                    v19 = &v17[2];
                    v18 = v20 * 64 | v21;
                }
                else
                {
                    v22 = v17[2] & 63 | v21 * 64;
                    if ((v18 & 255) < 240)
                    {
                        v19 = &v17[3];
                        v18 = v22 | v20 * 0x1000;
                    }
                    else
                    {
                        v19 = v17 + 1;
                        v18 = v17[3] & 63 | v22 * 64 | (v20 & 7) * 0x40000;
                    }
                }
            }
            if ((unsigned int)(v18 - 12) < 2)
            {
LABEL_486da4:
                a0[4] = v23;
                v13 = 0;
            }
            else
            {
                if ((unsigned int)v18 == 9)
                {
                    v13 = (v13 & -8) + 8;
                    continue;
                }
                if ((unsigned int)v18 == 10)
                    goto LABEL_486da4;
                if ((unsigned int)v18 < 127)
                {
                    v24 = -0x100 | 32 <= (unsigned int)v18;
                }
                else if ((unsigned int)v18 <= 159)
                {
                    v24 = 0;
                }
                else
                {
                    v25 = (unsigned int)v18 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[(unsigned int)v18 >> 13] * 128;
                    if ((unsigned int)v25 > 2431)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v26 = (unsigned int)v18 >> 2 & 15 | *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v25)) * 16;
                    if ((unsigned int)v26 >= 3808)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v27 = *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v26));
                    v28 = 1;
                    if (((char)((v27 & 255) >> ((char)v18 << 1 & 6 & 31)) & 3) != 3)
                        v28 = (char)((v27 & 255) >> ((char)v18 * 2 & 6 & 31)) & 3;
                    v24 = v28;
                }
                v13 += v24;
            }
        } while ((*(a3) = (unsigned long long)v13, a0[1] = v15, v15 += 1, v19 != v7 + a2));
    }
    a0[0] = a0[0] + a2;
    a0[4] = v30;
    return a3;
}
