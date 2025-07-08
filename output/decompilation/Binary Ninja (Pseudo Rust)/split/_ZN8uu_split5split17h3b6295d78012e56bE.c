
  fn uu_split::split::h3b6295d78012e56b(arg1: *mut i64) -> *mut i128

{
    let rbx: i64 = arg1[0xf];
    let mut result: *mut i128;
    let mut result_7: *mut i128;
    let mut result_2: *mut i128;
    let mut var_178: i32;
    let mut rax_1: *mut i64;
    let mut rcx_1: *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(rbx, arg1[0x10], "-xmulti-character separator mult…", 1) == 0
    {
        std::fs::File::open::hf05dc8e7da5fafe3(&result_7, rbx);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h36db9552504a57eb(&result_2, &result_7, arg1);
        result = result_2;
        
        if result == 0
        {
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h8fc4b41669740c9d(var_178);
            rcx_1 = &data_5485f8;
            goto 'label_4ce0a5;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h84649541c58f7536(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        rcx_1 = &data_548650;
        'label_4ce0a5:
        let mut rsi_3: i64 = 0x2000;
        
        if *arg1 != 0
        {
            rsi_3 = arg1[1];
        }
        
        let mut var_e8: ();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h03cd61f44017daf8(&var_e8, 
            rsi_3, rax_1, rcx_1);
        let rax_2: i64 = arg1[2];
        let mut rdx_4: i64 = 3;
        
        if rax_2 - 6 < 3
        {
            rdx_4 = rax_2 - 6;
        }
        
        let r8_1: *mut *mut i64 = arg1[3];
        let mut var_230: i64;
        let mut var_228: *mut i64;
        let result_1: *mut i128;
        let var_208: *mut *mut c_void;
        let mut var_200: i128;
        let var_1f0: i128;
        let var_1e0: i128;
        let var_1d0: i128;
        let var_1c0: i128;
        let var_1b0: i128;
        let var_1a0: i128;
        let var_190: i128;
        
        match rdx_4
        {
            0 =>
            {
                uu_split::LineChunkWriter::new::hd30d9397c46ea980(&result_7, r8_1, arg1);
                let result_4: *mut i128 = result_7;
                result = result_1;
                
                if result_4 != -0x8000000000000000
                {
                    let var_f8_1: i128 = var_190;
                    let var_108_1: i128 = var_1a0;
                    let var_118_1: i128 = var_1b0;
                    let var_128_1: i128 = var_1c0;
                    let var_138_1: i128 = var_1d0;
                    let var_148_1: i128 = var_1e0;
                    let var_158_1: i128 = var_1f0;
                    let var_168_1: i128 = var_200;
                    result_2 = result_4;
                    var_178 = result;
                    let var_170_1: *mut *mut c_void = var_208;
                    let mut rax_3: i64;
                    let mut rdx_8: i64;
                    rax_3 = std::io::copy::generic_copy::ha0a65a54dc3a7f4d(&var_e8, &result_2);
                    
                    if rax_3 == 0
                    {
                        result = nullptr;
                    }
                    else
                    {
                        var_230 = rdx_8;
                        let mut r15_1: i64;
                        
                        if std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_8) != 0x27
                        {
                            r15_1 = var_230;
                            let rax_19: i8 = std::io::error::Error::kind::hb2ff5fa058639b3d(r15_1);
                            result_7 = &data_5485e8;
                            let var_210_4: i64 = 1;
                            let var_208_8: i64 = 8;
                            let var_200_2: i128 = {0};
                            let mut var_68: ();
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_68, 
                                "input/output error", &result_7);
                            result = uucore::mods::error::UIoError::new::h810f822078081064(rax_19, 
                                &var_68);
                        }
                        else
                        {
                            var_228 = &var_230;
                            let var_220_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            result_7 = &data_418130;
                            let var_210: i64 = 1;
                            *var_200[8] = 0;
                            let var_208_1: *mut *mut i64 = &var_228;
                            var_200 = 1;
                            let mut var_b0: i128;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_b0, 
                                0, &result_7);
                            var_200 = 1;
                            result_7 = var_b0;
                            let var_a0: i64;
                            let var_208_2: i64 = var_a0;
                            result = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_7);
                            r15_1 = var_230;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                            r15_1);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..LineChunkWriter$GT$::h5c34f624ee7dbadf(
                        &result_2);
                }
            }
            1 =>
            {
                uu_split::ByteChunkWriter::new::hf26f4f49e0f52e08(&result_7, r8_1, arg1);
                let result_6: *mut i128 = result_7;
                result = result_1;
                
                if result_6 != -0x8000000000000000
                {
                    let var_f8_3: i128 = var_190;
                    let var_108_3: i128 = var_1a0;
                    let var_118_3: i128 = var_1b0;
                    let var_128_3: i128 = var_1c0;
                    let var_138_3: i128 = var_1d0;
                    let var_148_3: i128 = var_1e0;
                    let var_158_3: i128 = var_1f0;
                    let var_168_3: i128 = var_200;
                    result_2 = result_6;
                    var_178 = result;
                    let var_170_3: *mut *mut c_void = var_208;
                    let mut rax_13: i64;
                    let mut rdx_16: i64;
                    rax_13 = std::io::copy::generic_copy::h1d61d7a77a7df7ab(&var_e8, &result_2);
                    
                    if rax_13 == 0
                    {
                        result = nullptr;
                    }
                    else
                    {
                        var_230 = rdx_16;
                        let mut r15_3: i64;
                        
                        if std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_16) != 0x27
                        {
                            r15_3 = var_230;
                            let rax_21: i8 = std::io::error::Error::kind::hb2ff5fa058639b3d(r15_3);
                            result_7 = &data_5485e8;
                            let var_210_5: i64 = 1;
                            let var_208_9: i64 = 8;
                            let var_200_3: i128 = {0};
                            let mut var_50: ();
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_50, 
                                "input/output error", &result_7);
                            result = uucore::mods::error::UIoError::new::h810f822078081064(rax_21, 
                                &var_50);
                        }
                        else
                        {
                            var_228 = &var_230;
                            let var_220_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            result_7 = &data_418130;
                            let var_210_2: i64 = 1;
                            *var_200[8] = 0;
                            let var_208_5: *mut *mut i64 = &var_228;
                            var_200 = 1;
                            let mut var_98: i128;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_98, 
                                0, &result_7);
                            var_200 = 1;
                            result_7 = var_98;
                            let var_88: i64;
                            let var_208_6: i64 = var_88;
                            result = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_7);
                            r15_3 = var_230;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                            r15_3);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..ByteChunkWriter$GT$::hf5186553e96e8c40(
                        &result_2);
                }
            }
            2 =>
            {
                uu_split::LineBytesChunkWriter::new::hd36f889c86b72df9(&result_7, r8_1, arg1);
                let result_5: *mut i128 = result_7;
                result = result_1;
                
                if result_5 != -0x8000000000000000
                {
                    let var_f8_2: i128 = var_190;
                    let var_108_2: i128 = var_1a0;
                    let var_118_2: i128 = var_1b0;
                    let var_128_2: i128 = var_1c0;
                    let var_138_2: i128 = var_1d0;
                    let var_148_2: i128 = var_1e0;
                    let var_158_2: i128 = var_1f0;
                    let var_168_2: i128 = var_200;
                    result_2 = result_5;
                    var_178 = result;
                    let var_170_2: *mut *mut c_void = var_208;
                    let mut rax_7: i64;
                    let mut rdx_11: i64;
                    rax_7 = std::io::copy::generic_copy::hc68a87374d72d271(&var_e8, &result_2);
                    
                    if rax_7 == 0
                    {
                        result = nullptr;
                    }
                    else
                    {
                        var_230 = rdx_11;
                        let mut r15_2: i64;
                        
                        if std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_11) != 0x27
                        {
                            r15_2 = var_230;
                            let rax_17: i8 = std::io::error::Error::kind::hb2ff5fa058639b3d(r15_2);
                            result_7 = &data_5485e8;
                            let var_210_3: i64 = 1;
                            let var_208_7: i64 = 8;
                            let var_200_1: i128 = {0};
                            let mut var_38: ();
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_38, 
                                "input/output error", &result_7);
                            result = uucore::mods::error::UIoError::new::h810f822078081064(rax_17, 
                                &var_38);
                        }
                        else
                        {
                            var_228 = &var_230;
                            let var_220_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            result_7 = &data_418130;
                            let var_210_1: i64 = 1;
                            *var_200[8] = 0;
                            let var_208_3: *mut *mut i64 = &var_228;
                            var_200 = 1;
                            let mut var_80: i128;
                            core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_80, 
                                0, &result_7);
                            var_200 = 1;
                            result_7 = var_80;
                            let var_70: i64;
                            let var_208_4: i64 = var_70;
                            result = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_7);
                            r15_2 = var_230;
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(
                            r15_2);
                    }
                    
                    core::ptr::drop_in_place$LT$uu_split..LineBytesChunkWriter$GT$::h03f2545fa069a94c(&result_2);
                }
            }
            3 =>
            {
                let mut result_3: *mut i128;
                let mut rdx_14: *mut *mut c_void;
                
                match jump_table_42100c[rax_2]
                {
                    0xad3ff =>
                    {
                        result_3 = uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(arg1, &var_e8, 
                            r8_1, 0, r8_1);
                    }
                    0xad5b7 =>
                    {
                        result_3 = uu_split::n_chunks_by_line_round_robin::hcac37cfac682ac2b(arg1, 
                            &var_e8, r8_1, 0, r8_1);
                    }
                    0xad5ce =>
                    {
                        result_3 = uu_split::n_chunks_by_line::hfea4751dad8f6ed1(arg1, &var_e8, 
                            r8_1, 0, r8_1);
                    }
                    0xad5e5 =>
                    {
                        result_3 = uu_split::n_chunks_by_line::hfea4751dad8f6ed1(arg1, &var_e8, 
                            arg1[4], 1, r8_1);
                    }
                    0xad600 =>
                    {
                        result_3 = uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(arg1, &var_e8, 
                            arg1[4], 1, r8_1);
                    }
                    0xad61b =>
                    {
                        result_3 = uu_split::n_chunks_by_line_round_robin::hcac37cfac682ac2b(arg1, 
                            &var_e8, arg1[4], 1, r8_1);
                    }
                }
                
                result = result_3;
            }
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h0757c489e3131c13(&var_e8);
    }
    result
}
