
  fn uu_seq::print_seq::h76b7cc0ba327356f(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8, arg7: i64, arg8: *mut i64) -> *mut *mut [i8; 0xe3]

{
    let mut var_a8: i64 = arg3;
    let var_a0: i64 = arg4;
    let mut var_98: i64 = arg5;
    let r9: i64;
    let var_90: i64 = r9;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_118: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_200: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_118);
    let rax_1: i64 = arg1[2];
    let var_1e8: i128 = arg1[1];
    let mut var_1f8: i128 = *arg1;
    let rax_2: i64 = *arg1.byte_offset(0x48);
    let var_178: i72 = (*arg1.byte_offset(0x38));
    let mut var_188: i128 = *arg1.byte_offset(0x28);
    let var_d8: i64 = arg1[7];
    let var_e8: i128 = arg1[6];
    let mut var_f8: i128 = arg1[5];
    let rax_6: i64 = *arg8;
    let mut result: *mut *mut [i8; 0xe3];
    
    if uu_seq::done_printing::h3afd308e88daff24(&var_1f8, &var_188, &var_f8) == 0
    {
        let var_190_1: i64 = -0x8000000000000000;
        let mut result_2: *mut *mut [i8; 0xe3];
        
        if rax_6 != -0x8000000000000000
        {
            let rax_8: i64 = var_1f8;
            let mut rsi_3: i64 = 0;
            
            if rax_8 < -0x7ffffffffffffffc
            {
                rsi_3 = rax_8 - 0x7fffffffffffffff;
            }
            
            let mut zmm0_1: i64;
            
            match rsi_3
            {
                0 =>
                {
                    zmm0_1 = bigdecimal::impl_num::_$LT$impl$u20$num_traits..cast..ToPrimitive$u20$for$u20$bigdecimal..BigDecimal$GT$::to_f64::hcc224a53af4f6009(&var_1f8);
                }
                1 =>
                {
                    zmm0_1 = 0x7ff0000000000000;
                }
                2 =>
                {
                    zmm0_1 = -0x10000000000000;
                }
                3 =>
                {
                    zmm0_1 = -0x8000000000000000;
                }
                4 =>
                {
                    zmm0_1 = 0x7ff8000000000000;
                }
            }
            
            result_2 = uucore::features::format::Format$LT$F$GT$::fmt::had2a59fa03b8ef83(arg8, 
                &var_200, zmm0_1);
        }
        else
        {
            result_2 = uu_seq::write_value_float::h583f3c53a243a2bf(&var_200, &var_1f8);
        }
        
        result = result_2;
        
        if result_2 == 0
        {
            let var_138_1: i64 = rax_1;
            let var_148_1: i128 = var_1e8;
            let rax_11: i64 = var_188;
            let mut rdx_4: i64 = 0;
            
            if rax_11 < -0x7ffffffffffffffc
            {
                rdx_4 = rax_11 - 0x7fffffffffffffff;
            }
            
            let mut var_158: i128 = var_1f8;
            let mut var_1c8: i128;
            let mut var_1b0: i8;
            let mut var_110: i128;
            let var_100: i64;
            
            match rdx_4
            {
                0 =>
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h43e210cc57b0ab1b(&var_110, &var_188);
                    let zmm0_3: i128 = var_110;
                    let var_88_1: i128 = zmm0_3;
                    let var_1b8_1: i64 = var_100;
                    var_1c8 = zmm0_3;
                    var_1b0 = *var_178[8];
                    let var_1a8_1: i64 = rax_2;
                }
                1 =>
                {
                    var_1c8 = var_190_1;
                }
                2 =>
                {
                    var_1c8 = -0x7fffffffffffffff;
                }
                3 =>
                {
                    var_1c8 = -0x7ffffffffffffffe;
                }
                4 =>
                {
                    var_1c8 = -0x7ffffffffffffffd;
                }
            }
            
            let mut var_d0: i128;
            _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h33e2e11de4873d80(&var_d0, &var_158, &var_1c8);
            var_1f8 = var_d0;
            let var_c0: i128;
            let mut var_1e8_1: i128 = var_c0;
            let var_b0: i64;
            let mut var_1d8_1: i64 = var_b0;
            let var_120_1: i64 = -0x7ffffffffffffffe;
            let var_128_1: i64 = -0x7ffffffffffffffd;
            
            loop
            {
                if uu_seq::done_printing::h3afd308e88daff24(&var_1f8, &var_188, &var_f8) != 0
                {
                    var_158 = &var_98;
                    *var_158[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc2c1df68217d1c3e;
                    var_1c8 = &data_4176c0;
                    *var_1c8[8] = 1;
                    let var_1a8_4: i64 = 0;
                    let var_1b8_4: *mut i128 = &var_158;
                    var_1b0 = 1;
                    let result_5: *mut *mut [i8; 0xe3] =
                        std::io::Write::write_fmt::ha89a837e03ebc8db(&var_200, &var_1c8);
                    result = result_5;
                    
                    if result_5 != 0
                    {
                        break;
                    }
                    
                    goto 'label_4c7ccd;
                }
                
                var_158 = &var_a8;
                *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc2c1df68217d1c3e;
                var_1c8 = &data_4176c0;
                *var_1c8[8] = 1;
                let var_1a8_2: i64 = 0;
                let var_1b8_2: *mut i128 = &var_158;
                var_1b0 = 1;
                let result_3: *mut *mut [i8; 0xe3] =
                    std::io::Write::write_fmt::ha89a837e03ebc8db(&var_200, &var_1c8);
                result = result_3;
                
                if result_3 != 0
                {
                    goto 'label_4c7dd1;
                }
                
                let mut result_4: *mut *mut [i8; 0xe3];
                
                if rax_6 != var_190_1
                {
                    let rax_17: i64 = var_1f8;
                    let mut rcx_9: i64 = rax_17 - 0x7fffffffffffffff;
                    
                    if rax_17 >= -0x7ffffffffffffffc
                    {
                        rcx_9 = 0;
                    }
                    
                    let mut zmm0_5: i64 = 0x7ff0000000000000;
                    
                    match rcx_9
                    {
                        0 =>
                        {
                            zmm0_5 = bigdecimal::impl_num::_$LT$impl$u20$num_traits..cast..ToPrimitive$u20$for$u20$bigdecimal..BigDecimal$GT$::to_f64::hcc224a53af4f6009(&var_1f8);
                        }
                        2 =>
                        {
                            zmm0_5 = -0x10000000000000;
                        }
                        3 =>
                        {
                            zmm0_5 = -0x8000000000000000;
                        }
                        4 =>
                        {
                            zmm0_5 = 0x7ff8000000000000;
                        }
                    }
                    
                    result_4 = uucore::features::format::Format$LT$F$GT$::fmt::had2a59fa03b8ef83(
                        arg8, &var_200, zmm0_5);
                }
                else
                {
                    result_4 = uu_seq::write_value_float::h583f3c53a243a2bf(&var_200, &var_1f8);
                }
                
                result = result_4;
                
                if result_4 != 0
                {
                    goto 'label_4c7dd1;
                }
                
                let var_138_2: i64 = var_1d8_1;
                let var_148_2: i128 = var_1e8_1;
                var_158 = var_1f8;
                let rax_21: i64 = var_188;
                let mut rcx_10: i64 = rax_21 - 0x7fffffffffffffff;
                
                if rax_21 >= -0x7ffffffffffffffc
                {
                    rcx_10 = 0;
                }
                
                match jump_table_4238c0[rcx_10]
                {
                    0xa4809 =>
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h43e210cc57b0ab1b(&var_110, &var_188);
                        let zmm0_7: i128 = var_110;
                        let var_88_2: i128 = zmm0_7;
                        let var_1b8_3: i64 = var_100;
                        var_1c8 = zmm0_7;
                        var_1b0 = *var_178[8];
                        let var_1a8_3: i64 = rax_2;
                    }
                    0xa485d =>
                    {
                        var_1c8 = var_128_1;
                    }
                    0xa4867 =>
                    {
                        var_1c8 = -0x7fffffffffffffff;
                    }
                    0xa486e =>
                    {
                        var_1c8 = var_120_1;
                    }
                    0xa4878 =>
                    {
                        var_1c8 = var_190_1;
                    }
                }
                
                _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h33e2e11de4873d80(&var_d0, &var_158, &var_1c8);
                var_1f8 = var_d0;
                var_1e8_1 = var_c0;
                var_1d8_1 = var_b0;
            }
        }
    }
    else
    {
        'label_4c7ccd:
        let result_1: *mut *mut [i8; 0xa2] =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(
            &var_200);
        result = result_1;
        
        if result_1 == 0
        {
            core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_1f8);
            core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_f8);
            core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_188);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1972256e3ce050a6(var_200);
            return nullptr;
        }
    }
    
    'label_4c7dd1:
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_1f8);
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_f8);
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_188);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1972256e3ce050a6(var_200);
    result
}
