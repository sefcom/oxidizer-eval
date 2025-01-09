long long uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(unsigned int *a0, unsigned long a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rax
    unsigned long long v4;  // 4096
    unsigned long long v6;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v11;  // rdi
    unsigned long long v18;  // r13
    unsigned long long v19;  // 4096
    unsigned long long v21;  // 4096
    unsigned long long v22;  // rbp
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rbp
    unsigned long long v25;  // 4096

    v1 = v3;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(a1, a2, a3);
    v4 = a2;
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
            v8 = &g_6ede38;
        }
        else
        {
            v6 = a0[a2];
            if ((unsigned int)(v6 - 9) < 5)
                return v4;
            if ((unsigned int)v6 == 32)
                return v4;
            if ((unsigned int)v6 >= 128 && (char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v6))
                return v4;
            v11 = a0[1 + a2];
            if ((unsigned int)(v11 - 9) < 5)
                return v4;
            if ((unsigned int)v11 == 32)
                return v4;
            if ((unsigned int)v11 < 128)
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
                else if ((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v11))
                {
                    return v4;
                }
            }
            v18 = a2 + 1;
            if (a3 > v18)
                v19 = a3;
            else
                v19 = v18;
            v21 = a2;
            while (true)
            {
                v22 = v21;
                if (v22 >= a1)
                    break;
                v23 = a0[v22];
                if (!(v23 > 32) && !((v0 = 0x100003e00, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v23 & 63) >> 3))) >> (unsigned long long)(char)(v23 & 63 & 7)) & 1))) || !((unsigned int)v23 < 128) && !(!(char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v23)))
                {
                    v4 = v22;
                    return v4;
                }
                v24 = v22 + 1;
                v21 = v24;
                if (v24 >= a3)
                {
                    v4 = v19;
                    return v4;
                }
            }
            if (a2 <= a1)
                v25 = a1;
            else
                v25 = a2;
            v8 = &g_6ede50;
        }
        core::panicking::panic_bounds_check::h25a5330941572dd1(a2, a1, v8); /* do not return */
    }
}
