
  fn alacritty_terminal::tty::unix::set_controlling_terminal::h2b699024ecfea9ac(arg1: i64) -> i64

{
    let result: i32 = ioctl(arg1, 0x540e, 0);
    
    if result >= 0
    {
        return result;
    }
    
    if core::sync::atomic::atomic_load::h6d761ceb83d12973(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) == 0
    {
        std::process::exit::hcda678ff272dfed1(1);
        /* no return */
    }
    
    let mut var_78: i64 = *__errno_location() << 0x20 | 2;
    let mut var_70: *mut i64 = &var_78;
    let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    let mut var_38: *mut *mut [i8; 0x8c] = &data_c97258;
    let var_30: i64 = 1;
    let var_18: i64 = 0;
    let var_28: *mut *mut i64 = &var_70;
    let var_20: i64 = 1;
    let rax_6: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c97268);
    let mut var_60: *const i8 = "alacritty_terminal::tty::unixget…";
    let var_58: i64 = 0x1d;
    let var_50: *const i8 = "alacritty_terminal::tty::unixget…";
    let var_48: i64 = 0x1d;
    let var_40: i64 = rax_6;
    log::__private_api::log::h93cd9fe3a2fa9a8f(&var_38, &var_60);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h86469fc896c1a0d5(var_78);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
