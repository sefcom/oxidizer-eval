
  fn uu_join::exec::h99a16e0e986e240a(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: *mut i64, arg6: *mut c_void) -> *mut i128

{
    let mut rax: i32;
    rax = 1;
    let var_4d8: i32 = rax;
    let mut rbx: u64;
    rbx = 1;
    std::io::stdio::stdin::h7215cc131abb55d8();
    let mut var_458: *mut c_void = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    rbx = 1;
    let mut var_300: *mut c_void;
    uu_join::State::new::h1e047ff86b763ae6(&var_300, 0, arg1, arg2, &var_458, arg5[9], 
        *arg5.byte_offset(0x5f), arg5[0xb]);
    let rax_2: i64 = var_300;
    let result_3: *mut i128;
    let mut result: *mut i128 = result_3;
    let mut r14_5: *mut c_void;
    
    if rax_2 != -0x8000000000000000
    {
        let var_2a8: i24;
        let mut var_368_1: i24 = var_2a8;
        let var_2b8: i128;
        let var_378_1: i128 = var_2b8;
        let var_2c8: i128;
        let var_388_1: i128 = var_2c8;
        let var_2d8: i128;
        let var_398_1: i128 = var_2d8;
        let var_2e8: i128;
        let var_3a8_1: i128 = var_2e8;
        let mut var_3c0: i64 = rax_2;
        let result_1: *mut i128 = result;
        let mut rdx_1: i32;
        rdx_1 = 1;
        let var_4d8_1: i32 = rdx_1;
        rbx = 1;
        uu_join::State::new::h1e047ff86b763ae6(&var_300, 1, arg3, arg4, &var_458, arg5[0xa], 
            *arg5.byte_offset(0x5f), *arg5.byte_offset(0x59));
        let r14_1: *mut c_void = var_300;
        result = result_3;
        let mut var_4d8_2: i32;
        
        if r14_1 == -0x8000000000000000
        {
            var_4d8_2 = 1;
            rbx = 1;
            'label_470065:
            core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_3c0);
            rbx = var_4d8_2;
            
            if r14_1 != -0x8000000000000000
            {
                goto 'label_470090;
            }
            
            goto 'label_470082;
        }
        
        let mut var_308_1: i24 = var_2a8;
        let var_318_1: i128 = var_2b8;
        let var_328_1: i128 = var_2c8;
        let var_338_1: i128 = var_2d8;
        let var_348_1: i128 = var_2e8;
        let mut var_360: *mut c_void = r14_1;
        let result_2: *mut i128 = result;
        _$LT$uu_join..MultiByteSep$u20$as$u20$core..clone..Clone$GT$::clone::h1a937755992eb5de(
            &var_300, arg6);
        let rbx_1: i8 = *arg5.byte_offset(0x5b);
        let r14_2: i8 = *arg5.byte_offset(0x5e);
        let mut var_1a0: ();
        memcpy(&var_1a0, &var_300, 0x120);
        let var_7f_1: i8 = r14_2;
        let mut rax_5: u32 = *arg5.byte_offset(0x5c);
        let var_4d1_1: i8 = rax_5;
        let mut var_4c0: i128;
        let mut var_4b0: *mut i64;
        let mut var_450_1: i128;
        let mut var_440_1: *mut i64;
        let mut r14_3: *mut i64;
        
        if rax_5 == 0
        {
            rax_5 = 1;
            let var_4d8_4: u32 = rax_5;
            uu_join::State::initialize::h5880c996c8e1a0f0(&var_3c0, arg6, 0);
            uu_join::State::initialize::h5880c996c8e1a0f0(&var_360, arg6, *arg5.byte_offset(0x5c));
            r14_3 = arg5;
            var_440_1 = r14_3[2];
            var_450_1 = *r14_3;
            var_4d8_2 = 0;
        }
        else
        {
            let mut rax_6: *mut i8 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x10);
            
            if rax_6 == 0
            {
                rax_6 = 1;
                let var_4d8_5: i32 = rax_6;
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            *rax_6 = 0;
            let rdx_3: *mut c_void = var_300;
            *rax_6.byte_offset(1) = var_300;
            *rax_6.byte_offset(8) = rdx_3;
            let mut rcx_5: *mut c_void;
            rcx_5 = 1;
            let var_4d8_3: i32 = rcx_5;
            alloc::slice::hack::into_vec::h6319bf421152ad63(&var_4c0, rax_6, 1);
            var_300 = arg6;
            let var_2f8: *mut c_void = arg5.byte_offset(0x5c);
            let var_2f0_1: *mut i128 = &var_4c0;
            uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h906e94d0f8a5403b(&var_300, &var_3c0);
            uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h906e94d0f8a5403b(&var_300, &var_360);
            var_440_1 = var_4b0;
            var_450_1 = var_4c0;
            let mut rax_8: *mut i64;
            rax_8 = 1;
            var_4d8_2 = rax_8;
            r14_3 = arg5;
        }
        
        let rbx_2: i8 = *r14_3.byte_offset(0x5f);
        memcpy(&var_300, arg6, 0x120);
        let var_1d0_1: i128 = var_450_1;
        let var_1c0_1: *mut i64 = var_440_1;
        let var_1b8_1: i8 = rbx_2;
        let var_1e0_1: i128 = *r14_3.byte_offset(0x20);
        std::io::stdio::stdout::h077da66234850927();
        let mut var_428: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        let mut var_488: ();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7a3dd15b78101682(
            &var_488, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_428));
        let mut result_4: *mut i128;
        
        if *arg5.byte_offset(0x5d) != 0
        {
            if uu_join::State::print_headers::h9c33b910610aa5ae(&var_3c0, &var_488, &var_360, 
                &var_300) != 0
            {
                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                'label_46ffbe:
                result = result_4;
                'label_470025:
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&var_488);
                core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..MultiByteSep$GT$$GT$::h8a3c31f87c643312(&var_300);
                core::ptr::drop_in_place$LT$uu_join..Input$LT$uu_join..MultiByteSep$GT$$GT$::h2bbc03a57292d429(&var_1a0);
                core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_360);
                goto 'label_470065;
            }
            
            if uu_join::State::reset_read_line::h2903dcabb2a1b3f0(&var_3c0, &var_1a0) != 0
            {
                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                goto 'label_46ffbe;
            }
            
            if uu_join::State::reset_read_line::h2903dcabb2a1b3f0(&var_360, &var_1a0) == 0
            {
                goto 'label_46fc62;
            }
            
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            goto 'label_46ffbe;
        }
        
        'label_46fc62:
        let mut var_420: *mut i64;
        let mut var_3f0: i64;
        let var_2f0: *mut i64;
        let mut result_11: *mut i128;
        
        if var_2f0 != 0 && var_2f0 != 0
        {
            let var_460_1: i64 = -0x7fffffffffffffff;
            
            loop
            {
                let mut rax_16: i64;
                let mut rdx_7: u64;
                rax_16 = uu_join::State::get_current_key::h6b22667ac5a703a7(&var_3c0);
                let mut rax_17: i64;
                let mut rdx_8: u64;
                rax_17 = uu_join::State::get_current_key::h6b22667ac5a703a7(&var_360);
                let rax_18: i8 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(rbx_1, 
                    rax_16, rdx_7, rax_17, rdx_8);
                
                if rax_18 == 0
                {
                    uu_join::State::extend::h9f5126199f367c57(&var_4c0, &var_3c0, &var_1a0);
                    
                    if var_4c0 == var_460_1
                    {
                        result = *var_4c0[8];
                        
                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) != 0
                        {
                            let result_9: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, var_4b0);
                            result = result_9;
                        }
                        
                        goto 'label_470025;
                    }
                    
                    var_420 = var_4c0;
                    uu_join::State::extend::h9f5126199f367c57(&var_4c0, &var_360, &var_1a0);
                    
                    if var_4c0 == var_460_1
                    {
                        result = *var_4c0[8];
                        
                        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) != 0
                        {
                            let result_10: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, var_4b0);
                            result = result_10;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_420);
                        goto 'label_470025;
                    }
                    
                    let mut var_4a0: i64;
                    let var_3d0_1: i128 = var_4a0;
                    let var_3e0_1: i128 = var_4b0;
                    var_3f0 = var_4c0;
                    let mut rax_23: i64;
                    
                    if *arg5.byte_offset(0x5a) != 0
                    {
                        rax_23 = uu_join::State::combine::he1c3f6ec163eb0f7(&var_3c0, &var_488, 
                            &var_360, &var_300);
                    }
                    
                    if *arg5.byte_offset(0x5a) != 0 && rax_23 != 0
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_3f0);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_420);
                        goto 'label_470025;
                    }
                    
                    var_4a0 = var_4a0;
                    var_4b0 = var_4b0;
                    var_4c0 = var_420;
                    let mut rbx_3: fn(arg1: *mut c_void) -> i64;
                    rbx_3 = 1;
                    uu_join::State::reset::h80c820df90bbe344(&var_3c0, &var_4c0);
                    var_4a0 = var_3d0_1;
                    var_4b0 = var_3e0_1;
                    var_4c0 = var_3f0;
                    uu_join::State::reset::h80c820df90bbe344(&var_360, &var_4c0);
                }
                else
                {
                    if rax_18 != 1
                    {
                        let mut result_6: *mut i128;
                        let mut rdx_16: *mut i64;
                        result_6 = uu_join::State::skip_line::h163df7266a805834(&var_3c0, &var_488, 
                            &var_1a0, &var_300);
                        result = result_6;
                        
                        if result_6 != 0
                        {
                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) == 0
                            {
                                goto 'label_470025;
                            }
                            
                            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_16);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_16);
                    }
                    else
                    {
                        let mut result_5: *mut i128;
                        let mut rdx_11: *mut i64;
                        result_5 = uu_join::State::skip_line::h163df7266a805834(&var_360, &var_488, 
                            &var_1a0, &var_300);
                        result = result_5;
                        
                        if result_5 != 0
                        {
                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) == 0
                            {
                                goto 'label_470025;
                            }
                            
                            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_11);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_11);
                    }
                    
                    *var_368_1[3] = 1;
                    *var_308_1[3] = 1;
                }
                
                if var_2f0 == 0
                {
                    goto 'label_46feed;
                }
                
                if var_2f0 == 0
                {
                    goto 'label_46feed;
                }
            }
            
            goto 'label_47001d;
        }
        
        'label_46feed:
        let mut result_7: *mut i128;
        let mut rdx_18: *mut i64;
        result_7 =
            uu_join::State::finalize::hd2bfe30b3763388f(&var_3c0, &var_488, &var_1a0, &var_300);
        result = result_7;
        
        if result_7 != 0
        {
            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) == 0
            {
                goto 'label_470025;
            }
            
            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_18);
            'label_47001d:
            result = result_11;
            goto 'label_470025;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_18);
        let mut result_8: *mut i128;
        let mut rdx_20: *mut i64;
        result_8 =
            uu_join::State::finalize::hd2bfe30b3763388f(&var_360, &var_488, &var_1a0, &var_300);
        result = result_8;
        
        if result_8 != 0
        {
            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) == 0
            {
                goto 'label_470025;
            }
            
            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_20);
            goto 'label_47001d;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_20);
        
        if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_488) != 0
        {
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            goto 'label_46ffbe;
        }
        
        if (*var_368_1[2] | *var_308_1[2]) != 0
        {
            let mut rax_39: i64;
            let mut rdx_22: i64;
            rax_39 = uucore::execution_phrase::h7a36a698673d06ab();
            var_3f0 = rax_39;
            let var_3e8_1: i64 = rdx_22;
            var_420 = &var_3f0;
            let var_418_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
            var_4c0 = &data_5325f0;
            *var_4c0[8] = 2;
            let var_4a0_1: i64 = 0;
            let var_4b0_1: *mut *mut i64 = &var_420;
            let var_4a8_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_4c0);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&var_488);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..MultiByteSep$GT$$GT$::h8a3c31f87c643312(&var_300);
        core::ptr::drop_in_place$LT$uu_join..Input$LT$uu_join..MultiByteSep$GT$$GT$::h2bbc03a57292d429(&var_1a0);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_360);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_3c0);
        r14_5 = &arg5[3];
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&arg5[6]);
        
        if var_4d1_1 != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(
                arg5);
        }
        
        result = nullptr;
    }
    else
    {
        rbx = 1;
        'label_470082:
        core::ptr::drop_in_place$LT$uu_join..MultiByteSep$GT$::hf74166ddf105f89f(arg6);
        'label_470090:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&arg5[6]);
        
        if rbx != 0
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(
                arg5);
        }
        
        r14_5 = &arg5[3];
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(r14_5);
    result
}
