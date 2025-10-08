
  int64_t just::subcommand::Subcommand::man::hf737bc4c64c7f827(char* arg1)

{
    int64_t var_628 = 0;
    int64_t var_620 = 1;
    uint64_t var_618 = 0;
    int64_t* var_610;
    just::config::Config::app::hcb0f5449d8cb91bb(&var_610);
    int64_t* var_348;
    clap_mangen::Man::new::hb747270f52d78def(&var_348, &var_610);
    core::result::Result$LT$T$C$E$GT$::expect::h5ce84362ff64b34f(
        clap_mangen::Man::render::h664ef7540f093e4e(&var_348, &var_628, &data_831178));
    core::ptr::drop_in_place$LT$clap_mangen..Man$GT$::h3fdc06361bb23ab1(&var_348);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_348 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    var_610 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_348);
    ssize_t rax_2 =
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(
        &var_610, var_620, var_618);
    
    if (rax_2)
    {
        *arg1 = 0x30;
        *(arg1 + 8) = rax_2;
    }
    else
    {
        rax_2 =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
            &var_610);
        
        if (!rax_2)
            *arg1 = 0x38;
        else
        {
            *arg1 = 0x30;
            *(arg1 + 8) = rax_2;
        }
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h9b26e8f9ee6ffb8b(var_610);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h614c8d5056af1490(&var_628);
}
