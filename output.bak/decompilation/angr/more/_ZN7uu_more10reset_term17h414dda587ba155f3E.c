long long uu_more::reset_term::h414dda587ba155f3(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    int v3;  // [sp-0x20]

    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(crossterm::terminal::disable_raw_mode::h305d553e1a48c02a(), &g_562948);
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(crossterm::command::write_command_ansi::h0432cd0c76b6eef8(a0, 4), &g_562960);
    v0 = &g_562938;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v0);
    return core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a0), &g_562978);
}
