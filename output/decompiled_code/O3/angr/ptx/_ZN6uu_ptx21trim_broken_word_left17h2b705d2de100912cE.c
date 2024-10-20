long long uu_ptx::trim_broken_word_left::h2b705d2de100912c(unsigned int *a0, unsigned long a1, unsigned int *a2, unsigned int *a3)
{
    unsigned long long v0;  // [sp-0x148]
    unsigned int *v2;  // rdx
    unsigned int v3;  // eax
    unsigned int v4;  // esi
    unsigned int v5;  // eax
    char v6;  // al
    unsigned int *v7;  // 4096
    unsigned int *v9;  // rcx
    unsigned int *v10;  // rdx
    unsigned long long v14;  // rax
    unsigned int *v15;  // rcx
    unsigned int *v16;  // rdx

    v2 = a2;
    if (a2 > a3)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (a3 > a1)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else if (!a2)
    {
        return v2;
    }
    else if (a2 == a3)
    {
        return v2;
    }
    else if (a2 >= a1)
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    }
    else
    {
        v3 = *((int *)((char *)a0 + 0x4 * a2));
        if (v3 - 9 < 5)
        {
            return v2;
        }
        else if (v3 == 32)
        {
            return v2;
        }
        else
        {
            if (v3 < 128)
                goto LABEL_53a249;
            if (v3 >> 8 > 31)
            {
                switch (v4)
                {
                case 32:
                    break;
                case 48:
                    goto LABEL_53a223;
                default:
LABEL_53a249:
                    v5 = *((int *)(-4 + (char *)a0 + 0x4 * a2));
                    if (v5 - 9 < 5)
                        return v2;
                }
            }
            else
            {
                switch (v4)
                {
                case 0:
LABEL_53a223:
                    if (!v3 == 5760)
                        goto LABEL_53a249;
                    return v2;
                case 22:
                    break;
                default:
LABEL_53a249:
                    v5 = *((int *)(-4 + (char *)a0 + 0x4 * a2));
                    if (v5 - 9 < 5)
                        return v2;
                }
            }
            if (v5 == 32)
                return v2;
            if (v5 >= 128)
            {
                v6 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v5);
                v2 = a2;
                if (v2 >= a3)
                    return v2;
                if (v6)
                    return v2;
            }
            else if (a2 >= a3)
            {
                return v2;
            }
            v9 = v7;
            while (true)
            {
                v14 = *((int *)((char *)a0 + 0x4 * v10));
                if (v14 <= 32)
                {
                    v0 = 0x100003e00;
                    if (((char)(*((char *)&v0 + ((v14 & 63) >> 3)) >> (char)(v14 & 63 & 7)) & 1))
                        return v2;
                }
                if ((unsigned int)v14 >= 128)
                {
                    v16 = v10;
                    if ((char)core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v14 & 4294967295))
                        return v2;
                }
                v9 = v15;
                v10 = (char *)v16 + 1;
                if (v10 >= v9)
                    return v2;
            }
        }
    }
}
