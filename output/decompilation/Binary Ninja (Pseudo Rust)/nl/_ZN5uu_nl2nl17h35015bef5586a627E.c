
  fn uu_nl::nl::h35015bef5586a627(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> u64

{
    let r12: i8 = *arg2;
    let mut var_48: i64;
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h674bf8c2533d257e(&var_48, arg1);
    
    if var_48 == -0x7fffffffffffffff
    {
        return 0;
    }
    
    let mut var_130_1: i8 = r12;
    let mut r12_1: *mut c_void = arg3.byte_offset(0x10);
    let rax_1: *mut i8 = *arg3.byte_offset(0x38);
    let rax_2: i64 = *arg3.byte_offset(0x40);
    let rax_4: i8 = *arg3.byte_offset(0x80);
    let rax_5: i64 = *arg3.byte_offset(0x60);
    let rax_6: i64 = *arg3.byte_offset(0x70);
    let rax_7: i64 = *arg3.byte_offset(0x78);
    let rax_11: i64 = *arg3.byte_offset(0x68);
    let mut var_128_1: i64 = arg2[1];
    let mut rbp_1: i64 = arg2[2];
    let mut rsi_1: *mut i64 = &var_48;
    let var_58_1: i64 = -0x8000000000000000;
    let var_80_1: *mut c_void = r12_1;
    let mut result: u64;
    
    loop
    {
        let mut var_168: *mut c_void;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h572f824e92d7e2a3(&var_168, rsi_1);
        let rax_13: *mut c_void = var_168;
        let mut result_1: u64;
        result = result_1;
        let mut var_158: *mut c_void;
        rsi_1 = var_158;
        
        if rax_13 == var_58_1
        {
            break;
        }
        
        let mut var_120: *mut c_void = rax_13;
        let result_2: u64 = result;
        rbp_1 += 1;
        
        if rsi_1 != 0
        {
            rbp_1 = 0;
        }
        
        arg2[2] = rbp_1;
        let mut r13_1: *mut c_void = arg3;
        let mut var_150: i128;
        let mut var_140: i8;
        let mut var_108: i128;
        let mut var_e8: i128;
        let mut var_d8: *mut c_void;
        let mut var_c8: i128;
        
        match uu_nl::SectionDelimiter::parse::hfa2b6893488a2d97(result, rsi_1, rax_1, rax_2)
        {
            0 =>
            {
                goto 'label_51111c;
            }
            1 =>
            {
                r13_1 = var_80_1;
                'label_51111c:
                
                if (rax_4 & 1) == 0
                {
                    goto 'label_511037;
                }
                
                'label_511143:
                *arg2 = 1;
                arg2[1] = rax_5;
                var_130_1 = 1;
                var_128_1 = rax_5;
                'label_511037:
                var_168 = &data_6391d8;
                result_1 = 1;
                var_158 = 8;
                var_150 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            2 =>
            {
                r13_1 = arg3.byte_offset(0x20);
                
                if (rax_4 & 1) == 0
                {
                    goto 'label_511037;
                }
                
                goto 'label_511143;
            }
            3 =>
            {
                match *r12_1
                {
                    0 =>
                    {
                        if rsi_1 == 0
                        {
                            if rax_6 == 0
                            {
                                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                                /* no return */
                            }
                            
                            if (rbp_1 | rax_6) >> 0x20 != 0
                            {
                                if COMBINE(0, rbp_1) % rax_6 != 0
                                {
                                    goto 'label_51134d;
                                }
                                
                                goto 'label_5111cc;
                            }
                            
                            if COMBINE(0, rbp_1) % rax_6 != 0
                            {
                                goto 'label_51134d;
                            }
                            
                            goto 'label_5111cc;
                        }
                        
                        'label_5111cc:
                        
                        if (var_130_1 & 1) == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h07fd9f5272f024a0(&var_e8, "line number overflow /home/34r7h…", 0x14);
                            let var_158_1: *mut c_void = var_d8;
                            var_168 = var_e8;
                            var_150 = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::h45e38ec569034dd2(&var_168);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(var_120, result_2);
                            break;
                        }
                        
                        uu_nl::NumberFormat::format::h4d54de5c56896fc9(&var_108, 
                            arg3.byte_offset(0x81), var_128_1, rax_7);
                        var_168 = &var_108;
                        result_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_158 = arg3.byte_offset(0x48);
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
                        let rax_29: i64 = var_128_1 + rax_11;
                        
                        if !(var_128_1 + rax_11)
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
                    }
                    1 =>
                    {
                        if rsi_1 == 0
                        {
                            goto 'label_51134d;
                        }
                        
                        goto 'label_5111cc;
                    }
                    2 =>
                    {
                        'label_51134d:
                        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h897b901dc53cb62e(
                            &var_168, rax_7 + 1);
                        let var_f8_1: *mut c_void = var_158;
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
                    }
                    3 =>
                    {
                        let r13_2: *mut *mut c_void = *r12_1.byte_offset(8);
                        var_168 = 0;
                        let result_3: u64 = result_2;
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
                        
                        if (var_168 & 1) != 0
                        {
                            goto 'label_5111cc;
                        }
                        
                        goto 'label_51134d;
                    }
                }
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4f3d6378997aefab(var_120, result_2);
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h674bf8c2533d257e(&var_48, arg1);
        rsi_1 = &var_48;
        r12_1 = r13_1;
        
        if var_48 == -0x7fffffffffffffff
        {
            return 0;
        }
    }
    
    result
}
