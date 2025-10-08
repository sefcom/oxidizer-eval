long long fish::reader::unescaped_quote(unsigned int a0, unsigned int a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned int v4;  // ebx

    v2 = 0x110000;
    if (a2 >= a1)
        return 0x110000;
    v0 = v3;
    v4 = *((int *)(a0 + a2 * 4));
    if (v4 == 39 || v4 == 34)
    {
        if ((char)fish::reader::is_backslashed(a0, a1, a2))
            v4 = 0x110000;
        v2 = v4;
    }
    return v2;
}
