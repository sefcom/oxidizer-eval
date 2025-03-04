long long uu_ptx::trim_idx::hb7cdb8e465fc0246(unsigned int *a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v1;  // r14
    unsigned long long v2;  // rbx
    unsigned long long v3;  // r13
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r14
    unsigned long long v6;  // r14
    unsigned long long v7;  // rdi

    v1 = a3;
    v2 = a2;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(a1, a2, a3);
    if (a2 < a3)
    {
        v3 = a2;
        while (true)
        {
            if (v3 >= a1)
            {
                if (a2 > a1)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(v2, a1, &g_6edeb0); /* do not return */
                v2 = a1;
            }
            v4 = a0[v3];
            if (!((unsigned int)(v4 - 9) < 5) && !((unsigned int)v4 == 32) && (!((unsigned int)v4 >= 128) || !((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v4))))
                break;
            v3 += 1;
            if (a3 == v3)
            {
                v2 = a3;
                return v2;
            }
        }
        v2 = v3;
    }
    if (v2 >= a3)
        return v2;
    while (true)
    {
        v5 = v1;
        v6 = v5 - 1;
        if (v6 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v5 - 1, a1, &g_6edec8); /* do not return */
        v7 = a0[v6];
        if (!((unsigned int)(v7 - 9) < 5) && !((unsigned int)v7 == 32) && (!((unsigned int)v7 >= 128) || !((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))))
            break;
        v1 = v6;
        if (v2 >= v6)
            return v2;
    }
    return v2;
}
