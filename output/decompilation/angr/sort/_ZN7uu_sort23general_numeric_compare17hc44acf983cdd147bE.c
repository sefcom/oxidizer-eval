long long uu_sort::general_numeric_compare(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a0.partial_cmp(a1);
    if ((char)v3 == 2)
        core::option::unwrap_failed(&g_58d3c0); /* do not return */
    return v3;
}
