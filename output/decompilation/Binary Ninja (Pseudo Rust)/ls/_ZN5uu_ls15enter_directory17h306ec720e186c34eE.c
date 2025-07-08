
  fn uu_ls::enter_directory::h306ec720e186c34e(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: *mut c_void, arg5: *mut *mut *mut c_void, arg6: *mut i64, arg7: *mut i64, arg8: *mut i64) -> *mut i128

{
    let var_330: i64 = arg2;
    let var_328: i8 = arg3;
    let rax: i8 = *arg4.byte_offset(0xf0);
    let mut var_568: i32;
    let mut var_520: i64;
    let mut var_518: *mut *mut i64;
    let mut var_510: *mut *mut *mut c_void;
    let mut var_4f8: i128;
    let mut var_4e8: *mut i64;
    let mut var_4c8: i128;
    let mut var_4b8: *mut i64;
    let mut var_490: *mut i64;
    let mut var_460: i128;
    let mut var_450: *mut i64;
    let mut var_320: i128;
    let mut var_310: *mut i64;
    let mut rax_1: i8;
    let mut r12: i8;
    
    if rax == 0
    {
        let rax_2: i64 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x260);
        
        if rax_2 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_460, arg1.byte_offset(0x18));
        let var_4e8_1: *mut i64 = var_450;
        var_4f8 = var_460;
        var_460 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_320, 
            "...a Display implementation retu…", 1);
        var_4b8 = var_310;
        var_4c8 = var_320;
        let rax_5: i8 = *arg4.byte_offset(0xeb);
        let rbp_1: u32 = rax_5;
        let mut rbx_2: *mut c_void;
        let mut r15_3: i32;
        rbx_2 = uu_ls::PathData::new::ha3e1f49dfc1f89b1(&var_320, &var_4f8, &var_460, &var_4c8, 
            rbp_1, *arg4.byte_offset(0xf2), 0);
        std::path::Path::join::hb2350fb5456ebb1b(&var_490, *rbx_2.byte_offset(0x20), 
            *rbx_2.byte_offset(0x28), "..a Display implementation retur…");
        var_4c8 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_460, 
            "..a Display implementation retur…", 2);
        var_4e8 = var_450;
        var_4f8 = var_460;
        var_568 = 0;
        r12 = uu_ls::PathData::new::ha3e1f49dfc1f89b1(&var_460, &var_490, &var_4c8, &var_4f8, 
            rbp_1, r15_3, 0);
        memcpy(rax_2, &var_320, 0x130);
        memcpy(rax_2 + 0x130, &var_460, 0x130);
        alloc::slice::hack::into_vec::hcef9121dd0ef8e55(&var_520, rax_2, 2);
        rax_1 = rax_5;
    }
    else
    {
        var_520 = 0;
        var_518 = 8;
        var_510 = nullptr;
        rax_1 = *arg4.byte_offset(0xeb);
        r12 = *arg4.byte_offset(0xf2);
    }
    
    let mut var_508: i64 = arg2;
    let var_500: i8 = arg3;
    let mut var_4b0: fn(arg1: *mut i8, arg2: *mut c_void) -> i64;
    let mut r15_4: *mut i64 = &var_4b0;
    let mut var_528: i64;
    var_528 = rax_1;
    let mut rbx_3: *mut i64 = &var_4f8;
    let mut result: *mut i128;
    
    loop
    {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_4c8, &var_508);
        let mut var_538: i64;
        let mut var_448: *mut i64;
        
        if var_4c8 == 0
        {
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&var_508);
            uu_ls::sort_entries::h9b56d1e19b40eaef(var_518, var_510, arg4);
            
            if *arg4.byte_offset(0xf8) == 1 || *arg4.byte_offset(0xea) != 0
            {
                uu_ls::return_total::h87a8c45b5866afa6(&var_460, var_518, var_510, arg4, arg5);
                let rax_14: i64 = var_460;
                result = *var_460[8];
                r15_4 = var_450;
                
                if rax_14 != -0x8000000000000000
                {
                    var_320 = rax_14;
                    *var_320[8] = result;
                    var_310 = r15_4;
                    var_4c8 = result;
                    *var_4c8[8] = r15_4;
                    var_4f8 = &var_4c8;
                    *var_4f8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                    var_460 = &data_423c10;
                    *var_460[8] = 1;
                    let var_440_1: i64 = 0;
                    var_450 = rbx_3;
                    var_448 = 1;
                    
                    if std::io::Write::write_fmt::h51abc44b465d2e67(arg5, &var_460) == 0
                    {
                        if *arg4.byte_offset(0xee) != 0
                        {
                            uu_ls::dired::add_total::hcf0e71387fbf703c(arg7, var_310);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                            &var_320);
                        goto 'label_5283c3;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_320);
                }
            }
            else
            {
                'label_5283c3:
                let mut result_1: *mut i128;
                let mut rdx_8: *mut i64;
                result_1 = uu_ls::display_items::hbe9721d3f3017f49(var_518, var_510, arg4, arg5, 
                    arg7, arg8, 
                result = result_1;
                
                if result_1 == 0
                {
                    let mut rax_21: *mut c_void;
                    
                    if *arg4.byte_offset(0xe6) != 0
                    {
                        let mut rax_19: i32;
                        rax_19 = rax == 0;
                        var_4f8 = var_518;
                        *var_4f8[8] = (var_510 * 0x130).byte_offset(var_518);
                        let var_4e8_2: u64 = rax_19 * 2;
                        rax_21 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&var_4f8);
                    }
                    
                    if *arg4.byte_offset(0xe6) == 0 || rax_21 == 0
                    {
                        'label_528a77:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&var_520);
                        return nullptr;
                    }
                    
                    let mut rbx_4: *mut c_void = rax_21;
                    var_528 = *arg4.byte_offset(0xee);
                    
                    loop
                    {
                        std::fs::read_dir::h9d938750fa0d5aed(&var_508, rbx_4.byte_offset(0x18));
                        
                        if var_500 != 2
                        {
                            var_538 = var_508;
                            uucore::features::fs::FileInformation::from_path::h569773e274f836e3(
                                &var_460, rbx_4.byte_offset(0x18), *rbx_4.byte_offset(0x128));
                            let r14_3: i64 = *var_460[8];
                            let mut result_4: *mut i128;
                            let mut rdx_18: *mut i64;
                            
                            if var_460 != 0
                            {
                                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                'label_528afd:
                                result = result_4;
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(
                                    &var_538);
                                break;
                            }
                            
                            let mut var_1e8: ();
                            memcpy(&var_1e8, &var_450, 0x88);
                            let mut var_1f0: i64 = r14_3;
                            
                            if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(arg6, &var_1f0) == 0
                            {
                                var_460 = &data_6125b8;
                                *var_460[8] = 1;
                                var_450 = 8;
                                var_448 = {0};
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(arg5, &var_460) != 0
                                {
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto 'label_528afd;
                                }
                                
                                if var_528 != 0
                                {
                                    arg7[6] = 2;
                                    let mut result_2: *mut i128;
                                    result_2 = uu_ls::dired::indent::h541a64321517b8c5(arg5);
                                    result = result_2;
                                    
                                    if result_2 != 0
                                    {
                                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&var_538);
                                        break;
                                        break;
                                    }
                                    
                                    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_460, *rbx_4.byte_offset(0x20), *rbx_4.byte_offset(0x28));
                                    let r14_4: *mut i64 = var_450;
                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_460);
                                    uu_ls::dired::calculate_subdired::h85725549554709aa(arg7, 
                                        r14_4);
                                    arg7[6] = (arg7[6] + r14_4).byte_offset(3);
                                }
                                
                                uu_ls::show_dir_name::h15f4c75d324b24c3(rbx_4, arg5, arg4);
                                var_460 = &data_6125b8;
                                *var_460[8] = 1;
                                var_450 = 8;
                                var_448 = {0};
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(arg5, &var_460) != 0
                                {
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto 'label_528afd;
                                }
                                
                                var_568 = arg7;
                                let mut result_3: *mut i128;
                                result_3 = uu_ls::enter_directory::h306ec720e186c34e(rbx_4, 
                                    var_538, var_500, arg4, arg5, arg6, var_568, arg8);
                                result = result_3;
                                
                                if result_3 != 0
                                {
                                    break;
                                }
                                
                                uucore::features::fs::FileInformation::from_path::h569773e274f836e3(
                                    &var_460, rbx_4.byte_offset(0x18), *rbx_4.byte_offset(0x128));
                                let rbx_5: i64 = *var_460[8];
                                
                                if var_460 != 0
                                {
                                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    break;
                                }
                                
                                memcpy(&*var_320[8], &var_450, 0x88);
                                var_320 = rbx_5;
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h810d94f18f4ab17c(arg6, &var_320);
                            }
                            else
                            {
                                if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(arg5) != 0
                                {
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto 'label_528afd;
                                }
                                
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_320, rbx_4.byte_offset(0x18));
                                var_448 = var_310;
                                var_460 = var_320;
                                var_460 = 5;
                                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2);
                                let mut rax_32: *mut i64;
                                let mut rdx_16: i64;
                                rax_32 = uucore::util_name::h60d842bf27b05e82();
                                var_490 = rax_32;
                                let var_488_3: i64 = rdx_16;
                                var_4c8 = &var_490;
                                *var_4c8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                                let var_4b8_2: *mut i128 = &var_460;
                                var_4b0 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                                var_320 = &data_612588;
                                *var_320[8] = 3;
                                let var_300_3: i64 = 0;
                                var_310 = &var_4c8;
                                let var_308_3: i64 = 2;
                                let mut rdx_17: i64;
                                let mut rsi_24: i64;
                                rdx_17 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_320);
                                core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(
                                    &var_460, rsi_24, rdx_17);
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(
                                    &var_538);
                            }
                        }
                        else
                        {
                            let r14_2: i64 = var_508;
                            var_538 = r14_2;
                            
                            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(arg5) != 0
                            {
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&var_538);
                                break;
                            }
                            
                            var_4c8 = r14_2;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_320, rbx_4.byte_offset(0x18));
                            let var_440_2: *mut i64 = var_310;
                            var_450 = var_320;
                            let rax_27: i8 = *rbx_4.byte_offset(0x129);
                            *var_460[8] = r14_2;
                            *var_460[1] = rax_27;
                            var_460 = 2;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2 - 0);
                            let mut rax_28: *mut i64;
                            let mut rdx_13: i64;
                            rax_28 = uucore::util_name::h60d842bf27b05e82();
                            var_490 = rax_28;
                            let var_488_2: i64 = rdx_13;
                            var_4c8 = &var_490;
                            *var_4c8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                            let var_4b8_1: *mut i128 = &var_460;
                            var_4b0 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                            var_320 = &data_612588;
                            *var_320[8] = 3;
                            let var_300_2: i64 = 0;
                            var_310 = &var_4c8;
                            let var_308_2: i64 = 2;
                            let mut rdx_14: i64;
                            let mut rsi_19: i64;
                            rdx_14 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_320);
                            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(
                                &var_460, rsi_19, rdx_14);
                        }
                        
                        let rax_23: *mut c_void = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h2db1f8cc0d321202(&var_4f8);
                        rbx_4 = rax_23;
                        
                        if rax_23 == 0
                        {
                            goto 'label_528a77;
                        }
                    }
                }
            }
            
            break;
        }
        
        let rax_9: i64 = *var_4c8[8];
        
        if rax_9 == 0
        {
            let mut var_468: *mut i64 = var_4b8;
            
            if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(arg5) != 0
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&var_468);
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&var_508);
                break;
            }
            
            *var_460[8] = var_4b8;
            var_460 = 1;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            let mut rax_13: i64;
            let mut rdx_4: i8;
            rax_13 = uucore::util_name::h60d842bf27b05e82();
            var_538 = rax_13;
            let var_530: i8 = rdx_4;
            var_490 = &var_538;
            let var_488_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
            let var_480_1: *mut i128 = &var_460;
            let var_478_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 =
                _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
            var_320 = &data_612588;
            *var_320[8] = 3;
            let var_300_1: i64 = 0;
            var_310 = &var_490;
            let var_308_1: i64 = 2;
            let mut rdx_5: i64;
            let mut rsi_12: i64;
            rdx_5 = std::io::stdio::_eprint::hcdfeec148c7134f7(&var_320);
            core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&var_460, rsi_12, 
                rdx_5);
        }
        else
        {
            let rcx_2: i64 = r15_4[2];
            var_4e8 = *r15_4;
            var_4f8 = rax_9;
            *var_4f8[8] = var_4b8;
            
            if uu_ls::should_display::h04a8ace30b4ea77e(rbx_3, arg4) == 0
            {
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h7ea99ec2005f12cb(rbx_3);
            }
            else
            {
                std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_490, rbx_3);
                let var_438_1: i64 = rcx_2;
                var_448 = var_4e8;
                var_460 = var_4f8;
                var_460 = 1;
                var_320 = -0x8000000000000000;
                var_568 = 0;
                let mut var_160: ();
                rbx_3 = uu_ls::PathData::new::ha3e1f49dfc1f89b1(&var_160, &var_490, &var_460, 
                    &var_320, var_528, r12, 0);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&var_520, &var_160);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(
        &var_520);
    result
}
