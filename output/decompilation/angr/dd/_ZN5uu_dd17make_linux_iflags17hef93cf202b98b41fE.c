long long uu_dd::make_linux_iflags::hef93cf202b98b41f(char a0[10])
{
    unsigned int v1;  // eax
    unsigned int v2;  // ecx
    unsigned int v3;  // eax
    unsigned int v4;  // ecx
    unsigned int v5;  // eax
    unsigned int v6;  // ecx
    unsigned int v7;  // eax
    unsigned int v8;  // edx

    v1 = a0[1] * 0x4000;
    v2 = (!a0[2] ? v1 : v1 | 0x10000);
    if (!a0[3])
        v3 = v2;
    else
        v3 = v2 + 0x1000;
    v4 = (!a0[7] ? v3 : v3 | 0x40000);
    if (!a0[8])
        v5 = v4;
    else
        v5 = v4 | 0x100;
    v6 = (!a0[9] ? v5 : v5 | 0x20000);
    if (!a0[6])
        v7 = v6;
    else
        v7 = v6 | 0x800;
    v8 = (!a0[4] ? v7 : v7 | 0x101000);
    return v8;
}
