long long uu_sort::tokenize::h70667f0b27298df7(char *a0, unsigned long long a1, unsigned int a2, struct_0 *a3)
{
    unsigned long long v0;  // [sp-0x48]
    char *v4;  // r14
    unsigned long long v5;  // r13
    char *v6;  // r12
    void* v7;  // r15
    void* v8;  // r9
    char *v9;  // rax
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rcx
    unsigned int v12;  // esi
    unsigned int v13;  // r8d
    unsigned int v14;  // edi
    char *v15;  // rcx
    unsigned long long v16;  // r14
    unsigned long long v17;  // r12
    void* v18;  // rbp
    char *v19;  // r14
    char *v20;  // r15
    unsigned long long v21;  // rcx
    char *v22;  // r14
    unsigned int v23;  // edx
    unsigned int v24;  // edi
    unsigned int v25;  // esi
    unsigned int v26;  // esi
    char *v27;  // r12
    char *v28;  // rax
    char *v29;  // rcx
    unsigned long long v30;  // r9
    char *v31;  // rcx

    if (a3->field_10)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v4 = a0;
    if (a2 == 0x110000)
    {
        if (!a3->field_0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb93f3e290c0f6414(a3);
        *((int128_t *)&a3->field_8) = 0;
        a3->field_10 = 1;
        if (!v0)
        {
            v9 = a3->field_8;
            *((unsigned long long *)&v9[8]) = v0;
            return v9;
        }
        v0 = a1;
        v17 = 1;
        v18 = 0;
        while (true)
        {
            v20 = v19;
            v21 = *(v20);
            if ((char)v21 >= 0)
            {
                v22 = v20 + 1;
            }
            else
            {
                v23 = (unsigned int)v21 & 31;
                v24 = v20[1] & 63;
                if ((v21 & 255) <= 223)
                {
                    v22 = v20 + 2;
                    v21 = v23 * 64 | v24;
                }
                else
                {
                    v25 = v20[2] & 63 | v24 * 64;
                    if ((v21 & 255) >= 240)
                    {
                        v22 = v20 + 4;
                        v21 = v20[3] & 63 | v25 * 64 | (v23 & 7) * 0x40000;
                    }
                    else
                    {
                        v22 = v20 + 3;
                        v21 = v25 | v23 * 0x1000;
                    }
                }
            }
            if ((unsigned int)(v21 - 9) < 5 || (unsigned int)v21 == 32)
            {
                if (!1)
                    goto LABEL_4c3982;
                goto LABEL_4c38e1;
            }
            if ((unsigned int)v21 < 128)
                goto LABEL_4c38e1;
            if ((unsigned int)v21 >> 8 > 31)
            {
                switch (v26)
                {
                case 32:
                    break;
                case 48:
                    break;
                default:
LABEL_4c38e1:
                    v18 = v18 - v20 + v22;
                    if (v22 == &v4[v0])
                        goto LABEL_4c3b75;
                    continue;
                }
            }
            else
            {
                switch (v26)
                {
                case 0:
                    break;
                default:
LABEL_4c38e1:
                    v18 = v18 - v20 + v22;
                    if (!(v22 == &v4[v0]))
                        continue;
LABEL_4c3b75:
                    if (v17)
                    {
                        *((unsigned long long *)&a3->field_8[8 + 16 * v17]) = v0;
                        return v9;
                    }
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                }
                if (!(!((1 | !(unsigned int)v21 == 5760) & 1)))
                    goto LABEL_4c38e1;
LABEL_4c3982:
                if (!v17)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                *((void* *)&a3->field_8[8 + 16 * v17]) = v18;
                v27 = a3->field_10;
                if (v27 == a3->field_0)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb93f3e290c0f6414(a3);
                    break;
                }
            }
        }
        v28 = a3->field_8;
        v29 = v27 * 16;
        *((void* *)(v28 + v29)) = v18;
        *((long long *)(v28 + v29 + 8)) = 0;
        v17 = v27 + 1;
        a3->field_10 = v17;
        goto LABEL_4c38e1;
    }
    else
    {
        v0 = a1;
        v5 = &a0[a1];
        v6 = 0;
        v7 = 0;
        v8 = 0;
        if (a0 != v5)
        {
            while (true)
            {
                v9 = v4;
                v10 = v7;
                v11 = *(v9);
                if ((char)v11 >= 0)
                {
                    v4 = v9 + 1;
                }
                else
                {
                    v12 = (unsigned int)v11 & 31;
                    v13 = v9[1] & 63;
                    if ((v11 & 255) <= 223)
                    {
                        v4 = v9 + 2;
                        v11 = v12 * 64 | v13;
                    }
                    else
                    {
                        v14 = v9[2] & 63 | v13 * 64;
                        if ((v11 & 255) < 240)
                        {
                            v4 = v9 + 3;
                            v11 = v14 | v12 * 0x1000;
                        }
                        else
                        {
                            v4 = v9 + 4;
                            v11 = v9[3] & 63 | v14 * 64 | (v12 & 7) * 0x40000;
                        }
                    }
                }
                v7 = v4 - v9 + v10;
                if ((unsigned int)v11 == a2)
                {
                    if (v6 == a3->field_0)
                    {
                        a2 = a2;
                        v8 = v8;
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb93f3e290c0f6414(a3);
                    }
                    v9 = a3->field_8;
                    v15 = v6 * 16;
                    *((void* *)(v9 + v15)) = v8;
                    *((unsigned long long *)(v9 + v15 + 8)) = v10;
                    v6 += 1;
                    a3->field_10 = v6;
                    v8 = v10 + 1;
                    if (v4 == v5)
                        break;
                }
                else if (v4 == v5)
                {
                    break;
                }
            }
        }
        v16 = v0;
        if (v8 >= v16)
            return v9;
        if (v6 == a3->field_0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb93f3e290c0f6414(a3);
        v9 = a3->field_8;
        v31 = v6 * 16;
        *((unsigned long long *)(v9 + v31)) = v30;
        *((unsigned long long *)(v9 + v31 + 8)) = v16;
        a3->field_10 = &v6[1];
        return v9;
    }
}
