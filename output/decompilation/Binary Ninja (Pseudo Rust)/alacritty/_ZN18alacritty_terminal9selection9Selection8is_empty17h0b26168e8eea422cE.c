
  fn alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg1: *mut i128) -> u64

{
    let mut result: u64 = arg1[3];
    
    if result - 2 < 2
    {
        let mut rax: i64;
        rax = 0;
        return 0;
    }
    
    if result != 0
    {
        let rcx_4: i64 = *arg1;
        let rsi_3: i8 = arg1[1];
        let rdx_2: i64 = *arg1.byte_offset(0x18);
        let mut rdi_3: bool = *arg1.byte_offset(0x28);
        
        if rcx_4 == rdx_2
        {
            result = 1;
        }
        
        if rcx_4 != rdx_2 || ((rdi_3 ^ rsi_3) & 1) != 0
        {
            if rcx_4 + 1 == rdx_2
            {
                rdi_3 &= 1;
                result = 1;
            }
            
            if rcx_4 + 1 != rdx_2 || (rsi_3 & rdi_3 == 0) == 0
            {
                let mut rax_3: bool = rdi_3;
                
                if (rsi_3 & 1) != 0
                {
                    rax_3 = false;
                }
                
                if rdx_2 + 1 != rcx_4
                {
                    rax_3 = false;
                }
                
                return rax_3 & 1;
            }
        }
    }
    else
    {
        let rax_1: i8 = *arg1.byte_offset(0x28);
        let mut var_28: i128 = *arg1.byte_offset(0x18);
        let mut var_48: i128 = *arg1;
        let rax_2: i8 = arg1[1];
        let mut rbx_1: i32 = *var_48[8];
        let mut rbp_1: i32 = *var_28[8];
        
        if _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h96fd75b64b1be1c4(var_48, rbx_1, var_28, rbp_1) > 0
        {
            core::intrinsics::typed_swap_nonoverlapping::h3ee0142b4e3b51c2(&var_48, &var_28);
            rbx_1 = *var_48[8];
            rbp_1 = *var_28[8];
        }
        
        if rbx_1 != rbp_1
        {
            result = 0;
        }
        else
        {
            let rcx_2: i64 = var_48;
            let rdx_1: i64 = var_28;
            result = 1;
            
            if (rcx_2 == rdx_1 & rax_2 == rax_1) == 0
            {
                result = rax_1 == 0;
                
                if (rax_2 & result) != 1
                {
                    result = 0;
                }
                else
                {
                    result = rcx_2 + 1 == rdx_1;
                }
            }
        }
    }
    
    result &= 1;
    result
}
