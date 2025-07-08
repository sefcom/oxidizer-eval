
  fn uu_join::exec::he72a5f97bdf4dbef(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: *mut i64) -> *mut c_void

{
    let mut rbp: i64;
    rbp = 1;
    std::io::stdio::stdin::h7215cc131abb55d8();
    let mut var_1b0: *mut c_void = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    let mut var_238: *mut c_void;
    uu_join::State::new::h1e047ff86b763ae6(&var_238, 0, arg1, arg2, &var_1b0, arg5[9], 
        *arg5.byte_offset(0x5f), arg5[0xb]);
    let rax_1: *mut c_void = var_238;
    let mut result_1: *mut c_void;
    let mut result: *mut c_void = result_1;
    let mut r13_1: *mut c_void;
    let mut rbp_1: i8;
    
    if rax_1 != -0x8000000000000000
    {
        let var_1e0: i32;
        let mut var_98_1: i24 = var_1e0;
        let var_1f0: i128;
        let var_a8_1: i128 = var_1f0;
        let var_200: i128;
        let var_b8_1: i128 = var_200;
        let var_210: i128;
        let var_c8_1: i128 = var_210;
        let mut var_220: i128;
        let var_d8_1: i128 = var_220;
        let mut var_f0: *mut c_void = rax_1;
        let result_2: *mut c_void = result;
        let mut var_228: *mut i64;
        let var_e0_1: *mut i64 = var_228;
        let mut rcx_1: i32;
        rcx_1 = 1;
        let var_240_1: i32 = rcx_1;
        uu_join::State::new::h1e047ff86b763ae6(&var_238, 1, arg3, arg4, &var_1b0, arg5[0xa], 
            *arg5.byte_offset(0x5f), *arg5.byte_offset(0x59));
        let mut rax_3: *mut c_void = var_238;
        result = result_1;
        let mut var_240_2: i32;
        
        if rax_3 == -0x8000000000000000
        {
            rax_3 = 1;
            var_240_2 = rax_3;
            'label_470ba3:
            rbp_1 = var_240_2;
            core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_f0);
            goto 'label_470bb0;
        }
        
        let mut var_38_1: i24 = var_1e0;
        let var_48_1: i128 = var_1f0;
        let var_58_1: i128 = var_200;
        let var_68_1: i128 = var_210;
        let var_78_1: i128 = var_220;
        let mut var_90: *mut c_void = rax_3;
        let result_3: *mut c_void = result;
        let var_80_1: *mut i64 = var_228;
        let rcx_4: i8 = *arg5.byte_offset(0x5e);
        let mut var_242: i8 = *arg5.byte_offset(0x5b);
        let var_241_1: i8 = rcx_4;
        let mut rax_5: u32 = *arg5.byte_offset(0x5c);
        let var_23a_1: i8 = rax_5;
        let mut var_1a8: i128;
        let mut var_198: i64;
        let mut var_148_1: i128;
        let mut var_138_1: i64;
        let mut var_239: ();
        
        if rax_5 == 0
        {
            rax_5 = 1;
            let var_240_4: u32 = rax_5;
            uu_join::State::initialize::h5b142188072a7d5d(&var_f0, &var_239, 0);
            uu_join::State::initialize::h5b142188072a7d5d(&var_90, &var_239, 
                *arg5.byte_offset(0x5c));
            var_138_1 = arg5[2];
            var_148_1 = *arg5;
            var_240_2 = 0;
        }
        else
        {
            let mut rax_6: *mut i8 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x10);
            
            if rax_6 == 0
            {
                rax_6 = 1;
                let var_240_5: i32 = rax_6;
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            *rax_6 = 0;
            let rdx_2: *mut c_void = var_238;
            *rax_6.byte_offset(1) = var_238;
            *rax_6.byte_offset(8) = rdx_2;
            let mut rcx_5: *mut c_void;
            rcx_5 = 1;
            let var_240_3: i32 = rcx_5;
            alloc::slice::hack::into_vec::h6319bf421152ad63(&var_1a8, rax_6, 1);
            var_238 = &var_239;
            result_1 = arg5.byte_offset(0x5c);
            var_228 = &var_1a8;
            uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h4a60b11c8a7cb480(&var_238, &var_f0);
            uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h4a60b11c8a7cb480(&var_238, &var_90);
            var_138_1 = var_198;
            var_148_1 = var_1a8;
            let mut rax_7: i64;
            rax_7 = 1;
            var_240_2 = rax_7;
        }
        let rax_9: i8 = *arg5.byte_offset(0x5f);
        let var_168_1: i64 = var_138_1;
        let mut var_178: i128 = var_148_1;
        let var_150_1: i8 = rax_9;
        let var_160_1: i128 = *arg5.byte_offset(0x20);
        std::io::stdio::stdout::h077da66234850927();
        let mut var_130: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        let mut var_1d8: ();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7a3dd15b78101682(
            &var_1d8, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_130));
        let mut result_4: *mut i128;
        
        if *arg5.byte_offset(0x5d) != 0
        {
            if uu_join::State::print_headers::h05236247a85dc117(&var_f0, &var_1d8, &var_90, 
                &var_178) != 0
            {
                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                'label_470b15:
                result = result_4;
                'label_470b7c:
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&var_1d8);
                core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(&var_178);
                core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_90);
                goto 'label_470ba3;
            }
            
            if uu_join::State::reset_read_line::h7f39e4bbc8d84e75(&var_f0, &var_242) != 0
            {
                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                goto 'label_470b15;
            }
            
            if uu_join::State::reset_read_line::h7f39e4bbc8d84e75(&var_90, &var_242) == 0
            {
                goto 'label_4707e2;
            }
            
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            goto 'label_470b15;
        }
        
        'label_4707e2:
        let mut var_128: *mut i128;
        let mut result_11: *mut c_void;
        
        if var_e0_1 != 0 && var_80_1 != 0
        {
            loop
            {
                let mut rax_14: i64;
                let mut rdx_6: u64;
                rax_14 = uu_join::State::get_current_key::h6b22667ac5a703a7(&var_f0);
                let mut rax_15: i64;
                let mut rdx_7: u64;
                rax_15 = uu_join::State::get_current_key::h6b22667ac5a703a7(&var_90);
                let rax_16: i8 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(var_242, 
                    rax_14, rdx_6, rax_15, rdx_7);
                
                if rax_16 == 0
                {
                    uu_join::State::extend::h751503d84a07daa6(&var_238, &var_f0, &var_242);
                    
                    if var_238 == -0x7fffffffffffffff
                    {
                        result = result_1;
                        
                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) != 0
                        {
                            let result_9: *mut c_void = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, var_228);
                            result = result_9;
                        }
                        
                        goto 'label_470b7c;
                    }
                    
                    var_128 = var_238;
                    uu_join::State::extend::h751503d84a07daa6(&var_238, &var_90, &var_242);
                    
                    if var_238 == -0x7fffffffffffffff
                    {
                        result = result_1;
                        
                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) != 0
                        {
                            let result_10: *mut c_void = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, var_228);
                            result = result_10;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_128);
                        goto 'label_470b7c;
                    }
                    
                    var_198 = var_228;
                    var_1a8 = var_238;
                    let mut rax_18: i64;
                    
                    if *arg5.byte_offset(0x5a) != 0
                    {
                        rax_18 = uu_join::State::combine::hef9cb824dfbe07fa(&var_f0, &var_1d8, 
                            &var_90, &var_178);
                    }
                    
                    if *arg5.byte_offset(0x5a) != 0 && rax_18 != 0
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_1a8);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_128);
                        goto 'label_470b7c;
                    }
                    
                    var_228 = var_228;
                    var_238 = var_128;
                    let mut r14_2: i64;
                    r14_2 = 1;
                    uu_join::State::reset::h80c820df90bbe344(&var_f0, &var_238);
                    var_220 = var_220;
                    var_228 = var_198;
                    var_238 = var_1a8;
                    uu_join::State::reset::h80c820df90bbe344(&var_90, &var_238);
                }
                else
                {
                    if rax_16 != 1
                    {
                        let mut result_6: *mut i128;
                        let mut rdx_15: *mut i64;
                        result_6 = uu_join::State::skip_line::hfa4c3ec8a4d122ec(&var_f0, &var_1d8, 
                            &var_242, &var_178);
                        result = result_6;
                        
                        if result_6 != 0
                        {
                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) == 0
                            {
                                goto 'label_470b7c;
                            }
                            
                            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_15);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_15);
                    }
                    else
                    {
                        let mut result_5: *mut i128;
                        let mut rdx_10: *mut i64;
                        result_5 = uu_join::State::skip_line::hfa4c3ec8a4d122ec(&var_90, &var_1d8, 
                            &var_242, &var_178);
                        result = result_5;
                        
                        if result_5 != 0
                        {
                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) == 0
                            {
                                goto 'label_470b7c;
                            }
                            
                            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_10);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_10);
                    }
                    
                    *var_98_1[3] = 1;
                    *var_38_1[3] = 1;
                }
                
                if var_e0_1 == 0
                {
                    goto 'label_470a47;
                }
                
                if var_80_1 == 0
                {
                    goto 'label_470a47;
                }
            }
            
            goto 'label_470b74;
        }
        
        'label_470a47:
        let mut result_7: *mut i128;
        let mut rdx_17: *mut i64;
        result_7 =
            uu_join::State::finalize::h1f104bbdc1de7bfc(&var_f0, &var_1d8, &var_242, &var_178);
        result = result_7;
        
        if result_7 != 0
        {
            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) == 0
            {
                goto 'label_470b7c;
            }
            
            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_17);
            'label_470b74:
            result = result_11;
            goto 'label_470b7c;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_17);
        let mut result_8: *mut i128;
        let mut rdx_19: *mut i64;
        result_8 =
            uu_join::State::finalize::h1f104bbdc1de7bfc(&var_90, &var_1d8, &var_242, &var_178);
        result = result_8;
        
        if result_8 != 0
        {
            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) == 0
            {
                goto 'label_470b7c;
            }
            
            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_19);
            goto 'label_470b74;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_19);
        
        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8) != 0
        {
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            goto 'label_470b15;
        }
        
        if (*var_98_1[2] | *var_38_1[2]) != 0
        {
            let mut rax_33: i64;
            let mut rdx_21: i64;
            rax_33 = uucore::execution_phrase::h7a36a698673d06ab();
            var_1a8 = rax_33;
            *var_1a8[8] = rdx_21;
            var_128 = &var_1a8;
            let var_120_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
            var_238 = &data_5325f0;
            let var_230: i64 = 2;
            *var_220[8] = 0;
            let var_228_1: *mut *mut i128 = &var_128;
            var_220 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&var_1d8);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(
            &var_178);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_90);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_f0);
        r13_1 = &arg5[3];
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&arg5[6]);
        
        if var_23a_1 != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(
                arg5);
        }
        
        result = nullptr;
    }
    else
    {
        rbp_1 = 1;
        'label_470bb0:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&arg5[6]);
        
        if rbp_1 != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(
                arg5);
        }
        
        r13_1 = &arg5[3];
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(r13_1);
    result
}
