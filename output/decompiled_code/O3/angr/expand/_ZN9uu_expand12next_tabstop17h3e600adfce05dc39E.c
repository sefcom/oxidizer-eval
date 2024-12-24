long long uu_expand::next_tabstop::h3e600adfce05dc39(unsigned long long *a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long long *v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long v2;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r12
    unsigned long long v6;  // rcx
    unsigned long long *v7;  // rax
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rcx

    v4 = a2;
    v2 = a2;
    if (!(char)a3)
    {
        if (a1 != 1)
        {
            v0 = a0;
            v1 = &a0[a1];
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h6a6b86e05a87ae4e(&v0, &v2);
            if (!v7)
                return 1;
        }
        else if (!*(a0))
        {
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
        }
        else
        {
            return v10;
        }
LABEL_4b35bd:
        v11 = *(v7);
    }
    else
    {
        v5 = a1 - 1;
        if ((unsigned int)a3 != 1)
        {
            v0 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf0206a296043a62(v5, a0, a1, &g_51edb0);
            v1 = v0 + v9 * 8;
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hdc5c440a45f85fd5(&v0, &v2);
            if (!(!v7))
                goto LABEL_4b35bd;
            if (!a1)
            {
                goto LABEL_4b3602;
            }
            else
            {
                if (a1 == 1)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v12 = a0[1 + a1];
                if (!v12)
                    core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
                v4 -= a0[2 + a1];
                v13 = (!(v4 | v12) >> 32 ? (0 CONCAT v4) /m v12 : (0 CONCAT (unsigned int)v4) /m (unsigned int)v12 & 4294967295 & 4294967295);
                v11 = v12 * (v13 + 1);
            }
        }
        else
        {
            v0 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf0206a296043a62(v5, a0, a1, &g_51ed68);
            v1 = v0 + v8 * 8;
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h61cef8a3c070a1f2(&v0, &v2);
            if (!(!v7))
                goto LABEL_4b35bd;
            if (!a1)
            {
LABEL_4b3602:
            }
            else
            {
                v6 = a0[1 + a1];
                if (v6)
                {
                    v10 = (!(v4 | v6) >> 32 ? v6 - ((0 CONCAT v4) /m v6 >> 64) : v6 - ((0 CONCAT (unsigned int)v4) /m (unsigned int)v6 >> 32 & 4294967295));
                    return v10;
                }
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
            }
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
    }
    v10 = v11 - v4;
    return v10;
}
