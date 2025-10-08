
  char const (**)[0xc0] uu_seq::print_seq::hd8f134a0bd2a85e1(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, uint64_t arg5, int64_t* arg6, uint64_t arg7 @ rbx, char arg8, int64_t arg9)

{
    uint64_t var_30 = arg7;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_238 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int128_t var_1b8;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb195a1a5c425c698(&var_1b8, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_238));
    int64_t rcx = arg1[2];
    int128_t var_118 = arg1[1];
    int128_t var_128 = *arg1;
    int64_t rcx_1 = *(arg1 + 0x48);
    int72_t var_258 = (*(arg1 + 0x38));
    int128_t var_268 = *(arg1 + 0x28);
    int64_t var_168 = arg1[7];
    int128_t var_178 = arg1[6];
    int128_t var_188 = arg1[5];
    
    if (!arg8)
        goto label_47223d;
    
    int128_t var_1e8;
    uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint::h199f185febb80ccd(
        &var_1e8, &var_128);
    int64_t var_a0;
    uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint::h199f185febb80ccd(
        &var_a0, &var_268);
    int64_t* r14_1 = nullptr;
    
    if (!(0 + -(var_a0)))
    {
        int64_t* rax_2;
        uint64_t rdx;
        rax_2 = uu_seq::print_seq::_$u7b$$u7b$closure$u7d$$u7d$::hceaf328ac0b91332(&var_a0);
        r14_1 = rax_2;
        arg7 = rdx;
    }
    
    int128_t var_b8;
    uucore::features::extendedbigdecimal::ExtendedBigDecimal::to_biguint::h199f185febb80ccd(
        &var_b8, &var_188);
    int128_t var_228 = var_1e8;
    var_238 = r14_1;
    uint64_t var_230_1 = arg7;
    int64_t var_a8;
    int64_t var_200_1 = var_a8;
    int128_t var_298;
    int64_t var_1d8;
    int128_t var_1a8;
    int128_t var_158;
    int64_t rbp;
    char const (** result)[0xc0];
    
    if (var_228 != -0x8000000000000000 && r14_1 & 1 && var_b8 != -0x8000000000000000)
    {
        int128_t var_288;
        var_288 = var_1d8;
        var_298 = var_228;
        int64_t var_148_1 = var_a8;
        var_158 = var_b8;
        int64_t var_198;
        int64_t var_1c8_1 = var_198;
        var_1d8 = var_1a8;
        var_1e8 = var_1b8;
        uint64_t var_2b0_1 = arg5;
        result = uu_seq::fast_print_seq::h4eb9a89ecd42b36a(&var_1e8, &var_298, arg7, &var_158, 
            arg2, arg3, arg4, arg9);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h190a37287d4c5f59(var_158, 
            *var_158[8]);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h190a37287d4c5f59(var_298, 
            *var_298[8]);
        rbp = 1;
        arg7 = 0;
        goto label_4722e7;
    }
    
    core::ptr::drop_in_place$LT$$LP$core..option..Option$LT$num_bigint..biguint..BigUint$GT$$C$core..option..Option$LT$u64$GT$$C$core..option..Option$LT$num_bigint..biguint..BigUint$GT$$RP$$GT$::h6005f4f1af417868(&var_238);
    label_47223d:
    var_298 = var_128;
    
    if (uu_seq::done_printing::he8fe76a3e6ee8b49(&var_298, &var_268, &var_188))
    {
        label_472262:
        char const (** result_1)[0xc0] = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hfb65489923a70636(&var_1b8);
        result = result_1;
        
        if (result_1)
        {
            label_4722ce:
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_298, *var_298[8]);
            arg7 = 1;
            rbp = 0;
            label_4722e7:
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_188, *var_188[8]);
            core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_268, *var_268[8]);
            
            if (rbp)
                core::ptr::drop_in_place$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$GT$::hb99107a2a8b00042(var_128, *var_128[8]);
            
            if (arg7)
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h68c34cef8e3ce886(&var_1b8);
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
    
    char const (** result_2)[0xc0] =
        uucore::features::format::Format$LT$F$C$T$GT$::fmt::h3b174014f29225b6(arg6, &var_1b8, 
        &var_298);
    result = result_2;
    
    if (!result_2)
    {
        int64_t var_1c8_2 = rcx;
        var_1d8 = var_118;
        int64_t rax_9 = var_268;
        int64_t rdx_5 = 0;
        
        if (rax_9 < -0x7ffffffffffffffb)
            rdx_5 = rax_9 - 0x7fffffffffffffff;
        
        var_1e8 = var_298;
        int128_t var_d0;
        int64_t var_c0;
        
        switch (rdx_5)
        {
            case 0:
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h133769cfed2b71de(&var_d0, *var_268[8], var_258);
                int128_t zmm0_3 = var_d0;
                int128_t var_88_1 = zmm0_3;
                var_228 = var_c0;
                var_238 = zmm0_3;
                *var_228[8] = *var_258[8];
                int64_t var_218_2 = rcx_1;
                break;
            }
            case 1:
            {
                var_238 = -0x8000000000000000;
                break;
            }
            case 2:
            {
                var_238 = -0x8000000000000001;
                break;
            }
            case 3:
            {
                var_238 = -0x8000000000000002;
                break;
            }
            case 4:
            {
                var_238 = -0x8000000000000003;
                break;
            }
            case 5:
            {
                var_238 = -0x8000000000000004;
                break;
            }
        }
        
        _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h0138d8554a8b8b88(&var_158, &var_1e8, &var_238);
        int64_t* var_f0;
        __builtin_memcpy(&var_f0, 
            "\x04\x00\x00\x00\x00\x00\x00\x80\x03\x00\x00\x00\x00\x00\x00\x80\x02\x00\x00\x00\x00\x00\x00\x80\x01\x00\x00\x00\x00\x00\x00\x80", 0x20);
        
        while (true)
        {
            var_298 = var_158;
            char rax_15 = uu_seq::done_printing::he8fe76a3e6ee8b49(&var_298, &var_268, &var_188);
            int64_t r14_2 = var_1a8;
            int64_t rcx_12 = var_1b8 - r14_2;
            
            if (rax_15)
            {
                if (arg5 < rcx_12)
                {
                    memcpy(*var_1b8[8] + r14_2, arg4, arg5);
                    var_1a8 = r14_2 + arg5;
                    goto label_472262;
                }
                
                ssize_t result_5 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4fa448a97013d75e(&var_1b8, arg4, arg5);
                result = result_5;
                
                if (result_5)
                    break;
                
                goto label_472262;
            }
            
            if (arg3 >= rcx_12)
            {
                char const (** result_4)[0xc0] = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h4fa448a97013d75e(&var_1b8, arg2, arg3);
                result = result_4;
                
                if (result_4)
                    goto label_4722ce;
            }
            else
            {
                memcpy(*var_1b8[8] + r14_2, arg2, arg3);
                var_1a8 = r14_2 + arg3;
            }
            
            char const (** result_3)[0xc0] =
                uucore::features::format::Format$LT$F$C$T$GT$::fmt::h3b174014f29225b6(arg6, 
                &var_1b8, &var_298);
            result = result_3;
            
            if (result_3)
                goto label_4722ce;
            
            int64_t var_138;
            int64_t var_1c8_3 = var_138;
            int64_t var_148;
            var_1d8 = var_148;
            var_1e8 = var_298;
            int64_t rax_17 = var_268;
            int64_t rax_18 = rax_17 - 0x7fffffffffffffff;
            
            if (rax_17 >= -0x7ffffffffffffffb)
                rax_18 = 0;
            
            int64_t* var_e8;
            int64_t* var_e0;
            int64_t* var_d8;
            
            switch (rax_18)
            {
                case 0:
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h133769cfed2b71de(&var_d0, *var_268[8], var_258);
                    int128_t zmm0_6 = var_d0;
                    int128_t var_88_2 = zmm0_6;
                    var_228 = var_c0;
                    var_238 = zmm0_6;
                    *var_228[8] = *var_258[8];
                    int64_t var_218_3 = rcx_1;
                    break;
                }
                case 1:
                {
                    var_238 = -0x8000000000000000;
                    break;
                }
                case 2:
                {
                    var_238 = var_d8;
                    break;
                }
                case 3:
                {
                    var_238 = var_e0;
                    break;
                }
                case 4:
                {
                    var_238 = var_e8;
                    break;
                }
                case 5:
                {
                    var_238 = var_f0;
                    break;
                }
            }
            
            _$LT$uucore..features..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..ops..arith..Add$GT$::add::h0138d8554a8b8b88(&var_158, &var_1e8, &var_238);
        }
    }
    
    goto label_4722ce;
}
