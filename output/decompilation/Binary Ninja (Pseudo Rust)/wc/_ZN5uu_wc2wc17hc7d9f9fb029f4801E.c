
  fn uu_wc::wc::hc7d9f9fb029f4801(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut s: i128;
    __builtin_memset(&s, 0, 0x28);
    let mut r15: u64 = *arg2.byte_offset(0x1d);
    let mut var_f8: i64 = 1;
    
    if r15 != 2
    {
        var_f8 = uu_wc::compute_number_width::h8118755960c57c57(arg1, arg2);
    }
    
    let mut var_130: *mut c_void;
    uu_wc::Inputs::try_iter::he119dd3efc5b2af1(&var_130, arg1, arg2);
    let rcx: *mut c_void = var_130;
    let mut result: i64;
    
    if rcx == -0x7ffffffffffffffd
    {
        return result;
    }
    
    let var_f0_1: i32 = r15;
    let var_108: i64;
    let var_c0_1: i64 = var_108;
    let mut var_118: i128;
    let var_d0_1: i128 = var_118;
    let mut var_e8: *mut c_void = rcx;
    let result_1: i64 = result;
    let var_120: i64;
    let var_d8_1: i64 = var_120;
    let mut rbp_1: i64 = 0;
    let mut var_180: *mut i64;
    let mut var_160: *mut i64;
    
    loop
    {
        let mut var_a0: i64;
        uu_wc::Inputs::try_iter::_$u7b$$u7b$closure$u7d$$u7d$::h0fa6caa4f0d409f0(&var_a0, &var_e8);
        let rcx_1: i64 = var_a0;
        
        if rcx_1 == -0x7ffffffffffffffd
        {
            break;
        }
        
        let mut var_190: i64;
        let mut var_178: fn(arg1: *mut i64, arg2: i64) -> i64;
        let var_98: i64;
        let var_90: *mut i64;
        
        if rcx_1 != -0x7ffffffffffffffe
        {
            let mut var_b8: i64 = rcx_1;
            let var_b0_1: i64 = var_98;
            let var_a8_1: *mut i64 = var_90;
            uu_wc::word_count_from_input::h4ad675f40b919e0e(&var_130, &var_b8, arg2);
            let rax_6: *mut c_void = var_130;
            
            if rax_6 == 0
            {
                goto 'label_469f76;
            }
            
            let mut var_198: u64;
            let mut var_170: *mut u64;
            
            if rax_6 != 2
            {
                var_198 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h695fb2f166ad45d6();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                let mut rax_10: i64;
                let mut rdx_5: i64;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_190 = rax_10;
                let var_188_3: i64 = rdx_5;
                var_180 = &var_190;
                var_178 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
                var_170 = &var_198;
                let var_168_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
                var_160 = &data_4f9318;
                let var_158_3: i64 = 3;
                let var_140_2: i64 = 0;
                let var_150_3: *mut *mut i64 = &var_180;
                let var_148_3: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_160);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_198);
                'label_469f76:
                let var_38_1: i64 = var_108;
                let var_48_1: i128 = var_118;
                let mut var_58: i128 = result;
                _$LT$uu_wc..word_count..WordCount$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h903707394c27ad02(&s, &var_58);
                
                if var_f0_1 != 2
                {
                    uu_wc::Input::to_title::h56646f113684bc23(&var_180, &var_b8);
                    let rax_12: *mut i64 = var_180;
                    let mut r13_1: fn(arg1: *mut i64, arg2: i64) -> i64;
                    
                    if -(rax_12) == -0x8000000000000000 || rax_12 != -0x7fffffffffffffff
                    {
                        r13_1 = var_178;
                        r15 = var_170;
                    }
                    else
                    {
                        r13_1 = nullptr;
                    }
                    
                    if uu_wc::print_stats::hc5ca112509d551a7(arg2, &var_58, r13_1, r15, var_f8) == 0
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hc0c7b6ba243748cb(0);
                    }
                    else
                    {
                        if r13_1 == 0
                        {
                            r15 = 7;
                        }
                        
                        var_198 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hb457e8fc7396707f();
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        let mut rax_15: i64;
                        let mut rdx_8: i64;
                        rax_15 = uucore::util_name::h074417a1e6395129();
                        var_190 = rax_15;
                        let var_188_4: i64 = rdx_8;
                        var_160 = &var_190;
                        let var_158_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
                        let var_150_4: *mut u64 = &var_198;
                        let var_148_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
                        var_130 = &data_4f9318;
                        result = 3;
                        *var_118[8] = 0;
                        let var_120_2: *mut *mut i64 = &var_160;
                        var_118 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_198);
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$$GT$::hf203ba398b6b35be(&var_180);
                }
            }
            else
            {
                var_198 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h695fb2f166ad45d6();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                let mut rax_8: i64;
                let mut rdx_4: i64;
                rax_8 = uucore::util_name::h074417a1e6395129();
                var_190 = rax_8;
                let var_188_2: i64 = rdx_4;
                var_180 = &var_190;
                var_178 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
                var_170 = &var_198;
                let var_168_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
                var_160 = &data_4f9318;
                let var_158_2: i64 = 3;
                let var_140_1: i64 = 0;
                let var_150_2: *mut *mut i64 = &var_180;
                let var_148_2: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_160);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_198);
            }
            core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h52889054a5040018(&var_b8);
            rbp_1 += 1;
        }
        else
        {
            var_190 = var_98;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_90[0xb]());
            let mut rax_5: *mut i64;
            let mut rdx_2: fn(arg1: *mut i64, arg2: i64) -> i64;
            rax_5 = uucore::util_name::h074417a1e6395129();
            var_180 = rax_5;
            var_178 = rdx_2;
            var_160 = &var_180;
            let var_158_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
            let var_150_1: *mut i64 = &var_190;
            let var_148_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h513c2095c442bcfe;
            var_130 = &data_4f9318;
            result = 3;
            *var_118[8] = 0;
            let var_120_1: *mut *mut i64 = &var_160;
            var_118 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hb8a5da919c7b4817(var_190, var_90);
            rbp_1 += 1;
        }
    }
    
    core::ptr::drop_in_place$LT$core..iter..sources..from_fn..FromFn$LT$uu_wc..Inputs..try_iter..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::hf91b456bd911ec53(&var_e8);
    
    if var_f0_1 - 1 < 2
    {
        'label_46a0fa:
        let mut rdx_9: *const i8 = nullptr;
        
        if var_f0_1 != 2
        {
            rdx_9 = "totalwordsfile";
        }
        
        if uu_wc::print_stats::hc5ca112509d551a7(arg2, &s, rdx_9, 5, var_f8) == 0
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hc0c7b6ba243748cb(0);
        }
        else
        {
            var_180 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha6cc97ce51e674b3();
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            let mut rax_19: *mut c_void;
            let mut rdx_10: i64;
            rax_19 = uucore::util_name::h074417a1e6395129();
            var_e8 = rax_19;
            let var_e0_1: i64 = rdx_10;
            var_160 = &var_e8;
            let var_158_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e49341541173517;
            let var_150_5: *mut *mut i64 = &var_180;
            let var_148_5: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8429a37060a3bdfd;
            var_130 = &data_4f9318;
            result = 3;
            *var_118[8] = 0;
            let var_120_3: *mut *mut i64 = &var_160;
            var_118 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h66df39e1038318a5(var_180);
        }
    }
    else if var_f0_1 == 0 && rbp_1 >= 2
    {
        goto 'label_46a0fa;
    }
    
    0
}
