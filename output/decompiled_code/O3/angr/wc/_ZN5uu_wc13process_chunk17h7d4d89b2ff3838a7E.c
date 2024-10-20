long long uu_wc::process_chunk::h7d4d89b2ff3838a7(unsigned long long a0[4], char a1[4], unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long long v3;  // [sp-0x10]
    unsigned long v4;  // [sp-0x8]
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned long v9;  // r12
    unsigned long v10;  // rbx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r8
    unsigned long long v14;  // r10
    unsigned long long v15;  // r9
    char *v16;  // r14
    unsigned int v17;  // ebp
    unsigned int v18;  // r12d
    unsigned int v19;  // r15d
    unsigned int v20;  // ebp
    char v21;  // bpl
    unsigned long long v22;  // rbp
    unsigned int v23;  // cc_dep1
    unsigned int v24;  // cc_dep2

    if (!a2)
    {
        a0[0] = a0[0] + a2;
        return v11;
    }
    *((int *)&v4) = vvar_81{reg 56};
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = &a1[a2];
    v12 = *(a3);
    v13 = a0[3];
    v14 = a0[2];
    v15 = a0[1] + 1;
    do
    {
        v16 = a1[0];
        if ((char)v16 >= 0)
        {
            a1 = &a1[1];
        }
        else
        {
            v17 = (unsigned int)v16 & 31;
            v18 = a1[1] & 63;
            if ((v16 & 255) <= 223)
            {
                a1 = &a1[2];
                v16 = v17 * 64 | v18;
            }
            else
            {
                v19 = a1[2] & 63 | v18 * 64;
                if ((v16 & 255) >= 240)
                {
                    a1 += 1;
                    v16 = a1[3] & 63 | v19 * 64 | (v17 & 7) * 0x40000;
                }
                else
                {
                    a1 = &a1[3];
                    v16 = v19 | v17 * 0x1000;
                }
            }
        }
        if (!((unsigned int)(v16 + 9) >= 5) || !((unsigned int)v16 != 32))
        {
LABEL_4875a9:
            *(a3) = 0;
            v12 = 0;
            continue;
        }
        if ((unsigned int)v16 < 128)
        {
LABEL_48763c:
            if (!(char)v12)
            {
                *(a3) = 1;
                v13 += 1;
                a0[3] = v13;
                v12 = v12 | -0x100 | 1;
            }
        }
        else
        {
            v20 = (unsigned int)v16 >> 8;
            if (v20 > 31)
            {
                if (v20 != 32)
                {
                    if (!(v20 == 48))
                        goto LABEL_48763c;
                    v23 = (unsigned int)v16;
                    v24 = 0x3000;
                }
                else
                {
                    v22 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v16 & 4294967295];
                    v21 = v22 | -0x100 | (v22 & 255) >> 1 & 255;
LABEL_48762f:
                    if (!(!(v21 & 1)))
                        goto LABEL_4875a9;
                    goto LABEL_48763c;
                }
            }
            else
            {
                if (!v20)
                {
                    v21 = (&_ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE)[v16 & 4294967295];
                    goto LABEL_48762f;
                }
                else
                {
                    if (!(v20 == 22))
                        goto LABEL_48763c;
                    v23 = (unsigned int)v16;
                    v24 = 5760;
                }
            }
            if (!v23 == v24)
                goto LABEL_48763c;
            goto LABEL_4875a9;
        }
        if ((unsigned int)v16 == 10)
        {
            v14 += 1;
            a0[2] = v14;
        }
        a0[1] = v15;
        v15 += 1;
    } while (a1 != v11);
}
