long long uu_sort::Line::print::h11ec83e4c23cc353(unsigned long long a0[2], unsigned long long a1, char a2[154])
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
        ::0x51ca90::core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(::0x51d710::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(a1, v4, v5), &g_5ff8a8);
        v1 = a2[153];
        return ::0x51ca90::core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(::0x51d710::_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(a1, &v1, 1), &g_5ff8c0);
    }
    return ::0x51ca90::core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(uu_sort::Line::print_debug::h449aee62a7355a6b(v4, v5, a2, a1), &g_5ff8d8);
}
