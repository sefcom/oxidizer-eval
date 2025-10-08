
  fn alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(arg1: *mut i64, arg2: i32, arg3: i32, arg4: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r15: i64 = arg4;
    let mut r12: i32 = arg2;
    let mut result: i32;
    result = arg3 - arg2 > r15;
    arg4 = arg2 == 0;
    arg4 |= result;
    
    if arg4 != 0
    {
        let rdi: i64 = arg1[0x14];
        
        if rdi != 0
        {
            arg1[0x14] = core::cmp::Ord::min::h7c13e9bfb8ea3862(rdi + r15, arg1[0x15]);
        }
        
        if r12 == 0
        {
            alacritty_terminal::grid::Grid$LT$T$GT$::increase_scroll_limit::hd801cadf33b8cd65(arg1, 
                r15);
            let rcx: i64 = arg1[2];
            
            if rcx == 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            let rax_6: i64 = rcx - r15 + arg1[3];
            let mut r12_1: i32;
            
            if (rax_6 | rcx) >> 0x20 == 0
            {
                arg1[3] = COMBINE(0, rax_6) % rcx;
                r12_1 = arg1[0x13];
                
                if arg3 < r12_1
                {
                    'label_76d155:
                    
                    do
                    {
                        let rdx_8: i32 = r12_1 + !r15;
                        r12_1 -= 1;
                        alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(arg1, r12_1, rdx_8);
                    } while arg3 < r12_1;
                }
            }
            else
            {
                arg1[3] = COMBINE(0, rax_6) % rcx;
                r12_1 = arg1[0x13];
                
                if arg3 < r12_1
                {
                    goto 'label_76d155;
                }
            }
        }
        else
        {
            let rbp_2: i32 = arg3 - r15;
            
            if r12 < rbp_2
            {
                let mut r13_1: i32;
                
                do
                {
                    r13_1 = r12 + 1;
                    alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(
                        arg1, r12, r15 + r12);
                    r12 = r13_1;
                } while r13_1 < rbp_2;
            }
        }
        
        result = arg3 - r15;
        
        if result < arg3
        {
            let mut i_1: i32 = -(r15);
            let mut i: i32;
            
            do
            {
                result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                    _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, arg3 + i_1), 
                    *arg1.byte_offset(0x4c));
                i = i_1;
                i_1 += 1;
            } while i != 0xffffffff;
        }
    }
    else if arg3 > r12
    {
        let rbp_3: i32 = *arg1.byte_offset(0x4c);
        let mut r13_2: i32;
        
        do
        {
            r13_2 = r12 + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, r12), 
                rbp_3);
            r12 = r13_2;
        } while arg3 != r13_2;
    }
    
    result
}
