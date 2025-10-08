
  fn uu_seq::print_seq::hd8f134a0bd2a85e1(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i64, arg5: u64, arg6: *mut i64, arg7: u64 @ rbx, arg8: i8, arg9: i64) -> *mut *mut [i8; 0xc0]

{
    let var_30: u64 = arg7;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_238: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_1b8: i128;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb195a1a5c425c698(&var_1b8, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_238));
    let rcx: i64 = arg1[2];
    let var_118: i128 = arg1[1];
    let mut var_128: i128 = *arg1;
    let rcx_1: i64 = *arg1.byte_offset(0x48);
    let var_258: i72 = (*arg1.byte_offset(0x38));
    let mut var_268: i128 = *arg1.byte_offset(0x28);
    let var_168: i64 = arg1[7];
    let var_178: i128 = arg1[6];
    let mut var_188: i128 = arg1[5];
    
    if arg8 == 0
    {
        goto 'label_47223d;
    }
    
    let mut var_1e8: i128;
    uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint::h199f185febb80ccd(
        &var_1e8, &var_128);
    let mut var_a0: i64;
    uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint::h199f185febb80ccd(
        &var_a0, &var_268);
    let mut r14_1: *mut i64 = nullptr;
    
    if !(0 + -(var_a0))
    {
        let mut rax_2: *mut i64;
        let mut rdx: u64;
        rax_2 = uu_seq::print_seq::_$u7b$$u7b$closure$u7d$$u7d$::hceaf328ac0b91332(&var_a0);
        r14_1 = rax_2;
        arg7 = rdx;
    }
    
    let mut var_b8: i128;
    uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint::h199f185febb80ccd(
        &var_b8, &var_188);
    let mut var_228: i128 = var_1e8;
    var_238 = r14_1;
    let var_230_1: u64 = arg7;
    let var_a8: i64;
    let var_200_1: i64 = var_a8;
    let mut var_298: i128;
    let mut var_1d8: i64;
    let mut var_1a8: i128;
    let mut var_158: i128;
    let mut rbp: i64;
    let mut result: *mut *mut [i8; 0xc0];
    
    if var_228 != -0x8000000000000000 && (r14_1 & 1) != 0 && var_b8 != -0x8000000000000000
    {
        let mut var_288: i128;
        var_288 = var_1d8;
        var_298 = var_228;
        let var_148_1: i64 = var_a8;
        var_158 = var_b8;
        let var_198: i64;
        let var_1c8_1: i64 = var_198;
        var_1d8 = var_1a8;
        var_1e8 = var_1b8;
        let var_2b0_1: u64 = arg5;
        result = uu_seq::fast_print_seq::h4eb9a89ecd42b36a(&var_1e8, &var_298, arg7, &var_158, 
            arg2, arg3, arg4, arg9);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h190a37287d4c5f59(var_158, 
            *var_158[8]);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h190a37287d4c5f59(var_298, 
            *var_298[8]);
        rbp = 1;
        arg7 = 0;
        goto 'label_4722e7;
    }
    
    core::ptr::drop_in_place$LT$$LP$core..option..Option$LT$num_bigint..biguint..BigUint$GT$$C$core..option..Option$LT$u64$GT$$C$core..option..Option$LT$num_bigint..biguint..BigUint$GT$$RP$$GT$::h6005f4f1af417868(&var_238);
    'label_47223d:
    var_298 = var_128;
    
    if uu_seq::done_printing::he8fe76a3e6ee8b49(&var_298, &var_268, &var_188) != 0
    {
        'label_472262:
        let result_1: *mut *mut [i8; 0xc0] = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hfb65489923a70636(&var_1b8);
        result = result_1;
        
        if result_1 != 0
        {
            'label_4722ce:
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_298, *var_298[8]);
            arg7 = 1;
            rbp = 0;
            'label_4722e7:
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_188, *var_188[8]);
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_268, *var_268[8]);
            
            if rbp != 0
            {
                core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_128, *var_128[8]);
            }
            
            if arg7 != 0
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h68c34cef8e3ce886(&var_1b8);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_298, *var_298[8]);
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_188, *var_188[8]);
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_268, *var_268[8]);
            result = nullptr;
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h68c34cef8e3ce886(&var_1b8);
        }
        
        return result;
    }
    
    let result_2: *mut *mut [i8; 0xc0] =
        uucore::features::format::Format$LT$F$C$T$GT$::fmt::h3b174014f29225b6(arg6, &var_1b8, 
        &var_298);
    result = result_2;
    
    if result_2 == 0
    {
        let var_1c8_2: i64 = rcx;
        var_1d8 = var_118;
        let rax_9: i64 = var_268;
        let mut rdx_5: i64 = 0;
        
        if rax_9 < -0x7ffffffffffffffb
        {
            rdx_5 = rax_9 - 0x7fffffffffffffff;
        }
        
        var_1e8 = var_298;
        let mut var_d0: i128;
        let var_c0: i64;
        
        match rdx_5
        {
            0 =>
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h133769cfed2b71de(&var_d0, *var_268[8], var_258);
                let zmm0_3: i128 = var_d0;
                let var_88_1: i128 = zmm0_3;
                var_228 = var_c0;
                var_238 = zmm0_3;
                *var_228[8] = *var_258[8];
                let var_218_2: i64 = rcx_1;
            }
            1 =>
            {
                var_238 = -0x8000000000000000;
            }
            2 =>
            {
                var_238 = -0x8000000000000001;
            }
            3 =>
            {
                var_238 = -0x8000000000000002;
            }
            4 =>
            {
                var_238 = -0x8000000000000003;
            }
            5 =>
            {
                var_238 = -0x8000000000000004;
            }
        }
        
        _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h0138d8554a8b8b88(&var_158, &var_1e8, &var_238);
        let mut var_f0: *mut i64;
        __builtin_memcpy(&var_f0, 
            "\x04\x00\x00\x00\x00\x00\x00\x80\x03\x00\x00\x00\x00\x00\x00\x80\x02\x00\x00\x00\x00\x00\x00\x80\x01\x00\x00\x00\x00\x00\x00\x80", 0x20);
        
        loop
        {
            var_298 = var_158;
            let rax_15: i8 = uu_seq::done_printing::he8fe76a3e6ee8b49(&var_298, &var_268, &var_188);
            let r14_2: i64 = var_1a8;
            let rcx_12: i64 = var_1b8 - r14_2;
            
            if rax_15 != 0
            {
                if arg5 < rcx_12
                {
                    memcpy(*var_1b8[8] + r14_2, arg4, arg5);
                    var_1a8 = r14_2 + arg5;
                    goto 'label_472262;
                }
                
                let result_5: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4fa448a97013d75e(&var_1b8, arg4, arg5);
                result = result_5;
                
                if result_5 != 0
                {
                    break;
                }
                
                goto 'label_472262;
            }
            
            if arg3 >= rcx_12
            {
                let result_4: *mut *mut [i8; 0xc0] = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4fa448a97013d75e(&var_1b8, arg2, arg3);
                result = result_4;
                
                if result_4 != 0
                {
                    goto 'label_4722ce;
                }
            }
            else
            {
                memcpy(*var_1b8[8] + r14_2, arg2, arg3);
                var_1a8 = r14_2 + arg3;
            }
            
            let result_3: *mut *mut [i8; 0xc0] =
                uucore::features::format::Format$LT$F$C$T$GT$::fmt::h3b174014f29225b6(arg6, 
                &var_1b8, &var_298);
            result = result_3;
            
            if result_3 != 0
            {
                goto 'label_4722ce;
            }
            
            let var_138: i64;
            let var_1c8_3: i64 = var_138;
            let var_148: i64;
            var_1d8 = var_148;
            var_1e8 = var_298;
            let rax_17: i64 = var_268;
            let mut rax_18: i64 = rax_17 - 0x7fffffffffffffff;
            
            if rax_17 >= -0x7ffffffffffffffb
            {
                rax_18 = 0;
            }
            
            let var_e8: *mut i64;
            let var_e0: *mut i64;
            let var_d8: *mut i64;
            
            match rax_18
            {
                0 =>
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h133769cfed2b71de(&var_d0, *var_268[8], var_258);
                    let zmm0_6: i128 = var_d0;
                    let var_88_2: i128 = zmm0_6;
                    var_228 = var_c0;
                    var_238 = zmm0_6;
                    *var_228[8] = *var_258[8];
                    let var_218_3: i64 = rcx_1;
                }
                1 =>
                {
                    var_238 = -0x8000000000000000;
                }
                2 =>
                {
                    var_238 = var_d8;
                }
                3 =>
                {
                    var_238 = var_e0;
                }
                4 =>
                {
                    var_238 = var_e8;
                }
                5 =>
                {
                    var_238 = var_f0;
                }
            }
            
            _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h0138d8554a8b8b88(&var_158, &var_1e8, &var_238);
        }
    }
    
    goto 'label_4722ce;
}
