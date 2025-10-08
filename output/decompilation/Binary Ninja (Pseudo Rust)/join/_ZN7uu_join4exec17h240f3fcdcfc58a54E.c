
  fn uu_join::exec::h240f3fcdcfc58a54(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: *mut i64, arg6: i8) -> *mut c_void

{
    let mut var_23c: i8 = arg6;
    let mut rbp: i64;
    rbp = 1;
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    let mut var_180: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    let mut var_238: *mut i8;
    uu_join::State::new::hab21adfd9d97a2fd(&var_238, 0, arg1, arg2, &var_180, arg5[9], 
        *arg5.byte_offset(0x5f), arg5[0xb]);
    let rax_1: *mut i8 = var_238;
    let mut result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    
    if -(rax_1) != -0x8000000000000000
    {
        let var_1e0: i24;
        let mut var_f0_1: i24 = var_1e0;
        let var_1f0: i128;
        let var_100_1: i128 = var_1f0;
        let var_200: i128;
        let var_110_1: i128 = var_200;
        let var_210: i128;
        let var_120_1: i128 = var_210;
        let mut var_220: i128;
        let var_130_1: i128 = var_220;
        let mut var_148: *mut i8 = rax_1;
        let result_2: *mut c_void = result;
        let mut var_228: *mut i64;
        let var_138_1: *mut i64 = var_228;
        rbp = 1;
        uu_join::State::new::hab21adfd9d97a2fd(&var_238, 1, arg3, arg4, &var_180, arg5[0xa], 
            *arg5.byte_offset(0x5f), *arg5.byte_offset(0x59));
        let rax_3: *mut i8 = var_238;
        result = result_1;
        
        if rax_3 != -0x8000000000000000
        {
            let mut var_38_1: i24 = var_1e0;
            let var_48_1: i128 = var_1f0;
            let var_58_1: i128 = var_200;
            let var_68_1: i128 = var_210;
            let var_78_1: i128 = var_220;
            let mut var_90: *mut i8 = rax_3;
            let result_3: *mut c_void = result;
            let var_80_1: *mut i64 = var_228;
            let rdx_2: i8 = *arg5.byte_offset(0x5e);
            let var_239_1: i8 = var_23c;
            let mut var_23b: i8 = *arg5.byte_offset(0x5b);
            let var_23a_1: i8 = rdx_2;
            let mut var_1d8: i64;
            let mut var_1c8: i64;
            let mut var_e8_1: i128;
            let mut var_d8_1: i64;
            
            if *arg5.byte_offset(0x5c) == 0
            {
                if (uu_join::State::initialize::h54362a96114b67e1(&var_148, &var_23c, 0) & 1) == 0
                {
                    if (uu_join::State::initialize::h54362a96114b67e1(&var_90, &var_23c, 
                        *arg5.byte_offset(0x5c)) & 1) == 0
                    {
                        var_d8_1 = arg5[2];
                        var_e8_1 = *arg5;
                        rbp = 0;
                        'label_45f395:
                        let rax_12: i8 = *arg5.byte_offset(0x5f);
                        let rcx_8: i8 = var_23c;
                        let mut var_178: i128 = var_e8_1;
                        let var_168_1: i64 = var_d8_1;
                        let var_150_1: i8 = rax_12;
                        let var_14f_1: i8 = rcx_8;
                        let var_160_1: i128 = *arg5.byte_offset(0x20);
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        let mut var_d0: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                        let mut var_1a8: ();
                        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h5551d416d8c9c645(&var_1a8, std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0));
                        
                        if *arg5.byte_offset(0x5d) == 0
                        {
                            'label_45f490:
                            let mut var_c8: *mut i64;
                            let mut result_12: *mut c_void;
                            
                            if var_138_1 == 0
                            {
                                'label_45f6e1:
                                let mut result_8: u64;
                                let mut rdx_20: *mut i64;
                                result_8 = uu_join::State::finalize::h099983d2386acea2(&var_148, 
                                    &var_1a8, &var_23b, &var_178);
                                result = result_8;
                                
                                if result_8 == 0
                                {
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_20);
                                    let mut result_9: u64;
                                    let mut rdx_22: *mut i64;
                                    result_9 = uu_join::State::finalize::h099983d2386acea2(&var_90, 
                                        &var_1a8, &var_23b, &var_178);
                                    result = result_9;
                                    
                                    if result_9 == 0
                                    {
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_22);
                                        
                                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) == 0
                                        {
                                            if *var_f0_1[2] != 0 || *var_38_1[2] == 1
                                            {
                                                let mut rax_34: i64;
                                                let mut rdx_23: i64;
                                                rax_34 =
                                                    uucore::execution_phrase::hf0e80cb4793732ad();
                                                var_1d8 = rax_34;
                                                let var_1d0_2: i64 = rdx_23;
                                                var_c8 = &var_1d8;
                                                let var_c0_1: fn(arg1: *mut i64, arg2: i64) ->
                                                    i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h76c68e868af0404d;
                                                var_238 = &data_4fd2e0;
                                                let var_230: i64 = 2;
                                                *var_220[8] = 0;
                                                let var_228_1: *mut *mut i64 = &var_c8;
                                                var_220 = 1;
                                                std::io::stdio::_eprint::h57899770eacec2ad(
                                                    &var_238);
                                                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h99bfffcaf31f1104(&var_1a8);
                                            core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::h5846ed3b82b42ada(var_178, *var_178[8]);
                                            core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_90);
                                            core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_148);
                                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hde07b23cd29c05dc(arg5[6], arg5[7]);
                                            
                                            if rbp != 0
                                            {
                                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(*arg5, arg5[1]);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h58ee7191efc6e1eb(arg5[3], arg5[4]);
                                            return nullptr;
                                        }
                                        
                                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                    }
                                    else if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) != 0
                                    {
                                        result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_22);
                                        result = result_12;
                                    }
                                }
                                else if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) != 0
                                {
                                    result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_20);
                                    result = result_12;
                                }
                            }
                            else
                            {
                                loop
                                {
                                    if var_80_1 == 0
                                    {
                                        goto 'label_45f6e1;
                                    }
                                    
                                    let mut rax_18: i64;
                                    let mut rdx_9: u64;
                                    rax_18 = uu_join::State::get_current_key::hb0aa7b8c555c38dc(
                                        &var_148);
                                    let mut rax_19: i64;
                                    let mut rdx_10: u64;
                                    rax_19 =
                                        uu_join::State::get_current_key::hb0aa7b8c555c38dc(&var_90);
                                    let rax_20: i8 =
                                        uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(
                                        var_23b, rax_18, rdx_9, rax_19, rdx_10);
                                    
                                    if rax_20 == 0
                                    {
                                        uu_join::State::extend::h2ec74ec0241156b7(&var_238, 
                                            &var_148, &var_23b);
                                        
                                        if var_238 == -0x7fffffffffffffff
                                        {
                                            result = result_1;
                                            
                                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) != 0
                                            {
                                                let result_10: *mut c_void = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, var_228);
                                                result = result_10;
                                            }
                                            
                                            goto 'label_45f870;
                                        }
                                        
                                        var_c8 = var_238;
                                        uu_join::State::extend::h2ec74ec0241156b7(&var_238, 
                                            &var_90, &var_23b);
                                        
                                        if var_238 == -0x7fffffffffffffff
                                        {
                                            result = result_1;
                                            
                                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) != 0
                                            {
                                                let result_11: *mut c_void = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, var_228);
                                                result = result_11;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_c8);
                                            goto 'label_45f870;
                                        }
                                        
                                        var_1c8 = var_228;
                                        var_1d8 = var_238;
                                        let mut rax_22: i64;
                                        
                                        if *arg5.byte_offset(0x5a) != 0
                                        {
                                            rax_22 = uu_join::State::combine::h82d4988c426e7f5d(
                                                &var_148, &var_1a8, &var_90, &var_178);
                                        }
                                        
                                        if *arg5.byte_offset(0x5a) != 0 && rax_22 != 0
                                        {
                                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_1d8);
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_c8);
                                            goto 'label_45f870;
                                        }
                                        
                                        var_228 = var_228;
                                        var_238 = var_c8;
                                        uu_join::State::reset::hf11a3d581915b2af(&var_148, 
                                            &var_238);
                                        var_220 = var_220;
                                        var_228 = var_1c8;
                                        var_238 = var_1d8;
                                        uu_join::State::reset::hf11a3d581915b2af(&var_90, &var_238);
                                    }
                                    else
                                    {
                                        if rax_20 != 1
                                        {
                                            let mut result_7: u64;
                                            let mut rdx_18: *mut i64;
                                            result_7 = uu_join::State::skip_line::hdd2ea2f388959027(
                                                &var_148, &var_1a8, &var_23b, &var_178);
                                            result = result_7;
                                            
                                            if result_7 != 0
                                            {
                                                if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) == 0
                                                {
                                                    goto 'label_45f870;
                                                }
                                                
                                                result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_18);
                                                break;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_18);
                                        }
                                        else
                                        {
                                            let mut result_6: u64;
                                            let mut rdx_13: *mut i64;
                                            result_6 = uu_join::State::skip_line::hdd2ea2f388959027(
                                                &var_90, &var_1a8, &var_23b, &var_178);
                                            result = result_6;
                                            
                                            if result_6 != 0
                                            {
                                                if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8) == 0
                                                {
                                                    goto 'label_45f870;
                                                }
                                                
                                                result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_13);
                                                break;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_13);
                                        }
                                        
                                        *var_f0_1[3] = 1;
                                        *var_38_1[3] = 1;
                                    }
                                    
                                    if var_138_1 == 0
                                    {
                                        goto 'label_45f6e1;
                                    }
                                }
                                
                                result = result_12;
                            }
                        }
                        else if uu_join::State::print_headers::h9346e2794dbd8a24(&var_148, 
                            &var_1a8, &var_90, &var_178) == 0
                        {
                            if uu_join::State::reset_read_line::h4856296dc2177a1c(&var_148, 
                                &var_23b) == 0
                            {
                                if uu_join::State::reset_read_line::h4856296dc2177a1c(&var_90, 
                                    &var_23b) == 0
                                {
                                    goto 'label_45f490;
                                }
                                
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            }
                            else
                            {
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            }
                        }
                        else
                        {
                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        }
                        
                        'label_45f870:
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h99bfffcaf31f1104(&var_1a8);
                        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::h5846ed3b82b42ada(var_178, *var_178[8]);
                    }
                    else
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        rbp = 1;
                    }
                }
                else
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    rbp = 1;
                }
            }
            else
            {
                let rax_5: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
                
                if rax_5 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_5 = 0;
                let rcx_7: *mut i8 = var_238;
                *(rax_5 + 8) = var_238;
                *(rax_5 + 1) = rcx_7;
                var_1d8 = 1;
                var_1c8 = 1;
                var_238 = &var_23c;
                result_1 = arg5.byte_offset(0x5c);
                var_228 = &var_1d8;
                let mut result_4: u64;
                let mut rdx_4: *mut i64;
                result_4 = uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h09077aa151b0d365(&var_238, 
                    &var_148);
                result = result_4;
                let mut result_5: u64;
                
                if result_4 == 0
                {
                    result_5 = uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h09077aa151b0d365(
                        &var_238, &var_90);
                    result = result_5;
                }
                
                if result_4 == 0 && result_5 == 0
                {
                    var_d8_1 = var_1c8;
                    var_e8_1 = var_1d8;
                    rbp = 1;
                    goto 'label_45f395;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(var_1d8, rax_5);
                rbp = 1;
            }
            core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_90);
        }
        else
        {
            rbp = 1;
        }
        
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_148);
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hde07b23cd29c05dc(arg5[6], arg5[7]);
        
        if rbp != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(
                *arg5, arg5[1]);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hde07b23cd29c05dc(arg5[6], arg5[7]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(
            *arg5, arg5[1]);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h58ee7191efc6e1eb(arg5[3], arg5[4]);
    result
}
