long long uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(unsigned int *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rax
    unsigned long long v4;  // 4096
    unsigned long long v6;  // rdi
    unsigned long long v10;  // rdi
    unsigned long long v17;  // r13
    unsigned long long v18;  // 4096
    unsigned long long v20;  // 4096
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rbp

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
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v6 = a0[a2];
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
            v10 = a0[1 + a2];
            if ((unsigned int)(v10 - 9) < 5)
            {
                return v4;
            }
            else if ((unsigned int)v10 == 32)
            {
                return v4;
            }
            else
            {
                if ((unsigned int)v10 < 128)
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
                    else if ((char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v10))
                    {
                        return v4;
                    }
                }
                v17 = a2 + 1;
                if (a3 > v17)
                    v18 = a3;
                else
                    v18 = v17;
                v20 = a2;
                while (true)
                {
                    v21 = v20;
                    if (v21 >= a1)
                        break;
                    v22 = a0[v21];
                    if (!(v22 > 32) && !((v0 = (unsigned long long)0x100003e00, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v22 & 63) >> 3))) >> (unsigned long long)(char)(v22 & 63 & 7)) & 1))) || !((unsigned int)v22 < 128) && !(!(char)::0x5b4230::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22)))
                    {
                        v4 = v21;
                        return v4;
                    }
                    v23 = v21 + 1;
                    v20 = v23;
                    if (v23 >= a3)
                    {
                        v4 = v18;
                        return v4;
                    }
                }
            }
        }
    }
}
