long long uu_sort::ext_sort::write_lines::h885deb96e81ca5d5(unsigned long a0, unsigned long a1, unsigned long long a2, char a3)
{
    char v0;  // [sp-0x41]
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4[2];  // rax

    v1 = a0;
    v2 = a0 + a1 * 24;
    v4 = ::0x5670f0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&v1);
    if (!v4)
        return v4;
    do
    {
        ::0x566b50::core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(::0x567010::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(a2, v4[0], v4[1]), &g_601e88);
        v0 = a3;
        ::0x566b50::core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(::0x567010::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(a2, &v0, 1), &g_601ea0);
        v4 = ::0x5670f0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&v1);
    } while (v4);
    return v4;
}
