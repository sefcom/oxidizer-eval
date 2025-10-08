double uu_tr::operation::Sequence::parse_backslash(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    char v5;  // dl
    unsigned long v6;  // xmm0lq
    int v7;  // xmm0

    v0.process("\\", 1, a1, a2);
    if (*((int *)&v0) != 3)
    {
        v7 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v7;
        return (unsigned long long)v7;
    }
    switch (v3)
    {
    case 97:
        v5 = 7;
        break;
    case 98:
        v5 = 8;
        break;
    case 102:
        v5 = 12;
        break;
    case 110:
        v5 = 10;
        break;
    case 114:
        v5 = 13;
        break;
    case 116:
        v5 = 9;
        break;
    case 118:
        v5 = 11;
        break;
    }
    *((unsigned long *)&a0[8]) = v1;
    *((unsigned long *)&a0[16]) = v2;
    *((char *)&a0[24]) = v5;
    *((unsigned long long *)a0) = 3;
    return v6;
}
