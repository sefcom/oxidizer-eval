long long uu_cat::write_to_end::hc5c9bc823008cc21(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v3;  // r15
    unsigned long long v4;  // 4096
    unsigned long long v5;  // rdx

    v3 = a0;
    v0 = a0;
    v1 = a0 + a1;
    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h0aef01da5877f86a(&v0))
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, v3, a1), &g_518778);
        v4 = a1;
        return v4;
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, ::0x4acde0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(v5, v3, a1, &g_518790), v5), &g_5187a8);
    v4 = v5;
    return v4;
}
