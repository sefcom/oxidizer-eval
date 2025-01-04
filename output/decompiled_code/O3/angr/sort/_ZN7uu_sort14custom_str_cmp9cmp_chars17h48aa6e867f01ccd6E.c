long long uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v1;  // cc_dep1
    unsigned long long v2;  // cc_dep2
    unsigned long long v3;  // cc_ndep
    unsigned long long v5;  // rax

    if (!a2)
    {
        v1 = a0;
        v2 = a1;
    }
    else
    {
        v1 = a0 & 95;
        v2 = (26 <= a1 - 97 ? a1 : a1 & 95);
    }
    v5 = (!(amd64g_calculate_condition(2, 7, v1, v2, v3) & 1 & 255) ? (unsigned int)v1 != (unsigned int)v2 : 255);
    return v5;
}
