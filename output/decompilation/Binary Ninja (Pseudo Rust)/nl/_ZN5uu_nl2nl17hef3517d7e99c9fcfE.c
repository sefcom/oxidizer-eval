
  fn uu_nl::nl::hef3517d7e99c9fcf(arg1: i64, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_110: i64 = arg1;
    let mut r13: i64 = *arg2;
    let mut var_78: i64;
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6416b20a6783b54b(&var_78, &var_110);
    
    if var_78 != -0x7fffffffffffffff
    {
        let mut r12_1: *mut c_void = arg3.byte_offset(0x10);
        let rax_2: *mut i8 = *arg3.byte_offset(0x38);
        let rax_3: i64 = *arg3.byte_offset(0x40);
        let rax_5: i8 = *arg3.byte_offset(0x80);
        let rax_6: i64 = *arg3.byte_offset(0x60);
        let rax_7: i64 = *arg3.byte_offset(0x70);
        let rax_8: i64 = *arg3.byte_offset(0x78);
        let rax_12: i64 = *arg3.byte_offset(0x68);
        let mut var_160_1: i64 = arg2[1];
        let mut rbp_1: i64 = arg2[2];
        let var_80_1: i64 = -0x8000000000000000;
        let var_a0_1: *mut c_void = r12_1;
        
        loop
        {
            let var_68: i64;
            let var_38_1: i64 = var_68;
            let mut var_48: i128 = var_78;
            let mut var_158: *mut c_void;
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb23217556102fb78(&var_158, &var_48);
            let rax_15: *mut c_void = var_158;
            let mut result_1: *mut i128;
            let mut result: *mut i128 = result_1;
            
            if rax_15 != var_80_1
            {
                let mut var_128: *mut c_void = rax_15;
                rbp_1 += 1;
                let mut var_148: *mut c_void;
                
                if var_148 != 0
                {
                    rbp_1 = 0;
                }
                
                arg2[2] = rbp_1;
                let mut r15_1: *mut c_void = arg3;
                let mut var_140: i128;
                
                match uu_nl::SectionDelimiter::parse::h6872879c6cc1e509(result, var_148, rax_2, 
                    rax_3)
                {
                    0 =>
                    {
                        goto 'label_559d20;
                    }
                    1 =>
                    {
                        r15_1 = var_a0_1;
                        'label_559d20:
                        
                        if rax_5 == 0
                        {
                            goto 'label_559c17;
                        }
                        
                        'label_559d43:
                        *arg2 = 1;
                        arg2[1] = rax_6;
                        r13 = 1;
                        var_160_1 = rax_6;
                        'label_559c17:
                        var_158 = &data_6d6c58;
                        result_1 = 1;
                        var_148 = 8;
                        var_140 = {0};
                        std::io::stdio::_print::he918bceb0c89db46(&var_158);
                        goto 'label_559c46;
                    }
                    2 =>
                    {
                        r15_1 = arg3.byte_offset(0x20);
                        
                        if rax_5 == 0
                        {
                            goto 'label_559c17;
                        }
                        
                        goto 'label_559d43;
                    }
                    3 =>
                    {
                        let mut var_108: *mut c_void;
                        let mut var_f8: *mut i64;
                        let mut var_60: ();
                        
                        match *r12_1
                        {
                            0 =>
                            {
                                if var_148 == 0
                                {
                                    if rax_7 == 0
                                    {
                                        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                                        /* no return */
                                    }
                                    
                                    if (rbp_1 | rax_7) >> 0x20 == 0
                                    {
                                        if COMBINE(0, rbp_1) % rax_7 != 0
                                        {
                                            goto 'label_559ee0;
                                        }
                                    }
                                    else if COMBINE(0, rbp_1) % rax_7 != 0
                                    {
                                        goto 'label_559ee0;
                                    }
                                }
                            }
                            1 =>
                            {
                                if var_148 == 0
                                {
                                    goto 'label_559ee0;
                                }
                            }
                            2 =>
                            {
                                'label_559ee0:
                                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(
                                    &var_60, " : Try ' --help' for more inform…", 1, rax_8 + 1);
                                var_108 = &var_60;
                                let var_100_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_f8 = &var_128;
                                let var_f0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_158 = &data_6d6ca8;
                                result_1 = 3;
                                *var_140[8] = 0;
                                var_148 = &var_108;
                                var_140 = 2;
                                std::io::stdio::_print::he918bceb0c89db46(&var_158);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_60);
                                r15_1 = r12_1;
                                'label_559c46:
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_128);
                                _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6416b20a6783b54b(&var_78, &var_110);
                                r12_1 = r15_1;
                                
                                if var_78 == -0x7fffffffffffffff
                                {
                                    break;
                                }
                                
                                continue;
                            }
                            3 =>
                            {
                                let rax_32: *mut *mut c_void = *r12_1.byte_offset(8);
                                
                                if regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(
                                    *rax_32, rax_32[1], result, var_148) == 0
                                {
                                    goto 'label_559ee0;
                                }
                            }
                        }
                        
                        if r13 != 0
                        {
                            uu_nl::NumberFormat::format::h85daa785ca2f298b(&var_60, 
                                arg3.byte_offset(0x81), var_160_1, rax_8);
                            var_158 = &var_60;
                            result_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_148 = arg3.byte_offset(0x48);
                            var_140 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            *var_140[8] = &var_128;
                            let var_130_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_108 = &data_6d6c68;
                            let var_100_1: i64 = 4;
                            let var_e8_1: i64 = 0;
                            var_f8 = &var_158;
                            let var_f0_1: i64 = 3;
                            std::io::stdio::_print::he918bceb0c89db46(&var_108);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(&var_60);
                            let rax_31: i64 = var_160_1 + rax_12;
                            r13 = !(var_160_1 + rax_12);
                            *arg2 = r13;
                            var_160_1 = rax_31;
                            arg2[1] = rax_31;
                            r15_1 = r12_1;
                            goto 'label_559c46;
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hccf532128df738d2(&var_108, "line number overflow/home/34r7hm…", 0x14);
                        let var_148_1: *mut i64 = var_f8;
                        var_158 = var_108;
                        var_140 = 1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h02c3afd2888e012a(&var_158);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h70d12d72ce7260f9(
                            &var_128);
                    }
                }
            }
            
            return result;
        }
    }
    
    nullptr
}
