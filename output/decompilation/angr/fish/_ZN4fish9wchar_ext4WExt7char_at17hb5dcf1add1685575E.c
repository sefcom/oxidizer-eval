long long fish::wchar_ext::WExt::char_at(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long v4;  // rdx

    v0 = v2;
    v3 = a0.index(a1);
    if (!v4)
        return 0;
    return *(v3);
}
