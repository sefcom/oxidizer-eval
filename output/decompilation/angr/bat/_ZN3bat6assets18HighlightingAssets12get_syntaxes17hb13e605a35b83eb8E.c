long long bat::assets::HighlightingAssets::get_syntaxes(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x57]
    unsigned int v2;  // [bp-0x54]
    unsigned long long v3[3];  // [bp-0x50], Other Possible Types: unsigned long long
    int v4;  // [bp-0x48]
    int v5;  // [bp-0x38]
    int v6;  // [bp-0x28]
    char v7;  // [bp-0x18]
    unsigned long long v9;  // rcx
    unsigned int v10;  // ecx

    v0.get_syntax_set(a1);
    if (v0 == 13)
    {
        v9 = v3[1];
        *((unsigned long long *)&a0[16]) = v3[2];
    }
    else
    {
        v10 = *((int *)&v1);
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned int *)&a0[1]) = v10;
        v9 = v3;
        a0[32] = v5;
        a0[48] = v6;
        *((int128_t *)&a0[64]) = *((int128_t *)&v7);
        a0[16] = v4;
    }
    *((unsigned long long *)&a0[8]) = v9;
    *((char *)a0) = v0;
    return a0;
}
