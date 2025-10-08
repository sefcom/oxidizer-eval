long long fish::wcstringutil::bool_from_string(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned int v4;  // eax
    unsigned int v5;  // edx
    unsigned long v6;  // rax

    v1 = a0;
    v2 = a0 + a1 * 4;
    v4 = v1.next();
    if (v4 == 2)
        return 0;
    v4.unwrap(v5, &g_14bd1b0);
    v6 = v5 - 84;
    if ((unsigned int)v6 <= 37)
    {
        v0 = 141733920801;
        if ((*((char *)&v0 + ((v6 & 63) >> 3)) >> ((char)v6 & 63 & 7) & 1))
            return v6 & 0xffffff00 | 1;
    }
    if (v5 == 49)
        return v6 & 0xffffff00 | 1;
    return 0;
}
