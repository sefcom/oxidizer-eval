
  fn alacritty::cli::TerminalOptions::override_pty_config::he92870b92f7b8d95(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut var_a0: *mut *mut *mut c_void;
    let mut var_98: *mut *mut *mut c_void;
    let mut var_90: *mut *mut *mut c_void;
    let mut var_88: *mut *mut *mut c_void;
    let mut var_80: i64;
    
    if !(0 + -(*arg1.byte_offset(0x18)))
    {
        let mut var_70: *mut c_void = arg1.byte_offset(0x18);
        let r15_1: i64 = *arg1.byte_offset(0x20);
        let r12_1: u64 = *arg1.byte_offset(0x28);
        
        if std::path::Path::is_dir::h02edbc48c38d7d9e(r15_1, r12_1) == 0
        {
            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
            {
                let mut var_68: *mut *mut c_void = &var_70;
                let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::ha08e32d10b62624a;
                var_a0 = &data_c81630;
                var_98 = 1;
                var_80 = 0;
                var_90 = &var_68;
                var_88 = 1;
                let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81640);
                let mut var_58: *const i8 = "alacritty::cliIgnoring invalid C…";
                let var_50_1: i64 = 0xe;
                let var_48_1: *const i8 = "alacritty::cliIgnoring invalid C…";
                let var_40_1: i64 = 0xe;
                let var_38_1: i64 = rax_5;
                log::__private_api::log::h0b6680b994d742b1(&var_a0, 1, &var_58);
            }
        }
        else
        {
            _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_a0, r15_1, r12_1);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&arg2[6]);
            arg2[8] = var_90;
            *arg2.byte_offset(0x30) = var_a0;
        }
    }
    
    alacritty::cli::TerminalOptions::command::ha3af24ef4be7c6da(&var_a0, *arg1.byte_offset(8), 
        *arg1.byte_offset(0x10));
    let mut r12_2: *mut *mut *mut c_void = var_a0;
    
    if r12_2 != -0x7fffffffffffffff
    {
        let mut r15_2: *mut *mut *mut c_void = var_98;
        let mut rbp_1: *mut *mut *mut c_void = var_88;
        let mut var_b0_1: *mut *mut *mut c_void;
        let mut var_a8_1: i64;
        let mut r13_1: i64;
        
        if r12_2 != -0x8000000000000000
        {
            var_a8_1 = var_80;
            let var_78: i64;
            r13_1 = var_78;
            var_b0_1 = rbp_1;
            rbp_1 = var_90;
        }
        else
        {
            var_a8_1 = 8;
            var_b0_1 = nullptr;
            r13_1 = 0;
            r12_2 = r15_2;
            r15_2 = var_90;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..tty..Shell$GT$$GT$::h95abd02b7d4cd22c(arg2);
        *arg2 = r12_2;
        arg2[1] = r15_2;
        arg2[2] = rbp_1;
        arg2[3] = var_b0_1;
        arg2[4] = var_a8_1;
        arg2[5] = r13_1;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..ui_config..Program$GT$$GT$::h7098f8152c7e215a(&var_a0);
    }
    
    let result: i8 = *arg1.byte_offset(0x30);
    arg2[0xf] |= result;
    result
}
