long long uu_sort::custom_str_cmp::cmp_chars(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v1;  // 4096
    unsigned long v3;  // rax

    if (!a2)
        return v3 & 0xffffffffffffff00 | (a1 < a0) - 0 - (a0 < a1);
    if (26 > a0 - 97)
        a0 &= 95;
    if (26 <= a1 - 97)
        v1 = a1;
    else
        v1 = a1 & 95;
    return a1 - 97 & 0xffffffffffffff00 | (v1 < a0) - 0 - (a0 < v1);
}
