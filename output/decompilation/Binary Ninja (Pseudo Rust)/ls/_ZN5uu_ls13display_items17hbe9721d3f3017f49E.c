
  fn uu_ls::display_items::hbe9721d3f3017f49(arg1: *mut *mut i64, arg2: *mut *mut *mut c_void, arg3: *mut c_void, arg4: *mut *mut *mut c_void, arg5: *mut i64, arg6: *mut i64, arg7: i64 @ rbp) -> *mut i128

{
    let var_8: i64 = arg7;
    let r14_1: *mut c_void = (arg2 * 0x130).byte_offset(arg1);
    let mut var_a8: *mut *mut i64 = arg1;
    let var_a0: *mut c_void = r14_1;
    let rax: i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h09eed60290850493(&var_a8, arg3);
    let rcx: u32 = *arg3.byte_offset(0xf8);
    let mut i_2: *mut i128;
    let mut var_1b8: *mut i128;
    let mut i_3: *mut i128;
    let mut var_1a8: *mut *mut *mut c_void;
    let mut var_188: *mut c_void;
    let mut var_148: *mut *mut c_void;
    let mut var_100: *mut *mut i64;
    let var_68: i64;
    let mut i_1: *mut i128;
    let mut i_5: *mut i128;
    let mut rdx_2: *mut *mut *mut c_void;
    
    if rcx != 1
    {
        let mut var_158_1: i64;
        
        if *arg3.byte_offset(0xeb) == 0
        {
            var_158_1 = 0;
        }
        else
        {
            var_a8 = arg1;
            let var_a0_1: *mut c_void = r14_1;
            let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_a8);
            var_158_1 = 1;
            arg7 = 1;
            
            for ; i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_a8)
            {
                arg7 = core::cmp::max_by::h7ee1a79e2ed707c0(*i.byte_offset(0x40), arg7);
            }
        }
        
        let mut r13: *mut *mut *mut c_void = arg4;
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&var_a8, arg1, arg2, arg3);
        
        if *arg6.byte_offset(0x1d) == 2
        {
            goto 'label_5298ea;
        }
        
        uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&var_188, arg6);
        var_148 = &var_188;
        let var_140: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_1b8 = &data_423c10;
        i_3 = 1;
        let var_198_2: i64 = 0;
        var_1a8 = &var_148;
        let var_1a0_2: i64 = 1;
        
        if std::io::Write::write_fmt::h51abc44b465d2e67(r13, &var_1b8) == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
            'label_5298ea:
            let mut var_c8: i64 = 0;
            let var_c0_1: i64 = 8;
            let var_b8_1: i64 = 0;
            var_188 = arg1;
            let rbx_2: *mut *mut i64 = var_a8;
            let mut r12_2: *mut c_void = arg3;
            
            loop
            {
                let rax_13: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_188);
                
                if rax_13 == 0
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2fdd1c99928f9068(&var_100, &var_c8);
                    let var_f0: i128;
                    let mut rdx_8: i8;
                    let mut rsi_15: i16;
                    let mut rdi_26: *mut i128;
                    let mut r8_7: i8;
                    
                    if rcx == 0
                    {
                        var_1a8 = var_f0;
                        var_1b8 = var_100;
                        rsi_15 = *r12_2.byte_offset(0xe4);
                        r8_7 = rax;
                        rdi_26 = &var_1b8;
                        rdx_8 = 1;
                        'label_529aff:
                        i_1 = uu_ls::display_grid::h3c5e157ceab431f0(rdi_26, rsi_15, rdx_8, r13, 
                            r8_7);
                        
                        if i_1 != 0
                        {
                            goto 'label_529b0d;
                        }
                    }
                    else
                    {
                        if rcx == 3
                        {
                            var_1a8 = var_f0;
                            var_1b8 = var_100;
                            rsi_15 = *r12_2.byte_offset(0xe4);
                            r8_7 = rax;
                            rdi_26 = &var_1b8;
                            rdx_8 = 0;
                            goto 'label_529aff;
                        }
                        
                        let mut var_128: *mut *mut c_void;
                        let mut var_e0: *mut *mut *mut c_void;
                        
                        if rcx != 4
                        {
                            let var_138_1: i128 = var_f0;
                            var_148 = var_100;
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_e0, &var_148);
                            
                            if var_e0 != -0x8000000000000000
                            {
                                loop
                                {
                                    let var_d0: i64;
                                    let var_118_1: i64 = var_d0;
                                    var_128 = var_e0;
                                    var_188 = &var_128;
                                    let var_180_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                    let var_178_2: *mut c_void = arg3.byte_offset(0xfa);
                                    let var_170_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                                    var_1b8 = &data_428c70;
                                    let var_1b0: i64 = 2;
                                    let var_198_3: i64 = 0;
                                    let var_1a8_1: *mut *mut c_void = &var_188;
                                    let var_1a0_3: i64 = 2;
                                    
                                    if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_1b8)
                                        != 0
                                    {
                                        i_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_128);
                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_148);
                                        break;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_128);
                                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_e0, &var_148);
                                    
                                    if var_e0 == -0x8000000000000000
                                    {
                                        goto 'label_529c56;
                                    }
                                }
                                
                                goto 'label_529f84;
                            }
                            
                            'label_529c56:
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_148);
                        }
                        else
                        {
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_148, &var_100);
                            let mut var_138: i64;
                            let mut rbp: i32;
                            
                            if var_148 != -0x8000000000000000
                            {
                                var_188 = var_148;
                                var_128 = &var_188;
                                let var_120_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_1b8 = &data_423c10;
                                let var_1b0_1: i64 = 1;
                                let var_198_4: i64 = 0;
                                let var_1a8_2: *mut *mut *mut c_void = &var_128;
                                let var_1a0_4: i64 = 1;
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(r13, &var_1b8) != 0
                                {
                                    i_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_100);
                                    goto 'label_529f84;
                                }
                                
                                let rax_24: i32 =
                                    ansi_width::ansi_width::h2f2b875c576f64e5(r14_1, var_138);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
                                rbp = rax_24 + 2;
                            }
                            else
                            {
                                rbp = 0;
                            }
                            
                            let mut var_178: i64;
                            var_178 = var_f0;
                            var_188 = var_100;
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_128, &var_188);
                            
                            if var_128 != -0x8000000000000000
                            {
                                let rbx_3: i16 = *r12_2.byte_offset(0xe4);
                                
                                loop
                                {
                                    var_148 = var_128;
                                    let var_118: i64;
                                    var_138 = var_118;
                                    let rax_25: i32 =
                                        ansi_width::ansi_width::h2f2b875c576f64e5(var_140, var_118);
                                    let mut i_6: *mut i128;
                                    
                                    if rbx_3 == 0 || rax_25 + rbp + 1 <= rbx_3
                                    {
                                        var_e0 = &var_148;
                                        let var_d8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_1b8 = &data_612660;
                                        let var_1b0_3: i64 = 1;
                                        let var_198_6: i64 = 0;
                                        let var_1a8_4: *mut *mut *mut *mut c_void = &var_e0;
                                        let var_1a0_6: i64 = 1;
                                        
                                        if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, 
                                            &var_1b8) != 0
                                        {
                                            i_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                            'label_529f99:
                                            i_2 = i_6;
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_148);
                                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_188);
                                            break;
                                        }
                                        
                                        rbp = rbp + rax_25 + 2;
                                    }
                                    else
                                    {
                                        var_e0 = &var_148;
                                        let var_d8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_1b8 = &data_612650;
                                        let var_1b0_2: i64 = 1;
                                        let var_198_5: i64 = 0;
                                        let var_1a8_3: *mut *mut *mut *mut c_void = &var_e0;
                                        let var_1a0_5: i64 = 1;
                                        
                                        if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, 
                                            &var_1b8) != 0
                                        {
                                            i_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                            goto 'label_529f99;
                                        }
                                        
                                        rbp = rax_25 + 2;
                                    }
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_148);
                                    r12_2 = arg3;
                                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_128, &var_188);
                                    
                                    if var_128 == -0x8000000000000000
                                    {
                                        goto 'label_529ef7;
                                    }
                                }
                                
                                goto 'label_529f84;
                            }
                            
                            'label_529ef7:
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_188);
                            
                            if rbp != 0
                            {
                                var_188 = r12_2.byte_offset(0xfa);
                                let var_180_3: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                                var_1b8 = &data_423c10;
                                let var_1b0_4: i64 = 1;
                                let var_198_7: i64 = 0;
                                let var_1a8_5: *mut *mut c_void = &var_188;
                                let var_1a0_7: i64 = 1;
                                
                                if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_1b8) != 0
                                {
                                    i_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto 'label_529b0d;
                                }
                            }
                        }
                    }
                    return nullptr;
                }
                
                uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(&var_1b8, rax_13, rbx_2, 
                    var_68, r12_2);
                let rax_14: *mut i128 = var_1b8;
                i_2 = i_3;
                
                if rax_14 == -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&var_c8);
                    break;
                }
                
                let mut var_60: *mut i128 = rax_14;
                let i_4: *mut i128 = i_2;
                let var_50_1: *mut *mut *mut c_void = var_1a8;
                r13 = arg4;
                let mut var_1e8: i32;
                var_1e8 = r13;
                r12_2 = arg3;
                let mut var_48: ();
                uu_ls::display_item_name::h2be516ffa591d327(&var_48, rax_13, r12_2, var_158_1, 
                    arg7, &var_60, var_1e8, arg6, nullptr);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8719a5ff12332ceb(&var_c8, &var_48);
            }
        }
        else
        {
            i_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            'label_529a84:
            i_2 = i_5;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
        }
    }
    else
    {
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&var_a8, arg1, arg2, arg3);
        var_100 = arg1;
        let var_f8_1: *mut c_void = r14_1;
        
        if (*arg3.byte_offset(0xe9) | *arg3.byte_offset(0xea)) != 0
        {
            let mut var_108: i32;
            var_108 = var_a8;
            let mut var_1c4: i8;
            var_1c4 = rax;
            
            do
            {
                let rax_7: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_100);
                
                if rax_7 == 0
                {
                    return nullptr;
                }
                
                uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(&var_1b8, rax_7, var_108, 
                    var_68, arg3);
                let rax_8: *mut c_void = var_1b8;
                
                if rax_8 == -0x8000000000000000
                {
                    return i_3;
                }
                
                var_188 = rax_8;
                let i_7: *mut i128 = i_3;
                let var_178_1: *mut *mut *mut c_void = var_1a8;
                var_148 = &var_188;
                let var_140_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1b8 = &data_423c10;
                i_3 = 1;
                let var_198_1: i64 = 0;
                var_1a8 = &var_148;
                let var_1a0_1: i64 = 1;
                
                if std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_1b8) != 0
                {
                    i_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    goto 'label_529a84;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
                i_1 = uu_ls::display_item_long::he4defe602b238d5a(rax_7, &var_a8, arg3, arg4, arg5, 
                    arg6, var_1c4);
            } while i_1 == 0;
        }
        else
        {
            do
            {
                let rax_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_100);
                
                if rax_2 == 0
                {
                    return nullptr;
                }
                
                i_1 = uu_ls::display_item_long::he4defe602b238d5a(rax_2, &var_a8, arg3, arg4, arg5, 
                    arg6, rax);
            } while i_1 == 0;
        }
        
        'label_529b0d:
        i_2 = i_1;
    }
    'label_529f84:
    i_2
}
