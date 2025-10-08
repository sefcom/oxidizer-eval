long long fish::widecharwidth::widechar_width::WcLookupTable::classify(char *a0, unsigned int a1)
{
    if (a1 >= 0x10000)
        return a1.from_char();
    return a0[a1];
}
