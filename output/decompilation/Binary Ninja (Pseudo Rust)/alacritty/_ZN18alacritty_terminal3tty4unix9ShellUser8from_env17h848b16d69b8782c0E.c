
  fn alacritty_terminal::tty::unix::ShellUser::from_env::h848b16d69b8782c0(arg1: *mut i64) -> i64

{
    let mut var_430: ();
    memset(&var_430, 0, 0x400);
    let mut var_460: i64;
    alacritty_terminal::tty::unix::get_pw_entry::hc3ba737ab115be5a(&var_460, &var_430);
    let mut var_4a8: i64;
    std::env::var::hc40ca77fbae151c0(&var_4a8, "USE");
    let var_4a0: i64;
    let var_498: i64;
    let var_490: i64;
    let mut var_478: i64;
    let var_470: i64;
    let var_468: i64;
    let var_458: u64;
    let mut rbp_1: i64;
    let mut r12_1: i64;
    let mut r13_1: i64;
    
    if var_4a8 != 1
    {
        r12_1 = var_4a0;
        r13_1 = var_498;
        rbp_1 = var_490;
    }
    else
    {
        let rsi_1: i64 = var_460;
        
        if rsi_1 == 0
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
    let mut var_488_1: i64;
    let mut var_480_1: i64;
    let mut rbx_2: i64;
    
    if var_4a8 != 1
    {
        var_488_1 = var_4a0;
        var_480_1 = var_498;
        rbx_2 = var_490;
        'label_9beef1:
        std::env::var::hc40ca77fbae151c0(&var_4a8, "SHELLFailed to spawn command '':…");
        let mut var_4b8_1: i64;
        let mut var_4b0_1: i64;
        let mut result: i64;
        let mut rbp_2: i64;
        let mut r12_2: i64;
        let mut r13_2: i64;
        let mut r14_2: i64;
        
        if var_4a8 != 1
        {
            r13_2 = rbp_1;
            var_4b8_1 = r12_1;
            var_4b0_1 = r13_1;
            r14_2 = var_4a0;
            rbp_2 = var_498;
            r12_2 = var_490;
            result = var_460 == 0;
            'label_9bef7b:
            *arg1 = var_4b8_1;
            arg1[1] = var_4b0_1;
            arg1[2] = r13_2;
            arg1[3] = var_488_1;
            arg1[4] = var_480_1;
            arg1[5] = rbx_2;
            arg1[6] = r14_2;
            arg1[7] = rbp_2;
            arg1[8] = r12_2;
            
            if result == 0
            {
                return result;
            }
            
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h86469fc896c1a0d5(
                var_458);
        }
        
        if var_460 != 0
        {
            r13_2 = rbp_1;
            var_4b8_1 = r12_1;
            var_4b0_1 = r13_1;
            let var_440: i64;
            let var_438: u64;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_478, var_440, var_438);
            r14_2 = var_478;
            rbp_2 = var_470;
            r12_2 = var_468;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
            result = 0;
            goto 'label_9bef7b;
        }
        
        arg1[1] = var_458;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_488_1, 
            var_480_1);
    }
    else
    {
        if var_460 != 0
        {
            let var_450: i64;
            let var_448: u64;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_478, var_450, var_448);
            var_488_1 = var_478;
            var_480_1 = var_470;
            rbx_2 = var_468;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
            goto 'label_9beef1;
        }
        
        arg1[1] = var_458;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h19b25d647e78b692(&var_4a8);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(r12_1, r13_1)
}
