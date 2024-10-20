long long uu_fmt::parasplit::FileLines::match_prefix_generic::h5fefd6f9516e3336(void* a0, unsigned int a1, char a2[4], unsigned long a3, char a4)
{
    char v0[4];  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    char v3[4];  // r9
    void* v4;  // rax
    char v5[4];  // r9
    unsigned long long v6;  // rax
    char v7[4];  // r9
    char v8[4];  // r13
    char v9[4];  // r9
    char v10[4];  // r12
    unsigned long long v11;  // r14
    char v12[4];  // rbp
    unsigned int v13;  // eax
    unsigned int v14;  // edx
    unsigned int v15;  // ecx
    char v16[4];  // r9
    unsigned long long v17;  // rax
    unsigned int v18;  // ecx

    v3 = a2;
    *(&v0) = a2;
    if (a3 < a1)
    {
        v4 = 0;
    }
    else
    {
        v6 = bcmp(a0, v3, a1);
        v4 = v6 | -0x100 | !(unsigned int)v6;
        *(&v5) = v0;
    }
    v7 = v5;
    if ((char)v4)
    {
        return v4;
    }
    else if (a4)
    {
        return v4;
    }
    else
    {
        if (!a3)
            return 0;
        v1 = &v7[a3];
        v8 = 0;
        while (true)
        {
            v10 = v9;
            v11 = v10[0];
            if ((char)v11 >= 0)
            {
                v12 = &v10[1];
                if (!(!v8))
                    goto LABEL_489440;
                goto LABEL_489466;
            }
            v13 = (unsigned int)v11 & 31;
            v14 = v10[1] & 63;
            if ((v11 & 255) <= 223)
            {
                v12 = &v10[2];
                v11 = v13 * 64 | v14;
                if (!(!v8))
                    goto LABEL_489440;
                goto LABEL_489466;
            }
            v15 = v10[2] & 63 | v14 * 64;
            if ((v11 & 255) < 240)
            {
                v12 = &v10[3];
                v11 = v15 | v13 * 0x1000;
                if (!(!v8))
                    goto LABEL_489440;
            }
            else
            {
                v12 = v10 + 1;
                v11 = v10[3] & 63 | v15 * 64 | (v13 & 7) * 0x40000;
                if (v8)
                {
LABEL_489440:
                    if (a3 <= v8)
                    {
                        if (a3 != v8)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(v7 + v8)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
            }
LABEL_489466:
            if (a3 - (char *)v8 >= a1)
            {
                v17 = bcmp(a0, v7 + v8, a1);
                *(&v16) = v0;
                if (!(unsigned int)v17)
                {
                    v4 = v17 | -0x100 | 1;
                    return v4;
                }
            }
            v8 = v8 - v10 + (char *)v12;
            if (!((unsigned int)(v11 - 9) >= 5) || !((unsigned int)v11 != 32))
            {
                if (v12 == v1)
                    break;
                continue;
            }
            if ((unsigned int)v11 < 128)
                break;
            if ((unsigned int)v11 >> 8 <= 31)
            {
                switch (v18)
                {
                case 0:
                    break;
                case 22:
                    goto LABEL_4894d0;
                default:
                    return 0;
                }
                goto LABEL_4894bc;
            }
            else
            {
                switch (v18)
                {
                case 32:
LABEL_4894bc:
                    break;
                case 48:
                    break;
                default:
                    return 0;
                }
LABEL_4894d0:
                if (!((unsigned int)v11 == 5760) || !(v12 != v1))
                    return 0;
            }
        }
    }
}
