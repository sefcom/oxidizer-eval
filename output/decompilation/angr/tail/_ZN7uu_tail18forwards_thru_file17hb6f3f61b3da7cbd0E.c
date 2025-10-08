int uu_tail::forwards_thru_file()
{
    void* v0;  // [bp-0x8078]
    unsigned long long v1;  // [bp-0x8068]
    unsigned long long v2;  // [bp-0x8060]
    unsigned long long v3;  // [bp-0x8050]
    unsigned long long v4;  // [bp-0x8048]
    unsigned long long v5;  // [bp-0x8040]
    int v6;  // [bp-0x8030]
    void* v7;  // [bp-0x2030]
    char *v9;  // r14
    void* v10;  // rbp
    unsigned long long v11;  // rdi
    unsigned long long v12;  // rdi
    char *v13;  // r13
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r14
    unsigned long long v17;  // rax
    unsigned long v18;  // rdx
    unsigned long v19;  // rsi

    do
    {
        v7 = 0;
    } while (&v7 != &v6);
    v9 = &v6;
    memset(&v6, 0, 0x8000);
    v10 = 0;
    v0 = 0;
    v12 = v11;
    while (true)
    {
        v13 = v9;
        v14 = v12.read(v9, 0x8000);
        while (true)
        {
            v16 = v15;
            v1 = v14;
            v2 = v15;
            if (!((char)v14 & 1))
                break;
            if ((char)v16.kind() != 35)
                return;
            v3 = v2;
            core::ptr::drop_in_place<std::io::error::Error>(&v3);
            v14 = v11.read(v13, 0x8000);
        }
        if (!v16)
            break;
        v17 = 0.index(v16, v13, 0x8000, &g_573b58);
        v3 = v17;
        v4 = v17;
        v5 = v18 + v17;
        while (((char)v3.next(&vvar_75{reg 32}) & 1))
        {
            if (v19 == v10 + 1)
                return;
        }
        v0 += v16;
        v12 = v11;
        v9 = v13;
    }
    return;
}
