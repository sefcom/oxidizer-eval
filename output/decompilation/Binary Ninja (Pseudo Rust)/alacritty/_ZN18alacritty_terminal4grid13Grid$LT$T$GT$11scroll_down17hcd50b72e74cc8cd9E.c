
  fn alacritty_terminal::grid::Grid$LT$T$GT$::scroll_down::hcd50b72e74cc8cd9(arg1: *mut c_void, arg2: i32, arg3: i32, arg4: i64) -> u32

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut r12: i32 = arg3;
    let mut r14: i32 = arg2;
    let mut result: u32 = arg3 - arg2;
    
    if result <= arg4
    {
        if r12 > r14
        {
            let rbp_2: i32 = *arg1.byte_offset(0x4c);
            let mut r13_1: i32;
            
            do
            {
                r13_1 = r14 + 1;
                result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                    _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, r14), 
                    rbp_2);
                r14 = r13_1;
            } while r12 != r13_1;
        }
    }
    else if *arg1.byte_offset(0xa8) == 0
    {
        let rax_4: i32 = *arg1.byte_offset(0x98);
        
        if r12 < rax_4
        {
            let mut rbp_3: i32;
            
            do
            {
                rbp_3 = r12 + 1;
                alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(arg1, 
                    r12, r12 + -(arg4));
                r12 = rbp_3;
            } while rax_4 != rbp_3;
        }
        
        let rcx: i64 = *arg1.byte_offset(0x10);
        
        if rcx == 0
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
        
        let rax_6: i64 = *arg1.byte_offset(0x18) + arg4;
        
        if (rax_6 | rcx) >> 0x20 == 0
        {
            let temp2_2: i32 = rcx;
            result = COMBINE(0, rax_6) / temp2_2;
            *arg1.byte_offset(0x18) = COMBINE(0, rax_6) % temp2_2;
            
            if arg4 != 0
            {
                'label_76c98e:
                let rbp_4: i32 = *arg1.byte_offset(0x4c);
                let mut rsi_6: i64 = 0;
                let mut r13_4: i64;
                
                do
                {
                    r13_4 = rsi_6 + 1;
                    result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                        _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, rsi_6), 
                        rbp_4);
                    rsi_6 = r13_4;
                } while arg4 != r13_4;
            }
        }
        else
        {
            let rdx_7: i64 = 0;
            let temp2_1: i32 = rcx;
            result = COMBINE(rdx_7, rax_6) / temp2_1;
            *arg1.byte_offset(0x18) = COMBINE(rdx_7, rax_6) % temp2_1;
            
            if arg4 != 0
            {
                goto 'label_76c98e;
            }
        }
        
        if r14 > 0
        {
            let mut rsi_8: i32 = 0;
            let mut rbp_5: i32;
            
            do
            {
                rbp_5 = rsi_8 + 1;
                result =
                    alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(
                    arg1, rsi_8, arg4 + rsi_8);
                rsi_8 = rbp_5;
            } while r14 != rbp_5;
        }
    }
    else
    {
        let mut rbp_1: i32 = r14 + arg4;
        
        while rbp_1 < r12
        {
            let rdx: i32 = !arg4 + r12;
            r12 -= 1;
            result = alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(
                arg1, r12, rdx);
        }
        
        if r14 < rbp_1
        {
            let r15_2: i32 = *arg1.byte_offset(0x4c);
            
            do
            {
                rbp_1 -= 1;
                result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                    _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, rbp_1), 
                    r15_2);
            } while r14 < rbp_1;
        }
    }
    
    result
}
