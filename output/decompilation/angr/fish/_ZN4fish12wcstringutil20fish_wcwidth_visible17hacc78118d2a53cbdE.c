long long fish::wcstringutil::fish_wcwidth_visible(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a0 != 8)
    {
        v0 = v2;
        return fish::fallback::fish_wcwidth(a0).max(0);
    }
    return 18446744073709551615;
}
