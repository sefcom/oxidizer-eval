char fish::highlight::highlight::has_expand_reserved(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned int v3;  // eax
    unsigned int v4;  // edx

    v0 = a0;
    v1 = a0 + a1 * 4;
    while (true)
    {
        v3 = v0.next();
        if (v3 == 2)
            break;
        v3.unwrap(v4, &g_14bd1b0);
        if ((char)g_a18a34.contains(v4))
            break;
    }
    return v3 != 2;
}
