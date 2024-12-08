long long uu_sort::general_numeric_compare::hfeaae550e4be3df6(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [sp-0x8]
    int v2;  // ymm1
    int v3;  // ymm0
    unsigned long v5;  // cc_ndep
    unsigned long v7;  // rax

    if (a0 == 3 && a1 == 3)
    {
        if (!(CmpF((unsigned long long)v2, (unsigned long long)v3) & 1))
        {
            return -((int)(amd64g_calculate_rflags_c(0, (unsigned long long)(unsigned int)(CmpF((unsigned long long)v3, (unsigned long long)v2) & 69), 0, v5) & 1));
        }
        else if (!(CmpF((unsigned long long)v3, (unsigned long long)v2) & 1))
        {
            return v7 | -0x100 | 1;
        }
        else
        {
            v0 = v7 | -0x100 | 1;
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
    }
    return (a1 <= a0 ? (-0x100 | a0 != a1) & 4294967295 & 4294967295 : 255);
}
