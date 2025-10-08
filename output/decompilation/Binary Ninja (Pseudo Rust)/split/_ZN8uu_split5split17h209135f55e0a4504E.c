
  fn uu_split::split::h209135f55e0a4504(arg1: *mut i64) -> u64

{
    let rbx: i64 = arg1[0xf];
    let mut result: u64;
    let mut result_8: *mut c_void;
    let mut result_2: u64;
    let mut rax_1: u64;
    let mut rcx: *mut c_void;
    let mut rsi_1: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rbx, arg1[0x10], "-rlsrc/uu/split/src/strategy.rsb…", 1) == 0
    {
        std::fs::File::open::h02f17a72580f2f54(&result_8, rbx);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6b1f230d170ba916(&result_2, &result_8);
        result = result_2;
        
        if result == 0
        {
            let var_110: *mut *mut c_void;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::hd30cfe1806b276bf(var_110);
            rcx = &data_50b138;
            rsi_1 = 0x2000;
            
            if *arg1 != 0
            {
                goto 'label_4722fb;
            }
            
            goto 'label_47230a;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h5ce760ee52166dae(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rcx = &data_50b190;
        rsi_1 = 0x2000;
        
        if *arg1 == 0
        {
            goto 'label_47230a;
        }
        
        'label_4722fb:
        rsi_1 = arg1[1];
        'label_47230a:
        let mut var_150: ();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7841365b65bbc550(
            &var_150, rsi_1, rax_1, rcx);
        let rax_2: i64 = arg1[2];
        let mut rdx_2: i64 = 3;
        
        if rax_2 - 6 < 3
        {
            rdx_2 = rax_2 - 6;
        }
        
        let r8_1: *mut i64 = arg1[3];
        let mut var_200: i64;
        let mut var_1f8: *mut i64;
        let result_1: u64;
        let var_1d8: *mut *mut c_void;
        let mut var_1d0: i128;
        let var_1c0: i128;
        let var_1b0: i128;
        let var_1a0: i128;
        let var_190: i128;
        let var_180: i128;
        let var_170: i128;
        let var_160: i128;
        let mut result_5: u64;
        let mut rdx_11: *mut *mut c_void;
        
        match rdx_2
        {
            0 =>
            {
                uu_split::LineChunkWriter::new::h03e22f79622b14ba(&result_8, r8_1, arg1);
                let result_6: *mut c_void = result_8;
                result = result_1;
                
                if -(result_6) != -0x8000000000000000
                {
                    let var_90_1: i128 = var_160;
                    let var_a0_1: i128 = var_170;
                    let var_b0_1: i128 = var_180;
                    let var_c0_1: i128 = var_190;
                    let var_d0_1: i128 = var_1a0;
                    let var_e0_1: i128 = var_1b0;
                    let var_f0_1: i128 = var_1c0;
                    let var_100_1: i128 = var_1d0;
                    result_2 = result_6;
                    let result_3: u64 = result;
                    let var_108_1: *mut *mut c_void = var_1d8;
                    let mut rax_3: i8;
                    let mut rdx_6: i64;
                    rax_3 = std::io::copy::generic_copy::h13be53caca5b2128(&var_150, &result_2);
                    
                    if (rax_3 & 1) == 0
                    {
                        result = 0;
                    }
                    else
                    {
                        var_200 = rdx_6;
                        
                        if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_6) != 0x28
                        {
                            let rax_14: i8 =
                                std::io::error::Error::kind::h135fe00c4e7365f3(var_200);
                            result_8 = &data_50b128;
                            let var_1e0_2: i64 = 1;
                            let var_1d8_5: i64 = 8;
                            let var_1d0_1: i128 = {0};
                            let mut var_50: ();
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_50, 
                                "input/output errorcannot open  f…", &result_8);
                            result = uucore::mods::error::UIoError::new::h4a7a47cd871cd6cc(rax_14, 
                                &var_50);
                        }
                        else
                        {
                            var_1f8 = &var_200;
                            let var_1f0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                            result_8 = &data_41adf0;
                            let var_1e0: i64 = 1;
                            *var_1d0[8] = 0;
                            let var_1d8_1: *mut *mut i64 = &var_1f8;
                            var_1d0 = 1;
                            let mut var_80: i128;
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_80, 
                                0, &result_8);
                            var_1d0 = 1;
                            result_8 = var_80;
                            let var_70: i64;
                            let var_1d8_2: i64 = var_70;
                            result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&result_8);
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(
                            &var_200);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..ByteChunkWriter$GT$::hd0195ba6414a1d99(
                        &result_2);
                }
            }
            1 =>
            {
                uu_split::ByteChunkWriter::new::ha12e0ca5c6566437(&result_8, r8_1, arg1);
                let result_7: *mut c_void = result_8;
                result = result_1;
                
                if -(result_7) != -0x8000000000000000
                {
                    let var_90_2: i128 = var_160;
                    let var_a0_2: i128 = var_170;
                    let var_b0_2: i128 = var_180;
                    let var_c0_2: i128 = var_190;
                    let var_d0_2: i128 = var_1a0;
                    let var_e0_2: i128 = var_1b0;
                    let var_f0_2: i128 = var_1c0;
                    let var_100_2: i128 = var_1d0;
                    result_2 = result_7;
                    let result_4: u64 = result;
                    let var_108_2: *mut *mut c_void = var_1d8;
                    let mut rax_10: i8;
                    let mut rdx_15: i64;
                    rax_10 = std::io::copy::generic_copy::h2baac93843e4b4ff(&var_150, &result_2);
                    
                    if (rax_10 & 1) == 0
                    {
                        result = 0;
                    }
                    else
                    {
                        var_200 = rdx_15;
                        
                        if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_15) != 0x28
                        {
                            let rax_16: i8 =
                                std::io::error::Error::kind::h135fe00c4e7365f3(var_200);
                            result_8 = &data_50b128;
                            let var_1e0_3: i64 = 1;
                            let var_1d8_6: i64 = 8;
                            let var_1d0_2: i128 = {0};
                            let mut var_38: ();
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_38, 
                                "input/output errorcannot open  f…", &result_8);
                            result = uucore::mods::error::UIoError::new::h4a7a47cd871cd6cc(rax_16, 
                                &var_38);
                        }
                        else
                        {
                            var_1f8 = &var_200;
                            let var_1f0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                            result_8 = &data_41adf0;
                            let var_1e0_1: i64 = 1;
                            *var_1d0[8] = 0;
                            let var_1d8_3: *mut *mut i64 = &var_1f8;
                            var_1d0 = 1;
                            let mut var_68: i128;
                            core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_68, 
                                0, &result_8);
                            var_1d0 = 1;
                            result_8 = var_68;
                            let var_58: i64;
                            let var_1d8_4: i64 = var_58;
                            result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&result_8);
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2c8dec07427c60f4(
                            &var_200);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..ByteChunkWriter$GT$::hd0195ba6414a1d99(
                        &result_2);
                }
            }
            2 =>
            {
                result_5 = uu_split::line_bytes::hc9b041c7d10080a3(arg1, &var_150, r8_1);
                result = result_5;
            }
            3 =>
            {
                match rax_2
                {
                    0 =>
                    {
                        result_5 = uu_split::n_chunks_by_byte::h325fd82bd51885f0(arg1, &var_150, 
                            r8_1, 0, r8_1);
                    }
                    1 =>
                    {
                        result_5 = uu_split::n_chunks_by_byte::h325fd82bd51885f0(arg1, &var_150, 
                            arg1[4], 1, r8_1);
                    }
                    2 =>
                    {
                        result_5 = uu_split::n_chunks_by_line::h05febb31e178eac9(arg1, &var_150, 
                            r8_1, 0, r8_1);
                    }
                    3 =>
                    {
                        result_5 = uu_split::n_chunks_by_line::h05febb31e178eac9(arg1, &var_150, 
                            arg1[4], 1, r8_1);
                    }
                    4 =>
                    {
                        result_5 = uu_split::n_chunks_by_line_round_robin::h3c8d5c037c5c2f2d(arg1, 
                            &var_150, r8_1, 0, r8_1);
                    }
                    5 =>
                    {
                        result_5 = uu_split::n_chunks_by_line_round_robin::h3c8d5c037c5c2f2d(arg1, 
                            &var_150, arg1[4], 1, r8_1);
                    }
                }
                
                result = result_5;
            }
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h8812bdb7621dd1ad(&var_150);
    }
    result
}
