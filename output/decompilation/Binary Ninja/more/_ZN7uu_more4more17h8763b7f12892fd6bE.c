
  int128_t* uu_more::more::h8763b7f12892fd6b(void** arg1, int64_t arg2, int64_t* arg3, char arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8, int64_t* arg9)

{
    void var_a8;
    crossterm::terminal::size::hbe662dd82ba50d02(&var_a8);
    int16_t rax;
    int16_t rdx;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::h27978026947b7af9(&var_a8);
    int16_t rbp = rdx;
    
    if (arg9[4])
        rbp = *(arg9 + 0x22);
    
    void var_48;
    uu_more::break_buff::he6395443a668b94e(&var_48, arg1, arg2, rax);
    uu_more::Pager::new::h6098d4be37f01f19(&var_a8, rbp, &var_48, arg7, arg8, arg9);
    
    if (*arg9 == -0x8000000000000000)
        goto label_4dcd66;
    
    size_t var_a0;
    int64_t var_98;
    int64_t rax_1;
    int64_t rdx_4;
    rax_1 = uu_more::search_pattern_in_file::hc37280eeed50663d(var_a0, var_98, arg9);
    int128_t* result;
    int16_t var_68;
    
    if (!rax_1)
    {
        if (crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg3, 4))
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        else if (
                _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
                arg3))
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        else
        {
            if (!_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(arg3, "\rPattern not found\n\r:::::::::…", 0x13))
            {
                var_68 -= 1;
                
                if (arg4)
                    goto label_4dcd77;
                
                goto label_4dce6b;
            }
            
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
    }
    else
    {
        int64_t var_90_1 = rdx_4;
        label_4dcd66:
        
        if (!arg4)
            goto label_4dce6b;
        
        label_4dcd77:
        char const (** rax_2)[0x81] =
            crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg3, 4);
        
        if (!rax_2)
            rax_2 =
                _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
                arg3);
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(rax_2);
        int64_t rsi_4 = 1;
        
        if (arg5)
            rsi_4 = arg5;
        
        int64_t rdx_5 = arg6;
        
        if (!arg5)
            rdx_5 = arg5;
        
        int64_t* var_c8;
        alloc::str::_$LT$impl$u20$str$GT$::replace::hc54af5b05edfde16(&var_c8, rsi_4, rdx_5);
        int64_t var_c0;
        uint64_t var_b8;
        
        if (!
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(
            arg3, var_c0, var_b8))
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_c8);
            var_68 -= 3;
            label_4dce6b:
            uu_more::Pager::draw::h2b73bb7b8a9d56c7(&var_a8, arg3, 0x110000);
            
            if (arg4)
            {
                arg9[3] = 0;
                int16_t var_68_1 = var_68 + 3;
            }
            
            if (arg7 || !uu_more::Pager::should_close::hd0c7831e1905e098(&var_a8))
            {
                int64_t* var_e0;
                
                while (true)
                {
                    crossterm::event::poll::hefe8b0d9d35d10b0(&var_c8, 0, 0x989680);
                    
                    if (core::result::Result$LT$T$C$E$GT$::unwrap::ha4f5b3edb49286c5(&var_c8))
                    {
                        crossterm::event::read::h36d19ea956bf477b(&var_c8);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h70ef865c885e52af(&var_e0, 
                            &var_c8);
                        int64_t rcx_3 = var_e0 ^ 0x8000000000000000;
                        int64_t rax_10 = 4;
                        
                        if (rcx_3 < 6)
                            rax_10 = rcx_3;
                        
                        int32_t rbp_2;
                        
                        if (rax_10 == 2)
                        {
                            char var_ce;
                            uint32_t rax_12 = var_ce;
                            char var_d8;
                            int32_t var_d4;
                            char var_d0;
                            char rax_13;
                            uint32_t rax_15;
                            
                            if (!rax_12)
                            {
                                rax_13 = var_d8;
                                
                                if (rax_13 != 0xf)
                                    goto label_4dd059;
                                
                                rax_15 = var_d0;
                                
                                if (rax_15 == 2)
                                {
                                    if (var_d4 != 0x63)
                                    {
                                        rbp_2 = var_d4;
                                        goto label_4dcf36;
                                    }
                                    
                                    label_4dd176:
                                    uu_more::reset_term::h414dda587ba155f3(arg3);
                                    std::process::exit::hf8c1b9d00a2a86fd(0);
                                    /* no return */
                                }
                                
                                if (rax_15)
                                    goto label_4dd0b1;
                                
                                if (var_d4 == 0x71)
                                    goto label_4dd176;
                                
                                rbp_2 = var_d4;
                                label_4dd0bd:
                                
                                if (rbp_2 == 0x20)
                                    goto label_4dd0f2;
                                
                                if (rbp_2 == 0x6b)
                                {
                                    uu_more::Pager::prev_line::h2dc79d29e0a18308(&var_a8);
                                    goto label_4dcf2c;
                                }
                                
                                if (rbp_2 != 0x6a)
                                    goto label_4dcf36;
                                
                                if (!uu_more::Pager::should_close::hd0c7831e1905e098(&var_a8))
                                {
                                    uu_more::Pager::next_line::h22612d87ae029aa4(&var_a8);
                                    goto label_4dcf2c;
                                }
                                
                                result = nullptr;
                                break;
                            }
                            
                            if (rax_12 == 2)
                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                            else
                            {
                                rax_13 = var_d8;
                                label_4dd059:
                                uint64_t rax_17 = rax_13 - 4;
                                
                                if (rax_17 > 0xb)
                                    core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                else
                                    switch (rax_17)
                                    {
                                        case 0:
                                        case 4:
                                        {
                                            if (var_d0)
                                            {
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                                continue;
                                            }
                                            
                                            uu_more::Pager::page_up::hcd3674266d22c74e(&var_a8);
                                            int128_t* result_1;
                                            void** rdx_11;
                                            result_1 =
                                                uu_more::paging_add_back_message::hbb2e4f2ab157e08e(
                                                arg9[4], arg3);
                                            result = result_1;
                                            rbp_2 = 0x110000;
                                            
                                            if (result_1)
                                                break;
                                            
                                            goto label_4dcf36;
                                        }
                                        case 1:
                                        case 5:
                                        {
                                            if (var_d0)
                                            {
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                                continue;
                                            }
                                            
                                            label_4dd0f2:
                                            
                                            if (uu_more::Pager::should_close::hd0c7831e1905e098(
                                                &var_a8))
                                            {
                                                result = nullptr;
                                                break;
                                            }
                                            
                                            uu_more::Pager::page_down::h61b22add167296da(&var_a8);
                                            goto label_4dcf2c;
                                        }
                                        case 2:
                                        case 3:
                                        case 6:
                                        case 7:
                                        case 8:
                                        case 9:
                                        case 0xa:
                                        {
                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                                            continue;
                                        }
                                        case 0xb:
                                        {
                                            rax_15 = var_d0;
                                            label_4dd0b1:
                                            rbp_2 = var_d4;
                                            
                                            if (rax_15)
                                                goto label_4dcf36;
                                            
                                            goto label_4dd0bd;
                                        }
                                    }
                            }
                        }
                        else if (rax_10 != 5)
                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                        else
                        {
                            int16_t var_d6;
                            uu_more::Pager::page_resize::ha0e74b43be507582(&var_a8, var_d6, 
                                arg9[4]);
                            label_4dcf2c:
                            rbp_2 = 0x110000;
                            label_4dcf36:
                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::hc3bd588850a4ac79(&var_e0);
                            
                            if (*(arg9 + 0x25))
                            {
                                std::io::stdio::stdout::h077da66234850927();
                                var_e0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                char const (** rax_11)[0x81] =
                                    crossterm::command::write_command_ansi::h52fb7152bdef87df(
                                    &var_e0, 0);
                                
                                if (!rax_11)
                                {
                                    rax_11 =
                                        crossterm::command::write_command_ansi::h0432cd0c76b6eef8(
                                        &var_e0, 2);
                                    
                                    if (!rax_11)
                                    {
                                        std::io::stdio::stdout::h077da66234850927();
                                        var_c8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                        rax_11 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&var_c8);
                                    }
                                }
                                
                                core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
                                    rax_11);
                            }
                            else if (*(arg9 + 0x24))
                            {
                                std::io::stdio::stdout::h077da66234850927();
                                var_e0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                                char const (** rax_14)[0x81] =
                                    crossterm::command::write_command_ansi::h0432cd0c76b6eef8(
                                    &var_e0, 0);
                                
                                if (!rax_14)
                                {
                                    rax_14 =
                                        crossterm::command::write_command_ansi::h52fb7152bdef87df(
                                        &var_e0, 0);
                                    
                                    if (!rax_14)
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
                result = nullptr;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_c8);
        }
    }
    core::ptr::drop_in_place$LT$uu_more..Pager$GT$::h5e4cf1885d08b4d9(&var_a8);
    return result;
}
