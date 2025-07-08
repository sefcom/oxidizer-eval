
  fn uu_tail::follow::watch::follow::hde16143c14d7b9fc(arg1: *mut i32, arg2: *mut i8) -> *mut i128

{
    let mut rbp: size_t;
    let var_8: size_t = rbp;
    let mut r15: *mut c_void;
    let var_10: *mut c_void = r15;
    let rax: i8 = uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(
        &arg1[0xe], arg2);
    let mut rax_1: i8;
    
    if rax != 0
    {
        rax_1 = uu_tail::follow::files::FileHandling::only_stdin_remaining::h9831c931e4f5678d(
            &arg1[0xe]);
    }
    
    let mut result: *mut i128;
    let mut var_270: i128;
    let var_260: i64;
    let mut var_228: i128;
    
    if rax != 0 && rax_1 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_270);
        let var_218_2: i64 = var_260;
        var_228 = var_270;
        let var_210_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_228);
    }
    else
    {
        let mut r12: *mut i32 = arg1;
        let mut rax_2: i32 = r12[0x22];
        let mut var_234: i32 = rax_2;
        let rcx_1: i8 = arg2[0x4c];
        let rdx_1: i8 = arg2[0x4a];
        let rdx_2: i64 = *arg2.byte_offset(0x30);
        let rdx_3: i32 = *arg2.byte_offset(0x38);
        let mut var_230_1: *mut *mut [i8; 0xe7] = &data_5bc1b8;
        
        if rcx_1 == 2
        {
            goto 'label_506f60;
        }
        
        loop
        {
            if rax_2 != 0
                && uu_tail::platform::unix::ProcessChecker::is_dead::he1a98e91c2c8dfd9(&var_234)
                != 0
            {
                result = nullptr;
                goto 'label_507667;
            }
            
            'label_506f60:
            
            if (*r12.byte_offset(0x8e) & 1) == 0 || r12[0x23] == 0
            {
                goto 'label_5071d5;
            }
            
            let result_9: *mut i8 = *r12.byte_offset(0x28);
            let rcx_2: i64 = *r12.byte_offset(0x30);
            let mut result_8: *mut i8 = result_9;
            let var_2c0_1: *mut c_void = &result_9[rcx_2 * 0x18];
            'label_506fad:
            let rax_4: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h214d277e2b68ee77(&result_8);
            let mut result_6: *mut i128;
            let mut result_2: *mut c_void;
            let mut var_258: i128;
            let mut var_218: *mut *mut i128;
            let mut var_210: i32;
            let mut var_208: i64;
            let mut result_7: *mut i8;
            
            if rax_4 == 0
            {
                r12 = arg1;
                'label_5071d5:
                
                if *r12 != 3
                {
                    std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h1f975a6ba50f2813(&var_270, 
                        r12, rdx_2, rdx_3);
                    let rax_10: i64 = var_270;
                    result_8 = nullptr;
                    let mut result_1: *mut i128 = 8;
                    let mut var_2b8_1: *mut *mut i128 = nullptr;
                    let mut r14_1: i8;
                    let mut var_298: *mut c_void;
                    let mut result_5: *mut i128;
                    let mut r13: *mut c_void;
                    let var_250: i128;
                    let var_240: *mut c_void;
                    let mut var_170: *mut i128;
                    
                    if rax_10 - 1 > 6
                    {
                        'label_507575:
                        let var_1f8_1: *mut c_void = var_240;
                        let var_208_1: i128 = var_250;
                        var_218 = var_260;
                        var_228 = var_270;
                        var_170 = &var_228;
                        let var_168_1: fn(arg1: *mut i64, arg2: *mut c_void) -> u64 = _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hd94546b42760b6fd;
                        result_6 = &data_5bc180;
                        let var_2a0_1: i64 = 1;
                        let var_288_1: i64 = 0;
                        let var_298_1: *mut *mut i128 = &var_170;
                        let mut var_290_1: i64 = 1;
                        let mut var_138: i128;
                        core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_138, 
                            &result_6);
                        var_290_1 = 1;
                        result_6 = var_138;
                        let var_128: i64;
                        let var_298_2: i64 = var_128;
                        result = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&result_6);
                        rbp = 1;
                        core::ptr::drop_in_place$LT$notify..error..Error$GT$::h254f5de2e736f707(
                            &var_228);
                        r14_1 = 1;
                        result_7 = nullptr;
                        rbp = 1;
                    }
                    else
                    {
                        match rax_10
                        {
                            1 =>
                            {
                                if std::io::error::Error::kind::hb2ff5fa058639b3d(*var_270[8]) != 0
                                {
                                    goto 'label_507575;
                                }
                                
                                var_298 = var_240;
                                result_6 = var_250;
                                
                                if var_240 != 0
                                {
                                    let rbx: i64 = *result_2.byte_offset(8);
                                    r15 = *result_2.byte_offset(0x10);
                                    
                                    if uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(&arg1[0xe], rbx, r15) != 0
                                    {
                                        if *r12 == 3
                                        {
                                            core::option::unwrap_failed::h0e11329e76906eaa();
                                            /* no return */
                                        }
                                        
                                        (*(*r12.byte_offset(0x18) + 0x20))(&var_228, 
                                            *r12.byte_offset(0x10), rbx, r15);
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&var_228);
                                    }
                                }
                                
                                rbp = 1;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_6);
                                rbp = 1;
                                result_7 = nullptr;
                                goto 'label_5073b0;
                            }
                            2 | 3 | 4 =>
                            {
                                goto 'label_507575;
                            }
                            5 =>
                            {
                                result_6 = &data_5bbeb0;
                                let var_2a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                var_228 = &data_5bc160;
                                *var_228[8] = 2;
                                var_208 = 0;
                                let var_218_3: *mut *mut i128 = &result_6;
                                var_210 = 1;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                let mut var_150: i128;
                                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(
                                    &var_150, &var_228);
                                let var_210_2: i32 = 1;
                                var_228 = var_150;
                                let var_140: i64;
                                let var_218_4: i64 = var_140;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                result_5 =
                                    alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_228);
                                'label_5077fc:
                                result = result_5;
                                r13 = 1;
                                r14_1 = 0;
                                result_7 = 1;
                                rbp = 1;
                            }
                            6 =>
                            {
                                var_218 = var_258;
                                var_208 = *var_250[8];
                                var_228 = var_270;
                                
                                if var_218 == 0
                                {
                                    goto 'label_507377;
                                }
                                
                                let rax_20: *mut c_void = *var_228[8];
                                
                                if uu_tail::follow::files::FileHandling::contains_key::hb9b0dd7b277f1857(&arg1[0xe], *rax_20.byte_offset(8), *rax_20.byte_offset(0x10))
                                    == 0
                                {
                                    goto 'label_507377;
                                }
                                
                                uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(
                                    &result_6, r12, &var_228, arg2);
                                result_7 = result_6;
                                result = result_2;
                                
                                if result_7 == -0x8000000000000000
                                {
                                    r13 = 1;
                                    result_7 = 1;
                                    core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&var_228);
                                    r13 = 1;
                                    r14_1 = 0;
                                    result_7 = 1;
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                                    result_8 = result_7;
                                    result_1 = result;
                                    var_2b8_1 = var_298;
                                    r12 = arg1;
                                    'label_507377:
                                    result_7 = 1;
                                    core::ptr::drop_in_place$LT$notify..event..Event$GT$::hc14176a2572b9d6e(&var_228);
                                    result_7 = 1;
                                    'label_5073b0:
                                    
                                    if rcx_1 != 2 && *r12.byte_offset(0x8d) != 0
                                    {
                                        uu_tail::follow::files::FileHandling::keys::h4394a3d4fbf32fd4(&var_228, &arg1[0xe]);
                                        let var_e8_1: i64 = var_208;
                                        let var_f8_1: i128 = var_218;
                                        let mut var_108: i128 = var_228;
                                        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he64bcd77bd860359(&var_228, &var_108);
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                                        var_2b8_1 = var_218;
                                        result_8 = var_228;
                                    }
                                    
                                    result_6 = result_1;
                                    result_2 = result_1.byte_offset(var_2b8_1 * 0x18);
                                    'label_507445:
                                    let rax_25: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h214d277e2b68ee77(&result_6);
                                    
                                    if rax_25 == 0
                                    {
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                                        r12 = arg1;
                                        
                                        if (!var_270 & 6) != 0
                                        {
                                            core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&var_270);
                                        }
                                        
                                        rax_2 = r12[0x22];
                                        
                                        if rcx_1 == 2
                                        {
                                            goto 'label_506f60;
                                        }
                                        
                                        continue;
                                    }
                                    else
                                    {
                                        uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(&var_228, &arg1[0xe], *rax_25.byte_offset(8), 
                                            *rax_25.byte_offset(0x10), rdx_1 != 0);
                                        result = var_228;
                                        
                                        if result == 0
                                        {
                                            goto 'label_507445;
                                        }
                                        
                                        r13 = 1;
                                        r14_1 = 0;
                                    }
                                }
                            }
                            7 =>
                            {
                                result_7 = 1;
                                rbp = 1;
                                
                                if *var_270[8] == 0
                                {
                                    goto 'label_5073b0;
                                }
                                
                                var_170 = 1;
                                result_6 = &var_170;
                                let var_2a0_3: fn(arg1: *mut i8, arg2: i64) -> i64 = _$LT$std..sync..mpsc..RecvTimeoutError$u20$as$u20$core..fmt..Display$GT$::fmt::h0f095b628b6fcfe0;
                                var_228 = &data_5bc190;
                                *var_228[8] = 1;
                                var_208 = 0;
                                let var_218_5: *mut *mut i128 = &result_6;
                                var_210 = 1;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                let mut var_120: i128;
                                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(
                                    &var_120, &var_228);
                                let var_210_3: i32 = 1;
                                var_228 = var_120;
                                let var_110: i64;
                                let var_218_6: i64 = var_110;
                                r13 = 1;
                                result_7 = 1;
                                rbp = 1;
                                result_5 =
                                    alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_228);
                                goto 'label_5077fc;
                            }
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&result_8);
                    
                    if (!var_270 & 6) != 0
                    {
                        if r14_1 == 0
                        {
                            core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::hced92ed8b1b7bc68(&var_270);
                        }
                        
                        if result_7 != 0
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&*var_258[8]);
                        }
                    }
                    
                    break;
                }
                
                var_230_1 = &data_5bc1d0;
            }
            else
            {
                result_7 = *rax_4.byte_offset(8);
                rbp = *rax_4.byte_offset(0x10);
                std::fs::metadata::h5a76b0b01e9dc15d(&var_228, result_7);
                
                if var_228 == 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_228);
                    goto 'label_506fad;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_228);
                r15 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(&arg1[0xe], 
                    result_7, rbp);
                std::fs::metadata::h5a76b0b01e9dc15d(&var_228, result_7);
                let mut var_e0: ();
                core::result::Result$LT$T$C$E$GT$::unwrap::h4cbb2e8f2fd89391(&var_e0, &var_228);
                let var_a8: i32;
                let rax_7: i32 = var_a8 & 0xf000;
                
                if rax_7 != 0x1000 && rax_7 != 0x8000 && rax_7 != 0x2000
                {
                    goto 'label_506fad;
                }
                
                if *r15.byte_offset(0xc8) != 0
                {
                    goto 'label_506fad;
                }
                
                let mut rax_8: i64;
                let mut rdx_7: i64;
                rax_8 = uucore::util_name::h60d842bf27b05e82();
                var_270 = rax_8;
                *var_270[8] = rdx_7;
                result_6 = &var_270;
                let var_2a0: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_228 = &data_5bbe20;
                *var_228[8] = 2;
                var_208 = 0;
                let var_218_1: *mut *mut i128 = &result_6;
                var_210 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                var_270 = 0;
                var_270 = *r15.byte_offset(0xb8);
                var_258 = 1;
                result_6 = &var_270;
                result_2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_228 = &data_5bbf58;
                *var_228[8] = 2;
                var_208 = 0;
                var_218 = &result_6;
                var_210 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_228);
                uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(
                    &arg1[0xe], result_7, rbp, &var_e0);
                let mut result_3: *mut i128;
                let mut rdx_10: *mut c_void;
                result_3 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(
                    &arg1[0xe], result_7, rbp);
                result = result_3;
                
                if result_3 != 0
                {
                    break;
                }
                
                uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(&var_228, 
                    &arg1[0xe], result_7, rbp, rdx_1 != 0);
                result = var_228;
                
                if result != 0
                {
                    break;
                }
                
                if *arg1 != 3
                {
                    let mut result_4: *mut i128;
                    result_4 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(
                        *arg1.byte_offset(0x10), *arg1.byte_offset(0x18), result_7, rbp);
                    result = result_4;
                    
                    if result_4 == 0
                    {
                        goto 'label_506fad;
                    }
                    
                    break;
                }
            }
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
    }
    'label_507667:
    core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::h60ddef1d36aee139(arg1);
    result
}
