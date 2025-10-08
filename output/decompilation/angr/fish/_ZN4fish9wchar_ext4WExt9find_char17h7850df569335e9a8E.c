long long fish::wchar_ext::WExt::find_char(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long v4;  // rdx

    v0 = 9;
    v1 = a0.index(a1);
    v2 = v1 + v4 * 4;
    return v1.position(&v0);
}
