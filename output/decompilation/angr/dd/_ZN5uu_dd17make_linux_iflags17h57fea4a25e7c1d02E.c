long long uu_dd::make_linux_iflags(char a0[10])
{
    unsigned int v1;  // eax

    v1 = a0[1] * 0x4000;
    if (a0[2])
        v1 += 0x10000;
    if (a0[3])
        v1 += 0x1000;
    if (a0[7])
        v1 += 0x40000;
    if (a0[8])
        v1 |= 0x100;
    if (a0[9])
        v1 |= 0x20000;
    if (a0[6])
        v1 |= 0x800;
    if (a0[4])
        v1 |= 0x101000;
    return v1;
}
