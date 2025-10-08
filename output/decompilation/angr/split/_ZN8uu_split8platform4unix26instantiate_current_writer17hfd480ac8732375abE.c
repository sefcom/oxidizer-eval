long long uu_split::platform::unix::instantiate_current_writer(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x84]
    char v2;  // [bp-0x80], Other Possible Types: unsigned int
    char v3;  // [bp-0x7f]
    char v4;  // [bp-0x7e]
    char v5;  // [bp-0x7d]
    char v6;  // [bp-0x7c], Other Possible Types: unsigned short
    int v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    unsigned int v11;  // [bp-0x54]
    unsigned long long v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x44]
    char v15;  // [bp-0x40]
    unsigned int v16;  // [bp-0x34]
    unsigned long long v17;  // [bp-0x30]
    int v18;  // [bp-0x28]
    int v19;  // [bp-0x18]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long v24;  // rdi

    v8 = a3;
    v9 = a4;
    if (a1)
    {
        v0.new(a1, a2, a3, a4);
        if (!(v0 & 1))
        {
            v19 = v7;
            v16 = v1;
            v17 = *((long long *)&v2);
            v18 = v19;
            v22 = v16.new();
            v23 = &g_50acf8;
            return a0.with_capacity(v22, &g_50acf8);
        }
        v21 = *((long long *)&v2);
    }
    else if (a5)
    {
        v0 = 0x1b600000000;
        v2 = 0;
        v6 = 0;
        v3 = 1;
        v6 = 1;
        v5 = 1;
        v10.open(&(char)v0, a3, a4);
        if (!(v10 & 1))
        {
            v24 = v11;
            v11.new();
            return a0.with_capacity(v22, &g_50aca8);
        }
        v21 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, v12);
    }
    else
    {
        v0 = 0x1b600000000;
        v2 = 0;
        v6 = 0;
        v4 = 1;
        v13.open(&(char)v0, a3, a4);
        if (!(v13 & 1))
        {
            v24 = v14;
            v22 = v24.new();
            v23 = &g_50aca8;
            return a0.with_capacity(v22, &g_50aca8);
        }
        v21 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, *((long long *)&v15));
    }
    a0[1] = v21;
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
