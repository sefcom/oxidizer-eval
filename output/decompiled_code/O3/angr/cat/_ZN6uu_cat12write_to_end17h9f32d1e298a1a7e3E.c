long long uu_cat::write_to_end::h9f32d1e298a1a7e3(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v3;  // r15
    unsigned long long v4;  // rdx

    v3 = a0;
    v0 = a0;
    v1 = a0 + a1;
    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h68db461dfcc60447(&v0))
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h08945c0f33ae2f71(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, v3, a1), &g_519190);
        return a1;
    }
    core::result::Result$LT$T$C$E$GT$::unwrap::h08945c0f33ae2f71(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a2, ::0x4ad250::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h63b1aa296660cfa4(a1, v3, a1, &g_5191a8), v4), &g_5191c0);
    return a1;
}
