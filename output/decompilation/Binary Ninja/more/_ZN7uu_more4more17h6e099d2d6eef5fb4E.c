
  uint64_t uu_more::more::h6e099d2d6eef5fb4(int32_t arg1, void** arg2, int32_t arg3, char* arg4, char* arg5, int64_t arg6, int64_t arg7, int64_t* arg8)

{
    char* rbx = arg5;
    char var_140;
    crossterm::terminal::size::h3c0ebe6c30d16b00(&var_140);
    uint64_t result;
    
    if (var_140 != 1)
    {
        uint32_t rdx;
        int16_t var_13c;
        
        if (!arg8[4])
            rdx = var_13c;
        else
            rdx = *(arg8 + 0x22);
        uu_more::Pager::new::heff9eb46b434e09f(&var_140, arg1, rdx, arg6, arg7, arg8);
        int64_t rax_1 = var_140;
        uint64_t result_1;
        result = result_1;
        
        if (rax_1 != 2)
        {
            int128_t var_c8;
            int128_t var_40_1 = var_c8;
            int128_t var_d8;
            int128_t var_50_1 = var_d8;
            int128_t var_e8;
            int64_t var_60_1 = var_e8;
            int128_t var_f8;
            int128_t var_70_1 = var_f8;
            int128_t var_108;
            int128_t var_80_1 = var_108;
            int128_t var_118;
            int128_t var_90_1 = var_118;
            int128_t var_128;
            int128_t var_a0_1 = var_128;
            int64_t var_b8 = rax_1;
            uint64_t result_2 = result;
            void** var_130;
            void** const var_a8_1 = var_130;
            char r13_2 = arg3;
            
            if (0 + -(*arg8))
                goto label_4714b0;
            
            uint64_t result_3;
            void** rdx_1;
            
            if (!(rax_1 & 1))
            {
                if (crossterm::command::write_command_ansi::he3f0a408e6774d22(arg2, 4))
                {
                    label_471507:
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    label_47150d:
                    result = result_3;
                }
                else
                {
                    if (_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2))
                        goto label_471507;
                    
                    if (!_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(arg2, "\rPattern not found\n\r:::::::::…", 0x13))
                    {
                        var_60_1 -= 1;
                        
                        if (r13_2)
                            goto label_4714c1;
                        
                        goto label_4715d5;
                    }
                    
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    label_47150d_1:
                    result = result_3;
                }
            }
            else
            {
                *var_70_1[8] = result;
                label_4714b0:
                
                if (!r13_2)
                    goto label_4715d5;
                
                label_4714c1:
                
                if (crossterm::command::write_command_ansi::he3f0a408e6774d22(arg2, 4))
                {
                    label_4714dc:
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    label_47150d_2:
                    result = result_3;
                }
                else
                {
                    if (_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2))
                        goto label_4714dc;
                    
                    if (!arg4)
                        rbx = arg4;
                    
                    char* rsi_1 = 1;
                    
                    if (arg4)
                        rsi_1 = arg4;
                    
                    alloc::str::_$LT$impl$u20$str$GT$::replace::ha5d636e049a4df3e(&var_140, rsi_1, 
                        rbx);
                    
                    if (!_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(arg2, result_1, var_130))
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(
                            var_140, result_1);
                        var_60_1 -= 3;
                        r13_2 = arg3;
                        label_4715d5:
                        uint64_t result_4;
                        result_4 = uu_more::Pager::draw::h5a1246f76957caca(&var_b8, arg2, 0x110000);
                        result = result_4;
                        
                        if (!result_4)
                        {
                            if (r13_2)
                            {
                                arg8[3] = 0;
                                var_60_1 += 3;
                            }
                            
                            if (!(!arg6 & uu_more::Pager::should_close::h4a303d1ec4dab858(&var_b8)))
                            {
                                while (true)
                                {
                                    crossterm::event::poll::h4df22f16cb5171dd(&var_140, 0, 
                                        0x989680);
                                    
                                    if (var_140 == 1)
                                    {
                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        goto label_47150d_2;
                                    }
                                    
                                    char var_13f;
                                    
                                    if (var_13f & 1)
                                    {
                                        crossterm::event::read::hf474a75175ea9df0(&var_140);
                                        int64_t rbp_2 = var_140;
                                        
                                        if (rbp_2 == -0x7ffffffffffffffa)
                                        {
                                            result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            goto label_47150d_2;
                                        }
                                        
                                        int64_t rax_11 = rbp_2 ^ 0x8000000000000000;
                                        int32_t var_158_1;
                                        
                                        if (rax_11 == 2)
                                        {
                                            uint8_t rcx_4 = var_130 >> 0x10;
                                            
                                            if (!rcx_4)
                                            {
                                                if (result_1 == 0xf)
                                                {
                                                    if (var_130 == 2)
                                                    {
                                                        if (result_1 >> 0x20 == 0x63)
                                                        {
                                                            label_471976:
                                                            result = 0;
                                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                            break;
                                                            break;
                                                        }
                                                    }
                                                    else if (!var_130 && result_1 >> 0x20 == 0x71)
                                                        goto label_471976;
                                                }
                                            }
                                            else if (rcx_4 != 1)
                                            {
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                continue;
                                                continue;
                                            }
                                            
                                            if (!var_130)
                                            {
                                                uint64_t rax_18 = result_1 - 4;
                                                
                                                if (rax_18 > 0xb)
                                                    goto label_47182d;
                                                
                                                switch (rax_18)
                                                {
                                                    case 0:
                                                    case 4:
                                                    {
                                                        uint64_t result_6;
                                                        void** rdx_8;
                                                        result_6 = uu_more::Pager::page_up::h8ac51dfc33201f5e(&var_b8);
                                                        result = result_6;
                                                        
                                                        if (result_6)
                                                        {
                                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                            break;
                                                        }
                                                        
                                                        uint64_t result_7;
                                                        result_7 = uu_more::paging_add_back_message::hedfccf033ee11a1c(arg8, arg2);
                                                        result = result_7;
                                                        var_158_1 = 0x110000;
                                                        
                                                        if (!result)
                                                            goto label_471709;
                                                        
                                                        core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                                        break;
                                                        break;
                                                    }
                                                    case 1:
                                                    case 5:
                                                    {
                                                        label_4718e4:
                                                        
                                                        if (uu_more::Pager::should_close::h4a303d1ec4dab858(&var_b8))
                                                            goto label_471976;
                                                        
                                                        var_158_1 = 0x110000;
                                                        uu_more::Pager::page_down::h5965084d09aa1ace(&var_b8);
                                                        goto label_471709;
                                                    }
                                                    case 2:
                                                    case 3:
                                                    case 6:
                                                    case 7:
                                                    case 8:
                                                    case 9:
                                                    case 0xa:
                                                    {
                                                        goto label_47182d;
                                                    }
                                                    case 0xb:
                                                    {
                                                        uint64_t rax_22 = result_1 >> 0x20;
                                                        
                                                        if (rax_22 == 0x20)
                                                            goto label_4718e4;
                                                        
                                                        if (rax_22 != 0x6a)
                                                        {
                                                            if (rax_22 != 0x6b)
                                                                goto label_47182d;
                                                            
                                                            var_158_1 = 0x110000;
                                                            uu_more::Pager::prev_line::h81e664c16673410e(&var_b8);
                                                            goto label_471709;
                                                        }
                                                        
                                                        if (uu_more::Pager::should_close::h4a303d1ec4dab858(&var_b8))
                                                            goto label_471976;
                                                        
                                                        var_158_1 = 0x110000;
                                                        uu_more::Pager::next_line::hfb1901652829b949(&var_b8);
                                                        goto label_471709;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                label_47182d:
                                                
                                                if (result_1 == 0xf)
                                                {
                                                    var_158_1 = result_1 >> 0x20;
                                                    goto label_471709;
                                                }
                                                
                                                core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                            }
                                        }
                                        else if (rax_11 != 5)
                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                        else
                                        {
                                            var_158_1 = 0x110000;
                                            uu_more::Pager::page_resize::h297f71cdfbb5531c(&var_b8, 
                                                result_1, result_1 >> 0x10, arg8[4]);
                                            label_471709:
                                            core::ptr::drop_in_place$LT$crossterm..event..Event$GT$::ha48fc9fd5e8599d4(rbp_2, result_1);
                                            void** const r14_1;
                                            
                                            if (!*(arg8 + 0x25))
                                            {
                                                r14_1 = arg2;
                                                
                                                if (*(arg8 + 0x24))
                                                {
                                                    if (crossterm::command::write_command_ansi::he3f0a408e6774d22(r14_1, 0))
                                                    {
                                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                        goto label_47150d_2;
                                                    }
                                                    
                                                    if (crossterm::command::write_command_ansi::hc824fe4d1649aa05(r14_1))
                                                    {
                                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                        goto label_47150d_2;
                                                    }
                                                    
                                                    if (_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(r14_1))
                                                    {
                                                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                        goto label_47150d_2;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                r14_1 = arg2;
                                                
                                                if (crossterm::command::write_command_ansi::hc824fe4d1649aa05(r14_1))
                                                {
                                                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                    goto label_47150d_2;
                                                }
                                                
                                                if (crossterm::command::write_command_ansi::he3f0a408e6774d22(r14_1, 2))
                                                {
                                                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                    goto label_47150d_2;
                                                }
                                                
                                                if (_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(r14_1))
                                                {
                                                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                    goto label_47150d_2;
                                                }
                                            }
                                            
                                            uint64_t result_5;
                                            result_5 = uu_more::Pager::draw::h5a1246f76957caca(
                                                &var_b8, r14_1, var_158_1);
                                            result = result_5;
                                            
                                            if (result_5)
                                                break;
                                        }
                                    }
                                }
                            }
                            else
                                result = 0;
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
    
    return result;
}
