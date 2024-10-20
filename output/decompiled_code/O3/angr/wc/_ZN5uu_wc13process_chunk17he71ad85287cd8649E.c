long long uu_wc::process_chunk::he71ad85287cd8649(unsigned long long a0[4], char a1[4], unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x20]
    unsigned long long v1;  // [sp-0x18]
    unsigned long long v2;  // [sp-0x10]
    unsigned long v3;  // [sp-0x8]
    unsigned long v6;  // r15
    unsigned long v7;  // r14
    unsigned long v8;  // rbx
    unsigned long long v9;  // rax
    unsigned long long v10;  // r11
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    char *v13;  // rbx
    unsigned int v14;  // ebp
    unsigned int v15;  // r15d
    unsigned int v16;  // r14d
    unsigned int v17;  // ebp
    char v18;  // bpl
    unsigned long long v19;  // rbp
    unsigned int v20;  // cc_dep1
    unsigned int v21;  // cc_dep2

    if (!a2)
    {
        a0[0] = a0[0] + a2;
        return v9;
    }
    *((int *)&v3) = vvar_79{reg 56};
    v2 = v6;
    v1 = v7;
    v0 = v8;
    v9 = &a1[a2];
    v10 = *(a3);
    v11 = a0[2];
    v12 = a0[3];
    do
    {
        v13 = a1[0];
        if ((char)v13 >= 0)
        {
            a1 = &a1[1];
        }
        else
        {
            v14 = (unsigned int)v13 & 31;
            v15 = a1[1] & 63;
            if ((v13 & 255) <= 223)
            {
                a1 = &a1[2];
                v13 = v14 * 64 | v15;
            }
            else
            {
                v16 = a1[2] & 63 | v15 * 64;
                if ((v13 & 255) < 240)
                {
                    a1 = &a1[3];
                    v13 = v16 | v14 * 0x1000;
                }
                else
                {
                    a1 += 1;
                    v13 = a1[3] & 63 | v16 * 64 | (v14 & 7) * 0x40000;
                }
            }
        }
        if (!((unsigned int)(v13 + 9) >= 5) || !((unsigned int)v13 != 32))
        {
LABEL_488318:
            *(a3) = 0;
            v10 = 0;
            continue;
        }
        if ((unsigned int)v13 < 128)
        {
LABEL_4883a7:
            if (!(char)v10)
            {
                *(a3) = 1;
                v12 += 1;
                a0[3] = v12;
                v10 = v10 | -0x100 | 1;
            }
        }
        else
        {
            v17 = (unsigned int)v13 >> 8;
            if (v17 > 31)
            {
                if (v17 != 32)
                {
                    if (!(v17 == 48))
                        goto LABEL_4883a7;
                    v20 = (unsigned int)v13;
                    v21 = 0x3000;
                }
                else
                {
                    v19 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v13 & 4294967295];
                    v18 = v19 | -0x100 | (v19 & 255) >> 1 & 255;
LABEL_48839a:
                    if (!(!(v18 & 1)))
                        goto LABEL_488318;
                    goto LABEL_4883a7;
                }
            }
            else
            {
                if (!v17)
                {
                    v18 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v13 & 4294967295];
                    goto LABEL_48839a;
                }
                else
                {
                    if (!(v17 == 22))
                        goto LABEL_4883a7;
                    v20 = (unsigned int)v13;
                    v21 = 5760;
                }
            }
            if (!v20 == v21)
                goto LABEL_4883a7;
            goto LABEL_488318;
        }
        if ((unsigned int)v13 == 10)
        {
            v11 += 1;
            a0[2] = v11;
        }
    } while (a1 != v9);
}
