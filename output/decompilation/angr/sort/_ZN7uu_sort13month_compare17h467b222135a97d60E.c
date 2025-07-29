long long uu_sort::month_compare(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // r14
    unsigned long long v4;  // rbx
    unsigned long v5;  // rbp

    v1 = v3;
    v0 = v4;
    v5 = (unsigned int)uu_sort::month_parse(a0, a1);
    return ((v5 & 255) <= (uu_sort::month_parse(a2, a3) & 255) ? -((v5 & 255) < (uu_sort::month_parse(a2, a3) & 255)) : 1);
}
