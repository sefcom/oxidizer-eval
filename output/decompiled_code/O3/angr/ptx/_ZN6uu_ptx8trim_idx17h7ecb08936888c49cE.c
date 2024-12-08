long long uu_ptx::trim_idx::h7ecb08936888c49c(unsigned int *a0, unsigned int a1, unsigned int *a2, unsigned int *a3)
{
    unsigned int *v1;  // 4096
    unsigned int *v2;  // 4096
    unsigned int *v3;  // r13
    unsigned long long v4;  // rdi
    unsigned int *v5;  // r13
    unsigned int *v6;  // 4096
    unsigned long long v7;  // rdi

    uu_ptx::assert_str_integrity::h6e818c680edec9dd(a1, a2, a3);
    if (a2 < a3)
    {
        while (true)
        {
            v3 = v2;
            if (v3 >= a1)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v4 = *((int *)((char *)a0 + 0x4 * v3));
            if (!((unsigned int)(v4 - 9) < 5) && !((unsigned int)v4 == 32) && (!((unsigned int)v4 >= 128) || !((char)::0x5b3cb0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v4))))
                break;
            v5 = (char *)v3 + 1;
            if (a3 == v5)
                return v6;
        }
    }
    if (v1 >= a3)
        return v6;
    while (true)
    {
        a3 = (char *)a3 + 1;
        if (a3 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v7 = *((int *)((char *)a0 + 0x4 * a3));
        if (!((unsigned int)(v7 - 9) < 5) && !((unsigned int)v7 == 32) && (!((unsigned int)v7 >= 128) || !((char)::0x5b3cb0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))))
            break;
        if (v1 >= a3)
            return v6;
    }
    return v6;
}
