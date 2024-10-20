long long uu_wc::process_chunk::he4e9f91d7777281f(unsigned long long a0[5], char a1[4], unsigned long a2, unsigned long long *a3)
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
    void* v13;  // r9
    unsigned long long v14;  // r10
    unsigned long long v15;  // r14
    unsigned long long v16;  // rbx
    char v17[4];  // rsi
    char v18[4];  // rsi
    unsigned long long v19;  // rbp
    char v20[4];  // rsi
    unsigned int v21;  // ecx
    unsigned int v22;  // r15d
    unsigned int v23;  // r8d
    unsigned long long v24;  // r9
    unsigned long long v25;  // rcx
    char *v26;  // r8
    char *v27;  // rcx
    unsigned long long v28;  // r8
    char v29;  // cl
    unsigned int v30;  // ecx
    unsigned long long v32;  // r9

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
        v15 = a0[2];
        v16 = a0[1] + 1;
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
            if ((unsigned int)(v19 - 12) < 2)
            {
LABEL_488146:
                a0[4] = v24;
                v13 = 0;
                goto LABEL_4881f2;
            }
            else
            {
                if ((unsigned int)v19 == 9)
                {
                    v13 = (v13 & -8) + 8;
                    *(a3) = v13;
                    continue;
                }
                if ((unsigned int)v19 == 10)
                    goto LABEL_488146;
                if ((unsigned int)v19 < 127)
                {
                    v25 = -0x100 | 32 <= (unsigned int)v19;
                }
                else if ((unsigned int)v19 <= 159)
                {
                    v25 = 0;
                }
                else
                {
                    v26 = (unsigned int)v19 >> 6 & 127 | (&_ZN13unicode_width6tables9charwidth8TABLES_017h1b101a7ffe1c1f8dE)[(unsigned int)v19 >> 13] * 128;
                    if ((unsigned int)v26 > 2431)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v27 = (unsigned int)v19 >> 2 & 15 | *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_117h15d9b3c7cb0d7f34E + v26)) * 16;
                    if ((unsigned int)v27 >= 3808)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v28 = *((char *)(&_ZN13unicode_width6tables9charwidth8TABLES_217h3d9de8bbd6705c68E + v27));
                    v29 = v19 * 2 & 4294967295;
                    v30 = 1;
                    if (((char)((v28 & 255) >> (v29 & 6 & 31)) & 3) != 3)
                        v30 = (char)((v28 & 255) >> (v29 & 6 & 31)) & 3;
                    v25 = v30;
                }
                v13 += v25;
LABEL_4881f2:
                *(a3) = v13;
                if ((unsigned int)v19 == 10)
                {
                    v15 += 1;
                    a0[2] = v15;
                }
            }
        } while ((a0[1] = v16, v16 += 1, v20 != v7 + a2));
    }
    a0[0] = a0[0] + a2;
    a0[4] = v32;
    return a3;
}
