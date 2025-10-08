
  int64_t alacritty_terminal::term::Term$LT$T$GT$::write_at_cursor::hea9a85bc72f6f9d2(void* arg1, int32_t arg2)

{
    int32_t rax_1 = vte::ansi::StandardCharset::map::h13730de7dfbe6242(
        *_$LT$alacritty_terminal..grid..Charsets$u20$as$u20$core..ops..index..Index$LT$vte..ansi..CharsetIndex$GT$$GT$::index::ha790449f008967f2(arg1 + 0x80, *(arg1 + 0x6e3)), 
        arg2);
    uint128_t zmm0 = *(arg1 + 0x70);
    int16_t rcx = *(arg1 + 0x7c);
    int64_t* rdx = *(arg1 + 0x68);
    int64_t r13;
    
    if (!rdx)
        r13 = 0;
    else
    {
        int64_t temp0_1 = *rdx;
        *rdx += 1;
        
        if (temp0_1 <= -1)
            trap(6);
        
        r13 = *(arg1 + 0x68);
    }
    
    int64_t var_50 = r13;
    int64_t* rax_2 =
        alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(arg1 + 0x28);
    int64_t* r12 = rax_2;
    char rax_3 = *(rax_2 + 0x14);
    
    if (rax_3 & 0x60)
    {
        int64_t r12_1 = *(arg1 + 0x58);
        int32_t rbp_1 = *(arg1 + 0x60);
        int64_t rsi_4;
        int64_t r13_1;
        
        if (!(rax_3 & 0x20) || r12_1 >= *(arg1 + 0xb8) - 1)
        {
            if (r12_1)
            {
                void* rax_9 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, rbp_1);
                r13_1 = r12_1 - 1;
                *(rax_9 + 0x18) = core::cmp::Ord::max::h20b6d33cbe488162(*(rax_9 + 0x18), r12_1);
                rsi_4 = *(rax_9 + 0x10);
                
                if (r13_1 < rsi_4)
                {
                    alacritty_terminal::term::cell::Cell::clear_wide::hefcec44bb91a1c8e(r13_1 * 0x18
                        + *(rax_9 + 8));
                    goto label_76f810;
                }
                
                core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, rsi_4);
                /* no return */
            }
            
            label_76f816:
            int64_t rax_11 = *(arg1 + 0x50);
            int32_t rcx_3 = 0;
            
            if (rax_11 >= *(arg1 + 0xc0))
                rcx_3 = rax_11 - *(arg1 + 0xc0);
            
            if (rcx_3 != -(rbp_1))
            {
                int64_t rbx_3 = *(arg1 + 0xb8);
                void* rax_13 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, rbp_1 - 1);
                r13_1 = rbx_3 - 1;
                *(rax_13 + 0x18) = core::cmp::Ord::max::h20b6d33cbe488162(*(rax_13 + 0x18), rbx_3);
                rsi_4 = *(rax_13 + 0x10);
                
                if (r13_1 >= rsi_4)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, rsi_4);
                    /* no return */
                }
                
                int64_t rax_15 = *(rax_13 + 8);
                int64_t rcx_6 = r13_1 * 3;
                *(rax_15 + (rcx_6 << 3) + 0x14) &= 0xfbff;
            }
        }
        else
        {
            void* rax_6 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1 + 0x28, rbp_1);
            r13_1 = r12_1 + 1;
            *(rax_6 + 0x18) = core::cmp::Ord::max::h20b6d33cbe488162(*(rax_6 + 0x18), r12_1 + 2);
            rsi_4 = *(rax_6 + 0x10);
            
            if (r13_1 >= rsi_4)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, rsi_4);
                /* no return */
            }
            
            int64_t rax_8 = *(rax_6 + 8);
            int64_t rcx_2 = r13_1 * 3;
            *(rax_8 + (rcx_2 << 3) + 0x14) &= 0xffbf;
            label_76f810:
            
            if (r12_1 < 2)
                goto label_76f816;
        }
        r12 = alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(arg1 + 0x28);
    }
    
    r12[2] = rax_1;
    r12[1] = zmm0;
    *(r12 + 0x14) = rcx;
    int64_t result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..sync..Arc$LT$alacritty_terminal..term..cell..CellExtra$GT$$GT$$GT$::h98da69247a1b0f0c(r12);
    *r12 = r13;
    return result;
}
