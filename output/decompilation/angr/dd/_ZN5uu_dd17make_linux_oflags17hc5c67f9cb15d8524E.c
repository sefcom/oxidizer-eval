long long uu_dd::make_linux_oflags::hc5c67f9cb15d8524(char a0[11])
{
    unsigned int v1;  // ecx
    unsigned int v2;  // ecx
    unsigned int v3;  // eax
    unsigned int v4;  // ecx
    unsigned int v5;  // eax
    unsigned int v6;  // ecx
    unsigned int v7;  // eax
    unsigned int v8;  // ecx

    v2 = (!a0[2] ? (unsigned int)(a0[0] * 0x400) : v1 | 0x4000);
    if (!a0[3])
        v3 = v2;
    else
        v3 = v2 | 0x10000;
    v4 = (!a0[4] ? v3 : v3 | 0x1000);
    if (!a0[8])
        v5 = v4;
    else
        v5 = v4 | 0x40000;
    v6 = (!a0[9] ? v5 : v5 | 0x100);
    if (!a0[10])
        v7 = v6;
    else
        v7 = v6 | 0x20000;
    v8 = (!a0[7] ? v7 : v7 | 0x800);
    return (!a0[5] ? v8 : v8 | 0x101000);
}
