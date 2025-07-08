
  int64_t uu_more::reset_term::h414dda587ba155f3(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        crossterm::terminal::disable_raw_mode::h305d553e1a48c02a());
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg1, 4));
    char const (** const var_38)[0xa7] = &data_562938;
    int64_t var_30 = 1;
    int64_t var_28 = 8;
    int128_t var_20 = {0};
    std::io::stdio::_print::he918bceb0c89db46(&var_38);
    /* tailcall */
    return core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(arg1));
}
