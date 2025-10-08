
  fn fuel_core_keygen::wait_for_keypress::h49d514a8c45c8f8f() -> i64

{
    let mut var_9: i8 = 0;
    core::result::Result$LT$T$C$E$GT$::expect::h03e0c3841ca5c0ac(
        crossterm::terminal::enable_raw_mode::h121939737b051832(), 
        "enable_raw_mode failedbin/keygen…", 0x16);
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    let mut var_8: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    core::result::Result$LT$T$C$E$GT$::unwrap::hfd58372bc1a5d77b(
        _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_exact::h74d935bcef497a0b(
        &var_8, &var_9, 1));
    let result: i64 = crossterm::terminal::disable_raw_mode::h60eba17260289f88();
    core::result::Result$LT$T$C$E$GT$::expect::h03e0c3841ca5c0ac(result, 
        "disable_raw_mode failed### Do no…", 0x17);
    result
}
