
  fn alacritty_terminal::term::Term$LT$T$GT$::set_keyboard_mode::hfafc66273a9bb82d(arg1: *mut c_void, arg2: i32, arg3: i8) -> i64

{
    let mut rbp: i32 = arg2;
    let rax: i32 = *arg1.byte_offset(0x6dc);
    let r14_1: i32 = rax & 0xff83ffff;
    *arg1.byte_offset(0x6dc) = r14_1;
    
    if arg3 != 0
    {
        let rax_1: i32 = rax & 0x7c0000;
        
        if arg3 != 1
        {
            rbp = !rbp & rax_1;
        }
        else
        {
            rbp |= rax_1;
        }
    }
    
    let mut var_84: i32 = rbp;
    let mut result: i64 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    
    if result >= 5
    {
        let mut var_80: *mut i32 = &var_84;
        let var_78_1: fn(arg1: i64, arg2: *mut i64) -> u64 = _$LT$alacritty_terminal..term..TermMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h3716b30d7ccc6686;
        let mut var_48: *mut *mut [i8; 0xa9] = &data_c77848;
        let var_40_1: i64 = 1;
        let var_28_1: i64 = 0;
        let var_38_1: *mut *mut i32 = &var_80;
        let var_30_1: i64 = 1;
        let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c77858);
        let mut var_70: *const i8 = "alacritty_terminal::termScrollin…";
        let var_68_1: i64 = 0x18;
        let var_60_1: *const i8 = "alacritty_terminal::termScrollin…";
        let var_58_1: i64 = 0x18;
        let var_50_1: i64 = rax_2;
        result = log::__private_api::log::h0b6680b994d742b1(&var_48, 5, &var_70);
        rbp = var_84;
    }
    
    *arg1.byte_offset(0x6dc) = rbp | r14_1;
    result
}
