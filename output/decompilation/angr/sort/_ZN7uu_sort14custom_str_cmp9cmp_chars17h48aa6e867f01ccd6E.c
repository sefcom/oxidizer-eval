char uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v1;  // cc_dep1
    unsigned long long v2;  // cc_dep2
    unsigned int v3;  // ecx
    unsigned long long v4;  // cc_ndep
    char v6;  // al

    if (!a2)
    {
        v1 = a0;
        v2 = a1;
    }
    else
    {
        if (26 <= a0 - 97)
            v3 = a0;
        else
            v3 = a0 & 95;
        v1 = v3;
        v2 = (26 <= a1 - 97 ? a1 : a1 & 95);
    }
    v6 = (!(amd64g_calculate_condition(2, 7, v1, v2, v4) & 1 & 255) ? (unsigned int)v1 != (unsigned int)v2 : 255);
    return v6;
}
