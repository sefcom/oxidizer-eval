
  fn uu_du::du::ha667a9e24cfc9f10(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: i64, arg5: *mut i64, arg6: *mut i64) -> *mut i64

{
    if arg2[0x10] == 0
    {
        'label_4f287c:
        memcpy(arg1, arg2, 0x90);
    }
    else
    {
        let mut var_208: i64;
        std::fs::read_dir::h62350172118b109c(&var_208, &arg2[8]);
        let rdi_1: i64 = var_208;
        let var_200: i8;
        let mut var_3e8: *mut c_void;
        let mut var_3d8: *mut i128;
        let mut var_2c8: [i8; 0x10];
        let mut var_2c0: i64;
        let mut var_2b8: *mut i128;
        
        if var_200 != 2
        {
            let mut var_3f8: i64 = rdi_1;
            let var_3f0_1: i8 = var_200;
            let rcx: i64 = *arg3.byte_offset(8);
            let rdx_2: i64 = *arg3.byte_offset(0x10) * 0x38 + rcx;
            let rcx_1: i8 = *arg3.byte_offset(0x34);
            let rcx_2: i8 = *arg3.byte_offset(0x33);
            let rcx_3: i8 = *arg3.byte_offset(0x30);
            let rcx_4: i8 = *arg3.byte_offset(0x32);
            let rax_6: i8 = *arg3.byte_offset(0x31);
            
            loop
            {
                let mut var_110: i64;
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_110, &var_3f8);
                
                if var_110 == 0
                {
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&var_3f8);
                    goto 'label_4f287c_1;
                }
                
                let var_108: i64;
                let mut var_3e0: i64;
                let mut var_3d0: *mut *mut c_void;
                
                if var_108 == 0
                {
                    var_3d8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    var_3d0 = &data_586a88;
                    var_3e0 = 0;
                    var_3e8 = 2;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, arg6, 
                        &var_3e8);
                    
                    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110)) == 0xffff
                    {
                        continue;
                    }
                    else
                    {
                        let rbx_3: *mut c_void = var_2c8[0];
                        memcpy(&var_3d8, &var_2b8, 0x90);
                        let var_3e0_3: i64 = var_2c0;
                        var_3e8 = rbx_3;
                        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                        arg1[1] = 0;
                        *arg1 = 2;
                    }
                }
                else
                {
                    let mut var_320: i64 = var_108;
                    let var_100: i64;
                    let var_318_1: i64 = var_100;
                    let var_e8: i64;
                    let var_300_1: i64 = var_e8;
                    let var_f8: i128;
                    let var_310_1: i128 = var_f8;
                    let mut var_348: ();
                    std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_348, &var_320);
                    let var_340: *mut i8;
                    let var_338: size_t;
                    let mut var_c8: [i8; 0x10];
                    uu_du::Stat::new::h9e91ef33e1f296e6(&var_c8, var_340, var_338, &var_320, arg3);
                    let mut rax_27: *mut i128;
                    
                    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_c8, *data_40ef80)) != 0xffff
                    {
                        memcpy(&var_208, &var_c8, 0x90);
                        let mut var_2f8: i64 = rcx;
                        let var_2f0_1: i64 = rdx_2;
                        
                        loop
                        {
                            let rax_16: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbb4494b75e1b7e30(&var_2f8);
                            let mut var_2b0: *mut *mut c_void;
                            
                            if rax_16 != 0
                            {
                                let var_1c0: i64;
                                let var_1b8: size_t;
                                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(
                                    &var_3e8, var_1c0, var_1b8);
                                let mut var_2e8: *mut *mut [i8; 0x10];
                                let mut var_2e0: fn(arg1: *mut i64, arg2: *mut c_void) -> i64;
                                
                                if glob::Pattern::matches::hb817b847971d5388(rax_16, var_3e0, 
                                    var_3d8) != 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&var_3e8);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&var_3e8);
                                    let mut var_e0: ();
                                    std::fs::DirEntry::file_name::habdd235db90dd152(&var_e0, 
                                        &var_320);
                                    std::sys::os_str::bytes::Buf::into_string::h7b5acb763c5a1ded(
                                        &var_3e8, &var_e0);
                                    var_2b0 = var_3d0;
                                    var_2c0 = var_3e0;
                                    var_2c8[0] = var_3e8;
                                    core::result::Result$LT$T$C$E$GT$::unwrap::hbe98b57ab5f25fd3(
                                        &var_2e8, &var_2c8);
                                    let var_2d8: i64;
                                    
                                    if glob::Pattern::matches::hb817b847971d5388(rax_16, var_2e0, 
                                        var_2d8) != 0
                                    {
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_2e8);
                                    }
                                    else
                                    {
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_2e8);
                                        continue;
                                    }
                                }
                                
                                if rcx_1 != 0
                                {
                                    var_2c8[0] = 1;
                                    var_2c0 = var_1c0;
                                    var_2b0 = 1;
                                    let mut var_2d0: *mut [i8; 0x10] = &var_2c8;
                                    var_2e8 = &var_2d0;
                                    var_2e0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50e55b5d7d795045;
                                    var_3e8 = &data_584380;
                                    var_3e0 = 2;
                                    let var_3c8_1: i64 = 0;
                                    var_3d8 = &var_2e8;
                                    var_3d0 = 1;
                                    std::io::stdio::_print::he918bceb0c89db46(&var_3e8);
                                }
                                
                                'label_4f2795:
                                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(
                                    &var_208);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_348);
                                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&var_320);
                                break;
                            }
                            
                            let var_1e8: i64;
                            
                            if (var_208 | var_200) != 0
                            {
                                let var_1f8: [i32; 0x4];
                                let mut var_228: [i32; 0x4] = var_1f8;
                                
                                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd97e7f5240db6501(arg5, &var_228) != 0
                                {
                                    if rcx_2 == 0
                                    {
                                        goto 'label_4f2795;
                                    }
                                    
                                    if rcx_3 == 0
                                    {
                                        arg2[0xd] += 1;
                                        goto 'label_4f2795;
                                    }
                                }
                                
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4a8fe37a6ecf7570(arg5, var_228[0], var_228[2], var_1e8);
                            }
                            
                            let var_188: i8;
                            
                            if var_188 == 0
                            {
                                arg2[0xd] += 1;
                                let var_1b0: [i32; 0x4];
                                *arg2.byte_offset(0x58) =
                                    _mm_add_epi64(*arg2.byte_offset(0x58), var_1b0);
                                
                                if rcx_3 == 0
                                {
                                    core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(
                                        &var_208);
                                    goto 'label_4f22ee;
                                }
                                
                                memcpy(&var_3e8, &var_208, 0x90);
                                let var_358_2: i64 = arg4 + 1;
                                std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, 
                                    arg6, &var_3e8);
                                
                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110))
                                    == 0xffff
                                {
                                    goto 'label_4f22ee;
                                }
                                
                                let rbx_6: *mut c_void = var_2c8[0];
                                memcpy(&var_3d8, &var_2b8, 0x90);
                                let var_3e0_6: i64 = var_2c0;
                                var_3e8 = rbx_6;
                                rax_27 =
                                    alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                                goto 'label_4f2926;
                            }
                            
                            if rcx_4 != 0 && var_208 == 1 && *arg2 == 1 && var_1e8 != arg2[4]
                            {
                                goto 'label_4f2795;
                            }
                            
                            memcpy(&var_3e8, &var_208, 0x90);
                            uu_du::du::ha667a9e24cfc9f10(&var_2c8, &var_3e8, arg3, arg4 + 1, arg5, 
                                arg6);
                            let temp0_10: u32 =
                                _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, *data_40ef80));
                            rax_27 = var_2b8;
                            
                            if temp0_10 == 0xffff
                            {
                                goto 'label_4f2926;
                            }
                            
                            let rcx_10: *mut c_void = var_2c8[0];
                            let var_158_1: [i32; 0x4] = var_2b0;
                            let var_270: [i8; 0x10];
                            let var_260: i64;
                            
                            if rax_6 == 0
                            {
                                *arg2.byte_offset(0x58) =
                                    _mm_add_epi64(*arg2.byte_offset(0x58), var_270);
                                arg2[0xd] += var_260;
                            }
                            
                            let var_280: [i32; 0x4];
                            let var_3a0_1: [i32; 0x4] = var_280;
                            let var_290: [i32; 0x4];
                            let var_3b0_1: [i32; 0x4] = var_290;
                            let var_2a0: [i32; 0x4];
                            let var_3c0_1: [i32; 0x4] = var_2a0;
                            var_3d0 = var_158_1;
                            let var_248: [i32; 0x4];
                            let var_368_1: [i32; 0x4] = var_248;
                            let var_258: [i32; 0x4];
                            let var_378_1: [i32; 0x4] = var_258;
                            var_3e0 = var_2c0;
                            var_3e8 = rcx_10;
                            var_3d8 = rax_27;
                            let var_390_1: [i8; 0x10] = var_270;
                            let var_380_1: i64 = var_260;
                            let var_358_1: i64 = arg4 + 1;
                            std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, 
                                arg6, &var_3e8);
                            
                            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110))
                                == 0xffff
                            {
                                goto 'label_4f22ee;
                            }
                            
                            let rbx_5: *mut c_void = var_2c8[0];
                            memcpy(&var_3d8, &var_2b8, 0x90);
                            let var_3e0_5: i64 = var_2c0;
                            var_3e8 = rbx_5;
                            rax_27 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                            goto 'label_4f2926;
                        }
                        
                        continue;
                    }
                    else
                    {
                        var_3d8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6097e5bae67e7f0a();
                        var_3d0 = &data_5843f0;
                        var_3e0 = 0;
                        var_3e8 = 2;
                        std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, arg6, 
                            &var_3e8);
                        
                        if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110)) != 0xffff
                        {
                            let rbx_4: *mut c_void = var_2c8[0];
                            memcpy(&var_3d8, &var_2b8, 0x90);
                            let var_3e0_4: i64 = var_2c0;
                            var_3e8 = rbx_4;
                            rax_27 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                            'label_4f2926:
                            arg1[2] = rax_27;
                            arg1[1] = 0;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(
                                &var_348);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(
                                &var_320);
                        }
                        else
                        {
                            'label_4f22ee:
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(
                                &var_348);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(
                                &var_320);
                            continue;
                        }
                    }
                }
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&var_3f8);
                break;
            }
            
            core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(arg2);
        }
        else
        {
            var_3d8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h48a9c401437e4328(rdi_1, &arg2[8]);
            let var_3d0_1: *mut *mut c_void = &data_5843f0;
            let var_3e0_1: i64 = 0;
            var_3e8 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, arg6, &var_3e8);
            
            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110)) == 0xffff
            {
                'label_4f287c_1:
                memcpy(arg1, arg2, 0x90);
            }
            else
            {
                let rbx_2: *mut c_void = var_2c8[0];
                memcpy(&var_3d8, &var_2b8, 0x90);
                let var_3e0_2: i64 = var_2c0;
                var_3e8 = rbx_2;
                arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                arg1[1] = 0;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(arg2);
            }
        }
    }
    
    arg1
}
