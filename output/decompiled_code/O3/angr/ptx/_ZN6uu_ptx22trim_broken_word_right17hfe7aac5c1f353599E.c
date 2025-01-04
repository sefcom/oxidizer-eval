long long uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(unsigned int *a0, unsigned int a1, unsigned int a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rax
    unsigned long long v4;  // 4096
    unsigned long long v6;  // r13
    unsigned long long v7;  // rdi
    unsigned long long v11;  // rdi
    unsigned long long v18;  // 4096
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rdi

    v1 = v3;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(a1, a2, a3);
    v4 = a3;
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
        v6 = a3 - 1;
        if (v6 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v7 = a0[1 + a3];
        if ((unsigned int)(v7 - 9) < 5)
        {
            return v4;
        }
        else if ((unsigned int)v7 == 32)
        {
            return v4;
        }
        else
        {
            if ((unsigned int)v7 >= 128 && (char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))
                return v4;
            if (a3 >= a1)
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            v11 = a0[a3];
            if ((unsigned int)(v11 - 9) < 5)
            {
                return v4;
            }
            else if ((unsigned int)v11 == 32)
            {
                return v4;
            }
            else
            {
                if ((unsigned int)v11 < 128)
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
                    else if ((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v11))
                    {
                        return v4;
                    }
                }
                if (a2 < v6)
                    v18 = a2;
                else
                    v18 = v6;
                while (true)
                {
                    v20 = a3;
                    v21 = v20 - 1;
                    if (v21 >= a1)
                        break;
                    v22 = a0[v21];
                    if (v22 <= 32)
                    {
                        v0 = 0x100003e00;
                        v4 = v20;
                        if (((char)(*((char *)&v0 + ((v22 & 63) >> 3)) >> (char)(v22 & 63 & 7)) & 1))
                            return v4;
                    }
                    if ((unsigned int)v22 >= 128)
                    {
                        v4 = v20;
                        if ((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22))
                            return v4;
                    }
                    a3 = v21;
                    if (v21 <= a2)
                    {
                        v4 = v18;
                        return v4;
                    }
                }
            }
        }
    }
}
