long long fish::builtins::string::match::StringMatcher::report_matches(void* a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x10]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if (*(a1))
    {
        v3 = v0.report_matches(a1, a2, a3, a4);
        if (*((int *)&v0) != 2)
        {
            v4 = *((long long *)&v1);
            *((unsigned long long *)&a0[16]) = v4;
            *(a0) = v0;
            return v4;
        }
    }
    else
    {
        v3 = a1 + 1.report_matches(a2, a3, a4);
    }
    *((unsigned long long *)a0) = 2;
    return v3;
}
