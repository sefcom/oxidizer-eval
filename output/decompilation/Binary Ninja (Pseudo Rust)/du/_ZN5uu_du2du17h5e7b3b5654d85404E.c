
  fn uu_du::du::h5e7b3b5654d85404(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: i64, arg5: *mut i64, arg6: *mut i64) -> *mut i64

{
    let mut r15: *mut i8 = arg2;
    
    if arg2[0x80] == 0
    {
        'label_497289:
        memcpy(arg1, r15, 0x90);
    }
    else
    {
        let mut rbx_1: *mut c_void = arg3;
        let var_448_1: *mut i8 = r15;
        let mut var_178: i64;
        std::fs::read_dir::h7286bca7a7309382(&var_178, &r15[0x40]);
        let var_170: i8;
        let mut var_408: *mut c_void;
        let mut var_3f8: u64;
        let mut var_318: [i8; 0x10];
        let mut var_308: u64;
        
        if var_170 != 2
        {
            let mut var_368: i64 = var_178;
            let var_360_1: i8 = var_170;
            let rax_6: i64 = *rbx_1.byte_offset(8);
            let rcx_1: i64 = *rbx_1.byte_offset(0x10);
            let mut rdx_2: i64 = 0x38;
            
            if rcx_1 == 0
            {
                rdx_2 = rcx_1;
            }
            
            let rax_8: i8 = *rbx_1.byte_offset(0x34);
            let rax_9: i8 = *rbx_1.byte_offset(0x33);
            let rax_10: i8 = *rbx_1.byte_offset(0x30);
            let mut r13_1: i64 = *arg6;
            let mut rbp_1: *mut i32 = arg6[1];
            let rax_12: i8 = *rbx_1.byte_offset(0x32);
            let rax_13: i8 = *rbx_1.byte_offset(0x31);
            let var_438_1: *mut c_void = rbx_1;
            let var_418_1: i64 = r13_1;
            let var_420_1: *mut i32 = rbp_1;
            
            loop
            {
                let mut var_208: i32;
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_208, &var_368);
                
                if var_208 != 1
                {
                    r15 = var_448_1;
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hbe7e7849fcc03c6e(&var_368);
                    goto 'label_497289_1;
                }
                
                let var_200: i64;
                let mut var_400: i64;
                let mut var_3f0: *mut *mut c_void;
                
                if var_200 == 0
                {
                    var_3f8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    var_3f0 = &data_546d50;
                    var_400 = 0;
                    var_408 = 2;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, r13_1, 
                        rbp_1, &var_408);
                    
                    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0)) == 0xffff
                    {
                        continue;
                    }
                    else
                    {
                        let rbx_6: *mut c_void = var_318[0];
                        let r14_3: i64 = var_318[8];
                        memcpy(&var_3f8, &var_308, 0x90);
                        let var_400_3: i64 = r14_3;
                        var_408 = rbx_6;
                        r15 = var_448_1;
                        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                        arg1[1] = 0;
                        *arg1 = 2;
                    }
                }
                else
                {
                    let mut var_358: i64 = var_200;
                    let var_1f8: i64;
                    let var_350_1: i64 = var_1f8;
                    let var_1e0: i64;
                    let var_338_1: i64 = var_1e0;
                    let var_1f0: i128;
                    let var_348_1: i128 = var_1f0;
                    let mut var_330: ();
                    std::fs::DirEntry::path::hc95af67dccb42f03(&var_330, &var_358);
                    let var_328: i64;
                    let var_320: u64;
                    let mut var_c8: [i8; 0x10];
                    uu_du::Stat::new::hd07a900d361a9fcd(&var_c8, var_328, var_320, &var_358, rbx_1);
                    
                    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_c8, data_41d730)) != 0xffff
                    {
                        memcpy(&var_178, &var_c8, 0x90);
                        let mut var_300: i64;
                        
                        if rcx_1 != 0
                        {
                            let mut rax_23: i64 = rax_6 + rdx_2;
                            let mut r12_1: i64 = rdx_2 - rcx_1 * 0x38;
                            let mut r15_1: i64 = rax_6;
                            
                            loop
                            {
                                let r14_2: i64 = rax_23;
                                let var_130: i64;
                                let var_128: u64;
                                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_408, 
                                    var_130, var_128);
                                let rax_24: i8 = glob::Pattern::matches::ha07a8c317a63e971(r15_1, 
                                    var_400, var_3f8);
                                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hd2b311ea2da27bf0(&var_408);
                                let mut var_248: i128;
                                
                                if rax_24 == 0
                                {
                                    let mut var_e0: ();
                                    std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_e0, 
                                        &var_358);
                                    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_408, 
                                        &var_e0);
                                    let o_1: bool = 0 + -(var_408);
                                    let mut rax_25: i64;
                                    rax_25 = o_1;
                                    let mut rcx_5: i64;
                                    rcx_5 = !o_1;
                                    let zmm0_7: i128 = *(&var_408).byte_offset(rax_25 << 3);
                                    var_248 = zmm0_7;
                                    let rax_26: i64 = (&var_3f8)[rax_25];
                                    let var_238_1: i64 = rax_26;
                                    var_300 = rax_26;
                                    var_318 = zmm0_7;
                                    var_318[0] = rcx_5;
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h0257f6081d27278e(
                                        &var_408, &var_318);
                                    let rax_27: i8 = glob::Pattern::matches::ha07a8c317a63e971(
                                        r15_1, var_400, var_3f8);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_408);
                                    
                                    if rax_27 == 0
                                    {
                                        r12_1 += 0x38;
                                        rax_23 = r14_2 + 0x38;
                                        r15_1 = r14_2;
                                        
                                        if r12_1 == 0x38
                                        {
                                            goto 'label_496e66;
                                        }
                                        
                                        continue;
                                    }
                                }
                                
                                if (rax_8 & 1) == 0
                                {
                                    break;
                                }
                                
                                var_318[0] = 1;
                                var_318[8] = var_130;
                                var_308 = var_128;
                                var_300 = 1;
                                let mut var_250: *mut [i8; 0x10] = &var_318;
                                var_248 = &var_250;
                                *var_248[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5bda38c7e3b28069;
                                var_408 = &data_545c28;
                                var_400 = 2;
                                let var_3e8_1: i64 = 0;
                                var_3f8 = &var_248;
                                var_3f0 = 1;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_408);
                                break;
                            }
                            
                            goto 'label_496b36;
                        }
                        
                        'label_496e66:
                        let rbx_5: i8 = var_178;
                        let var_158: i64;
                        
                        if (rbx_5 & 1) != 0
                        {
                            let var_168: [i32; 0x4];
                            let mut var_228: [i32; 0x4] = var_168;
                            
                            if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h9c4bd3dee43f68bb(arg5, &var_228) == 0
                            {
                                'label_496ee7:
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hfa1827358606e47b(arg5, var_228[0], var_228[2], var_158);
                            }
                            else
                            {
                                if (rax_9 & 1) == 0
                                {
                                    goto 'label_496b36;
                                }
                                
                                if (rax_10 & 1) != 0
                                {
                                    goto 'label_496ee7;
                                }
                                
                                *var_448_1.byte_offset(0x68) += 1;
                                'label_496b36:
                                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(
                                    &var_178);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_330);
                                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(&var_358);
                                rbx_1 = var_438_1;
                                r13_1 = var_418_1;
                                rbp_1 = var_420_1;
                                continue;
                                continue;
                            }
                        }
                        
                        let var_f8: i8;
                        let mut rax_33: u64;
                        
                        if var_f8 == 0
                        {
                            r15 = var_448_1;
                            let var_120: [i32; 0x4];
                            *r15.byte_offset(0x58) = _mm_add_epi64(*r15.byte_offset(0x58), var_120);
                            *r15.byte_offset(0x68) += 1;
                            r13_1 = var_418_1;
                            rbp_1 = var_420_1;
                            
                            if (rax_10 & 1) == 0
                            {
                                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(
                                    &var_c8);
                                rbx_1 = var_438_1;
                                'label_497250:
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_330);
                                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(&var_358);
                                continue;
                                continue;
                            }
                            else
                            {
                                memcpy(&var_408, &var_c8, 0x90);
                                let var_378_2: i64 = arg4 + 1;
                                std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, 
                                    r13_1, rbp_1, &var_408);
                                rbx_1 = var_438_1;
                                
                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0))
                                    == 0xffff
                                {
                                    goto 'label_497250;
                                }
                                
                                let rbx_9: *mut c_void = var_318[0];
                                let r14_6: i64 = var_318[8];
                                memcpy(&var_3f8, &var_308, 0x90);
                                let var_400_6: i64 = r14_6;
                                var_408 = rbx_9;
                                rax_33 =
                                    alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                            }
                        }
                        else
                        {
                            if (rbx_5 & rax_12 & 1) != 0 && (*var_448_1 & 1) != 0
                                && var_158 != *var_448_1.byte_offset(0x20)
                            {
                                goto 'label_496b36;
                            }
                            
                            memcpy(&var_408, &var_c8, 0x90);
                            rbx_1 = var_438_1;
                            r15 = var_448_1;
                            uu_du::du::h5e7b3b5654d85404(&var_318, &var_408, rbx_1, arg4 + 1, arg5, 
                                arg6);
                            r13_1 = var_418_1;
                            rbp_1 = var_420_1;
                            let temp0_11: u32 =
                                _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, data_41d730));
                            rax_33 = var_308;
                            
                            if temp0_11 != 0xffff
                            {
                                let rcx_9: *mut c_void = var_318[0];
                                let rdx_12: i64 = var_318[8];
                                let var_1b8_1: [i32; 0x4] = var_300;
                                let var_2c0: [i8; 0x10];
                                let var_2b0: i64;
                                
                                if (rax_13 & 1) == 0
                                {
                                    *r15.byte_offset(0x58) =
                                        _mm_add_epi64(*r15.byte_offset(0x58), var_2c0);
                                    *r15.byte_offset(0x68) += var_2b0;
                                }
                                
                                let var_2d0: [i32; 0x4];
                                let var_3c0_1: [i32; 0x4] = var_2d0;
                                let var_2e0: [i32; 0x4];
                                let var_3d0_1: [i32; 0x4] = var_2e0;
                                let var_2f0: [i32; 0x4];
                                let var_3e0_1: [i32; 0x4] = var_2f0;
                                var_3f0 = var_1b8_1;
                                let var_298: [i32; 0x4];
                                let var_388_1: [i32; 0x4] = var_298;
                                let var_2a8: [i32; 0x4];
                                let var_398_1: [i32; 0x4] = var_2a8;
                                var_400 = rdx_12;
                                var_408 = rcx_9;
                                var_3f8 = rax_33;
                                let var_3b0_1: [i8; 0x10] = var_2c0;
                                let var_3a0_1: i64 = var_2b0;
                                let var_378_1: i64 = arg4 + 1;
                                std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, 
                                    r13_1, rbp_1, &var_408);
                                
                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0))
                                    == 0xffff
                                {
                                    goto 'label_497250;
                                }
                                
                                let rbx_8: *mut c_void = var_318[0];
                                let r14_5: i64 = var_318[8];
                                memcpy(&var_3f8, &var_308, 0x90);
                                let var_400_5: i64 = r14_5;
                                var_408 = rbx_8;
                                rax_33 =
                                    alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                            }
                        }
                        
                        arg1[2] = rax_33;
                        arg1[1] = 0;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(
                            &var_330);
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(
                            &var_358);
                    }
                    else
                    {
                        var_3f8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h21aee2fec0aab2af();
                        var_3f0 = &data_545c80;
                        var_400 = 0;
                        var_408 = 2;
                        std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, r13_1, 
                            rbp_1, &var_408);
                        
                        if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0)) == 0xffff
                        {
                            goto 'label_497250;
                        }
                        
                        let rbx_7: *mut c_void = var_318[0];
                        let r14_4: i64 = var_318[8];
                        memcpy(&var_3f8, &var_308, 0x90);
                        let var_400_4: i64 = r14_4;
                        var_408 = rbx_7;
                        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                        arg1[1] = 0;
                        *arg1 = 2;
                        r15 = var_448_1;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(
                            &var_330);
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(
                            &var_358);
                    }
                }
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hbe7e7849fcc03c6e(&var_368);
                break;
            }
            
            core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(r15);
        }
        else
        {
            *r15.byte_offset(0x48);
            *r15.byte_offset(0x50);
            var_3f8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0fd947faba14da62();
            let var_3f0_1: *mut *mut c_void = &data_545c80;
            let var_400_1: i64 = 0;
            var_408 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, *arg6, arg6[1], 
                &var_408);
            
            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0)) == 0xffff
            {
                'label_497289_1:
                memcpy(arg1, r15, 0x90);
            }
            else
            {
                let rbx_2: *mut c_void = var_318[0];
                let r14_1: i64 = var_318[8];
                memcpy(&var_3f8, &var_308, 0x90);
                let var_400_2: i64 = r14_1;
                var_408 = rbx_2;
                arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                arg1[1] = 0;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(r15);
            }
        }
    }
    
    arg1
}
