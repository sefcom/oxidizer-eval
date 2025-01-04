long long uu_unexpand::next_tabstop::h948056bd8ee01f21(unsigned long long *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long *v1;  // [sp-0x18]
    unsigned long long v2;  // [sp-0x10]

    v0 = a2;
    if (a1 != 1)
    {
        v1 = a0;
        v2 = &a0[a1];
        if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h222f1f9381491abf(&v1, &v0))
            return 0;
    }
    else if (!*(a0))
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
    }
    return 1;
}
