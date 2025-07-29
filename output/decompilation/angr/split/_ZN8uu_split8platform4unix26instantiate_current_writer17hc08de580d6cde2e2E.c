long long uu_split::platform::unix::instantiate_current_writer(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [bp-0x68]
    unsigned int v1;  // [bp-0x64]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x54]
    char v5;  // [bp-0x50], Other Possible Types: unsigned int
    char v6;  // [bp-0x4f]
    char v7;  // [bp-0x4e]
    char v8;  // [bp-0x4d]
    char v9;  // [bp-0x4c], Other Possible Types: unsigned short
    char v10;  // [bp-0x48]
    unsigned int v11;  // [bp-0x34]
    unsigned long long v12;  // [bp-0x30]
    int v13;  // [bp-0x28]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    int v17;  // xmm0
    unsigned long long v18;  // rax

    if (a1)
    {
        v3.new(a1, a2, a3, a4);
        if (!(v3 & 1))
        {
            v16 = *((long long *)&v5);
            v17 = *((int128_t *)&v10);
            v0 = v17;
            v11 = v4;
            v12 = v16;
            v13 = v17;
            a0.with_capacity(0x2000, v11.new(), &g_5a7a88);
            return a0;
        }
        v15 = *((long long *)&v5);
    }
    else if (a5)
    {
        v3 = 0x1b600000000;
        v5 = 0;
        v9 = 0;
        v6 = 1;
        v9 = 1;
        v8 = 1;
        (char)v0.open(&(char)v3, a3, a4);
        if (!((char)v0 & 1))
        {
            v1.new();
            a0.with_capacity(0x2000, v18, &g_5a7a38);
            return a0;
        }
        v15 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(a3, a4, v2);
    }
    else
    {
        v3 = 0x1b600000000;
        v5 = 0;
        v9 = 0;
        v7 = 1;
        (char)v0.open(&(char)v3, a3, a4);
        if (!((char)v0 & 1))
        {
            v18 = v1.new();
            a0.with_capacity(0x2000, v18, &g_5a7a38);
            return a0;
        }
        v15 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(a3, a4, v2);
    }
    a0[1] = v15;
    a0[0] = 0x8000000000000000;
    return a0;
}
