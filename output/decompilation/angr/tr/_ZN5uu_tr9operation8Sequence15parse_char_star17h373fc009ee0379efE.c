double uu_tr::operation::Sequence::parse_char_star(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    int v9;  // xmm0
    char v10;  // al
    int v11;  // xmm0

    v4 = "[*]*][:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v5 = 1;
    v6 = "*]*][:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]";
    v7 = 2;
    v0.process(&v4, a1, a2);
    if (*((int *)&v0) != 3)
    {
        v11 = *((int128_t *)&v0);
        *((int128_t *)&a0[24]) = *((int128_t *)&v2);
        a0[8] = v11;
        *((unsigned long long *)a0) = 1;
        return (unsigned long long)v11;
    }
    v9 = *((int128_t *)&v1);
    v10 = v3;
    a0[8] = v9;
    *((unsigned int *)&a0[24]) = 12;
    *((char *)&a0[32]) = 2;
    *((char *)&a0[33]) = v10;
    *((unsigned long long *)a0) = 0;
    return (unsigned long long)v9;
}
