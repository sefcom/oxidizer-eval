
  fn rg::flags::hiargs::Patterns::from_low_args::hc7cc9fe7a840f0f3(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void)

{
    if *arg3.byte_offset(0x22c) != 0
    {
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
    }
    else
    {
        let mut var_198: i128;
        let mut var_188: i128;
        let mut var_110: *mut c_void;
        let mut var_e8: i128;
        
        if *arg3.byte_offset(0xd8) != 0
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h97780d0e7c7992b8(&var_198);
            let var_178: i128;
            let var_c8_1: i128 = var_178;
            let var_d8_1: i128 = var_188;
            var_e8 = var_198;
            let mut rax_1: i64;
            let mut rdx: i64;
            rax_1 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h02ccee15b84dfdd3(
                *arg3.byte_offset(0xd8), 8, 0x18);
            let mut var_140: i64 = rax_1;
            let var_138_1: i64 = rdx;
            let var_130_1: i64 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::drain::h7008c9b9fa579a6f(&var_110, 
                arg3.byte_offset(0xc8));
            let mut rax_2: *mut i64 = var_110;
            let var_108: i64;
            
            if rax_2 == var_108
            {
                'label_6512e1:
                core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$rg..flags..lowargs..PatternSource$GT$$GT$::he4469f54ee882bfb(&var_110);
                arg1[2] = var_130_1;
                *arg1 = var_140;
            }
            else
            {
                let mut var_199_1: i8 = *arg2.byte_offset(0x19);
                
                loop
                {
                    var_110 = &rax_2[4];
                    let rcx_6: i64 = *rax_2;
                    
                    if rcx_6 == 2
                    {
                        goto 'label_6512e1;
                    }
                    
                    let rdx_2: i64 = rax_2[3];
                    
                    if (rcx_6 & 1) == 0
                    {
                        var_188 = rax_2[3];
                        var_198 = *rax_2.byte_offset(8);
                        rg::flags::hiargs::Patterns::from_low_args::_$u7b$$u7b$closure$u7d$$u7d$::h82b3a05a54535357(&var_e8, &var_140, &var_198);
                        rax_2 = var_110;
                        
                        if rax_2 == var_108
                        {
                            goto 'label_6512e1;
                        }
                    }
                    else
                    {
                        let mut var_128: i128 = *rax_2.byte_offset(8);
                        let var_118_1: i64 = rdx_2;
                        let mut var_158: i64;
                        let var_148: i64;
                        let mut var_98: i128;
                        let mut rax_12: u64;
                        let mut rdi_6: i64;
                        
                        if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$LT$$RF$std..path..Path$GT$$GT$::eq::h2125dccf5663ce54(*var_128[8], rdx_2, "-\n_rg() {\n  local i cur prev o…", 1) == 0
                        {
                            grep_cli::pattern::patterns_from_path::h215e39a5c9bc403d(&var_198, 
                                &var_128);
                            let rax_7: i64 = var_198;
                            rdi_6 = *var_198[8];
                            
                            if rax_7 == -0x8000000000000000
                            {
                                'label_6513ce:
                                rax_12 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rdi_6);
                                goto 'label_6513d8;
                            }
                            
                            let mut var_48: i64 = rax_7;
                            let var_40_1: i64 = rdi_6;
                            let var_38_1: i64 = var_188;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hda4c39611512d0ee(&var_198, &var_48);
                            
                            loop
                            {
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4986d5d5a5b13637(&var_158, &var_198);
                                
                                if var_158 == -0x8000000000000000
                                {
                                    break;
                                }
                                
                                let var_88_2: i64 = var_148;
                                var_98 = var_158;
                                rg::flags::hiargs::Patterns::from_low_args::_$u7b$$u7b$closure$u7d$$u7d$::h82b3a05a54535357(&var_e8, &var_140, &var_98);
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4dccd21404714c3(&var_198);
                        }
                        else
                        {
                            if (var_199_1 & 1) != 0
                            {
                                var_198 = &data_7eb030;
                                *var_198[8] = 1;
                                var_188 = 8;
                                var_188 = {0};
                                rax_12 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_198);
                                'label_6513d8:
                                arg1[1] = rax_12;
                                *arg1 = -0x8000000000000000;
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_128);
                                core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$rg..flags..lowargs..PatternSource$GT$$GT$::he4469f54ee882bfb(&var_110);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(&var_140);
                                break;
                            }
                            
                            grep_cli::pattern::patterns_from_stdin::h54bb327d245b57c5(&var_198);
                            let rax_5: i64 = var_198;
                            rdi_6 = *var_198[8];
                            
                            if rax_5 == -0x8000000000000000
                            {
                                goto 'label_6513ce;
                            }
                            
                            let mut var_60: i64 = rax_5;
                            let var_58_1: i64 = rdi_6;
                            let var_50_1: i64 = var_188;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hda4c39611512d0ee(&var_198, &var_60);
                            
                            loop
                            {
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4986d5d5a5b13637(&var_158, &var_198);
                                
                                if var_158 == -0x8000000000000000
                                {
                                    break;
                                }
                                
                                let var_88_1: i64 = var_148;
                                var_98 = var_158;
                                rg::flags::hiargs::Patterns::from_low_args::_$u7b$$u7b$closure$u7d$$u7d$::h82b3a05a54535357(&var_e8, &var_140, &var_98);
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4dccd21404714c3(&var_198);
                            *arg2.byte_offset(0x19) = 1;
                            var_199_1 = 1;
                        }
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(
                            &var_128);
                        rax_2 = var_110;
                        
                        if rax_2 == var_108
                        {
                            goto 'label_6512e1;
                        }
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::hfd59910e25643fbb(&var_e8);
        }
        else
        {
            let mut rax_14: *mut *mut [i8; 0x60];
            
            if *arg3.byte_offset(0xc0) == 0
            {
                rax_14 = &data_7eb010;
                'label_651442:
                var_198 = rax_14;
                *var_198[8] = 1;
                var_188 = 8;
                var_188 = {0};
                arg1[1] = anyhow::__private::format_err::hd87f3faee3401bd9(&var_198);
                *arg1 = -0x8000000000000000;
            }
            else
            {
                alloc::vec::Vec$LT$T$C$A$GT$::remove::h43f73f2ace0bf3bf(&var_110, 
                    arg3.byte_offset(0xb0));
                alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_198, &var_110);
                
                if var_198 != -0x8000000000000000
                {
                    var_e8 = var_198;
                    let mut var_d8: i128;
                    *var_d8[8] = var_188;
                    var_e8 = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..ffi..os_str..OsString$GT$$GT$::ha8786323dbda0a67(&var_e8);
                    rax_14 = &data_7eb020;
                    goto 'label_651442;
                }
                
                let zmm0_6: i128 = var_198;
                let rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
                
                if rax == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *(rax + 0x10) = *var_188[8];
                *rax = zmm0_6;
                *arg1 = 1;
                arg1[1] = rax;
                arg1[2] = 1;
            }
        }
    }
}
