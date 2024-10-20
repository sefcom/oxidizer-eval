long long uu_wc::process_chunk::h56f61a13b7a8ba90(unsigned long long a0[5], char a1[4], unsigned long a2, unsigned long long *a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long long v3;  // [sp-0x10]
    char v5[4];  // rsi
    unsigned long v6;  // r15
    unsigned long v7;  // r14
    unsigned long v8;  // r12
    unsigned long v9;  // rbx
    unsigned long long v10;  // r10
    void* v11;  // r11
    char v12[4];  // rsi
    char v13[4];  // rsi
    unsigned long long v14;  // rcx
    char v15[4];  // rsi
    unsigned int v16;  // r8d
    unsigned int v17;  // ebp
    unsigned int v18;  // r9d
    unsigned long long v19;  // r11
    unsigned long long v20;  // r8
    char *v21;  // r9
    char *v22;  // r8
    unsigned long long v23;  // r8
    unsigned int v24;  // ecx
    unsigned long long v25;  // r11

    v5 = a1;
    v3 = v6;
    v2 = v7;
    v1 = v8;
    v0 = v9;
    v10 = a0[4];
    v11 = *(a3);
    if (a2)
    {
        do
        {
            v13 = v12;
            v14 = v13[0];
            if ((char)v14 >= 0)
            {
                v15 = &v13[1];
            }
            else
            {
                v16 = (unsigned int)v14 & 31;
                v17 = v13[1] & 63;
                if ((v14 & 255) <= 223)
                {
                    v15 = &v13[2];
                    v14 = v16 * 64 | v17;
                }
                else
                {
                    v18 = v13[2] & 63 | v17 * 64;
                    if ((v14 & 255) < 240)
                    {
                        v15 = &v13[3];
                        v14 = v18 | v16 * 0x1000;
                    }
                    else
                    {
                        v15 = v13 + 1;
                        v14 = v13[3] & 63 | v18 * 64 | (v16 & 7) * 0x40000;
                    }
                }
            }
            if ((unsigned int)(v14 - 12) < 2)
            {
LABEL_486fa4:
                a0[4] = v19;
                v11 = 0;
            }
            else
            {
                if ((unsigned int)v14 == 9)
                {
                    v11 = (v11 & -8) + 8;
                    continue;
                }
                if ((unsigned int)v14 == 10)
                    goto LABEL_486fa4;
                if ((unsigned int)v14 < 127)
                {
                    v20 = -0x100 | 32 <= (unsigned int)v14;
                }
                else if ((unsigned int)v14 <= 159)
                {
                    v20 = 0;
                }
                else
                {
                    v21 = (unsigned int)v14 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[(unsigned int)v14 >> 13] * 128;
                    if ((unsigned int)v21 > 2431)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v22 = (unsigned int)v14 >> 2 & 15 | *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v21)) * 16;
                    if ((unsigned int)v22 >= 3808)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v23 = *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v22));
                    v24 = 1;
                    if (((char)((v23 & 255) >> ((char)v14 << 1 & 6 & 31)) & 3) != 3)
                        v24 = (char)((v23 & 255) >> ((char)v14 * 2 & 6 & 31)) & 3;
                    v20 = v24;
                }
                v11 += v20;
            }
        } while ((*(a3) = (unsigned long long)v11, v15 != v5 + a2));
    }
    a0[0] = a0[0] + a2;
    a0[4] = v25;
    return a3;
}
