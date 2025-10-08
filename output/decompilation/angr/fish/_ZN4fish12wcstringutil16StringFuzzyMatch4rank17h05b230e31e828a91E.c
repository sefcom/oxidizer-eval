long long fish::wcstringutil::StringFuzzyMatch::rank(char a0[2])
{
    unsigned long v1;  // rax
    unsigned long v2;  // rax

    v1 = a0[1];
    v2 = a0[0];
    return ((char)v2 != 1 ? (unsigned int)v2 & 255 : 0) | ((v1 & 255) ? (unsigned int)v1 * 8 : 8);
}
