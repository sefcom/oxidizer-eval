
  char const (**)[0xe3] uu_seq::print_seq::h76b7cc0ba327356f(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6, int64_t arg7, int64_t* arg8)

{
    int64_t var_a8 = arg3;
    int64_t var_a0 = arg4;
    int64_t var_98 = arg5;
    int64_t r9;
    int64_t var_90 = r9;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_118 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_200 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_118);
    int64_t rax_1 = arg1[2];
    int128_t var_1e8 = arg1[1];
    int128_t var_1f8 = *arg1;
    int64_t rax_2 = *(arg1 + 0x48);
    int72_t var_178 = (*(arg1 + 0x38));
    int128_t var_188 = *(arg1 + 0x28);
    int64_t var_d8 = arg1[7];
    int128_t var_e8 = arg1[6];
    int128_t var_f8 = arg1[5];
    int64_t rax_6 = *arg8;
    char const (** result)[0xe3];
    
    if (!uu_seq::done_printing::h3afd308e88daff24(&var_1f8, &var_188, &var_f8))
    {
        int64_t var_190_1 = -0x8000000000000000;
        char const (** result_2)[0xe3];
        
        if (rax_6 != -0x8000000000000000)
        {
            int64_t rax_8 = var_1f8;
            int64_t rsi_3 = 0;
            
            if (rax_8 < -0x7ffffffffffffffc)
                rsi_3 = rax_8 - 0x7fffffffffffffff;
            
            int64_t zmm0_1;
            
            switch (rsi_3)
            {
                case 0:
                {
                    zmm0_1 = bigdecimal::impl_num::_$LT$impl$u20$num_traits..cast..ToPrimitive$u20$for$u20$bigdecimal..BigDecimal$GT$::to_f64::hcc224a53af4f6009(&var_1f8);
                    break;
                }
                case 1:
                {
                    zmm0_1 = 0x7ff0000000000000;
                    break;
                }
                case 2:
                {
                    zmm0_1 = -0x10000000000000;
                    break;
                }
                case 3:
                {
                    zmm0_1 = -0x8000000000000000;
                    break;
                }
                case 4:
                {
                    zmm0_1 = 0x7ff8000000000000;
                    break;
                }
            }
            
            result_2 = uucore::features::format::Format$LT$F$GT$::fmt::had2a59fa03b8ef83(arg8, 
                &var_200, zmm0_1);
        }
        else
            result_2 = uu_seq::write_value_float::h583f3c53a243a2bf(&var_200, &var_1f8);
        
        result = result_2;
        
        if (!result_2)
        {
            int64_t var_138_1 = rax_1;
            int128_t var_148_1 = var_1e8;
            int64_t rax_11 = var_188;
            int64_t rdx_4 = 0;
            
            if (rax_11 < -0x7ffffffffffffffc)
                rdx_4 = rax_11 - 0x7fffffffffffffff;
            
            int128_t var_158 = var_1f8;
            int128_t var_1c8;
            char var_1b0;
            int128_t var_110;
            int64_t var_100;
            
            switch (rdx_4)
            {
                case 0:
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h43e210cc57b0ab1b(&var_110, &var_188);
                    int128_t zmm0_3 = var_110;
                    int128_t var_88_1 = zmm0_3;
                    int64_t var_1b8_1 = var_100;
                    var_1c8 = zmm0_3;
                    var_1b0 = *var_178[8];
                    int64_t var_1a8_1 = rax_2;
                    break;
                }
                case 1:
                {
                    var_1c8 = var_190_1;
                    break;
                }
                case 2:
                {
                    var_1c8 = -0x7fffffffffffffff;
                    break;
                }
                case 3:
                {
                    var_1c8 = -0x7ffffffffffffffe;
                    break;
                }
                case 4:
                {
                    var_1c8 = -0x7ffffffffffffffd;
                    break;
                }
            }
            
            int128_t var_d0;
            _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h33e2e11de4873d80(&var_d0, &var_158, &var_1c8);
            var_1f8 = var_d0;
            int128_t var_c0;
            int128_t var_1e8_1 = var_c0;
            int64_t var_b0;
            int64_t var_1d8_1 = var_b0;
            int64_t var_120_1 = -0x7ffffffffffffffe;
            int64_t var_128_1 = -0x7ffffffffffffffd;
            
            while (true)
            {
                if (uu_seq::done_printing::h3afd308e88daff24(&var_1f8, &var_188, &var_f8))
                {
                    var_158 = &var_98;
                    *var_158[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc2c1df68217d1c3e;
                    var_1c8 = &data_4176c0;
                    *var_1c8[8] = 1;
                    int64_t var_1a8_4 = 0;
                    int128_t* var_1b8_4 = &var_158;
                    var_1b0 = 1;
                    char const (** result_5)[0xe3] =
                        std::io::Write::write_fmt::ha89a837e03ebc8db(&var_200, &var_1c8);
                    result = result_5;
                    
                    if (result_5)
                        break;
                    
                    goto label_4c7ccd;
                }
                
                var_158 = &var_a8;
                *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc2c1df68217d1c3e;
                var_1c8 = &data_4176c0;
                *var_1c8[8] = 1;
                int64_t var_1a8_2 = 0;
                int128_t* var_1b8_2 = &var_158;
                var_1b0 = 1;
                char const (** result_3)[0xe3] =
                    std::io::Write::write_fmt::ha89a837e03ebc8db(&var_200, &var_1c8);
                result = result_3;
                
                if (result_3)
                    goto label_4c7dd1;
                
                char const (** result_4)[0xe3];
                
                if (rax_6 != var_190_1)
                {
                    int64_t rax_17 = var_1f8;
                    int64_t rcx_9 = rax_17 - 0x7fffffffffffffff;
                    
                    if (rax_17 >= -0x7ffffffffffffffc)
                        rcx_9 = 0;
                    
                    int64_t zmm0_5 = 0x7ff0000000000000;
                    
                    switch (rcx_9)
                    {
                        case 0:
                        {
                            zmm0_5 = bigdecimal::impl_num::_$LT$impl$u20$num_traits..cast..ToPrimitive$u20$for$u20$bigdecimal..BigDecimal$GT$::to_f64::hcc224a53af4f6009(&var_1f8);
                            break;
                        }
                        case 2:
                        {
                            zmm0_5 = -0x10000000000000;
                            break;
                        }
                        case 3:
                        {
                            zmm0_5 = -0x8000000000000000;
                            break;
                        }
                        case 4:
                        {
                            zmm0_5 = 0x7ff8000000000000;
                            break;
                        }
                    }
                    
                    result_4 = uucore::features::format::Format$LT$F$GT$::fmt::had2a59fa03b8ef83(
                        arg8, &var_200, zmm0_5);
                }
                else
                    result_4 = uu_seq::write_value_float::h583f3c53a243a2bf(&var_200, &var_1f8);
                
                result = result_4;
                
                if (result_4)
                    goto label_4c7dd1;
                
                int64_t var_138_2 = var_1d8_1;
                int128_t var_148_2 = var_1e8_1;
                var_158 = var_1f8;
                int64_t rax_21 = var_188;
                int64_t rcx_10 = rax_21 - 0x7fffffffffffffff;
                
                if (rax_21 >= -0x7ffffffffffffffc)
                    rcx_10 = 0;
                
                switch (jump_table_4238c0[rcx_10])
                {
                    case 0xa4809:
                    {
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h43e210cc57b0ab1b(&var_110, &var_188);
                        int128_t zmm0_7 = var_110;
                        int128_t var_88_2 = zmm0_7;
                        int64_t var_1b8_3 = var_100;
                        var_1c8 = zmm0_7;
                        var_1b0 = *var_178[8];
                        int64_t var_1a8_3 = rax_2;
                        break;
                    }
                    case 0xa485d:
                    {
                        var_1c8 = var_128_1;
                        break;
                    }
                    case 0xa4867:
                    {
                        var_1c8 = -0x7fffffffffffffff;
                        break;
                    }
                    case 0xa486e:
                    {
                        var_1c8 = var_120_1;
                        break;
                    }
                    case 0xa4878:
                    {
                        var_1c8 = var_190_1;
                        break;
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
        label_4c7ccd:
        char const (** result_1)[0xa2] =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(
            &var_200);
        result = result_1;
        
        if (!result_1)
        {
            core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_1f8);
            core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_f8);
            core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_188);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1972256e3ce050a6(var_200);
            return nullptr;
        }
    }
    
    label_4c7dd1:
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_1f8);
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_f8);
    core::ptr::drop_in_place$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$GT$::h34bd9961a5e5dc1c(&var_188);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1972256e3ce050a6(var_200);
    return result;
}
