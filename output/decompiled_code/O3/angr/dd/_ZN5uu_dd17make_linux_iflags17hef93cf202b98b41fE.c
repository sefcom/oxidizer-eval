long long uu_dd::make_linux_iflags::hef93cf202b98b41f(char a0[10])
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v1 = a0[1] * 0x4000;
    if (a0[2])
        v1 |= 0x10000;
    v2 = (!a0[3] ? v1 : v1 + 0x1000);
    if (a0[7])
        v2 |= 0x40000;
    if (a0[8])
        v3 = v2 | 0x100;
    if (a0[9])
        v3 |= 0x20000;
    if (a0[6])
        v3 |= 0x800;
    if (a0[4])
        v3 |= 0x101000;
    return -0x100 | v3;
}
