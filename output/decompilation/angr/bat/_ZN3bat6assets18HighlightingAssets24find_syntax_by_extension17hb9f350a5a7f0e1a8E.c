long long bat::assets::HighlightingAssets::find_syntax_by_extension(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x6f]
    unsigned int v2;  // [bp-0x6c]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x68]
    int v5;  // [bp-0x60], Other Possible Types: char
    int v6;  // [bp-0x50]
    int v7;  // [bp-0x40]
    char v8;  // [bp-0x30]
    unsigned long v10;  // rax
    void* v11;  // rdx
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rax
    unsigned int v15;  // ecx

    v0.get_syntax_set(a1);
    v10 = v0;
    if ((char)v10 != 13)
    {
        v15 = *((int *)&v1);
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned int *)&a0[1]) = v15;
        a0[32] = v6;
        a0[48] = v7;
        *((int128_t *)&a0[64]) = *((int128_t *)&v8);
        a0[16] = v5;
        *((char *)a0) = v10;
        *((unsigned long long *)&a0[8]) = v3;
        return v10;
    }
    if (a2)
    {
        core::str::converts::from_utf8(&v0, a2, a3);
        v11 = (!v0 ? *((long long *)&v5) : 0);
        if (!v0)
            v4 = v3;
        else
            v4 = 1;
        v13 = v4;
    }
    else
    {
        v13 = 1;
        v11 = 0;
    }
    v14 = v3.find_syntax_by_extension(v13, v11);
    *((unsigned long long *)&a0[8]) = v14;
    *((unsigned long long *)&a0[16]) = v3;
    *((char *)a0) = 13;
    return v14;
}
