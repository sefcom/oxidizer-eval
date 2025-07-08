
  fn uu_shuf::shuf_exec::h63b6b406387eb323(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let r12: *mut *mut c_void;
    let var_28: *mut *mut c_void = r12;
    let mut rbp: u64;
    let mut result: *mut i128;
    let mut result_1: *mut i128;
    let var_148: i32;
    let mut var_130: i128;
    let mut var_118: i128;
    let mut var_108: i64;
    let mut rcx_1: *mut c_void;
    let mut rdx: *mut i64;
    
    if *arg2 != -0x8000000000000000
    {
        var_108 = arg2[2];
        var_118 = *arg2;
        std::fs::File::create::hb8ccd5b0dd142e83(&var_130, *var_118[8]);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h7dc9de6d5fccb23e(&result_1, &var_130, &var_118);
        result = result_1;
        
        if result == 0
        {
            let rax_2: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::ha833a196b0b969ec(var_148);
            rbp = 1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_118);
            rdx = rax_2;
            rcx_1 = &data_534f48;
            goto 'label_470d9e;
        }
        
        rbp = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_118);
        rbp = 1;
    }
    else
    {
        rbp = 1;
        std::io::stdio::stdout::h077da66234850927();
        rdx = alloc::boxed::Box$LT$T$GT$::new::h47aa554a48e45ddf(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
        rcx_1 = &data_534ef8;
        'label_470d9e:
        rbp = 1;
        let mut var_b8: i64;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h2cd23da24bfb1765(&var_b8, 
            0x2000, rdx, rcx_1);
        let mut var_140: i32;
        
        if arg2[3] != -0x8000000000000000
        {
            var_108 = arg2[5];
            var_118 = *arg2.byte_offset(0x18);
            std::fs::File::open::h1adc330ffb93a969(&var_130, *var_118[8]);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9af4e70239f5c3ba(&result_1, &var_130, &var_118);
            result = result_1;
            
            if result == 0
            {
                let var_13c_1: i32 = var_148;
                var_140 = 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_118);
                rbp = 0;
                
                if arg2[7] != 0
                {
                    goto 'label_470ddf;
                }
                
                goto 'label_470fa5;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_118);
            rbp = 0;
        }
        else
        {
            rbp = 1;
            let var_138_1: i64 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
            var_140 = 1;
            rbp = 1;
            let var_b0: *mut i8;
            let mut var_a8: i64;
            
            if arg2[7] == 0
            {
                'label_470fa5:
                let mut var_88: i128;
                _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h177e4352b7cdd512(&var_88, arg1, &var_140, arg2[6]);
                let var_38: i64;
                let var_c8_1: i64 = var_38;
                let var_48: i128;
                let var_d8_1: i128 = var_48;
                let var_58: i128;
                let var_e8_1: i128 = var_58;
                let var_68: i128;
                let var_f8_1: i128 = var_68;
                let var_78: i128;
                var_108 = var_78;
                var_118 = var_88;
                
                loop
                {
                    let mut rax_15: i64;
                    let mut rdx_9: i64;
                    rax_15 = _$LT$uu_shuf..NonrepeatingIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09329f8e3b6424f0(&var_118);
                    
                    if rax_15 == 0
                    {
                        core::ptr::drop_in_place$LT$uu_shuf..NonrepeatingIterator$GT$::h54ac2e4813cb3251(&var_118);
                        goto 'label_47112b;
                    }
                    
                    var_130 = rdx_9;
                    let result_4: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha8ab53c195a45add(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h82642fb64fdc15b0(&var_130, &var_b8));
                    result = result_4;
                    
                    if result_4 == 0
                    {
                        let rax_17: i8 = *arg2.byte_offset(0x39);
                        result_1 = rax_17;
                        let mut rax_18: *mut *mut [i8; 0xe1];
                        
                        if var_b8 - var_a8 <= 1
                        {
                            rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&var_b8, &result_1, 1);
                        }
                        else
                        {
                            var_b0[var_a8] = rax_17;
                            var_a8 += 1;
                            rax_18 = nullptr;
                        }
                        
                        let result_5: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he24158e12de6068b(rax_18);
                        result = result_5;
                        
                        if result_5 == 0
                        {
                            continue;
                        }
                    }
                    
                    rbp = rbp;
                    core::ptr::drop_in_place$LT$uu_shuf..NonrepeatingIterator$GT$::h54ac2e4813cb3251(&var_118);
                    break;
                }
                
                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_140);
            }
            else
            {
                'label_470ddf:
                
                if _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h6a6ce60ea82c78f8(arg1) == 0
                {
                    let r13_1: i64 = arg2[6];
                    
                    if r13_1 == 0
                    {
                        'label_47112b:
                        core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(
                            &var_140);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&var_b8);
                        return nullptr;
                    }
                    
                    let mut rbp_2: i64 = 0;
                    
                    loop
                    {
                        rbp_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_2);
                        var_118 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h5ed21dd92443f283(arg1, &var_140);
                        let result_2: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha1cfeed630fbbde8(_$LT$usize$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::h82642fb64fdc15b0(&var_118, &var_b8));
                        result = result_2;
                        
                        if result_2 == 0
                        {
                            let rax_11: i8 = *arg2.byte_offset(0x39);
                            var_130 = rax_11;
                            let mut rax_12: *mut *mut [i8; 0xe1];
                            
                            if var_b8 - var_a8 <= 1
                            {
                                rax_12 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&var_b8, &var_130, 1);
                            }
                            else
                            {
                                var_b0[var_a8] = rax_11;
                                var_a8 += 1;
                                rax_12 = nullptr;
                            }
                            
                            let result_3: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbce3d77c15c7998e(rax_12);
                            result = result_3;
                            
                            if result_3 == 0
                            {
                                if rbp_2 >= r13_1
                                {
                                    goto 'label_47112b;
                                }
                                
                                continue;
                            }
                        }
                        
                        rbp = rbp;
                        break;
                    }
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(
                        &var_130, "no lines to repeat", 0x12);
                    let var_120: i64;
                    let var_108_1: i64 = var_120;
                    var_118 = var_130;
                    let var_100_1: i32 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_118);
                }
                
                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_140);
            }
        }
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&var_b8);
    }
    
    if rbp != 0 && arg2[3] != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&arg2[3]);
    }
    
    result
}
