long long fish::complete::resolve_auto_space(unsigned long a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x120]
    unsigned long v2;  // rax
    unsigned int v3;  // ecx

    v2 = a2;
    if (((char)v2 & 4))
    {
        v2 = (unsigned int)v2 & 65531;
        if (a1)
        {
            v3 = *((int *)(a0 + a1 * 4 - 4)) - 44;
            if (v3 <= 20)
            {
                v0 = 1196047;
                if ((*((char *)&v0 + ((v3 & 31) >> 3)) >> ((char)v3 & 31 & 7) & 1))
                    v2 = (unsigned int)v2 | 1;
            }
        }
    }
    return v2;
}
