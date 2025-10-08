
  int64_t alacritty_terminal::tty::unix::set_controlling_terminal::h2b699024ecfea9ac(int64_t arg1)

{
    int32_t result = ioctl(arg1, 0x540e, 0);
    
    if (result >= 0)
        return result;
    
    if (!core::sync::atomic::atomic_load::h6d761ceb83d12973(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
    {
        std::process::exit::hcda678ff272dfed1(1);
        /* no return */
    }
    
    int64_t var_78 = *__errno_location() << 0x20 | 2;
    int64_t* var_70 = &var_78;
    int64_t (* var_68)(int64_t* arg1, int64_t* arg2) =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    char const (** const var_38)[0x8c] = &data_c97258;
    int64_t var_30 = 1;
    int64_t var_18 = 0;
    int64_t** var_28 = &var_70;
    int64_t var_20 = 1;
    int64_t rax_6 = log::__private_api::loc::h250021ea1f26630a(&data_c97268);
    char const* const var_60 = "alacritty_terminal::tty::unixget…";
    int64_t var_58 = 0x1d;
    char const* const var_50 = "alacritty_terminal::tty::unixget…";
    int64_t var_48 = 0x1d;
    int64_t var_40 = rax_6;
    log::__private_api::log::h93cd9fe3a2fa9a8f(&var_38, &var_60);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h86469fc896c1a0d5(var_78);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
