long long uu_ptx::trim_idx::h1761918a398b52aa(unsigned int *a0, unsigned long a1, unsigned int *a2, unsigned int *a3)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned int *v2;  // rdx
    unsigned long v3;  // rax
    unsigned int v4;  // r8d
    unsigned int v5;  // r9d
    unsigned int *v6;  // rdx
    unsigned int v7;  // r9d
    unsigned int v8;  // r10d

    v2 = a2;
    v0 = v3;
    if (a2 > a3)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    if (a3 > a1)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    if (!(a2 < a3))
        goto LABEL_53a5ee;
    while (true)
    {
        v4 = *((int *)((char *)a0 + 0x4 * v2));
        if (v4 - 9 >= 5 && v4 != 32)
        {
            if (v4 < 128)
                goto LABEL_53a5ee;
            if (v4 >> 8 > 31)
            {
                switch (v5)
                {
                case 32:
                    break;
                case 48:
                    break;
                default:
LABEL_53a5ee:
                    if (v2 >= a3)
                        return v6;
                    goto LABEL_53a5f7;
                }
            }
            else
            {
                switch (v5)
                {
                case 0:
                    break;
                case 22:
                    break;
                default:
LABEL_53a5ee:
                    if (v2 >= a3)
                        return v6;
                    goto LABEL_53a5f7;
                }
            }
            if (!v4 == 5760)
                goto LABEL_53a5ee;
            else
                goto LABEL_53a580;
        }
LABEL_53a580:
        v2 = (char *)v2 + 1;
        if (a3 == v2)
            return v6;
    }
LABEL_53a5f7:
    while (true)
    {
        a3 = (char *)a3 + 1;
        if (a3 >= a1)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v7 = *((int *)((char *)a0 + 0x4 * a3));
        if (v7 - 9 >= 5 && v7 != 32)
            break;
LABEL_53a630:
        if (v2 >= a3)
            return v6;
    }
    if (v7 < 128)
        goto LABEL_53a6b1;
    if (v7 >> 8 > 31)
    {
        switch (v8)
        {
        case 32:
            break;
        case 48:
            goto LABEL_53a618;
        default:
LABEL_53a6b1:
            return v6;
        }
    }
    else
    {
        switch (v8)
        {
        case 0:
            break;
        case 22:
            break;
        default:
LABEL_53a6b1:
            return v6;
        }
    }
LABEL_53a618:
    if (!(!v7 == 5760))
        goto LABEL_53a630;
    goto LABEL_53a6b1;
}
