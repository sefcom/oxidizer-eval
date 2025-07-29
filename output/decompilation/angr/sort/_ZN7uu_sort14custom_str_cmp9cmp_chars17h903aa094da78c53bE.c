char uu_sort::custom_str_cmp::cmp_chars(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned long v1;  // cc_dep1
    unsigned long v2;  // cc_dep2
    unsigned long long v4;  // cc_ndep

    if (a2)
    {
        if (26 > a0 - 97)
            a0 &= 95;
        if (26 > a1 - 97)
            a1 &= 95;
        v1 = a0;
        v2 = a1;
    }
    else
    {
        v1 = a0;
        v2 = a1;
    }
    return (!(amd64g_calculate_condition(2, 7, v1, v2, v4) & 1 & 255) ? (unsigned int)v1 != (unsigned int)v2 : 255);
}
