char fish::wchar_ext::iter_prefixes_iter(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned int v4;  // eax
    unsigned int v5;  // eax

    v1 = a1;
    v2 = a2;
    v0 = a0;
    while (true)
    {
        v4 = v0.next_back();
        if (v4 == 0x110000)
            break;
        v5 = v1.next();
        if (v5 == 0x110000 || !v4.eq(v5))
            break;
    }
    return v4 == 0x110000;
}
