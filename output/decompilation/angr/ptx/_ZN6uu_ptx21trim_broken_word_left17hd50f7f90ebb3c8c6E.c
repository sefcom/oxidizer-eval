long long uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(unsigned int *a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdi
    unsigned long long v9;  // r13
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rdi

    v1 = v3;
    v4 = a2;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(a1, a2, a3);
    if (!a2)
    {
        return v4;
    }
    else if (a2 == a3)
    {
        return v4;
    }
    else
    {
        if (a2 >= a1)
        {
            v6 = &g_6ede38;
        }
        else
        {
            v5 = a0[a2];
            if ((unsigned int)(v5 - 9) < 5)
                return v4;
            if ((unsigned int)v5 == 32)
                return v4;
            if ((unsigned int)v5 >= 128 && (char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v5))
                return v4;
            v7 = a0[1 + a2];
            if ((unsigned int)(v7 - 9) < 5)
                return v4;
            if ((unsigned int)v7 == 32)
                return v4;
            if ((unsigned int)v7 < 128)
            {
                if (a2 >= a3)
                    return v4;
            }
            else
            {
                if (a2 >= a3)
                {
                    return v4;
                }
                else if ((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))
                {
                    return v4;
                }
            }
            v9 = a2 + 1;
            if (a3 > v9)
                v9 = a3;
            v10 = a2;
            while (v10 < a1)
            {
                v11 = a0[v10];
                if (!(v11 > 32) && !((v0 = 0x100003e00, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v11 & 63) >> 3))) >> (unsigned long long)(char)(v11 & 63 & 7)) & 1))) || !((unsigned int)v11 < 128) && !(!(char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v11)))
                {
                    v4 = v10;
                    return v4;
                }
                v10 += 1;
                if (v10 >= a3)
                {
                    v4 = v9;
                    return v4;
                }
            }
            if (a2 <= a1)
                v4 = a1;
            v6 = &g_6ede50;
        }
        core::panicking::panic_bounds_check::h25a5330941572dd1(v4, a1, v6); /* do not return */
    }
}
