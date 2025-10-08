
  uint64_t uu_nl::nl::h35015bef5586a627(int64_t* arg1, int64_t* arg2, void* arg3)

{
    char r12 = *arg2;
    int64_t var_48;
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h674bf8c2533d257e(&var_48, arg1);
    
    if (var_48 == -0x7fffffffffffffff)
        return 0;
    
    char var_130_1 = r12;
    void* r12_1 = arg3 + 0x10;
    char* rax_1 = *(arg3 + 0x38);
    int64_t rax_2 = *(arg3 + 0x40);
    char rax_4 = *(arg3 + 0x80);
    int64_t rax_5 = *(arg3 + 0x60);
    int64_t rax_6 = *(arg3 + 0x70);
    int64_t rax_7 = *(arg3 + 0x78);
    int64_t rax_11 = *(arg3 + 0x68);
    int64_t var_128_1 = arg2[1];
    int64_t rbp_1 = arg2[2];
    int64_t* rsi_1 = &var_48;
    int64_t var_58_1 = -0x8000000000000000;
    void* var_80_1 = r12_1;
    uint64_t result;
    
    while (true)
    {
        void* const var_168;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h572f824e92d7e2a3(&var_168, rsi_1);
        void* const rax_13 = var_168;
        uint64_t result_1;
        result = result_1;
        void* var_158;
        rsi_1 = var_158;
        
        if (rax_13 == var_58_1)
            break;
        
        void* const var_120 = rax_13;
        uint64_t result_2 = result;
        rbp_1 += 1;
        
        if (rsi_1)
            rbp_1 = 0;
        
        arg2[2] = rbp_1;
        void* r13_1 = arg3;
        int128_t var_150;
        char var_140;
        int128_t var_108;
        int128_t var_e8;
        void* var_d8;
        int128_t var_c8;
        
        switch (uu_nl::SectionDelimiter::parse::hfa2b6893488a2d97(result, rsi_1, rax_1, rax_2))
        {
            case 0:
            {
                goto label_51111c;
            }
            case 1:
            {
                r13_1 = var_80_1;
                label_51111c:
                
                if (!(rax_4 & 1))
                    goto label_511037;
                
                label_511143:
                *arg2 = 1;
                arg2[1] = rax_5;
                var_130_1 = 1;
                var_128_1 = rax_5;
                label_511037:
                var_168 = &data_6391d8;
                result_1 = 1;
                var_158 = 8;
                var_150 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                break;
            }
            case 2:
            {
                r13_1 = arg3 + 0x20;
                
                if (!(rax_4 & 1))
                    goto label_511037;
                
                goto label_511143;
            }
            case 3:
            {
                switch (*r12_1)
                {
                    case 0:
                    {
                        if (!rsi_1)
                        {
                            if (!rax_6)
                            {
                                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                                /* no return */
                            }
                            
                            if ((rbp_1 | rax_6) >> 0x20)
                            {
                                if (COMBINE(0, rbp_1) % rax_6)
                                    goto label_51134d;
                                
                                goto label_5111cc;
                            }
                            
                            if (COMBINE(0, rbp_1) % rax_6)
                                goto label_51134d;
                            
                            goto label_5111cc;
                        }
                        
                        label_5111cc:
                        
                        if (!(var_130_1 & 1))
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07fd9f5272f024a0(&var_e8, "line number overflow /home/34r7h…", 0x14);
                            void* var_158_1 = var_d8;
                            var_168 = var_e8;
                            var_150 = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::h45e38ec569034dd2(&var_168);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(var_120, result_2);
                            break;
                        }
                        
                        uu_nl::NumberFormat::format::h4d54de5c56896fc9(&var_108, arg3 + 0x81, 
                            var_128_1, rax_7);
                        var_168 = &var_108;
                        result_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_158 = arg3 + 0x48;
                        var_150 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        *var_150[8] = &var_120;
                        var_140 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_e8 = &data_6391e8;
                        *var_e8[8] = 4;
                        var_c8 = 0;
                        var_d8 = &var_168;
                        var_d8 = 3;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_e8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(
                            var_108, *var_108[8]);
                        int64_t rax_29 = var_128_1 + rax_11;
                        
                        if (!(var_128_1 + rax_11))
                        {
                            *arg2 = 1;
                            arg2[1] = rax_29;
                            var_130_1 = 1;
                            var_128_1 = rax_29;
                            r13_1 = r12_1;
                        }
                        else
                        {
                            *arg2 = 0;
                            var_130_1 = 0;
                            r13_1 = r12_1;
                        }
                        break;
                    }
                    case 1:
                    {
                        if (!rsi_1)
                            goto label_51134d;
                        
                        goto label_5111cc;
                    }
                    case 2:
                    {
                        label_51134d:
                        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h897b901dc53cb62e(
                            &var_168, rax_7 + 1);
                        void* var_f8_1 = var_158;
                        var_108 = var_168;
                        var_e8 = &var_108;
                        *var_e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_d8 = &var_120;
                        var_d8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_168 = &data_639228;
                        result_1 = 3;
                        *var_150[8] = 0;
                        var_158 = &var_e8;
                        var_150 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(
                            var_108, *var_108[8]);
                        r13_1 = r12_1;
                        break;
                    }
                    case 3:
                    {
                        void** r13_2 = *(r12_1 + 8);
                        var_168 = 0;
                        uint64_t result_3 = result_2;
                        var_158 = rsi_1;
                        var_150 = 0;
                        *var_150[8] = rsi_1;
                        var_140 = 1;
                        regex_automata::util::search::Input::set_span::h953ab93d02250dd0(&var_168);
                        var_c8 = var_150;
                        var_d8 = var_158;
                        var_e8 = var_168;
                        regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(
                            &var_168, *r13_2, r13_2[1], &var_e8);
                        
                        if (var_168 & 1)
                            goto label_5111cc;
                        
                        goto label_51134d;
                    }
                }
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(var_120, result_2);
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h674bf8c2533d257e(&var_48, arg1);
        rsi_1 = &var_48;
        r12_1 = r13_1;
        
        if (var_48 == -0x7fffffffffffffff)
            return 0;
    }
    
    return result;
}
