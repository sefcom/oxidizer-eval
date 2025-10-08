long long fish::signal::equals_ascii_icase(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x48]
    unsigned long long v2;  // rbp
    unsigned int v3;  // eax
    unsigned int v4;  // edx

    if (a1 == a3)
    {
        v0.zip(a0, a0 + a1 * 4, a2, a2 + a1 * 4);
        do
        {
            v2 = v2 & 0xffffffffffffff00 | (int)v0.next() == 0x110000;
        } while (v3 != 0x110000 && (char)core::char::methods::<impl char>::eq_ignore_ascii_case(v3, v4));
    }
    else
    {
        v2 = 0;
    }
    return v2 & 4294967295;
}
