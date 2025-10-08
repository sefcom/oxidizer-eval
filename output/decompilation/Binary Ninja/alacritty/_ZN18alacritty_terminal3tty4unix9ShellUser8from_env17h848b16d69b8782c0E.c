
  int64_t alacritty_terminal::tty::unix::ShellUser::from_env::h848b16d69b8782c0(int64_t* arg1)

{
    void var_430;
    memset(&var_430, 0, 0x400);
    int64_t var_460;
    alacritty_terminal::tty::unix::get_pw_entry::hc3ba737ab115be5a(&var_460, &var_430);
    int64_t var_4a8;
    std::env::var::hc40ca77fbae151c0(&var_4a8, "USE");
    int64_t var_4a0;
    int64_t var_498;
    int64_t var_490;
    int64_t var_478;
    int64_t var_470;
    int64_t var_468;
    uint64_t var_458;
    int64_t rbp_1;
    int64_t r12_1;
    int64_t r13_1;
    
    if (var_4a8 != 1)
    {
        r12_1 = var_4a0;
        r13_1 = var_498;
        rbp_1 = var_490;
    }
    else
    {
        int64_t rsi_1 = var_460;
        
        if (!rsi_1)
        {
            arg1[1] = var_458;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_478, rsi_1, var_458);
        r12_1 = var_478;
        r13_1 = var_470;
        rbp_1 = var_468;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
    }
    
    std::env::var::hc40ca77fbae151c0(&var_4a8, "HOMEeasem");
    int64_t var_488_1;
    int64_t var_480_1;
    int64_t rbx_2;
    
    if (var_4a8 != 1)
    {
        var_488_1 = var_4a0;
        var_480_1 = var_498;
        rbx_2 = var_490;
        label_9beef1:
        std::env::var::hc40ca77fbae151c0(&var_4a8, "SHELLFailed to spawn command '':…");
        int64_t var_4b8_1;
        int64_t var_4b0_1;
        int64_t result;
        int64_t rbp_2;
        int64_t r12_2;
        int64_t r13_2;
        int64_t r14_2;
        
        if (var_4a8 != 1)
        {
            r13_2 = rbp_1;
            var_4b8_1 = r12_1;
            var_4b0_1 = r13_1;
            r14_2 = var_4a0;
            rbp_2 = var_498;
            r12_2 = var_490;
            result = !var_460;
            label_9bef7b:
            *arg1 = var_4b8_1;
            arg1[1] = var_4b0_1;
            arg1[2] = r13_2;
            arg1[3] = var_488_1;
            arg1[4] = var_480_1;
            arg1[5] = rbx_2;
            arg1[6] = r14_2;
            arg1[7] = rbp_2;
            arg1[8] = r12_2;
            
            if (!result)
                return result;
            
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h86469fc896c1a0d5(
                var_458);
        }
        
        if (var_460)
        {
            r13_2 = rbp_1;
            var_4b8_1 = r12_1;
            var_4b0_1 = r13_1;
            int64_t var_440;
            uint64_t var_438;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_478, var_440, var_438);
            r14_2 = var_478;
            rbp_2 = var_470;
            r12_2 = var_468;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
            result = 0;
            goto label_9bef7b;
        }
        
        arg1[1] = var_458;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_488_1, 
            var_480_1);
    }
    else
    {
        if (var_460)
        {
            int64_t var_450;
            uint64_t var_448;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_478, var_450, var_448);
            var_488_1 = var_478;
            var_480_1 = var_470;
            rbx_2 = var_468;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
            goto label_9beef1;
        }
        
        arg1[1] = var_458;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(r12_1, r13_1);
}
