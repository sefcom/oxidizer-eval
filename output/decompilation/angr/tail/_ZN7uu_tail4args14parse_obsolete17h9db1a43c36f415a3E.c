long long uu_tail::args::parse_obsolete(unsigned long long *a0, unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0x110]
    char v1;  // [bp-0xf8]
    char v2;  // [bp-0xee]
    unsigned int v4;  // eax

    uu_tail::parse::parse_obsolete(&v1, a1);
    v4 = v2;
    if (v4 != 2)
    {
        if (v4 == 3)
        {
            *(a0) = 5;
            return a0;
        }
        a0.from_obsolete_args(&v1, a2);
        return a0;
    }
    v0.to_string_lossy(a1[1], a1[2]);
    goto (long long)(g_41e490[v1] + (char *)&g_41e490[0]);
}
