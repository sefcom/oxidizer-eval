
  fn uu_wc::wc::hd5e1121da6170855(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut s: i128;
    __builtin_memset(&s, 0, 0x28);
    let r15: u32 = *arg2.byte_offset(0x1d);
    let mut var_100: i64 = 1;
    
    if r15 != 2
    {
        var_100 = uu_wc::compute_number_width::h0dc7206969488842(arg1, arg2);
    }
    
    let mut var_178: *mut c_void;
    uu_wc::Inputs::try_iter::he58c0dff5beb00a3(&var_178, arg1, arg2);
    let rcx: *mut c_void = var_178;
    let mut result_1: i64;
    let mut result: i64 = result_1;
    
    if rcx != -0x7ffffffffffffffd
    {
        let var_150: i64;
        let var_90_1: i64 = var_150;
        let mut var_160: i128;
        let var_a0_1: i128 = var_160;
        let mut var_b8: *mut c_void = rcx;
        let result_2: i64 = result;
        let mut var_168: *mut *mut c_void;
        let var_c0_1: *mut *mut c_void = var_168;
        let var_a8_1: *mut *mut c_void = var_168;
        let mut r15_1: i64 = 0;
        let mut var_130: *mut c_void;
        let mut rbx_1: *mut *mut c_void = &var_130;
        let mut var_e8: *mut i128;
        
        loop
        {
            let mut var_70: i64;
            uu_wc::Inputs::try_iter::_$u7b$$u7b$closure$u7d$$u7d$::h72e90ebe24b5b113(&var_70, 
                &var_b8);
            let rcx_1: i64 = var_70;
            
            if rcx_1 == -0x7ffffffffffffffd
            {
                break;
            }
            
            let mut var_1a8: *mut i64;
            let mut var_1a0: *mut i64;
            let var_68: *mut i64;
            let var_60: *mut i64;
            
            if rcx_1 != -0x7ffffffffffffffe
            {
                let mut var_88: i64 = rcx_1;
                let var_80_1: *mut i64 = var_68;
                let var_78_1: *mut i64 = var_60;
                uu_wc::word_count_from_input::h9c6b7f02841e6225(&var_178, &var_88, arg2);
                let rax_5: *mut c_void = var_178;
                
                if rax_5 == 0
                {
                    goto 'label_4bd931;
                }
                
                let mut var_198: *mut *mut c_void;
                let mut var_188: *mut c_void;
                let mut var_140: i64;
                
                if rax_5 != 2
                {
                    var_188 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6d2d9bfd1274cb46();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let mut rax_9: i64;
                    let mut rdx_5: i64;
                    rax_9 = uucore::util_name::h60d842bf27b05e82();
                    var_140 = rax_9;
                    let var_138_2: i64 = rdx_5;
                    var_1a8 = &var_140;
                    var_1a0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                    var_198 = &var_188;
                    let var_190_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                    var_130 = &data_5311c8;
                    let var_128_3: i64 = 3;
                    let var_110_2: i64 = 0;
                    let var_120_3: *mut *mut i64 = &var_1a8;
                    let var_118_3: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_188);
                    'label_4bd931:
                    let var_c8_1: i64 = var_150;
                    let zmm0_2: i128 = result_1;
                    let zmm1_1: i128 = var_160;
                    let var_d8_1: i128 = zmm1_1;
                    var_e8 = zmm0_2;
                    *var_160[8] = var_150;
                    var_168 = zmm1_1;
                    var_178 = zmm0_2;
                    _$LT$uu_wc..word_count..WordCount$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h8a7b9039573b0b39(&s, &var_178);
                    
                    if r15 != 2
                    {
                        uu_wc::Input::to_title::hf944d4f2d9388afe(&var_1a8, &var_88);
                        let rax_11: *mut i64 = var_1a8;
                        let mut rbp_1: *mut c_void;
                        
                        if rax_11 == -0x8000000000000000 || rax_11 != -0x7fffffffffffffff
                        {
                            rbp_1 = var_1a0;
                            rbx_1 = var_198;
                        }
                        else
                        {
                            rbp_1 = nullptr;
                        }
                        
                        if uu_wc::print_stats::hd63ccbcd2e38aece(arg2, &var_e8, rbp_1) != 0
                        {
                            let cond:2_1: bool = rbp_1 == 0;
                            
                            if rbp_1 == 0
                            {
                                rbp_1 = "<stdin>total FilesDisabledextraS…";
                            }
                            
                            if cond:2_1
                            {
                                rbx_1 = 7;
                            }
                            
                            var_188 = rbp_1;
                            let var_180_1: *mut *mut c_void = rbx_1;
                            let mut var_f8: *mut i128 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbee748f1525ffde1();
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            let mut rax_14: i64;
                            let mut rdx_7: i64;
                            rax_14 = uucore::util_name::h60d842bf27b05e82();
                            var_140 = rax_14;
                            let var_138_3: i64 = rdx_7;
                            var_130 = &var_140;
                            let var_128_4: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                            let var_120_4: *mut *mut i128 = &var_f8;
                            let var_118_4: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                            var_178 = &data_5311c8;
                            result_1 = 3;
                            *var_160[8] = 0;
                            var_168 = &var_130;
                            var_160 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_f8);
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::h7b5c9b8dea2633d7(&var_1a8);
                        rbx_1 = &var_130;
                    }
                    
                    core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&var_88);
                    r15_1 += 1;
                    continue;
                }
                else
                {
                    var_188 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h2da712d33864c64c();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let mut rax_7: i64;
                    let mut rdx_4: i64;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_140 = rax_7;
                    let var_138_1: i64 = rdx_4;
                    var_1a8 = &var_140;
                    var_1a0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                    var_198 = &var_188;
                    let var_190_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                    var_130 = &data_5311c8;
                    let var_128_2: i64 = 3;
                    let var_110_1: i64 = 0;
                    let var_120_2: *mut *mut i64 = &var_1a8;
                    let var_118_2: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_130);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_188);
                    core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&var_88);
                }
            }
            else
            {
                var_1a8 = var_68;
                var_1a0 = var_60;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(var_60[0xc]());
                let mut rax_4: *mut i128;
                let mut rdx_2: i64;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_e8 = rax_4;
                let var_e0_1: i64 = rdx_2;
                var_130 = &var_e8;
                let var_128_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                let var_120_1: *mut i64 = &var_1a8;
                let var_118_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h9d4509789875f497;
                var_178 = &data_5311c8;
                result_1 = 3;
                *var_160[8] = 0;
                var_168 = &var_130;
                var_160 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h547312d815f977f1(var_1a8, var_1a0);
            }
            r15_1 += 1;
        }
        
        core::ptr::drop_in_place$LT$core..iter..sources..from_fn..FromFn$LT$uu_wc..Inputs..try_iter..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hb5a904caff70e7b6(&var_b8);
        
        if r15 - 1 < 2
        {
            'label_4bdafd:
            let mut rdx_8: *mut c_void = nullptr;
            
            if r15 != 2
            {
                rdx_8 = "total FilesDisabledextraStdinRep…";
            }
            
            if uu_wc::print_stats::hd63ccbcd2e38aece(arg2, &s, rdx_8) != 0
            {
                var_e8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc10cf64853115943();
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_18: *mut c_void;
                let mut rdx_9: i64;
                rax_18 = uucore::util_name::h60d842bf27b05e82();
                var_b8 = rax_18;
                let var_b0_1: i64 = rdx_9;
                var_130 = &var_b8;
                let var_128_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf11328e4cb3e1baf;
                let var_120_5: *mut *mut i128 = &var_e8;
                let var_118_5: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb416dfd1ca34992c;
                var_178 = &data_5311c8;
                let var_170: i64 = 3;
                *var_160[8] = 0;
                let var_168_1: *mut *mut c_void = &var_130;
                var_160 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_178);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h28789891c4c0df25(var_e8);
            }
        }
        else if r15 == 0 && r15_1 >= 2
        {
            goto 'label_4bdafd;
        }
        
        result = 0;
    }
    
    result
}
