
  ssize_t uu_stat::write_raw_byte::hbbf81da3232f2130(char arg1)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_10 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    char var_11 = arg1;
    ssize_t result =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(
        &var_10, &var_11, 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h004b259d24da9c80(result);
    return result;
}
