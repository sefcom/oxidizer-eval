
  fn uu_more::more::h8763b7f12892fd6b(arg1: *mut *mut c_void, arg2: i64, arg3: *mut i64, arg4: i8, arg5: i64, arg6: i64, arg7: i64, arg8: i64, arg9: *mut i64) -> *mut i128

{
    let mut var_a8: ();
    crossterm::terminal::size::hbe662dd82ba50d02(&var_a8);
    let mut rax: i16;
    let mut rdx: i16;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::h27978026947b7af9(&var_a8);
    let mut rbp: i16 = rdx;
    
    if arg9[4] != 0
    {
        rbp = *arg9.byte_offset(0x22);
    }
    
    let mut var_48: ();
    uu_more::break_buff::he6395443a668b94e(&var_48, arg1, arg2, rax);
    uu_more::Pager::new::h6098d4be37f01f19(&var_a8, rbp, &var_48, arg7, arg8, arg9);
    
    if *arg9 == -0x8000000000000000
    {
        goto 'label_4dcd66;
    }
    
    let var_a0: size_t;
    let var_98: i64;
    let mut rax_1: i64;
    let mut rdx_4: i64;
    rax_1 = uu_more::search_pattern_in_file::hc37280eeed50663d(var_a0, var_98, arg9);
    let mut result: *mut i128;
    let mut var_68: i16;
    
    if rax_1 == 0
    {
        if crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg3, 4) != 0
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        else if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
            arg3) != 0
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        else
        {
            if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(arg3, "\rPattern not found\n\r:::::::::…", 0x13) == 0
            {
                var_68 -= 1;
                
                if arg4 != 0
                {
                    goto 'label_4dcd77;
                }
                
                goto 'label_4dce6b;
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
    }
    else
    {
        let var_90_1: i64 = rdx_4;
        'label_4dcd66:
        
        if arg4 == 0
        {
            goto 'label_4dce6b;
        }
        
        'label_4dcd77:
        let mut rax_2: *mut *mut [i8; 0x81] =
            crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg3, 4);
        
        if rax_2 == 0
        {
            rax_2 =
                _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
                arg3);
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(rax_2);
        let mut rsi_4: i64 = 1;
        
        if arg5 != 0
        {
            rsi_4 = arg5;
        }
        
        let mut rdx_5: i64 = arg6;
        
        if arg5 == 0
        {
            rdx_5 = arg5;
        }
        
        let mut var_c8: *mut i64;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hc54af5b05edfde16(&var_c8, rsi_4, rdx_5);
        let var_c0: i64;
        let var_b8: u64;
        
        if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(
            arg3, var_c0, var_b8) == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_c8);
            var_68 -= 3;
            'label_4dce6b:
            uu_more::Pager::draw::h2b73bb7b8a9d56c7(&var_a8, arg3, 0x110000);
            
            if arg4 != 0
            {
                arg9[3] = 0;
                let var_68_1: i16 = var_68 + 3;
            }
            
            if arg7 != 0 || uu_more::Pager::should_close::hd0c7831e1905e098(&var_a8) == 0
            {
                let mut var_e0: *mut i64;
                
                loop
                {
                    crossterm::event::poll::hefe8b0d9d35d10b0(&var_c8, 0, 0x989680);
                    
                    if core::result::Result$LT$T$C$E$GT$::unwrap::ha4f5b3edb49286c5(&var_c8) != 0
                    {
                        crossterm::event::read::h36d19ea956bf477b(&var_c8);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h70ef865c885e52af(&var_e0, 
                            &var_c8);
                        let rcx_3: i64 = var_e0 ^ 0x8000000000000000;
                        let mut rax_10: i64 = 4;
                        
                        if rcx_3 < 6
                        {
                            rax_10 = rcx_3;
                        }
                        
                        let mut rbp_2: i32;
                        
                        if rax_10 == 2
                        {
                            let var_ce: i8;
                            let rax_12: u32 = var_ce;
                            let var_d8: i8;
                            let var_d4: i32;
                            let var_d0: i8;
                            let mut rax_13: i8;
                            let mut rax_15: u32;
                            
                            if rax_12 == 0
                            {
                                rax_13 = var_d8;
                                
                                if rax_13 != 0xf
                                {
                                    goto 'label_4dd059;
                                }
                                
                                rax_15 = var_d0;
                                
                                if rax_15 == 2
                                {
                                    if var_d4 != 0x63
                                    {
                                        rbp_2 = var_d4;
                                        goto 'label_4dcf36;
                                    }
                                    
                                    'label_4dd176:
                                    uu_more::reset_term::h414dda587ba155f3(arg3);
                                    std::process::exit::hf8c1b9d00a2a86fd(0);
                                    /* no return */
                                }
                                
                                if rax_15 != 0
                                {
                                    goto 'label_4dd0b1;
                                }
                                
                                if var_d4 == 0x71
                                {
                                    goto 'label_4dd176;
                                }
                                
                                rbp_2 = var_d4;
                                'label_4dd0bd:
                                
                                if rbp_2 == 0x20
                                {
                                    goto 'label_4dd0f2;
                                }
                                
                                if rbp_2 == 0x6b
                                {
                                    uu_more::Pager::prev_line::h2dc79d29e0a18308(&var_a8);
                                    goto 'label_4dcf2c;
                                }
                                
                                if rbp_2 != 0x6a
                                {
                                    goto 'label_4dcf36;
                                }
                                
                                if uu_more::Pager::should_close::hd0c7831e1905e098(&var_a8) == 0
                                {
                                    uu_more::Pager::next_line::h22612d87ae029aa4(&var_a8);
                                    goto 'label_4dcf2c;
                                }
                                
                                result = nullptr;
                                break;
                            }
                            
                            if rax_12 == 2
                            {
                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                            }
                            else
                            {
                                rax_13 = var_d8;
                                'label_4dd059:
                                let rax_17: u64 = rax_13 - 4;
                                
                                if rax_17 > 0xb
                                {
                                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                }
                                else
                                {
                                    match rax_17
                                    {
                                        0 | 4 =>
                                        {
                                            if var_d0 != 0
                                            {
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                                continue;
                                            }
                                            
                                            uu_more::Pager::page_up::hcd3674266d22c74e(&var_a8);
                                            let mut result_1: *mut i128;
                                            let mut rdx_11: *mut *mut c_void;
                                            result_1 =
                                                uu_more::paging_add_back_message::hbb2e4f2ab157e08e(
                                                arg9[4], arg3);
                                            result = result_1;
                                            rbp_2 = 0x110000;
                                            
                                            if result_1 != 0
                                            {
                                                break;
                                            }
                                            
                                            goto 'label_4dcf36;
                                        }
                                        1 | 5 =>
                                        {
                                            if var_d0 != 0
                                            {
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                                continue;
                                            }
                                            
                                            'label_4dd0f2:
                                            
                                            if uu_more::Pager::should_close::hd0c7831e1905e098(
                                                &var_a8) != 0
                                            {
                                                result = nullptr;
                                                break;
                                            }
                                            
                                            uu_more::Pager::page_down::h61b22add167296da(&var_a8);
                                            goto 'label_4dcf2c;
                                        }
                                        2 | 3 | 6 | 7 | 8 | 9 | 0xa =>
                                        {
                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                            continue;
                                        }
                                        0xb =>
                                        {
                                            rax_15 = var_d0;
                                            'label_4dd0b1:
                                            rbp_2 = var_d4;
                                            
                                            if rax_15 != 0
                                            {
                                                goto 'label_4dcf36;
                                            }
                                            
                                            goto 'label_4dd0bd;
                                        }
                                    }
                                }
                            }
                        }
                        else if rax_10 != 5
                        {
                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                        }
                        else
                        {
                            let var_d6: i16;
                            uu_more::Pager::page_resize::ha0e74b43be507582(&var_a8, var_d6, 
                                arg9[4]);
                            'label_4dcf2c:
                            rbp_2 = 0x110000;
                            'label_4dcf36:
                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                            
                            if *arg9.byte_offset(0x25) != 0
                            {
                                std::io::stdio::stdout::h077da66234850927();
                                var_e0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                let mut rax_11: *mut *mut [i8; 0x81] =
                                    crossterm::command::write_command_ansi::h52fb7152bdef87df(
                                    &var_e0, 0);
                                
                                if rax_11 == 0
                                {
                                    rax_11 =
                                        crossterm::command::write_command_ansi::h0432cd0c76b6eef8(
                                        &var_e0, 2);
                                    
                                    if rax_11 == 0
                                    {
                                        std::io::stdio::stdout::h077da66234850927();
                                        var_c8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                        rax_11 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&var_c8);
                                    }
                                }
                                
                                core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
                                    rax_11);
                            }
                            else if *arg9.byte_offset(0x24) != 0
                            {
                                std::io::stdio::stdout::h077da66234850927();
                                var_e0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                let mut rax_14: *mut *mut [i8; 0x81] =
                                    crossterm::command::write_command_ansi::h0432cd0c76b6eef8(
                                    &var_e0, 0);
                                
                                if rax_14 == 0
                                {
                                    rax_14 =
                                        crossterm::command::write_command_ansi::h52fb7152bdef87df(
                                        &var_e0, 0);
                                    
                                    if rax_14 == 0
                                    {
                                        std::io::stdio::stdout::h077da66234850927();
                                        var_c8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                        rax_14 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&var_c8);
                                    }
                                }
                                
                                core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
                                    rax_14);
                            }
                            
                            uu_more::Pager::draw::h2b73bb7b8a9d56c7(&var_a8, arg3, rbp_2);
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
            }
            else
            {
                result = nullptr;
            }
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_c8);
        }
    }
    core::ptr::drop_in_place$LT$uu_more..Pager$GT$::h5e4cf1885d08b4d9(&var_a8);
    result
}
