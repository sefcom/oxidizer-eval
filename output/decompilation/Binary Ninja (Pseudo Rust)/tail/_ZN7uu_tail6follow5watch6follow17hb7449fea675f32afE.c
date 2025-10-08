
  fn uu_tail::follow::watch::follow::hb7449fea675f32af(arg1: *mut i32, arg2: *mut c_void) -> u64

{
    let rbp: u32 = *arg2.byte_offset(0x48);
    let rax: i8 = uu_tail::follow::files::FileHandling::no_files_remaining::hdacea64a27534677(
        &arg1[0xe], rbp);
    let mut rax_1: i8;
    
    if rax != 0
    {
        rax_1 = uu_tail::follow::files::FileHandling::only_stdin_remaining::h3f4a838c6c931811(
            &arg1[0xe]);
    }
    
    let mut result: u64;
    let mut var_270: i128;
    let mut var_260: *mut c_void;
    let mut var_1f8: i128;
    
    if rax != 0 && rax_1 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_270, "no files remaining \ndirectory c…", 0x12);
        let var_1e8_2: *mut c_void = var_260;
        var_1f8 = var_270;
        let var_1e0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1f8);
    }
    else
    {
        let var_204_1: i8 = rbp;
        let mut r12: *mut i32 = arg1;
        let mut rax_2: i32 = r12[0x22];
        let mut rbp_1: u64 = *arg2.byte_offset(0x4c);
        let rcx_1: i8 = *arg2.byte_offset(0x4a);
        let rcx_2: i64 = *arg2.byte_offset(0x30);
        let rcx_3: i32 = *arg2.byte_offset(0x38);
        let var_200_1: i32 = rax_2;
        let var_2b9_1: i8 = rbp_1;
        
        if rbp_1 == 2
        {
            goto 'label_4a523f;
        }
        
        loop
        {
            if rax_2 != 0
                && uu_tail::platform::unix::ProcessChecker::is_dead::hb09aad58966101f3(var_200_1)
                != 0
            {
                result = 0;
                goto 'label_4a58b9;
            }
            
            'label_4a523f:
            let rax_4: i8 = *r12.byte_offset(0x8e);
            let mut var_258: i64;
            let mut var_238: *mut *mut [i8; 0xa4];
            let mut var_1e8: *const *mut *mut [i8; 0xa4];
            let mut var_1e0: i32;
            let mut var_1d8: i128;
            
            if rax_4 == 2 || (rax_4 & 1) == 0 || arg1[0x23] != 1
            {
                'label_4a5525:
                let rsi_9: i64 = *arg1;
                
                if rsi_9 != 3
                {
                    std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h6504311de0d8ae9f(&var_270, 
                        rsi_9, *arg1.byte_offset(8), rcx_2, rcx_3);
                    let mut r14_2: i64 = var_270;
                    let mut var_298: i64 = 0;
                    let mut result_4: *mut c_void = 8;
                    let var_288_1: i64 = 0;
                    let var_2a0_2: i32 = r14_2;
                    let mut var_2a8_1: i8;
                    let mut var_250: i128;
                    let mut result_3: *mut c_void;
                    let var_240: i64;
                    let mut var_140: *mut [i8; 0xa4];
                    
                    if r14_2 - 1 > 6
                    {
                        'label_4a58de:
                        let var_1c8_1: i64 = var_240;
                        let var_1d8_1: i128 = var_250;
                        var_1e8 = var_260;
                        var_1f8 = var_270;
                        var_140 = &var_1f8;
                        let var_138_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h6dbce4ad7dfddfbd;
                        var_238 = &data_573870;
                        let var_230_3: i64 = 1;
                        let var_218_1: i64 = 0;
                        let var_228_1: *mut *mut [i8; 0xa4] = &var_140;
                        let mut var_220_1: i64 = 1;
                        let mut var_110: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_110, 
                            &var_238);
                        var_220_1 = 1;
                        var_238 = var_110;
                        let var_100: i64;
                        let var_228_2: i64 = var_100;
                        result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_238);
                        core::ptr::drop_in_place$LT$notify..error..Error$GT$::hf2995e16b4f1d266(
                            &var_1f8);
                        r14_2 = 0;
                        var_2a8_1 = 0;
                        'label_4a5830:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                        
                        if (!var_2a0_2 & 6) == 0
                        {
                            break;
                        }
                        
                        if r14_2 != 0
                        {
                            core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::h28461622da291443(&var_270);
                        }
                    }
                    else
                    {
                        match r14_2
                        {
                            1 =>
                            {
                                if std::io::error::Error::kind::h135fe00c4e7365f3(*var_270[8]) != 0
                                {
                                    goto 'label_4a58de;
                                }
                                
                                if var_240 != 0
                                {
                                    let rbx_3: *mut c_void = *var_250[8];
                                    
                                    if uu_tail::follow::files::FileHandling::contains_key::h35489a1a5bc2cd52(&arg1[0xe], *rbx_3.byte_offset(8), *rbx_3.byte_offset(0x10))
                                        != 0
                                    {
                                        if *arg1 == 3
                                        {
                                            core::option::unwrap_failed::h893f57cb7db71cb7();
                                            /* no return */
                                        }
                                        
                                        (*(*arg1.byte_offset(0x18) + 0x20))(&var_1f8, 
                                            *arg1.byte_offset(0x10), *rbx_3.byte_offset(8), 
                                            *rbx_3.byte_offset(0x10));
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$notify..error..Error$GT$$GT$::h00c92e5e8c601890(&var_1f8);
                                    }
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_250);
                                r14_2 = 1;
                                result_3 = 8;
                                rbp_1 = 0;
                                var_2a8_1 = 0;
                                
                                if var_2b9_1 != 2 && *arg1.byte_offset(0x8d) != 0
                                {
                                    goto 'label_4a5735;
                                }
                                
                                goto 'label_4a577e;
                            }
                            2 | 3 | 4 =>
                            {
                                goto 'label_4a58de;
                            }
                            5 =>
                            {
                                var_238 = &data_573510;
                                let var_230_4: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_1f8 = &data_573850;
                                *var_1f8[8] = 2;
                                var_1d8 = 0;
                                let var_1e8_3: *const *mut *mut [i8; 0xa4] = &var_238;
                                var_1e0 = 1;
                                rbp_1 = 1;
                                r14_2 = 1;
                                let mut var_128: i128;
                                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(
                                    &var_128, &var_1f8);
                                let var_1e0_2: i32 = 1;
                                var_1f8 = var_128;
                                let var_118: i64;
                                let var_1e8_4: i64 = var_118;
                                rbp_1 = 1;
                                r14_2 = 1;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1f8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                var_2a8_1 = 1;
                                core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::h28461622da291443(&var_270);
                            }
                            6 =>
                            {
                                result_3 = 8;
                                
                                if var_258 == 0
                                {
                                    'label_4a5700:
                                    rbp_1 = 0;
                                }
                                else
                                {
                                    if uu_tail::follow::files::FileHandling::contains_key::h35489a1a5bc2cd52(&arg1[0xe], *var_260.byte_offset(8), 
                                        *var_260.byte_offset(0x10)) == 0
                                    {
                                        goto 'label_4a5700;
                                    }
                                    
                                    uu_tail::follow::watch::Observer::handle_event::hd08bd6b67fb66ec6(&var_1f8, arg1, &*var_270[8], var_204_1);
                                    let r14_3: i64 = var_1f8;
                                    result_3 = *var_1f8[8];
                                    rbp_1 = var_1e8;
                                    
                                    if -(r14_3) == -0x8000000000000000
                                    {
                                        core::ptr::drop_in_place$LT$notify_types..event..Event$GT$::hb202190ad9c88fba(&*var_270[8]);
                                        goto 'label_4a5bbd;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                    var_298 = r14_3;
                                    result_4 = result_3;
                                    let var_288_2: u64 = rbp_1;
                                }
                                
                                core::ptr::drop_in_place$LT$notify_types..event..Event$GT$::hb202190ad9c88fba(&*var_270[8]);
                                var_2a8_1 = 1;
                                
                                if var_2b9_1 == 2 || *arg1.byte_offset(0x8d) == 0
                                {
                                    goto 'label_4a577e;
                                }
                                
                                goto 'label_4a5735;
                            }
                            7 =>
                            {
                                let rax_25: i8 = *var_270[8];
                                
                                if rax_25 != 0
                                {
                                    var_140 = rax_25;
                                    var_238 = &var_140;
                                    let var_230_5: fn(arg1: *mut i8, arg2: i64) -> i64 = _$LT$std..sync..mpsc..RecvTimeoutError$u20$as$u20$core..fmt..Display$GT$::fmt::h2b204bd90ae7c737;
                                    var_1f8 = &data_573880;
                                    *var_1f8[8] = 1;
                                    var_1d8 = 0;
                                    let var_1e8_5: *const *mut *mut [i8; 0xa4] = &var_238;
                                    var_1e0 = 1;
                                    rbp_1 = 1;
                                    r14_2 = 1;
                                    let mut var_f8: i128;
                                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(
                                        &var_f8, &var_1f8);
                                    let var_1e0_3: i32 = 1;
                                    var_1f8 = var_f8;
                                    let var_e8: i64;
                                    let var_1e8_6: i64 = var_e8;
                                    rbp_1 = 1;
                                    r14_2 = 1;
                                    result_3 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(
                                        &var_1f8);
                                    'label_4a5bbd:
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                    result = result_3;
                                    break;
                                    break;
                                }
                                
                                var_2a8_1 = 1;
                                result_3 = 8;
                                rbp_1 = 0;
                                r14_2 = 1;
                                
                                if var_2b9_1 == 2 || *arg1.byte_offset(0x8d) == 0
                                {
                                    goto 'label_4a577e;
                                }
                                
                                'label_4a5735:
                                uu_tail::follow::files::FileHandling::keys::h496a1b83376a9d98(
                                    &var_1f8, &arg1[0xe]);
                                core::iter::traits::iterator::Iterator::collect::h80ad1b99345411f1(
                                    &var_238, &var_1f8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                let var_228: u64;
                                rbp_1 = var_228;
                                let var_288_3: u64 = rbp_1;
                                var_298 = var_238;
                                result_3 = result_4;
                                'label_4a577e:
                                let rbp_2: *mut c_void = result_3.byte_offset(rbp_1 * 0x18);
                                'label_4a5790:
                                let mut result_5: *mut c_void = result_3.byte_offset(0x18);
                                
                                if result_3 == rbp_2
                                {
                                    result_5 = result_3;
                                }
                                
                                if result_3 == rbp_2 || result_3 == 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                    r12 = arg1;
                                    
                                    if (!var_2a0_2 & 6) != 0
                                    {
                                        core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::h28461622da291443(&var_270);
                                    }
                                    
                                    rax_2 = r12[0x22];
                                    
                                    if var_2b9_1 == 2
                                    {
                                        goto 'label_4a523f;
                                    }
                                    
                                    continue;
                                }
                                else
                                {
                                    uu_tail::follow::files::FileHandling::tail_file::h556ffa1173747618(&var_1f8, &arg1[0xe], *result_3.byte_offset(8), 
                                        *result_3.byte_offset(0x10), rcx_1);
                                    result = var_1f8;
                                    result_3 = result_5;
                                    
                                    if result == 0
                                    {
                                        goto 'label_4a5790;
                                    }
                                    
                                    r14_2 = 1;
                                }
                                
                                goto 'label_4a5830;
                            }
                        }
                    }
                    
                    if var_2a8_1 == 0
                    {
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_250);
                    break;
                }
            }
            else
            {
                let rax_7: i64 = *arg1.byte_offset(0x30);
                
                if rax_7 == 0
                {
                    goto 'label_4a5525;
                }
                
                let r13_1: i64 = *arg1.byte_offset(0x28);
                let mut r14_1: i64 = 0;
                'label_4a52c2:
                *(r13_1 + r14_1 + 0x10);
                std::fs::metadata::h5c248dd9820946eb(&var_1f8, *(r13_1 + r14_1 + 8));
                let rbx_1: i32 = var_1f8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_1f8);
                
                if rbx_1 == 2
                {
                    'label_4a52ae:
                    r14_1 += 0x18;
                    
                    if rax_7 * 0x18 != r14_1
                    {
                        goto 'label_4a52c2;
                    }
                    
                    goto 'label_4a5525;
                }
                
                let rax_10: *mut c_void =
                    uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(&arg1[0xe], 
                    *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10));
                *(r13_1 + r14_1 + 0x10);
                std::fs::metadata::h5c248dd9820946eb(&var_1f8, *(r13_1 + r14_1 + 8));
                let mut var_e0: ();
                core::result::Result$LT$T$C$E$GT$::unwrap::h12e26e28373195d7(&var_e0, &var_1f8);
                let var_a8: i32;
                let rax_12: i32 = var_a8 & 0xf000;
                
                if rax_12 != 0x1000 && rax_12 != 0x8000
                {
                    if rax_12 == 0x2000 && *rax_10.byte_offset(0xc8) == 0
                    {
                        goto 'label_4a5363;
                    }
                    
                    goto 'label_4a52ae;
                }
                
                if *rax_10.byte_offset(0xc8) != 0
                {
                    goto 'label_4a52ae;
                }
                
                'label_4a5363:
                let mut rax_13: i64;
                let mut rdx_4: i64;
                rax_13 = uucore::util_name::h074417a1e6395129();
                var_270 = rax_13;
                *var_270[8] = rdx_4;
                var_238 = &var_270;
                let var_230_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_1f8 = &data_5734a0;
                *var_1f8[8] = 2;
                var_1d8 = 0;
                let var_1e8_1: *const *mut *mut [i8; 0xa4] = &var_238;
                var_1e0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1f8);
                var_270 = 0;
                *var_270[8] = *rax_10.byte_offset(0xb8);
                var_260 = *rax_10.byte_offset(0xc0);
                var_258 = 1;
                var_238 = &var_270;
                let var_230_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1f8 = &data_5735d0;
                *var_1f8[8] = 2;
                var_1d8 = 0;
                var_1e8 = &var_238;
                var_1e0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1f8);
                uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10), &var_e0);
                let mut result_1: u64;
                let mut rdx_7: u64;
                result_1 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10));
                result = result_1;
                
                if result_1 != 0
                {
                    goto 'label_4a58b9;
                }
                
                uu_tail::follow::files::FileHandling::tail_file::h556ffa1173747618(&var_1f8, 
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10), rcx_1);
                result = var_1f8;
                
                if result != 0
                {
                    goto 'label_4a58b9;
                }
                
                if *arg1 != 3
                {
                    let mut result_2: u64;
                    result_2 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(
                        *arg1.byte_offset(0x10), *arg1.byte_offset(0x18), *(r13_1 + r14_1 + 8), 
                        *(r13_1 + r14_1 + 0x10));
                    result = result_2;
                    
                    if result_2 != 0
                    {
                        goto 'label_4a58b9;
                    }
                    
                    goto 'label_4a52ae;
                }
            }
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    'label_4a58b9:
    core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::hdbfc2663e25cdaba(arg1);
    result
}
