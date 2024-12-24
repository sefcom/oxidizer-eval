long long uu_sort::Line::print::h330b1b344154d584(unsigned long long a0[2], unsigned long long a1, char a2[154])
{
    unsigned long v0;  // [bp-0x18]
    char v1;  // [sp-0x11]
    unsigned long v3;  // rax
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rax

    v0 = v3;
    v4 = a0[0];
    v5 = a0[1];
    if (!a2[124])
    {
        ::0x51bad0::core::result::Result$LT$T$C$E$GT$::unwrap::h5f800bb82e87fbec(::0x51c730::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hc7dc8b85384f3806(a1, v4, v5), &g_5fed80);
        v1 = a2[153];
        return ::0x51bad0::core::result::Result$LT$T$C$E$GT$::unwrap::h5f800bb82e87fbec(::0x51c730::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hc7dc8b85384f3806(a1, &v1, 1), &g_5fed98);
    }
    return ::0x51bad0::core::result::Result$LT$T$C$E$GT$::unwrap::h5f800bb82e87fbec(uu_sort::Line::print_debug::h46a79b5dce038de3(v4, v5, a2, a1), &g_5fedb0);
}
