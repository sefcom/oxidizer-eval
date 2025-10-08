char uu_sort::month_compare(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v1;  // al

    v1 = uu_sort::month_parse(a0, a1);
    return (v1 > (char)uu_sort::month_parse(a2, a3)) - 0 - (v1 < (uu_sort::month_parse(a2, a3) & 255));
}
