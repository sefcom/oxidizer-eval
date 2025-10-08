long long uu_cat::write_nonprint_to_end(char *a0, unsigned long a1, unsigned long long a2, char *a3, unsigned long long a4)
{
    char v0;  // [bp-0x42]
    char v1;  // [bp-0x41]
    char v2;  // [bp-0x40]
    unsigned short v3;  // [bp-0x3f]
    char v4;  // [bp-0x3d]
    char v5;  // [bp-0x3c]
    unsigned short v6;  // [bp-0x3b]
    char v7;  // [bp-0x39]
    char *v9;  // rbx
    unsigned long v10;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // 4096
    char *v15;  // rsi

    if (!a1)
        return 0;
    v9 = 0;
    while (true)
    {
        v10 = *((char *)(a0 + v9));
        if ((unsigned int)v10 == 9)
        {
            v13 = a4;
            v14 = a2;
            v15 = a3;
        }
        else if ((unsigned int)v10 == 127)
        {
            v13 = 2;
            v14 = a2;
            v15 = "^?unknown filetype: ";
        }
        else if ((unsigned int)v10 == 10)
        {
            return v9;
        }
        else if ((v10 & 255) < 32)
        {
            v1 = 94;
            v2 = (char)v10 | 64;
            v13 = 2;
            v14 = a2;
            v15 = &v1;
        }
        else if ((v10 - 32 & 255) < 95)
        {
            v0 = v10;
            v13 = 1;
            v14 = a2;
            v15 = &v0;
        }
        else if ((char)v10 < 160)
        {
            v3 = 11597;
            v4 = 94;
            v5 = (char)v10 - 64;
            v13 = 4;
            v14 = a2;
            v15 = &v3;
        }
        else if ((char)v10 + 96 < 95)
        {
            v6 = 11597;
            v7 = (char)v10 & 127;
            v13 = 3;
            v14 = a2;
            v15 = &v6;
        }
        else
        {
            v13 = 4;
            v14 = a2;
            v15 = "M-^? -> ";
        }
        v14.write_all(v15, v13).unwrap(&g_4ead50);
        v9 += 1;
        if (a1 == v9)
            return a1;
    }
}
