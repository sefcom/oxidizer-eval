
  int64_t uu_more::reset_term::h8f55483ea7f41c94(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        crossterm::terminal::disable_raw_mode::h465f563c46635ef8());
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        crossterm::command::write_command_ansi::h092cdb5fcd9c0436(arg1));
    char const (** const var_38)[0x86] = &data_525308;
    int64_t var_30 = 1;
    int64_t var_28 = 8;
    int128_t var_20 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    /* tailcall */
    return core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg1));
}
