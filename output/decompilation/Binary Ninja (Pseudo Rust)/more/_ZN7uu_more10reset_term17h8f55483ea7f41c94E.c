
  fn uu_more::reset_term::h8f55483ea7f41c94(arg1: i64) -> i64

{
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        crossterm::terminal::disable_raw_mode::h465f563c46635ef8());
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        crossterm::command::write_command_ansi::h092cdb5fcd9c0436(arg1));
    let mut var_38: *mut *mut [i8; 0x86] = &data_525308;
    let var_30: i64 = 1;
    let var_28: i64 = 8;
    let var_20: i128 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    /* tailcall */
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a901ae51f259b59(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg1))
}
