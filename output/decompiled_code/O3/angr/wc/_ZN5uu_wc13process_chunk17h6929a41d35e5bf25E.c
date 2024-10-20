long long uu_wc::process_chunk::h6929a41d35e5bf25(unsigned long long a0[4], char a1[4], unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x10]
    unsigned long v2;  // [sp-0x8]
    unsigned long v5;  // r14
    unsigned long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // r10
    unsigned long long v9;  // r8
    char *v10;  // r11
    unsigned int v11;  // ebx
    unsigned int v12;  // r14d
    unsigned int v13;  // ebp
    unsigned int v14;  // ebx
    char v15;  // r11b
    unsigned long long v16;  // r11
    unsigned int v17;  // cc_dep1
    unsigned int v18;  // cc_dep2

    if (!a2)
    {
        a0[0] = a0[0] + a2;
        return v7;
    }
    *((int *)&v2) = vvar_71{reg 56};
    v1 = v5;
    v0 = v6;
    v7 = &a1[a2];
    v8 = *(a3);
    v9 = a0[3];
    do
    {
        v10 = a1[0];
        if ((char)v10 >= 0)
        {
            a1 = &a1[1];
        }
        else
        {
            v11 = (unsigned int)v10 & 31;
            v12 = a1[1] & 63;
            if ((v10 & 255) <= 223)
            {
                a1 = &a1[2];
                v10 = v11 * 64 | v12;
            }
            else
            {
                v13 = a1[2] & 63 | v12 * 64;
                if ((v10 & 255) < 240)
                {
                    a1 = &a1[3];
                    v10 = v13 | v11 * 0x1000;
                }
                else
                {
                    a1 += 1;
                    v10 = a1[3] & 63 | v13 * 64 | (v11 & 7) * 0x40000;
                }
            }
        }
        if (!((unsigned int)(v10 + 9) >= 5) || !((unsigned int)v10 != 32))
        {
LABEL_4870d0:
            *(a3) = 0;
            v8 = 0;
            continue;
        }
        if ((unsigned int)v10 < 128)
        {
LABEL_4871e1:
            if (!(char)v8)
            {
                *(a3) = 1;
                v9 += 1;
                a0[3] = v9;
                v8 = v8 | -0x100 | 1;
            }
        }
        else
        {
            v14 = (unsigned int)v10 >> 8;
            if (v14 > 31)
            {
                if (v14 != 32)
                {
                    if (!(v14 == 48))
                        goto LABEL_4871e1;
                    v17 = (unsigned int)v10;
                    v18 = 0x3000;
                }
                else
                {
                    v16 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v10 & 4294967295];
                    v15 = v16 | -0x100 | (v16 & 255) >> 1 & 255;
LABEL_4871d4:
                    if (!(!(v15 & 1)))
                        goto LABEL_4870d0;
                    goto LABEL_4871e1;
                }
            }
            else
            {
                if (!v14)
                {
                    v15 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v10 & 4294967295];
                    goto LABEL_4871d4;
                }
                else
                {
                    if (!(v14 == 22))
                        goto LABEL_4871e1;
                    v17 = (unsigned int)v10;
                    v18 = 5760;
                }
            }
            if (!v17 == v18)
                goto LABEL_4871e1;
            goto LABEL_4870d0;
        }
    } while (a1 != v7);
}
