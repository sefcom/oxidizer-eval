long long uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(unsigned int *a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r13
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rdi

    v1 = v3;
    v4 = a3;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(a1, a2, a3);
    if (a2 == a3)
    {
        return v4;
    }
    else if (a3 == a1)
    {
        return v4;
    }
    else
    {
        v5 = a3 - 1;
        if (v5 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v5, a1, &g_6ede68); /* do not return */
        v6 = a0[1 + a3];
        if ((unsigned int)(v6 - 9) < 5)
        {
            return v4;
        }
        else if ((unsigned int)v6 == 32)
        {
            return v4;
        }
        else
        {
            if ((unsigned int)v6 >= 128 && (char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v6))
                return v4;
            if (a3 >= a1)
            {
                v8 = &g_6ede80;
            }
            else
            {
                v7 = a0[a3];
                if ((unsigned int)(v7 - 9) < 5)
                    return v4;
                if ((unsigned int)v7 == 32)
                    return v4;
                if ((unsigned int)v7 < 128)
                {
                    if (a3 <= a2)
                        return v4;
                }
                else
                {
                    if (a3 <= a2)
                    {
                        return v4;
                    }
                    else if ((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))
                    {
                        return v4;
                    }
                }
                if (a2 < v5)
                    v5 = a2;
                while (true)
                {
                    v10 = v4 - 1;
                    if (v10 >= a1)
                        break;
                    v11 = a0[v10];
                    if (v11 <= 32)
                    {
                        v0 = 0x100003e00;
                        if (((char)(*((char *)&v0 + ((v11 & 63) >> 3)) >> (char)(v11 & 63 & 7)) & 1))
                            return v4;
                    }
                    if ((unsigned int)v11 >= 128 && (char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v11))
                        return v4;
                    v4 = v10;
                    if (v10 <= a2)
                    {
                        v4 = v5;
                        return v4;
                    }
                }
                v4 -= 1;
                v8 = &g_6ede98;
            }
            core::panicking::panic_bounds_check::h25a5330941572dd1(v4, a1, v8); /* do not return */
        }
    }
}
