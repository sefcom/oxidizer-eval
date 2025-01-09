long long uu_ptx::trim_idx::hb7cdb8e465fc0246(unsigned int *a0, unsigned long a1, unsigned int a2, unsigned long a3)
{
    unsigned long long v1;  // 4096
    unsigned long long v2;  // 4096
    unsigned long long v3;  // r13
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r13
    unsigned long long v6;  // 4096
    unsigned long long v7;  // 4096
    unsigned long long v8;  // r14
    unsigned long long v9;  // r14
    unsigned long long v10;  // rdi

    uu_ptx::assert_str_integrity::h323fdd30696f5c71(a1, a2, a3);
    v1 = a2;
    if (a2 < a3)
    {
        v2 = a2;
        while (true)
        {
            v3 = v2;
            if (v3 >= a1)
            {
                if (a2 <= a1)
                    v7 = a1;
                else
                    v7 = a2;
                core::panicking::panic_bounds_check::h25a5330941572dd1(v7, a1, &g_6edeb0); /* do not return */
            }
            v4 = a0[v3];
            if (!((unsigned int)(v4 - 9) < 5) && !((unsigned int)v4 == 32) && (!((unsigned int)v4 >= 128) || !((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v4))))
                break;
            v5 = v3 + 1;
            v2 = v5;
            if (a3 == v5)
            {
                v6 = a3;
                return v6;
            }
        }
        v1 = v3;
    }
    v6 = v1;
    if (v1 >= a3)
        return v6;
    while (true)
    {
        v8 = a3;
        v9 = v8 - 1;
        if (v9 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v8 - 1, a1, &g_6edec8); /* do not return */
        v10 = a0[v9];
        if (!((unsigned int)(v10 - 9) < 5) && !((unsigned int)v10 == 32) && (!((unsigned int)v10 >= 128) || !((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v10))))
            break;
        a3 = v9;
        if (v1 >= v9)
        {
            v6 = v1;
            return v6;
        }
    }
    v6 = v1;
    return v6;
}
