long long uu_echo::is_flag(char *a0, unsigned long a1, char a2[2])
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx
    char v11;  // bpl
    char *v12;  // rax
    char v13;  // r12b

    if (!a1)
    {
        return 0;
    }
    else if (a1 == 1 || *(a0) != 45)
    {
        return 0;
    }
    else
    {
        v5 = v7;
        v4 = v8;
        v3 = v9;
        v2 = v10;
        v11 = a2[0];
        v0 = a0 + 1;
        v1 = &a0[a1];
        v12 = v0.next();
        if (v12)
        {
            do
            {
                switch (*(v12))
                {
                case 69:
                    break;
                case 101:
                    v13 = 1;
                    break;
                case 110:
                    v11 = 0;
                    break;
                default:
                    return 0;
                }
                v12 = v0.next();
            } while (v12);
        }
        a2[0] = v11 & 1;
        a2[1] = v13 & 1;
        return v12 & 0xffffffffffffff00 | 1;
    }
}
