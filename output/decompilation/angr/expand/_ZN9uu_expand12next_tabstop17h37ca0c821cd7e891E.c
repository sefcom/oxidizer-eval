long long uu_expand::next_tabstop(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    unsigned long long *v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long v4;  // r12
    unsigned long v5;  // rdx
    unsigned long long *v6;  // rax
    unsigned long v7;  // rcx
    unsigned long v8;  // rdx
    unsigned long v9;  // rsi
    unsigned long v10;  // rcx

    v2 = a2;
    if (a3)
    {
        v4 = a1 - 1;
        if (a3 == 1)
        {
            v0 = v4.index(a0, a1, &g_57b6d0);
            v1 = v0 + v5 * 8;
            v6 = v0.find(&v2);
            if (!v6)
            {
                if (!a1)
                    core::panicking::panic_bounds_check(v4, 0, &g_57b6e8); /* do not return */
                v7 = a0[1 + a1];
                if (!a0[1 + a1])
                    core::panicking::panic_const::panic_const_rem_by_zero(&g_57b700); /* do not return */
                goto LABEL_4a004b;
            }
        }
        else
        {
            v0 = v4.index(a0, a1, &g_57b718);
            v1 = v0 + v8 * 8;
            v6 = v0.find(&v2);
            if (!v6)
            {
                if (a1)
                {
                    if (a1 != 1)
                    {
                        v9 = a0[1 + a1];
                        if (!v9)
                            core::panicking::panic_const::panic_const_div_by_zero(&g_57b760); /* do not return */
                        a2 -= a0[2 + a1];
                        return v9 * ((!(a2 | v9) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)a2) % (v9 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a2) / (v9 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT a2) % v9) CONCAT (unsigned long long)((0 CONCAT a2) / v9)) + 1) - a2;
                    }
                    else
                    {
                        core::panicking::panic_bounds_check(-1, 1, &g_57b748); /* do not return */
                    }
                }
                else
                {
                    core::panicking::panic_bounds_check(v4, 0, &g_57b730); /* do not return */
                }
            }
        }
    }
    else if (a1 == 1)
    {
        v7 = *(a0);
        if (!*(a0))
            core::panicking::panic_const::panic_const_rem_by_zero(&g_57b6b8); /* do not return */
LABEL_4a004b:
        return (!(a2 | v7) >> 32 ? v7 - (((unsigned long long)((0 CONCAT a2) % v7) CONCAT (unsigned long long)((0 CONCAT a2) / v7)) >> 64) : v7 - (((unsigned int)((0 CONCAT (unsigned int)a2) % (v7 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a2) / (v7 & 4294967295))) >> 32));
    }
    else
    {
        v0 = a0;
        v1 = &a0[a1];
        v6 = v0.find(&v2);
        if (!v6)
            return 1;
    }
    v10 = *(v6);
    return v10 - a2;
}
