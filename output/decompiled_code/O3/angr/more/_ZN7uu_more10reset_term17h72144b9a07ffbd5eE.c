long long uu_more::reset_term::h72144b9a07ffbd5e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    int v3;  // [sp-0x20]
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx

    core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(crossterm::terminal::disable_raw_mode::he72d811b39383d39(a0, a1, a2, a3, a4, a5), &g_563888);
    core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(crossterm::command::write_command_ansi::h66ef6922789da4a2(a0, 4), &g_5638a0);
    v0 = &g_5638b8;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v0, v5, v6);
    return core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a0, v5, v6), &g_5638c8);
}
