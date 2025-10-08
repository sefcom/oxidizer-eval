
  fn uu_timeout::timeout::he6dc1fc585e5d981(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i32, arg5: i64, arg6: i64, arg7: i32, arg8: i8, arg9: i8, arg10: i8) -> u64

{
    if arg8 == 0
    {
        setpgid(0, 0);
    }
    
    let rax_2: i32 = uucore::features::signals::enable_pipe_errors::he7938a115a9dd81b();
    
    if rax_2 != 0x86
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$nix..errno..consts..Errno$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h33962f1716cd47ac(rax_2);
    }
    
    if arg2 == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let mut var_118: i32;
    std::process::Command::new::h13aef0b1002d7d4d(&var_118, arg1);
    std::process::Command::args::h370dfeef860fca48(&var_118, arg1.byte_offset(0x18), arg2 - 1);
    std::process::Command::stdin::h3011538398e27e14(&var_118);
    std::process::Command::stdout::h6522b8e9652dacb5(&var_118);
    std::process::Command::stderr::h511fd45e70e686f7(&var_118);
    let mut var_168: i32;
    std::process::Command::spawn::haea730ea7b05a977(&var_168, &var_118);
    let mut result: u64;
    let mut var_160: i128;
    
    if var_168 != 1
    {
        let var_164: i32;
        let mut var_184: i32 = var_164;
        let var_180_1: i128 = var_160;
        let var_150: i64;
        let var_170_1: i64 = var_150;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h42ec23edd69e1e2d(&var_118);
        uu_timeout::unblock_sigchld::h4453b7e3fc558475();
        let mut var_198: i32;
        _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::wait_or_timeout::he25bb3510a5d6b08(&var_198, &var_184, arg3, arg4);
        let rbp_1: i32 = var_198;
        let var_194: i32;
        let var_190: i32;
        
        if rbp_1 == 1
        {
            result = uu_timeout::status::_$LT$impl$u20$core..convert..From$LT$uu_timeout..status..ExitStatus$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he2608e6770b25b35(1, uu_timeout::send_signal::h21a409eed1ad1074(&var_184, arg5, arg8));
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
        }
        else if var_194 != 1
        {
            let r13_1: i64 = *arg1.byte_offset(8);
            let r12_1: i64 = *arg1.byte_offset(0x10);
            let r14_2: u32 = arg10;
            uu_timeout::report_if_verbose::ha1199c5238d9a8e5(arg5, r13_1, r12_1, r14_2);
            let r15_1: u32 = arg8;
            uu_timeout::send_signal::h21a409eed1ad1074(&var_184, arg5, r15_1);
            
            if arg7 != 0x3b9aca00
            {
                let mut var_140: i32;
                uu_timeout::wait_or_kill_process::h3c57ed1f2e84097f(&var_140, &var_184, r13_1, 
                    r12_1, arg6, arg7, arg9, r15_1, r14_2);
                
                if var_140 != 1
                {
                    let var_13c: i32;
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(var_13c);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
                }
                else
                {
                    let var_138: i64;
                    let mut var_1a8: i64 = var_138;
                    var_168 = &var_1a8;
                    var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_118 = &data_41ace0;
                    let var_110_1: i64 = 1;
                    let var_f8_1: i64 = 0;
                    let var_108_1: *mut i32 = &var_168;
                    let mut var_100_1: i64 = 1;
                    let mut var_130: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h689cb97ed54ab1f6(&var_130, 
                        &var_118);
                    var_100_1 = 0x7d;
                    var_118 = var_130;
                    let var_120: i64;
                    let var_108_2: i64 = var_120;
                    result = alloc::boxed::Box$LT$T$GT$::new::h37b75c6be93c3797(&var_118);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h40e3195548028f1c(
                        var_1a8);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
                }
            }
            else
            {
                let mut rsi_10: i32 =
                    std::process::Child::wait::h7e33de4911114104(&var_118, &var_184);
                
                if var_118 != 1
                {
                    let mut result_1: u64;
                    
                    if arg9 == 0
                    {
                        result_1 = uu_timeout::status::_$LT$impl$u20$core..convert..From$LT$uu_timeout..status..ExitStatus$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he2608e6770b25b35(0, rsi_10);
                    }
                    else
                    {
                        let var_114: i32;
                        rsi_10 = var_114 & 0x7f;
                        
                        if rsi_10 == 0
                        {
                            result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(*var_114[1]);
                        }
                        else
                        {
                            let mut rdi_25: i32;
                            rdi_25 = rsi_10 + 1 >= 2;
                            result_1 = uu_timeout::status::_$LT$impl$u20$core..convert..From$LT$uu_timeout..status..ExitStatus$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he2608e6770b25b35(rdi_25 * 2, rsi_10);
                        }
                    }
                    
                    result = result_1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
                }
                else
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
                }
            }
        }
        else
        {
            let mut rdi_14: u32;
            
            if (var_190 & 0x7f) == 0
            {
                rdi_14 = *var_190[1];
            }
            else
            {
                rdi_14 =
                    uu_timeout::timeout::_$u7b$$u7b$closure$u7d$$u7d$::hdde2a0f6b24f5475(var_190);
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(rdi_14);
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
        }
        core::ptr::drop_in_place$LT$std..process..Child$GT$::hd368f76fcc8120b7(&var_184);
    }
    else
    {
        result = uu_timeout::timeout::_$u7b$$u7b$closure$u7d$$u7d$::h3eb8a63726ee3c05(var_160);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h42ec23edd69e1e2d(&var_118);
    }
    result
}
