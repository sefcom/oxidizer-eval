
  fn uu_more::more::h6e099d2d6eef5fb4(arg1: i32, arg2: *mut *mut c_void, arg3: i32, arg4: *mut i8, arg5: *mut i8, arg6: i64, arg7: i64, arg8: *mut i64) -> u64

{
    let mut rbx: *mut i8 = arg5;
    let mut var_140: i8;
    crossterm::terminal::size::h3c0ebe6c30d16b00(&var_140);
    let mut result: u64;
    
    if var_140 != 1
    {
        let mut rdx: u32;
        let var_13c: i16;
        
        if arg8[4] == 0
        {
            rdx = var_13c;
        }
        else
        {
            rdx = *arg8.byte_offset(0x22);
        }
        uu_more::Pager::new::heff9eb46b434e09f(&var_140, arg1, rdx, arg6, arg7, arg8);
        let rax_1: i64 = var_140;
        let result_1: u64;
        result = result_1;
        
        if rax_1 != 2
        {
            let var_c8: i128;
            let var_40_1: i128 = var_c8;
            let var_d8: i128;
            let var_50_1: i128 = var_d8;
            let var_e8: i128;
            let mut var_60_1: i64 = var_e8;
            let var_f8: i128;
            let mut var_70_1: i128 = var_f8;
            let var_108: i128;
            let var_80_1: i128 = var_108;
            let var_118: i128;
            let var_90_1: i128 = var_118;
            let var_128: i128;
            let var_a0_1: i128 = var_128;
            let mut var_b8: i64 = rax_1;
            let result_2: u64 = result;
            let var_130: *mut *mut c_void;
            let var_a8_1: *mut *mut c_void = var_130;
            let mut r13_2: i8 = arg3;
            
            if 0 + -(*arg8)
            {
                goto 'label_4714b0;
            }
            
            let mut result_3: u64;
            let mut rdx_1: *mut *mut c_void;
            
            if (rax_1 & 1) == 0
            {
                if crossterm::command::write_command_ansi::he3f0a408e6774d22(arg2, 4) != 0
                {
                    'label_471507:
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    'label_47150d:
                    result = result_3;
                }
                else
                {
                    if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2) != 0
                    {
                        goto 'label_471507;
                    }
                    
                    if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(arg2, "\rPattern not found\n\r:::::::::…", 0x13) == 0
                    {
                        var_60_1 -= 1;
                        
                        if r13_2 != 0
                        {
                            goto 'label_4714c1;
                        }
                        
                        goto 'label_4715d5;
                    }
                    
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    'label_47150d_1:
                    result = result_3;
                }
            }
            else
            {
                *var_70_1[8] = result;
                'label_4714b0:
                
                if r13_2 == 0
                {
                    goto 'label_4715d5;
                }
                
                'label_4714c1:
                
                if crossterm::command::write_command_ansi::he3f0a408e6774d22(arg2, 4) != 0
                {
                    'label_4714dc:
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    'label_47150d_2:
                    result = result_3;
                }
                else
                {
                    if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2) != 0
                    {
                        goto 'label_4714dc;
                    }
                    
                    if arg4 == 0
                    {
                        rbx = arg4;
                    }
                    
                    let mut rsi_1: *mut i8 = 1;
                    
                    if arg4 != 0
                    {
                        rsi_1 = arg4;
                    }
                    
                    alloc::str::_$LT$impl$u20$str$GT$::replace::ha5d636e049a4df3e(&var_140, rsi_1, 
                        rbx);
                    
                    if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(arg2, result_1, var_130) == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(
                            var_140, result_1);
                        var_60_1 -= 3;
                        r13_2 = arg3;
                        'label_4715d5:
                        let mut result_4: u64;
                        result_4 = uu_more::Pager::draw::h5a1246f76957caca(&var_b8, arg2, 0x110000);
                        result = result_4;
                        
                        if result_4 == 0
                        {
                            if r13_2 != 0
                            {
                                arg8[3] = 0;
                                var_60_1 += 3;
                            }
                            
                            if (arg6 == 0
                                & uu_more::Pager::should_close::h4a303d1ec4dab858(&var_b8)) == 0
                            {
                                loop
                                {
                                    crossterm::event::poll::h4df22f16cb5171dd(&var_140, 0, 
                                        0x989680);
                                    
                                    if var_140 == 1
                                    {
                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        goto 'label_47150d_2;
                                    }
                                    
                                    let var_13f: i8;
                                    
                                    if (var_13f & 1) != 0
                                    {
                                        crossterm::event::read::hf474a75175ea9df0(&var_140);
                                        let rbp_2: i64 = var_140;
                                        
                                        if rbp_2 == -0x7ffffffffffffffa
                                        {
                                            result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto 'label_47150d_2;
                                        }
                                        
                                        let rax_11: i64 = rbp_2 ^ 0x8000000000000000;
                                        let mut var_158_1: i32;
                                        
                                        if rax_11 == 2
                                        {
                                            let rcx_4: u8 = var_130 >> 0x10;
                                            
                                            if rcx_4 == 0
                                            {
                                                if result_1 == 0xf
                                                {
                                                    if var_130 == 2
                                                    {
                                                        if result_1 >> 0x20 == 0x63
                                                        {
                                                            'label_471976:
                                                            result = 0;
                                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                            break;
                                                            break;
                                                        }
                                                    }
                                                    else if var_130 == 0 && result_1 >> 0x20 == 0x71
                                                    {
                                                        goto 'label_471976;
                                                    }
                                                }
                                            }
                                            else if rcx_4 != 1
                                            {
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                continue;
                                                continue;
                                            }
                                            
                                            if var_130 == 0
                                            {
                                                let rax_18: u64 = result_1 - 4;
                                                
                                                if rax_18 > 0xb
                                                {
                                                    goto 'label_47182d;
                                                }
                                                
                                                match rax_18
                                                {
                                                    0 | 4 =>
                                                    {
                                                        let mut result_6: u64;
                                                        let mut rdx_8: *mut *mut c_void;
                                                        result_6 = uu_more::Pager::page_up::h8ac51dfc33201f5e(&var_b8);
                                                        result = result_6;
                                                        
                                                        if result_6 != 0
                                                        {
                                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                            break;
                                                        }
                                                        
                                                        let mut result_7: u64;
                                                        result_7 = uu_more::paging_add_back_message::hedfccf033ee11a1c(arg8, arg2);
                                                        result = result_7;
                                                        var_158_1 = 0x110000;
                                                        
                                                        if result == 0
                                                        {
                                                            goto 'label_471709;
                                                        }
                                                        
                                                        core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                        break;
                                                    }
                                                    1 | 5 =>
                                                    {
                                                        'label_4718e4:
                                                        
                                                        if uu_more::Pager::should_close::h4a303d1ec4dab858(&var_b8) != 0
                                                        {
                                                            goto 'label_471976;
                                                        }
                                                        
                                                        var_158_1 = 0x110000;
                                                        uu_more::Pager::page_down::h5965084d09aa1ace(&var_b8);
                                                        goto 'label_471709;
                                                    }
                                                    2 | 3 | 6 | 7 | 8 | 9 | 0xa =>
                                                    {
                                                        goto 'label_47182d;
                                                    }
                                                    0xb =>
                                                    {
                                                        let rax_22: u64 = result_1 >> 0x20;
                                                        
                                                        if rax_22 == 0x20
                                                        {
                                                            goto 'label_4718e4;
                                                        }
                                                        
                                                        if rax_22 != 0x6a
                                                        {
                                                            if rax_22 != 0x6b
                                                            {
                                                                goto 'label_47182d;
                                                            }
                                                            
                                                            var_158_1 = 0x110000;
                                                            uu_more::Pager::prev_line::h81e664c16673410e(&var_b8);
                                                            goto 'label_471709;
                                                        }
                                                        
                                                        if uu_more::Pager::should_close::h4a303d1ec4dab858(&var_b8) != 0
                                                        {
                                                            goto 'label_471976;
                                                        }
                                                        
                                                        var_158_1 = 0x110000;
                                                        uu_more::Pager::next_line::hfb1901652829b949(&var_b8);
                                                        goto 'label_471709;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                'label_47182d:
                                                
                                                if result_1 == 0xf
                                                {
                                                    var_158_1 = result_1 >> 0x20;
                                                    goto 'label_471709;
                                                }
                                                
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                            }
                                        }
                                        else if rax_11 != 5
                                        {
                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                        }
                                        else
                                        {
                                            var_158_1 = 0x110000;
                                            uu_more::Pager::page_resize::h297f71cdfbb5531c(&var_b8, 
                                                result_1, result_1 >> 0x10, arg8[4]);
                                            'label_471709:
                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                            let mut r14_1: *mut *mut c_void;
                                            
                                            if *arg8.byte_offset(0x25) == 0
                                            {
                                                r14_1 = arg2;
                                                
                                                if *arg8.byte_offset(0x24) != 0
                                                {
                                                    if crossterm::command::write_command_ansi::he3f0a408e6774d22(r14_1, 0) != 0
                                                    {
                                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                        goto 'label_47150d_2;
                                                    }
                                                    
                                                    if crossterm::command::write_command_ansi::hc824fe4d1649aa05(r14_1) != 0
                                                    {
                                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                        goto 'label_47150d_2;
                                                    }
                                                    
                                                    if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(r14_1) != 0
                                                    {
                                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                        goto 'label_47150d_2;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                r14_1 = arg2;
                                                
                                                if crossterm::command::write_command_ansi::hc824fe4d1649aa05(r14_1) != 0
                                                {
                                                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                    goto 'label_47150d_2;
                                                }
                                                
                                                if crossterm::command::write_command_ansi::he3f0a408e6774d22(r14_1, 2) != 0
                                                {
                                                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                    goto 'label_47150d_2;
                                                }
                                                
                                                if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(r14_1) != 0
                                                {
                                                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                    goto 'label_47150d_2;
                                                }
                                            }
                                            
                                            let mut result_5: u64;
                                            result_5 = uu_more::Pager::draw::h5a1246f76957caca(
                                                &var_b8, r14_1, var_158_1);
                                            result = result_5;
                                            
                                            if result_5 != 0
                                            {
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                result = 0;
                            }
                        }
                    }
                    else
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(
                            var_140, result_1);
                    }
                }
            }
            core::ptr::drop_in_place$LT$uu_more..Pager$GT$::h156f155d4da5bce8(&var_b8);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h9d765ec0b470dfea(arg1);
    }
    
    result
}
