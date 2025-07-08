
  int128_t* uu_nl::nl::h577667c2138e41ae(int64_t arg1, int64_t* arg2, void* arg3)

{
    int64_t var_110 = arg1;
    int64_t r13 = *arg2;
    int64_t var_78;
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e3dbf5939bcb51e(&var_78, &var_110);
    
    if (var_78 != -0x7fffffffffffffff)
    {
        void* r12_1 = arg3 + 0x10;
        char* rax_2 = *(arg3 + 0x38);
        int64_t rax_3 = *(arg3 + 0x40);
        char rax_5 = *(arg3 + 0x80);
        int64_t rax_6 = *(arg3 + 0x60);
        int64_t rax_7 = *(arg3 + 0x70);
        int64_t rax_8 = *(arg3 + 0x78);
        int64_t rax_12 = *(arg3 + 0x68);
        int64_t var_160_1 = arg2[1];
        int64_t rbp_1 = arg2[2];
        int64_t var_80_1 = -0x8000000000000000;
        void* var_a0_1 = r12_1;
        
        while (true)
        {
            int64_t var_68;
            int64_t var_38_1 = var_68;
            int128_t var_48 = var_78;
            void* const var_158;
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h300adc762093d65d(&var_158, &var_48);
            void* const rax_15 = var_158;
            int128_t* result_1;
            int128_t* result = result_1;
            
            if (rax_15 != var_80_1)
            {
                void* const var_128 = rax_15;
                rbp_1 += 1;
                void* var_148;
                
                if (var_148)
                    rbp_1 = 0;
                
                arg2[2] = rbp_1;
                void* r15_1 = arg3;
                int128_t var_140;
                
                switch (uu_nl::SectionDelimiter::parse::h6872879c6cc1e509(result, var_148, rax_2, 
                    rax_3))
                {
                    case 0:
                    {
                        goto label_5597f0;
                    }
                    case 1:
                    {
                        r15_1 = var_a0_1;
                        label_5597f0:
                        
                        if (!rax_5)
                            goto label_5596e7;
                        
                        label_559813:
                        *arg2 = 1;
                        arg2[1] = rax_6;
                        r13 = 1;
                        var_160_1 = rax_6;
                        label_5596e7:
                        var_158 = &data_6d6c58;
                        result_1 = 1;
                        var_148 = 8;
                        var_140 = {0};
                        std::io::stdio::_print::he918bceb0c89db46(&var_158);
                        goto label_559716;
                    }
                    case 2:
                    {
                        r15_1 = arg3 + 0x20;
                        
                        if (!rax_5)
                            goto label_5596e7;
                        
                        goto label_559813;
                    }
                    case 3:
                    {
                        void* var_108;
                        int64_t* var_f8;
                        void var_60;
                        
                        switch (*r12_1)
                        {
                            case 0:
                            {
                                if (!var_148)
                                {
                                    if (!rax_7)
                                    {
                                        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                                        /* no return */
                                    }
                                    
                                    if (!((rbp_1 | rax_7) >> 0x20))
                                    {
                                        if (COMBINE(0, rbp_1) % rax_7)
                                            goto label_5599b0;
                                    }
                                    else if (COMBINE(0, rbp_1) % rax_7)
                                        goto label_5599b0;
                                }
                                break;
                            }
                            case 1:
                            {
                                if (!var_148)
                                    goto label_5599b0;
                                break;
                            }
                            case 2:
                            {
                                label_5599b0:
                                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(
                                    &var_60, " : Try ' --help' for more inform…", 1, rax_8 + 1);
                                var_108 = &var_60;
                                int64_t (* var_100_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_f8 = &var_128;
                                int64_t (* var_f0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_158 = &data_6d6ca8;
                                result_1 = 3;
                                *var_140[8] = 0;
                                var_148 = &var_108;
                                var_140 = 2;
                                std::io::stdio::_print::he918bceb0c89db46(&var_158);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_60);
                                r15_1 = r12_1;
                                label_559716:
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_128);
                                _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6e3dbf5939bcb51e(&var_78, &var_110);
                                r12_1 = r15_1;
                                
                                if (var_78 == -0x7fffffffffffffff)
                                    break;
                                
                                continue;
                            }
                            case 3:
                            {
                                void** rax_32 = *(r12_1 + 8);
                                
                                if (!regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(
                                        *rax_32, rax_32[1], result, var_148))
                                    goto label_5599b0;
                                break;
                            }
                        }
                        
                        if (r13)
                        {
                            uu_nl::NumberFormat::format::h85daa785ca2f298b(&var_60, arg3 + 0x81, 
                                var_160_1, rax_8);
                            var_158 = &var_60;
                            result_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_148 = arg3 + 0x48;
                            var_140 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            *var_140[8] = &var_128;
                            int64_t (* var_130_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_108 = &data_6d6c68;
                            int64_t var_100_1 = 4;
                            int64_t var_e8_1 = 0;
                            var_f8 = &var_158;
                            int64_t var_f0_1 = 3;
                            std::io::stdio::_print::he918bceb0c89db46(&var_108);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_60);
                            int64_t rax_31 = var_160_1 + rax_12;
                            r13 = !(var_160_1 + rax_12);
                            *arg2 = r13;
                            var_160_1 = rax_31;
                            arg2[1] = rax_31;
                            r15_1 = r12_1;
                            goto label_559716;
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hccf532128df738d2(&var_108, "line number overflow/home/34r7hm…", 0x14);
                        int64_t* var_148_1 = var_f8;
                        var_158 = var_108;
                        var_140 = 1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h02c3afd2888e012a(&var_158);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(
                            &var_128);
                        break;
                    }
                }
            }
            
            return result;
        }
    }
    
    return nullptr;
}
