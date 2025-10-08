
  fn uu_stat::write_raw_byte::hbbf81da3232f2130(arg1: i8) -> ssize_t

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_10: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_11: i8 = arg1;
    let result: ssize_t =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(
        &var_10, &var_11, 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h004b259d24da9c80(result);
    result
}
