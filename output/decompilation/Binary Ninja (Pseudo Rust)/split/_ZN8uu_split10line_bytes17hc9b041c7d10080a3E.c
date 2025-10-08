
  fn uu_split::line_bytes::hc9b041c7d10080a3(arg1: *mut c_void, arg2: *mut i64, arg3: u64) -> u64

{
    let mut r15: u64 = arg3;
    let mut var_168: *mut *mut [i8; 0x90];
    uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(&var_168, 
        *arg1.byte_offset(0x30), *arg1.byte_offset(0x38), arg1.byte_offset(0x40));
    let rax: *mut *mut [i8; 0x90] = var_168;
    let result_1: u64;
    let mut result: u64 = result_1;
    let var_a0: i64 = -0x7fffffffffffffff;
    
    if rax != -0x7fffffffffffffff
    {
        let var_130: i128;
        let var_58_1: i128 = var_130;
        let var_140: i128;
        let var_68_1: i128 = var_140;
        let mut var_150: i128;
        let var_78_1: i128 = var_150;
        let mut var_90: *mut *mut [i8; 0x90] = rax;
        let result_2: u64 = result;
        let mut var_158: *mut *mut i128;
        let var_80_1: *mut *mut i128 = var_158;
        var_168 = nullptr;
        let mut var_160: i64 = 1;
        var_158 = {0};
        let mut var_f8: *mut *mut [i8; 0x90];
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha515876637d6ec21(&var_f8, 
            alloc::boxed::Box$LT$T$GT$::new::h5666194dd5ed5591(&var_168), &data_50b0c0);
        let rcx_1: i8 = *arg1.byte_offset(0xa2);
        let rdx_2: i8 = *arg1.byte_offset(0xa0);
        let rax_3: i64 = *arg1.byte_offset(0x88);
        let rax_5: i64 = -(r15);
        let mut r14_1: u64 = 0;
        let mut rbx: u32 = rcx_1;
        let mut var_48: i64;
        let mut rdi_3: *mut i64 = &var_48;
        let var_110_1: u64 = r15;
        let var_fc_1: u32 = rbx;
        
        loop
        {
            _$LT$uu_split..LinesWithSep$LT$R$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6c8053dcbad174b(rdi_3, arg2, rbx);
            let mut rcx_2: i64 = var_48;
            
            if rcx_2 == var_a0
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(var_90, result_2);
                return 0;
            }
            
            if rcx_2 == -0x8000000000000000
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                break;
            }
            
            let var_118_1: i64 = rcx_2;
            let var_38: u64;
            let mut rbx_1: u64 = var_38;
            let var_40: i64;
            let mut var_1a8: i128;
            let mut var_198: i64;
            let mut var_180: *mut i128;
            let mut var_178: fn(arg1: *mut i32, arg2: *mut i64) -> i64;
            let var_170: i64;
            let mut rbp_1: *mut i128;
            let mut r14_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64;
            
            if r14_1 == 0
            {
                _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_180, &var_90);
                rbp_1 = var_180;
                
                if rbp_1 == -0x8000000000000000
                {
                    'label_4720f0:
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_1a8, "output file suffixes exhaustedcr…", 0x1e);
                    let var_158_1: i64 = var_198;
                    var_168 = var_1a8;
                    var_150 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&var_168);
                }
                else
                {
                    r14_2 = var_178;
                    
                    if (rdx_2 & 1) != 0
                    {
                        var_1a8 = 0;
                        *var_1a8[8] = r14_2;
                        var_198 = var_170;
                        let var_190_3: i8 = 1;
                        var_180 = &var_1a8;
                        var_178 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_168 = &data_50af08;
                        var_160 = 2;
                        *var_150[8] = 0;
                        var_158 = &var_180;
                        var_150 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                    }
                    
                    uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(&var_168, 
                        arg1, r14_2, var_170, 1);
                    let r13_4: *mut *mut [i8; 0x90] = var_168;
                    
                    if r13_4 != -0x8000000000000000
                    {
                        let zmm0_6: i128 = var_158;
                        var_1a8 = zmm0_6;
                        var_198 = var_150;
                        let var_b8_3: i128 = var_150;
                        let var_c8_3: i128 = zmm0_6;
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                        var_f8 = r13_4;
                        let var_f0_3: i64 = var_160;
                        let var_d8_3: i128 = var_198;
                        let var_e8_3: i128 = var_1a8;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(
                            rbp_1, r14_2);
                        r15 = var_110_1;
                        r14_1 = r15;
                        
                        if rbx_1 > r14_1
                        {
                            goto 'label_471bb9;
                        }
                        
                        goto 'label_47207c;
                    }
                    
                    'label_472132:
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(rbp_1, 
                        r14_2);
                }
            }
            else
            {
                rcx_2 = r14_1 >= r15;
                rcx_2 |= rbx_1 != r14_1;
                
                if rcx_2 == 0
                {
                    r14_1 = rbx_1;
                }
                
                let mut r12_2: i64;
                
                if rcx_2 == 0 && *(var_40 + rbx_1 - 1) != rcx_1
                {
                    'label_471bcf:
                    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_180, &var_90);
                    rbp_1 = var_180;
                    
                    if rbp_1 == -0x8000000000000000
                    {
                        goto 'label_4720f0;
                    }
                    
                    r14_2 = var_178;
                    
                    if (rdx_2 & 1) != 0
                    {
                        var_1a8 = 0;
                        *var_1a8[8] = r14_2;
                        var_198 = var_170;
                        let var_190_1: i8 = 1;
                        var_180 = &var_1a8;
                        var_178 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_168 = &data_50af08;
                        var_160 = 2;
                        *var_150[8] = 0;
                        var_158 = &var_180;
                        var_150 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                    }
                    
                    uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(&var_168, 
                        arg1, r14_2, var_170, 1);
                    let r13_1: *mut *mut [i8; 0x90] = var_168;
                    
                    if r13_1 == -0x8000000000000000
                    {
                        goto 'label_472132;
                    }
                    
                    let zmm0_2: i128 = var_158;
                    var_1a8 = zmm0_2;
                    var_198 = var_150;
                    let var_b8_1: i128 = var_150;
                    let var_c8_1: i128 = zmm0_2;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                    var_f8 = r13_1;
                    let var_f0_1: i64 = var_160;
                    let var_d8_1: i128 = var_198;
                    let var_e8_1: i128 = var_1a8;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(rbp_1, 
                        r14_2);
                    r15 = var_110_1;
                    
                    if rbx_1 > r15
                    {
                        goto 'label_471d2f;
                    }
                    
                    r12_2 = var_40;
                    'label_472088:
                    r14_1 = r15;
                    goto 'label_4720a6;
                }
                
                if rbx_1 <= r14_1
                {
                    'label_47207c:
                    r12_2 = var_40;
                    'label_4720a6:
                    uu_split::custom_write_all::h5ae19a5a4a9a7063(&var_168, r12_2, rbx_1, &var_f8, 
                        rax_3);
                    let mut result_3: u64;
                    
                    if var_168 == 1
                    {
                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_118_1, var_40);
                        r14_1 -= rbx_1;
                        rbx = var_fc_1;
                        rdi_3 = &var_48;
                        continue;
                    }
                    
                    result = result_3;
                }
                else
                {
                    'label_471bb9:
                    
                    if r14_1 != r15
                    {
                        goto 'label_471bcf;
                    }
                    
                    'label_471d2f:
                    let mut rax_9: i64;
                    let mut rdx_6: u64;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hbf2f5565c3de22aa(0, r15, var_40, rbx_1);
                    uu_split::custom_write_all::h5ae19a5a4a9a7063(&var_168, rax_9, rdx_6, &var_f8, 
                        rax_3);
                    
                    if var_168 == 0
                    {
                        rbx_1 += rax_5;
                        r12_2 = var_40 + r15;
                        
                        loop
                        {
                            _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_180, &var_90);
                            rbp_1 = var_180;
                            
                            if rbp_1 == -0x8000000000000000
                            {
                                goto 'label_4720f0;
                            }
                            
                            r14_2 = var_178;
                            
                            if (rdx_2 & 1) != 0
                            {
                                var_1a8 = 0;
                                *var_1a8[8] = r14_2;
                                var_198 = var_170;
                                let var_190_2: i8 = 1;
                                var_180 = &var_1a8;
                                var_178 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_168 = &data_50af08;
                                var_160 = 2;
                                *var_150[8] = 0;
                                var_158 = &var_180;
                                var_150 = 1;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                            }
                            
                            uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(
                                &var_168, arg1, r14_2, var_170, 1);
                            let r13_3: *mut *mut [i8; 0x90] = var_168;
                            
                            if r13_3 == -0x8000000000000000
                            {
                                goto 'label_472132;
                            }
                            
                            let zmm0_4: i128 = var_158;
                            var_1a8 = zmm0_4;
                            var_198 = var_150;
                            let var_b8_2: i128 = var_150;
                            let var_c8_2: i128 = zmm0_4;
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                            var_f8 = r13_3;
                            let var_f0_2: i64 = var_160;
                            let var_d8_2: i128 = var_198;
                            let var_e8_2: i128 = var_1a8;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(rbp_1, r14_2);
                            r15 = var_110_1;
                            
                            if rbx_1 <= r15
                            {
                                break;
                            }
                            
                            let mut rax_11: i64;
                            let mut rdx_9: u64;
                            rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hbf2f5565c3de22aa(0, r15, r12_2, rbx_1);
                            uu_split::custom_write_all::h5ae19a5a4a9a7063(&var_168, rax_11, rdx_9, 
                                &var_f8, rax_3);
                            r12_2 += r15;
                            rbx_1 -= r15;
                            
                            if var_168 == 1
                            {
                                goto 'label_47214a;
                            }
                        }
                        
                        goto 'label_472088;
                    }
                    
                    'label_47214a:
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_118_1, 
                var_40);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
        core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(
            var_90, result_2);
    }
    
    result
}
