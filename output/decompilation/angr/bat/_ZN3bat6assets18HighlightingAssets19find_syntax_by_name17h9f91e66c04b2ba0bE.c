long long bat::assets::HighlightingAssets::find_syntax_by_name(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x6f]
    unsigned int v2;  // [bp-0x6c]
    unsigned long long v3;  // [bp-0x68]
    int v4;  // [bp-0x60]
    int v5;  // [bp-0x50]
    int v6;  // [bp-0x40]
    char v7;  // [bp-0x30]
    unsigned long v9;  // r15
    unsigned long long v10;  // rax
    unsigned int v11;  // eax

    v0.get_syntax_set(a1);
    v9 = a0 + 16;
    if (v0 == 13)
    {
        v10 = v3.find_syntax_by_name("Plain Text", 10);
        *((unsigned long long *)v9) = v3;
    }
    else
    {
        v11 = *((int *)&v1);
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned int *)&a0[1]) = v11;
        v10 = v3;
        *((void*)(v9 + 16)) = v5;
        *((void*)(v9 + 32)) = v6;
        *((int128_t *)(v9 + 48)) = *((int128_t *)&v7);
        *((void*)v9) = v4;
    }
    *((unsigned long long *)&a0[8]) = v10;
    *((char *)a0) = v0;
    return v10;
}
