long long fish::wcstringutil::string_prefixes_string_case_insensitive(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (a1 <= a3)
    {
        v0 = v2;
        v3 = fish::fallback::wcscasecmp(a2, a1, a0, a1);
        return v3 & 0xffffffffffffff00 | !(v3 & 255);
    }
    return 0;
}
