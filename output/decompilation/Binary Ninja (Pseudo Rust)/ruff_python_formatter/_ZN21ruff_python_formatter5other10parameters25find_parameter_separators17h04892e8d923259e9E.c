
  fn ruff_python_formatter::other::parameters::find_parameter_separators::h04892e8d923259e9(arg1: *mut u32, arg2: *mut i8, arg3: u64, arg4: u64, arg5: i64, arg6: i32, arg7: u64 @ rbp, arg8: u64 @ r12, arg9: u64 @ r15) -> u64

{
    let var_8: u64 = arg7;
    let var_10: u64 = arg9;
    let var_28: u64 = arg8;
    let r14: u64 = arg4;
    let mut result: u64 = *(arg4 + 0x10);
    let mut r13: i64;
    r13 = 1;
    let mut var_9c: i32;
    let mut var_98: i128;
    let mut var_60: i128;
    let mut rdi_3: i32;
    
    if result != 0
    {
        result = result * 0x58 + *(r14 + 8);
        
        if result == 0x58
        {
            goto 'label_714d39;
        }
        
        arg7 = *(result - 0x54);
        let r8: i32 = *(r14 + 0x4c);
        
        if arg7 > r8
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        arg9 = arg2;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, arg3, 
            arg7, r8);
        let var_40: i128;
        let var_78_1: i128 = var_40;
        let var_50: i128;
        let var_88_1: i128 = var_50;
        var_98 = var_60;
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_60, &var_98);
        
        if *var_60[8] == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        arg4 =
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_60, &var_98);
        
        if *var_60[8] == 0x5a || *var_60[8] == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        var_9c = var_60;
        result = *var_60[4];
        r13 = 0;
        arg8 = result;
        arg2 = arg9;
        rdi_3 = 0;
        
        if *(r14 + 0x50) != 0 || *(r14 + 0x40) == 0
        {
            goto 'label_714d6f;
        }
        
        goto 'label_714d49;
    }
    
    'label_714d39:
    rdi_3 = 0;
    let mut r8_1: i64;
    
    if *(r14 + 0x50) != 0 || *(r14 + 0x40) == 0
    {
        'label_714d6f:
        r8_1 = *(r14 + 0x28);
        let mut r11: *mut i32;
        
        if r8_1 == 0
        {
            'label_714ea4:
            r11 = *(r14 + 0x50);
            
            if r11 != 0
            {
                arg2 = *r11;
            }
        }
        else
        {
            'label_714d7c:
            arg2 = *(r14 + 0x20);
            arg6 = *arg2;
            r11 = *(r14 + 0x50);
            
            if r11 != 0
            {
                arg2 = *r11;
            }
        }
        
        let mut r10_1: i64;
        r10_1 = (r8_1 | r11) != 0;
        
        if r11 == 0
        {
            arg2 = result;
        }
        
        if r8_1 != 0
        {
            arg2 = arg6;
        }
        
        let r9: *mut i32 = *(r14 + 0x58);
        let mut r8_4: i32;
        
        if r9 == 0
        {
            r10_1 |= rdi_3;
            r8_4 = arg2;
            
            if r10_1 == 0
            {
                r8_4 = *(r14 + 0x4c);
            }
        }
        else
        {
            r8_4 = arg2;
            
            if rdi_3 == 0
            {
                r8_4 = *r9;
            }
            
            if r10_1 != 0
            {
                r8_4 = arg2;
            }
        }
        
        r13 ^= 1;
        *arg1 = r13;
        arg1[1] = var_9c;
        arg1[2] = arg8;
        arg1[3] = arg7;
        arg1[4] = r8_4;
        arg1[5] = rdi_3;
        arg1[6] = result;
        arg1[7] = arg4;
        arg1[8] = arg9;
        arg1[9] = arg3;
        return result;
    }
    
    'label_714d49:
    let rax_2: i64 = *(r14 + 0x28);
    let rcx_1: *mut i32 = *(r14 + 0x38);
    let mut rax_4: *mut c_void;
    
    if rax_2 != 0
    {
        rax_4 = rax_2 * 0x58 + *(r14 + 0x20);
    }
    
    if rax_2 == 0 || rax_4 == 0x58
    {
        arg9 = arg8;
        
        if r13 == 0
        {
            goto 'label_714df0;
        }
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, arg3, 
            *(r14 + 0x48), *(r14 + 0x4c));
        arg2 =
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, &var_60);
        let rax_5: u32 = *var_98[8];
        
        if rax_5 == 5
        {
            arg2 = core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, 
                &var_60);
            
            if *var_98[8] == 0x5a || *var_98[8] == 0x5a
            {
                core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
                /* no return */
            }
            
            result = var_98;
            arg4 = *var_98[4];
        }
        else
        {
            if rax_5 == 0x5a
            {
                core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
                /* no return */
            }
            
            result = var_98;
            arg4 = result >> 0x20;
        }
        
        arg9 = *(r14 + 0x48);
    }
    else
    {
        arg9 = *rax_4.byte_offset(-0x54);
        'label_714df0:
        let r8_3: i32 = *(r14 + 0x4c);
        
        if arg9 > r8_3
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, arg3, 
            arg9, r8_3);
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, &var_60);
        
        if *var_98[8] == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        arg2 =
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, &var_60);
        
        if *var_98[8] != 0x5a
        {
            arg8 = arg8;
        }
        
        if *var_98[8] == 0x5a || *var_98[8] == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        result = var_98;
        arg4 = *var_98[4];
    }
    
    arg3 = *rcx_1;
    rdi_3 = 1;
    r8_1 = *(r14 + 0x28);
    
    if r8_1 != 0
    {
        goto 'label_714d7c;
    }
    
    goto 'label_714ea4;
}
