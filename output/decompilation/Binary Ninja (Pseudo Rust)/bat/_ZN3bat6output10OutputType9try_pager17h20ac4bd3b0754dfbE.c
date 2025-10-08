
  fn bat::output::OutputType::try_pager::h20ac4bd3b0754dfb(arg1: *mut i8, arg2: i8, arg3: i8, arg4: *mut i8, arg5: i64) -> i64

{
    let mut var_128: i64;
    bat::pager::get_pager::hd377d976785f18ee(&var_128, arg4, arg5);
    let rax: i64 = var_128;
    
    if rax == -0x7fffffffffffffff
    {
        /* tailcall */
        return _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(arg1, "Could not parse pager command.-R…", 0x1e);
    }
    
    let var_100: i128;
    let var_38: i80 = var_100;
    let var_118: i64;
    let var_110: i128;
    
    if rax == -0x8000000000000000
    {
        bat::output::OutputType::stdout::h211ec86729b50ed6(&var_128);
        let result: i64 = *var_100[8];
        *arg1.byte_offset(0x38) = result;
        let zmm0_2: i128 = var_128;
        *arg1.byte_offset(0x28) = var_110;
        *arg1.byte_offset(0x18) = var_118;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = 0xd;
        return result;
    }
    
    let mut var_1a0: i64 = rax;
    let var_120: i64;
    let var_198_1: i64 = var_120;
    let var_190_1: i64 = var_118;
    let rax_2: u32 = *var_38[9];
    
    if rax_2 == 0
    {
        *arg1 = 0xa;
    }
    else if rax_2 != 4
    {
        let mut var_1d8: i64;
        grep_cli::decompress::resolve_binary::h597f6cd9136011e5(&var_1d8, &var_1a0);
        
        if var_1d8 != 1
        {
            let var_1c0: i64;
            let var_158_1: i64 = var_1c0;
            let mut var_1d0: i128;
            let mut var_168: i128 = var_1d0;
            std::process::Command::new::h3f6cc1aa3e6a6597(&var_128, &var_168);
            let mut var_148: i128 = var_110;
            let mut rbp: i8;
            
            if *var_38[9] != 1
            {
                *var_1d0[8] = var_38;
                var_1d8 = var_110;
                std::process::Command::args::h7fe60a217b1ea562(&var_128, &var_1d8);
                rbp = 0;
            }
            else
            {
                if *var_38[8] == 2 || var_38 == 0
                {
                    std::process::Command::arg::hd3991715298ce12e(&var_128, 
                        "-R-F-S-K--no-initLESSCHARSETUTF-…");
                    
                    if arg2 == 0
                    {
                        std::process::Command::arg::hd3991715298ce12e(&var_128, 
                            "-F-S-K--no-initLESSCHARSETUTF-8C…");
                    }
                    
                    if arg3 != 2 && (arg3 & 1) != 0
                    {
                        std::process::Command::arg::hd3991715298ce12e(&var_128, 
                            "-S-K--no-initLESSCHARSETUTF-8Cou…");
                    }
                    
                    std::process::Command::arg::hd3991715298ce12e(&var_128, 
                        "-K--no-initLESSCHARSETUTF-8Could…");
                    let mut rax_6: u64;
                    let mut rdx_7: i64;
                    rax_6 = bat::less::retrieve_less_version::h21096205fd9a4b87(&var_1a0);
                    rdx_7 = rdx_7 >= 0x212;
                    rdx_7 |= rax_6;
                    rbp = 1;
                    
                    if (rax_6 != 2 & rdx_7) == 0
                    {
                        std::process::Command::arg::hd3991715298ce12e(&var_128, 
                            "--no-initLESSCHARSETUTF-8Could n…");
                    }
                }
                else
                {
                    *var_1d0[8] = var_38;
                    var_1d8 = var_110;
                    std::process::Command::args::h7fe60a217b1ea562(&var_128, &var_1d8);
                    rbp = 0;
                }
                
                std::process::Command::env::h84b104833ce60344(&var_128);
            }
            
            std::process::Command::stdin::h4542994e6eede617(&var_128);
            std::process::Command::spawn::haea730ea7b05a977(&var_168, &var_128);
            let mut var_1b8: i32;
            
            if var_168 != 1
            {
                let rax_7: i64 = *var_168[4];
                var_1d0 = var_168;
                let var_14c: i32;
                var_1b8 = var_14c;
                var_1d8 = 3;
                var_1d0 = rax_7;
            }
            else
            {
                bat::output::OutputType::try_pager::_$u7b$$u7b$closure$u7d$$u7d$::hb03f43e1a348da60(
                    &var_1d8, *var_168[8]);
            }
            
            let var_1a8: i64;
            *arg1.byte_offset(0x38) = var_1a8;
            let rax_9: i64 = var_1d8;
            *arg1.byte_offset(0x28) = var_1b8;
            let var_1b4: i64;
            *arg1.byte_offset(0x2c) = var_1b4;
            let var_1ac: i32;
            *arg1.byte_offset(0x34) = var_1ac;
            *arg1.byte_offset(0x18) = var_1d0;
            *arg1.byte_offset(8) = rax_9;
            *arg1.byte_offset(0x10) = var_1d0;
            *arg1 = 0xd;
            
            if rbp != 0
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_148);
            }
            
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h096d1de53edcff53(&var_128);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                &var_1a0);
        }
        
        bat::output::OutputType::stdout::h211ec86729b50ed6(&var_128);
        *arg1.byte_offset(0x38) = *var_100[8];
        let zmm0_5: i128 = var_128;
        *arg1.byte_offset(0x28) = var_110;
        *arg1.byte_offset(0x18) = var_118;
        *arg1.byte_offset(8) = zmm0_5;
        *arg1 = 0xd;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$grep_cli..process..CommandError$GT$$GT$::ha008211fea5fe0d4(&var_1d8);
    }
    else
    {
        bat::output::BuiltinPager::new::h5052a4e4c2ea861d(&var_128);
        *arg1.byte_offset(0x38) = *var_100[8];
        let zmm0_3: i128 = var_128;
        *arg1.byte_offset(0x28) = var_110;
        *arg1.byte_offset(0x18) = var_118;
        *arg1.byte_offset(8) = zmm0_3;
        *arg1 = 0xd;
    }
    
    core::ptr::drop_in_place$LT$bat..pager..Pager$GT$::h43ee58a3f3e247d6(&var_1a0)
}
