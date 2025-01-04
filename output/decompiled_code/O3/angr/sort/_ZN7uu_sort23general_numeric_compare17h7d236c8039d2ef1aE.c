long long uu_sort::general_numeric_compare::h7d236c8039d2ef1a(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = _$LT$uu_sort..GeneralF64ParseResult$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h4f60f876601ef468(a0, a1);
    if ((char)v3 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    return v3;
}
