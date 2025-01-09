long long uu_sort::month_compare::h2ae5044cf495110c(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x10]
    unsigned long v3;  // r14
    unsigned long v4;  // rbx
    unsigned long long v7;  // rax

    v1 = v3;
    v0 = v4;
    v7 = ((char)uu_sort::month_parse::h15c772d462e6ea25(a0, a1) <= (char)uu_sort::month_parse::h15c772d462e6ea25(a2, a3) ? -((char)uu_sort::month_parse::h15c772d462e6ea25(a0, a1) < (char)uu_sort::month_parse::h15c772d462e6ea25(a2, a3)) : 1);
    return v7;
}
