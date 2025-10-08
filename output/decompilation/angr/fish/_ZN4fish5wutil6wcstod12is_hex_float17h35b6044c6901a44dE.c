long long fish::wutil::wcstod::is_hex_float(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned int v4;  // eax

    v0 = a0;
    v1 = a1;
    switch ((int)v0.next())
    {
    case 43: case 45:
        if ((int)v0.next() != 48)
            return 0;
    case 48:
        if (((int)v0.next() | 32) == 120)
        {
            v4 = v0.next();
            if (v4 != 0x110000)
                return (v4 & 4294967263) - 65 & 0xffffffffffffff00 | (v4 & 4294967263) - 65 < 6 | v4 - 48 < 10;
            return 0;
        }
        else
        {
            return 0;
        }
    default:
        return 0;
    }
}
