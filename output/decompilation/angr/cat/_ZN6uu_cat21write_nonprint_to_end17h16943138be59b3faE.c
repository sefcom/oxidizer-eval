long long uu_cat::write_nonprint_to_end(unsigned long long a0, unsigned long a1, unsigned long long a2, char *a3, unsigned long long a4)
{
    struct struct_0 v0[2];  // [bp-0x44]
    unsigned short v1;  // [bp-0x44]
    unsigned short v2;  // [bp-0x44]
    char v3;  // [bp-0x43]
    char v4;  // [sp-0x42]
    char v5;  // [bp-0x41]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    char *v9;  // rax
    void* v10;  // r12
    unsigned long long v11;  // r12
    unsigned long v12;  // rax
    unsigned long long v13;  // rdx
    char *v15;  // rsi
    unsigned long long v16;  // rdi
    unsigned long v20;  // r12

    v6 = a0;
    v7 = a1 + a0;
    v10 = 0;
    if (!v6.next())
        return 0;
    while (true)
    {
        v11 = v10;
        v12 = *(v9);
        if ((unsigned int)v12 == 9)
        {
            v15 = a3;
            v13 = a4;
            v16 = a2;
            goto LABEL_49f27f;
        }
        if ((unsigned int)v12 == 127)
        {
            v13 = 2;
            v15 = "^?unknown filetype: ";
            v16 = a2;
            goto LABEL_49f27f;
        }
        if ((unsigned int)v12 == 10)
            return v11;
        if ((v12 & 255) < 32)
        {
            v0->field_0 = 94;
            v3 = (char)v12 | 64;
            v13 = 2;
            goto LABEL_49f330;
        }
        if ((v12 - 32 & 255) < 95)
        {
            v0->field_0 = v12;
            v13 = 1;
            goto LABEL_49f330;
        }
        if ((char)v12 < 160)
        {
            v1 = 11597;
            v4 = 94;
            v5 = (char)v12 - 64;
            v13 = 4;
            goto LABEL_49f330;
        }
        else if ((char)v12 + 96 < 95)
        {
            v2 = 11597;
            v4 = (char)v12 & 127;
            v13 = 3;
LABEL_49f330:
            v15 = &v0;
            v16 = a2;
            goto LABEL_49f27f;
        }
        else
        {
            v13 = 4;
            v15 = "M-^? -> ";
            v16 = a2;
LABEL_49f27f:
            v16.write_all(v15, v13).unwrap(&g_572fc8);
            v20 = v11 + 1;
            v9 = v6.next();
            v10 = v20;
            if (!v9)
                return v11 + 1;
        }
    }
}
