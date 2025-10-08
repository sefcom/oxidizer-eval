long long fish::fallback::wcscasecmp(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    return fish::fallback::wcscasecmp_fuzzy(a0, a1, a2, a3, core::convert::identity);
}
