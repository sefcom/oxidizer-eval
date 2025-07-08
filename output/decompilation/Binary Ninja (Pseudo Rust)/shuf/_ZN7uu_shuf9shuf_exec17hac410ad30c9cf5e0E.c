
  fn uu_shuf::shuf_exec::hac410ad30c9cf5e0(arg1: *mut c_void, arg2: *mut i64) -> *mut i128

{
    let r12: *mut *mut c_void;
    let var_28: *mut *mut c_void = r12;
    let mut rbp: u64;
    let mut result: *mut i128;
    let mut var_b8: i128;
    let mut result_1: *mut i128;
    let var_80: i32;
    let mut var_78: i128;
    let mut rcx_1: *mut c_void;
    let mut rdx: *mut i64;
    
    if *arg2 != -0x8000000000000000
    {
        let var_a8_1: i64 = arg2[2];
        var_b8 = *arg2;
        std::fs::File::create::hb8ccd5b0dd142e83(&var_78, *var_b8[8]);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hddbe3a5b2ee70831(&result_1, &var_78, &var_b8);
        result = result_1;
        
        if result == 0
        {
            let rax_2: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::ha833a196b0b969ec(var_80);
            rbp = 1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
            rdx = rax_2;
            rcx_1 = &data_534f48;
            goto 'label_4712be;
        }
        
        rbp = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
        rbp = 1;
    }
    else
    {
        rbp = 1;
        std::io::stdio::stdout::h077da66234850927();
        rdx = alloc::boxed::Box$LT$T$GT$::new::h47aa554a48e45ddf(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
        rcx_1 = &data_534ef8;
        'label_4712be:
        rbp = 1;
        let mut var_60: i64;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h2cd23da24bfb1765(&var_60, 
            0x2000, rdx, rcx_1);
        let mut var_98: i32;
        
        if arg2[3] != -0x8000000000000000
        {
            let var_a8_3: i64 = arg2[5];
            var_b8 = *arg2.byte_offset(0x18);
            std::fs::File::open::h1adc330ffb93a969(&var_78, *var_b8[8]);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb868c3ea7eaf226e(&result_1, &var_78, &var_b8);
            result = result_1;
            
            if result == 0
            {
                let var_94_1: i32 = var_80;
                var_98 = 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
                rbp = 0;
                
                if arg2[7] != 0
                {
                    goto 'label_471307;
                }
                
                goto 'label_4714c5;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
            rbp = 0;
        }
        else
        {
            rbp = 1;
            let var_90_1: i64 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
            var_98 = 1;
            rbp = 1;
            let var_58: *mut i8;
            let mut var_50: i64;
            
            if arg2[7] == 0
            {
                'label_4714c5:
                let mut rax_14: i64;
                let mut rdx_11: i64;
                rax_14 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h44688f65b4d991d5(arg1, &var_98, arg2[6]);
                var_b8 = rax_14;
                *var_b8[8] = rdx_11;
                let mut i: *mut i128;
                
                do
                {
                    let mut rax_15: i64;
                    let mut rdx_12: u64;
                    rax_15 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc52c302a5b3cda84(&var_b8);
                    
                    if rax_15 == 0
                    {
                        goto 'label_47147a;
                    }
                    
                    let result_4: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8348fd0bc33a1273(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hde169efa667ae96b(rax_15, rdx_12, &var_60));
                    result = result_4;
                    
                    if result_4 != 0
                    {
                        break;
                    }
                    
                    let rax_17: i8 = *arg2.byte_offset(0x39);
                    var_78 = rax_17;
                    let mut rax_18: *mut *mut [i8; 0xe1];
                    
                    if var_60 - var_50 <= 1
                    {
                        rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&var_60, &var_78, 1);
                    }
                    else
                    {
                        var_58[var_50] = rax_17;
                        var_50 += 1;
                        rax_18 = nullptr;
                    }
                    
                    i = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9b8bd7b325589adc(rax_18);
                    result = i;
                } while i == 0;
                rbp = rbp;
                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_98);
            }
            else
            {
                'label_471307:
                
                if _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h1f0a71404213f066(*arg1.byte_offset(0x10)) == 0
                {
                    let r13_1: i64 = arg2[6];
                    
                    if r13_1 == 0
                    {
                        'label_47147a:
                        core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(
                            &var_98);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&var_60);
                        return nullptr;
                    }
                    
                    let mut rbp_2: i64 = 0;
                    
                    loop
                    {
                        rbp_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_2);
                        let mut rax_9: i64;
                        let mut rdx_5: u64;
                        rax_9 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h3523e9548edb7615(arg1, &var_98);
                        let result_2: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h84611fd28ee95474(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hde169efa667ae96b(rax_9, rdx_5, &var_60));
                        result = result_2;
                        
                        if result_2 != 0
                        {
                            break;
                        }
                        
                        let rax_11: i8 = *arg2.byte_offset(0x39);
                        var_b8 = rax_11;
                        let mut rax_12: *mut *mut [i8; 0xe1];
                        
                        if var_60 - var_50 <= 1
                        {
                            rax_12 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&var_60, &var_b8, 1);
                        }
                        else
                        {
                            var_58[var_50] = rax_11;
                            var_50 += 1;
                            rax_12 = nullptr;
                        }
                        
                        let result_3: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a19c40d77640a40(rax_12);
                        result = result_3;
                        
                        if result_3 != 0
                        {
                            break;
                        }
                        
                        if rbp_2 >= r13_1
                        {
                            goto 'label_47147a;
                        }
                    }
                    
                    rbp = rbp;
                    core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_98);
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(
                        &var_78, "no lines to repeat", 0x12);
                    let var_68: i64;
                    let var_a8_2: i64 = var_68;
                    var_b8 = var_78;
                    let var_a0_1: i32 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_b8);
                    core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_98);
                }
            }
        }
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&var_60);
    }
    
    if rbp != 0 && arg2[3] != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&arg2[3]);
    }
    
    result
}
