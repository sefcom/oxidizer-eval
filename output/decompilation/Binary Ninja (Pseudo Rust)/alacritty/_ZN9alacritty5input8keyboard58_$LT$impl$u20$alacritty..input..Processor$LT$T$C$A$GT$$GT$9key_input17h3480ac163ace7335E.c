
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::key_input::h3480ac163ace7335(arg1: *mut i64, arg2: *mut i16) -> i64

{
    let mut rbp: *mut c_void = arg1[6];
    
    if *rbp.byte_offset(0x2d0) == 2
    {
        let rax_1: i32 = *(arg1[1] + 0x6dc);
        let mut r15_2: *mut i32 = arg1[5];
        let r12_1: i32 = *r15_2;
        let mut var_b8: i128;
        
        if arg2[0x3c] != 0
        {
            if *(arg1[0xe] + 4) != 0
            {
                let rax_2: *mut c_void = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(rbp);
                rbp = 1;
                alacritty::display::window::Window::set_ime_allowed::hbb6cdda1349198bd(rax_2, 1);
            }
            
            let var_48_1: i128 = *arg2.byte_offset(0x70);
            let var_58_1: i128 = *arg2.byte_offset(0x60);
            let var_68_1: i128 = *arg2.byte_offset(0x50);
            let var_78_1: i128 = *arg2.byte_offset(0x40);
            let var_88_1: i128 = *arg2.byte_offset(0x30);
            let var_98_1: i128 = *arg2.byte_offset(0x20);
            let var_a8_1: i128 = *arg2.byte_offset(0x10);
            var_b8 = *arg2;
            return alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::key_release::h4e004f4cf113a66b(arg1, &var_b8, rax_1, r12_1);
        }
        
        let mut rax_3: *mut i8;
        
        if arg2[0x20] != 0x1a
        {
            rbp = 1;
            let mut rdx_2: *mut i32;
            rax_3 = smol_str::Repr::as_str::ha71f0b13e811ba13(&arg2[0x20]);
            r15_2 = rdx_2;
            rbp = arg1[6];
        }
        else
        {
            rax_3 = nullptr;
        }
        
        if rax_3 == 0
        {
            r15_2 = rax_3;
        }
        
        let mut r13_1: *mut i8 = 1;
        
        if rax_3 != 0
        {
            r13_1 = rax_3;
        }
        
        if *rbp.byte_offset(0x478) == 0
        {
            let mut rbp_2: *mut c_void;
            
            if *(arg1[0xe] + 4) == 0
            {
                rbp_2 = 1;
                alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::reset_search_delay::hb32f71b378a2c014(arg1);
                let mut rax_5: i8;
                let mut zmm0_1: [i32; 0x4];
                rax_5 = alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::h19a8c305713b2048(arg1, arg2);
                
                if rax_5 == 0
                {
                    if _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]) != 0
                    {
                        var_b8 = r13_1;
                        *var_b8[8] = r15_2.byte_offset(r13_1);
                        
                        loop
                        {
                            let mut rax_8: i8;
                            let mut rdx_6: i32;
                            rax_8 = core::str::validations::next_code_point::h6519aaf344192553(
                                &var_b8, arg2);
                            
                            if (rax_8 & 1) == 0
                            {
                                break;
                            }
                            
                            if rdx_6 == 0x110000
                            {
                                break;
                            }
                            
                            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_input::h2d6c399f09bd0ffb(arg1, rdx_6);
                        }
                    }
                    else if (rax_1 & 0x10000) == 0
                    {
                        let mut rcx_4: i32 = r12_1 & 0x824;
                        
                        if alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::alt_send_esc::h03648dcc30b21fed(arg1[5], *arg2, arg2[1], r13_1, r15_2, zmm0_1) != 0
                        {
                            rcx_4 = r12_1;
                        }
                        
                        let rax_10: i8 = alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::should_build_sequence::h9a6073c4bf79275a(arg2, r15_2, rax_1, rcx_4);
                        let rax_11: i8 = alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::is_modifier_key::h5d445e3e081c3542(arg2);
                        let mut var_d8: i128;
                        let mut var_c8: i64;
                        
                        if rax_10 == 0
                        {
                            let mut rax_12: i64;
                            let mut rdx_10: i64;
                            rax_12 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(r15_2.byte_offset(1), 1, 1);
                            var_b8 = rax_12;
                            *var_b8[8] = rdx_10;
                            let var_a8: i64 = 0;
                            
                            if (rcx_4 & 0x100) != 0
                            {
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_b8, 
                                    0x1b);
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_b8, r13_1, r15_2.byte_offset(r13_1));
                            var_c8 = var_a8;
                            var_d8 = var_b8;
                            rbp_2 = 1;
                        }
                        else
                        {
                            let var_48_2: i128 = *arg2.byte_offset(0x70);
                            let var_58_2: i128 = *arg2.byte_offset(0x60);
                            let var_68_2: i128 = *arg2.byte_offset(0x50);
                            let var_78_2: i128 = *arg2.byte_offset(0x40);
                            let var_88_2: i128 = *arg2.byte_offset(0x30);
                            let var_98_2: i128 = *arg2.byte_offset(0x20);
                            let var_a8_2: i128 = *arg2.byte_offset(0x10);
                            var_b8 = *arg2;
                            alacritty::input::keyboard::build_sequence::hb59ed84f2bd9b92a(&var_d8, 
                                &var_b8, rcx_4, rax_1);
                            rbp_2 = nullptr;
                        }
                        
                        let mut result: i64;
                        
                        if var_c8 == 0
                        {
                            result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf03622863648a7aa(&var_d8);
                        }
                        else
                        {
                            if rax_11 == 0
                            {
                                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::on_terminal_input_start::h71ade688185997fd(arg1);
                            }
                            
                            result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(*arg1, &var_d8);
                        }
                        
                        if rbp_2 == 0
                        {
                            return result;
                        }
                        
                        return core::ptr::drop_in_place$LT$winit..event..KeyEvent$GT$::hd16fceb331fb972b(arg2);
                    }
                }
            }
            else
            {
                rbp_2 = 1;
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::inline_search_input::h3f544336f84edff8(arg1, r13_1, r15_2);
            }
        }
        else
        {
            var_b8 = r13_1;
            *var_b8[8] = r15_2.byte_offset(r13_1);
            
            loop
            {
                let mut rax_4: i8;
                let mut rdx_3: i32;
                rax_4 = core::str::validations::next_code_point::h6519aaf344192553(&var_b8, arg2);
                
                if (rax_4 & 1) == 0
                {
                    break;
                }
                
                if rdx_3 == 0x110000
                {
                    break;
                }
                
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::hint_input::h969e00627e2fd961(arg1, rdx_3);
            }
        }
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$winit..event..KeyEvent$GT$::hd16fceb331fb972b(arg2)
}
