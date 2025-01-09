long long uu_expand::next_tabstop::h053856bdaef20e1a(unsigned long long *a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long long *v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x30]
    unsigned long v2;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r12
    unsigned long long v6;  // rcx
    unsigned long long *v7;  // rax
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rcx

    v4 = a2;
    v2 = a2;
    if ((char)a3)
    {
        v5 = a1 - 1;
        if ((unsigned int)a3 != 1)
        {
            v0 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc559d2d2cb947946(v5, a0, a1, &g_51ced0);
            v1 = &v0[v9];
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h7026d95030402bbd(&v0, &v2);
            if (!v7)
            {
                if (!a1)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(v5, 0, &g_51cee8); /* do not return */
                if (a1 == 1)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(a1 - 2, 1, &g_51cf00); /* do not return */
                v13 = a0[1 + a1];
                if (v13)
                {
                    v4 -= a0[2 + a1];
                    v14 = (!(v4 | v13) >> 32 ? (unsigned long long)((0 CONCAT v4) % v13) CONCAT (unsigned long long)((0 CONCAT v4) / v13) : ((unsigned int)((0 CONCAT (unsigned int)v4) % (v13 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v4) / (v13 & 4294967295))) & 4294967295 & 4294967295);
                    v10 = v13 * (v14 + 1) - v4;
                    return v10;
                }
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_51cf18); /* do not return */
            }
        }
        else
        {
            v0 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc559d2d2cb947946(v5, a0, a1, &g_51ce88);
            v1 = &v0[v8];
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h4c63399f73daa1d6(&v0, &v2);
            if (!v7)
            {
                if (!a1)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(v5, 0, &g_51cea0); /* do not return */
                v6 = a0[1 + a1];
                if (v6)
                {
                    v10 = (!(v4 | v6) >> 32 ? v6 - (((unsigned int)((0 CONCAT (unsigned int)v4) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v4) / (v6 & 4294967295))) >> 32 & 4294967295) : v6 - (((unsigned long long)((0 CONCAT v4) % v6) CONCAT (unsigned long long)((0 CONCAT v4) / v6)) >> 64));
                    return v10;
                }
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_51ceb8); /* do not return */
            }
        }
    }
    else if (a1 != 1)
    {
        v0 = a0;
        v1 = &a0[a1];
        v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hf95545e01abab4a0(&v0, &v2);
        if (!v7)
            return 1;
    }
    else if (!*(a0))
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_51ce70); /* do not return */
    }
    else
    {
        return v10;
    }
    return v10;
}
