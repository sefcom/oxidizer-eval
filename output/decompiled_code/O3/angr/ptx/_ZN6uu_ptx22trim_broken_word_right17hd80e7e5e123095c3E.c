long long uu_ptx::trim_broken_word_right::hd80e7e5e123095c3(unsigned int *a0, unsigned long long a1, unsigned int *a2, unsigned int *a3)
{
    unsigned long long v0;  // [sp-0x158]
    unsigned long long v1;  // [sp-0x38]
    unsigned int *v3;  // rcx
    unsigned long v4;  // rax
    unsigned int *v5;  // rbx
    unsigned int v6;  // eax
    unsigned int v7;  // r8d
    unsigned long long v8;  // rax
    unsigned int *v10;  // 4096
    unsigned int *v12;  // rdx
    unsigned int *v15;  // rcx
    unsigned int *v16;  // r12
    unsigned long long v17;  // rax
    unsigned int *v18;  // rdx

    v3 = a3;
    v1 = v4;
    if (a2 > a3)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a3 > a1)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a2 == a3)
    {
        return v3;
    }
    else if (a3 == a1)
    {
        return v3;
    }
    else
    {
        v5 = (char *)a3 + 1;
        if (v5 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v6 = *((int *)(-4 + (char *)a0 + 0x4 * a3));
        if (v6 - 9 < 5)
        {
            return v3;
        }
        else if (v6 == 32)
        {
            return v3;
        }
        else
        {
            if (v6 < 128)
                goto LABEL_53a400;
            if (v6 >> 8 > 31)
            {
                switch (v7)
                {
                case 32:
                    break;
                case 48:
                    goto LABEL_53a3d8;
                default:
LABEL_53a400:
                    if (a3 >= a1)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
            }
            else
            {
                switch (v7)
                {
                case 0:
LABEL_53a3d8:
                    if (!v6 == 5760)
                        goto LABEL_53a400;
                    return v3;
                case 22:
                    break;
                default:
LABEL_53a400:
                    if (a3 >= a1)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
            }
            v8 = *((int *)((char *)a0 + 0x4 * a3));
            if ((unsigned int)(v8 - 9) < 5)
            {
                return v3;
            }
            else if ((unsigned int)v8 == 32)
            {
                return v3;
            }
            else
            {
                if ((unsigned int)v8 >= 128)
                {
                    v3 = a3;
                    if (v3 <= a2)
                        return v3;
                    if ((char)core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8 & 4294967295))
                        return v3;
                }
                else if (a3 <= a2)
                {
                    return v3;
                }
                v12 = v10;
                while (true)
                {
                    v15 = v3;
                    v16 = (char *)v15 + 1;
                    if (v16 >= a1)
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v17 = *((int *)((char *)a0 + 0x4 * v16));
                    if (v17 <= 32)
                    {
                        v0 = 0x100003e00;
                        if (((char)(*((char *)&v0 + ((v17 & 63) >> 3)) >> (char)(v17 & 63 & 7)) & 1))
                            return v3;
                    }
                    if ((unsigned int)v17 >= 128 && (char)core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v17 & 4294967295))
                        return v3;
                    v12 = v18;
                    if (v16 <= v12)
                        return v3;
                }
            }
        }
    }
}
