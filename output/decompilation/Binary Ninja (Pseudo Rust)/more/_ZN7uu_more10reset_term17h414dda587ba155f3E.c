
  fn uu_more::reset_term::h414dda587ba155f3(arg1: i64) -> i64

{
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        crossterm::terminal::disable_raw_mode::h305d553e1a48c02a());
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg1, 4));
    let mut var_38: *mut *mut [i8; 0xa7] = &data_562938;
    let var_30: i64 = 1;
    let var_28: i64 = 8;
    let var_20: i128 = {0};
    std::io::stdio::_print::he918bceb0c89db46(&var_38);
    /* tailcall */
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(arg1))
}
