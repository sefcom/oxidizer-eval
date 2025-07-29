long long uu_unexpand::write_tabs(unsigned long long a0[3], unsigned long long *a1, unsigned int a2, unsigned long long a3, unsigned long a4, char a5, char a6, char a7)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // rax
    unsigned long long v2;  // rbp
    char v3;  // cl
    unsigned long v4;  // rdx
    unsigned long long v5;  // r13
    unsigned long v6;  // rax
    void* v7;  // rdi
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx
    unsigned long v10;  // rcx

    v0 = v1;
    v2 = a3;
    if (a6)
    {
        v3 = 1;
        if (!a5)
            goto LABEL_4a004b;
    }
    else if (a7 == 1 && !a5)
    {
LABEL_4a004b:
        if (a3 + 1 < a4)
            goto LABEL_4a0070;
    }
    if (!((v3 & a5 | a6) & (a4 <= a3 ^ 1)))
        goto LABEL_4a00df;
    while (true)
    {
LABEL_4a0070:
        if (uu_unexpand::next_tabstop(a1, a2, v2) != 1)
            break;
        v5 = v4 + v2;
        if (v5 > a4)
            break;
        v6 = a0[2];
        if (a0[0] - v6 > 1)
        {
            *((char *)(a0[1] + v6)) = 9;
            a0[2] = v6 + 1;
            v2 = v5;
            if (false)
            {
                v7 = 0;
                return 0.from();
            }
        }
        else
        {
            v7 = a0.write_all_cold("\t : \n", 1);
            v2 = v5;
            if (v7)
            {
                v7 = v7;
                return v7.from();
            }
        }
    }
LABEL_4a00df:
    v8 = a4 - v2;
    if (a4 <= v2)
        return 0;
    while (true)
    {
        v9 = v8;
        v10 = a0[2];
        if (a0[0] - v10 > 1)
        {
            *((char *)(a0[1] + v10)) = 32;
            a0[2] = v10 + 1;
        }
        else
        {
            v7 = a0.write_all_cold(" : \n", 1);
            if (v7)
            {
                v7 = v7;
                return v7.from();
            }
        }
        v8 = v9 - 1;
        if (v9 == 1)
            return 0;
    }
}
