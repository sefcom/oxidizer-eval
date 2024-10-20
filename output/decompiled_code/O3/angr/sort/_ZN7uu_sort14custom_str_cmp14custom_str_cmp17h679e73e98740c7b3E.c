long long uu_sort::custom_str_cmp::custom_str_cmp::h679e73e98740c7b3(char a0[4], unsigned long a1, char a2[4], unsigned long a3, char a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v2;  // [bp+0x8]
    unsigned long v3;  // rax
    char v4;  // r10b
    char v6[4];  // rsi
    char v7[4];  // rcx
    void* v8;  // cc_ndep
    unsigned long long v9;  // rax
    unsigned long long v10;  // r14
    char v11[4];  // rsi
    unsigned int v12;  // r15d
    unsigned int v13;  // r13d
    unsigned int v14;  // r12d
    unsigned long long v15;  // r14
    unsigned int v17;  // r14d
    unsigned long long v18;  // r15
    unsigned int v19;  // r12d
    unsigned int v20;  // r11d
    unsigned int v21;  // r13d
    unsigned long long v23;  // r15
    unsigned int v25;  // r15d
    unsigned long long v26;  // cc_dep1
    unsigned long long v27;  // cc_dep2
    unsigned int v28;  // r11d
    unsigned long long v29;  // rax
    unsigned long long v30;  // cc_ndep
    unsigned long long v32;  // rax

    v1 = v3;
    v4 = v2;
    if (!(unsigned int)a5 && !v4 && !a4)
    {
        v29 = ((char)amd64g_calculate_condition(9, 20, v32, 0, v30) ? (-0x100 | v32) & 4294967295 & 4294967295 : 255);
        return v29;
    }
    v6 = &a0[a3];
    v7 = &a2[a3];
    while (true)
    {
        v9 = 0x110000;
        if (a0 != v6)
            break;
        do
        {
LABEL_50e270:
            v11 = v11;
            v17 = 0x110000;
            if (a2 == v7)
                break;
            v18 = a2[0];
            if ((char)v18 >= 0)
            {
                v8 = amd64g_calculate_rflags_c(17, v18 & 255, 0, v8);
                a2 = &a2[1];
                if (!(a5 & 255 & 255))
                    goto LABEL_50e345;
                goto LABEL_50e315;
            }
            v19 = (unsigned int)v18 & 31;
            v20 = a2[1] & 63;
            if ((v18 & 255) <= 223)
            {
                a2 = &a2[2];
                v18 = v19 * 64 | v20;
                if (!(a5 & 255 & 255))
                    goto LABEL_50e345;
                goto LABEL_50e315;
            }
            else
            {
                v21 = a2[2] & 63 | v20 * 64;
                if ((v18 & 255) >= 240)
                {
                    a2 += 1;
                    v18 = a2[3] & 63 | v21 * 64 | (v19 & 7) * 0x40000;
                    if ((unsigned int)v18 == 0x110000)
                        break;
                }
                else
                {
                    a2 = &a2[3];
                    v18 = v21 | v19 * 0x1000;
                    if (!(a5 & 255 & 255))
                        goto LABEL_50e345;
LABEL_50e315:
                    if (!((unsigned int)(v18 - 48) < 10) && !(((unsigned int)v18 & -33) - 65 < 26) && !((v17 = 0x110000, (unsigned int)v18 <= 32 && ((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v18 & 4294967295 & 63) >> 3))) >> (unsigned long long)(char)(v18 & 4294967295 & 63 & 7)) & 1))))
                        continue;
LABEL_50e345:
                    v17 = (-95 <= (unsigned int)(v23 - 127) ? (unsigned int)v23 : (a4 ? 0x110000 : (unsigned int)v23));
                }
            }
        } while (v17 == 0x110000);
        if ((unsigned int)v9 == 0x110000)
        {
            v29 = v9 | -0x100 | -(v17 != 0x110000);
            return v29;
        }
        else if (v17 != 0x110000)
        {
            if (!v4)
            {
                v26 = v9 & 4294967295;
                v27 = v17;
            }
            else
            {
                v25 = (26 <= (unsigned int)(v9 - 97) ? (unsigned int)v9 & 95 : (unsigned int)v9);
                v28 = (26 <= v17 - 97 ? v17 : v17 & 95);
                v26 = v25;
                v27 = v28;
            }
            v29 = ((amd64g_calculate_condition(2, 7, v26, v27, v8) & 1 & 255) ? (unsigned int)v26 != (unsigned int)v27 : 255);
            if ((char)v29)
                return v29;
        }
        else
        {
            v29 = v9 | -0x100 | 1;
            return v29;
        }
    }
    v10 = a0[0];
    if ((char)v10 >= 0)
    {
        v8 = amd64g_calculate_rflags_c(17, v10 & 255, 0, v8);
        a0 = &a0[1];
        if (!(a5 & 255 & 255))
            goto LABEL_50e230;
        goto LABEL_50e205;
    }
    v12 = (unsigned int)v10 & 31;
    v13 = a0[1] & 63;
    if ((v10 & 255) <= 223)
    {
        a0 = &a0[2];
        v10 = v12 * 64 | v13;
        goto LABEL_50e200;
    }
    v14 = a0[2] & 63 | v13 * 64;
    if ((v10 & 255) < 240)
    {
        a0 = &a0[3];
        v10 = v14 | v12 * 0x1000;
        if (!(a5 & 255 & 255))
            goto LABEL_50e230;
    }
    else
    {
        a0 += 1;
        v10 = a0[3] & 63 | v14 * 64 | (v12 & 7) * 0x40000;
        if ((unsigned int)v10 == 0x110000)
            goto LABEL_50e270;
LABEL_50e200:
        if (!(a5 & 255 & 255))
            goto LABEL_50e230;
    }
LABEL_50e205:
    if (!((unsigned int)(v10 - 48) < 10) && !(((unsigned int)v10 & -33) - 65 < 26) && !((v9 = 0x110000, (unsigned int)v10 <= 32 && ((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v10 & 4294967295 & 63) >> 3))) >> (unsigned long long)(char)(v10 & 4294967295 & 63 & 7)) & 1))))
    {
LABEL_50e245:
        if ((unsigned int)v9 == 0x110000)
            continue;
        goto LABEL_50e270;
    }
LABEL_50e230:
    v9 = (-95 <= (unsigned int)(v15 - 127) ? v15 & 4294967295 : (a4 ? 0x110000 : (unsigned int)v15));
    goto LABEL_50e245;
}
