long long uu_ptx::trim_broken_word_left::h74ba8196f87843e9(unsigned int *a0, unsigned int a1, unsigned int *a2, unsigned int *a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned long v3;  // rax
    unsigned int *v4;  // 4096
    unsigned long long v6;  // rdi
    unsigned long long v10;  // rdi
    unsigned int *v20;  // 4096
    unsigned int *v21;  // rbp
    unsigned long long v22;  // rdi
    unsigned int *v23;  // rbp

    v1 = v3;
    uu_ptx::assert_str_integrity::h6e818c680edec9dd(a1, a2, a3);
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
        v6 = *((int *)((char *)a0 + 0x4 * a2));
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
            if ((unsigned int)v6 >= 128 && (char)::0x5b3cb0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v6))
                return v4;
            v10 = *((int *)(-4 + (char *)a0 + 0x4 * a2));
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
                    else if ((char)::0x5b3cb0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v10))
                    {
                        return v4;
                    }
                }
                while (true)
                {
                    v21 = v20;
                    if (v21 >= a1)
                        break;
                    v22 = *((int *)((char *)a0 + 0x4 * v21));
                    if (!(v22 > 32) && !((v0 = (unsigned long long)0x100003e00, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v22 & 63) >> 3))) >> (unsigned long long)(char)(v22 & 63 & 7)) & 1))) || !((unsigned int)v22 < 128) && !(!(char)::0x5b3cb0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v22)))
                        return v4;
                    v23 = (char *)v21 + 1;
                    if (v23 >= a3)
                        return v4;
                }
            }
        }
    }
}
