
  uint64_t uu_timeout::timeout::he6dc1fc585e5d981(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4, int64_t arg5, int64_t arg6, int32_t arg7, char arg8, char arg9, char arg10)

{
    if (!arg8)
        setpgid(0, 0);
    
    int32_t rax_2 = uucore::features::signals::enable_pipe_errors::he7938a115a9dd81b();
    
    if (rax_2 != 0x86)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$nix..errno..consts..Errno$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h33962f1716cd47ac(rax_2);
    
    if (!arg2)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    int32_t var_118;
    std::process::Command::new::h13aef0b1002d7d4d(&var_118, arg1);
    std::process::Command::args::h370dfeef860fca48(&var_118, arg1 + 0x18, arg2 - 1);
    std::process::Command::stdin::h3011538398e27e14(&var_118);
    std::process::Command::stdout::h6522b8e9652dacb5(&var_118);
    std::process::Command::stderr::h511fd45e70e686f7(&var_118);
    int32_t var_168;
    std::process::Command::spawn::haea730ea7b05a977(&var_168, &var_118);
    uint64_t result;
    int128_t var_160;
    
    if (var_168 != 1)
    {
        int32_t var_164;
        int32_t var_184 = var_164;
        int128_t var_180_1 = var_160;
        int64_t var_150;
        int64_t var_170_1 = var_150;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h42ec23edd69e1e2d(&var_118);
        uu_timeout::unblock_sigchld::h4453b7e3fc558475();
        int32_t var_198;
        _$LT$std..process..Child$u20$as$u20$uucore..features..process..ChildExt$GT$::wait_or_timeout::he25bb3510a5d6b08(&var_198, &var_184, arg3, arg4);
        int32_t rbp_1 = var_198;
        int32_t var_194;
        int32_t var_190;
        
        if (rbp_1 == 1)
        {
            result = uu_timeout::status::_$LT$impl$u20$core..convert..From$LT$uu_timeout..status..ExitStatus$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he2608e6770b25b35(1, uu_timeout::send_signal::h21a409eed1ad1074(&var_184, arg5, arg8));
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
        }
        else if (var_194 != 1)
        {
            int64_t r13_1 = *(arg1 + 8);
            int64_t r12_1 = *(arg1 + 0x10);
            uint32_t r14_2 = arg10;
            uu_timeout::report_if_verbose::ha1199c5238d9a8e5(arg5, r13_1, r12_1, r14_2);
            uint32_t r15_1 = arg8;
            uu_timeout::send_signal::h21a409eed1ad1074(&var_184, arg5, r15_1);
            
            if (arg7 != 0x3b9aca00)
            {
                int32_t var_140;
                uu_timeout::wait_or_kill_process::h3c57ed1f2e84097f(&var_140, &var_184, r13_1, 
                    r12_1, arg6, arg7, arg9, r15_1, r14_2);
                
                if (var_140 != 1)
                {
                    int32_t var_13c;
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(var_13c);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
                }
                else
                {
                    int64_t var_138;
                    int64_t var_1a8 = var_138;
                    var_168 = &var_1a8;
                    var_160 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_118 = &data_41ace0;
                    int64_t var_110_1 = 1;
                    int64_t var_f8_1 = 0;
                    int32_t* var_108_1 = &var_168;
                    int64_t var_100_1 = 1;
                    int128_t var_130;
                    core::option::Option$LT$T$GT$::map_or_else::h689cb97ed54ab1f6(&var_130, 
                        &var_118);
                    var_100_1 = 0x7d;
                    var_118 = var_130;
                    int64_t var_120;
                    int64_t var_108_2 = var_120;
                    result = alloc::boxed::Box$LT$T$GT$::new::h37b75c6be93c3797(&var_118);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h40e3195548028f1c(
                        var_1a8);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..process..ExitStatus$GT$$C$std..io..error..Error$GT$$GT$::hb9c9de528993b73f(rbp_1, var_190);
                }
            }
            else
            {
                int32_t rsi_10 = std::process::Child::wait::h7e33de4911114104(&var_118, &var_184);
                
                if (var_118 != 1)
                {
                    uint64_t result_1;
                    
                    if (!arg9)
                        result_1 = uu_timeout::status::_$LT$impl$u20$core..convert..From$LT$uu_timeout..status..ExitStatus$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he2608e6770b25b35(0, rsi_10);
                    else
                    {
                        int32_t var_114;
                        rsi_10 = var_114 & 0x7f;
                        
                        if (!rsi_10)
                            result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(*var_114[1]);
                        else
                        {
                            int32_t rdi_25;
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
            uint32_t rdi_14;
            
            if (!(var_190 & 0x7f))
                rdi_14 = *var_190[1];
            else
                rdi_14 =
                    uu_timeout::timeout::_$u7b$$u7b$closure$u7d$$u7d$::hdde2a0f6b24f5475(var_190);
            
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
    return result;
}
