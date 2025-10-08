long long fish::wutil::wcstoi::fish_wcstoi(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x10]
    char v1;  // [bp-0xf]
    char v2;  // [bp-0x8]
    unsigned long long v4;  // rdx

    fish::wutil::wcstoi::fish_wcstol(&v0, a0, a1);
    if (v0 != 1)
    {
        v4 = *((long long *)&v2);
        return (v4 & 4294967295) != v4 | ((v4 & 4294967295) == v4 ? v4 * 0x100000000 : 0);
    }
    return 1 | v1 * 0x100;
}
