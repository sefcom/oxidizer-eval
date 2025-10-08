
  fn ruff_python_formatter::comments::placement::handle_parenthesized_comment::h8e0502a789509c98(arg1: *mut i128, arg2: *mut i32, arg3: *mut i8, arg4: i64) -> i512

{
    let mut result: i128;
    
    if *arg2 == 0x2c
    {
        'label_70118c:
        arg1[4] = *arg2.byte_offset(0x40);
        result = *arg2;
        let zmm1: i128 = *arg2.byte_offset(0x10);
        let zmm2: i128 = *arg2.byte_offset(0x20);
        arg1[3] = *arg2.byte_offset(0x30);
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    else
    {
        let rax_1: i64 = *arg2.byte_offset(0x10);
        
        if rax_1 == 0x5e
        {
            goto 'label_70118c;
        }
        
        let r8_1: i64 = *arg2.byte_offset(0x18);
        let mut var_88: i64 = rax_1;
        let var_80_1: i64 = r8_1;
        let r13_1: i64 = *arg2.byte_offset(0x20);
        
        if r13_1 == 0x5e
        {
            goto 'label_70118c;
        }
        
        let rbp_1: i64 = *arg2.byte_offset(0x28);
        let mut var_78: i64 = r13_1;
        let var_70_1: i64 = rbp_1;
        let rdx: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_88);
        let rbx_1: i32 = arg2[0x10];
        
        if rdx > rbx_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let rax_3: i32 = arg2[0x11];
        let mut var_b0: i32 = rdx;
        let var_ac_1: i32 = rbx_1;
        let mut var_68: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg3, arg4, 
            rdx, rbx_1);
        let var_38_1: i8 = 0;
        let mut var_a0: *mut i8 = arg3;
        let var_98_1: i64 = arg4;
        let var_90_1: *mut i32 = &var_b0;
        let mut rax_4: i8;
        rax_4 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::he549855285b6f0d8(&var_68, &var_a0);
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_4, 1) == 0
        {
            let rax_8: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_78);
            
            if rax_3 > rax_8
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            let mut var_a8: i32 = rax_3;
            let var_a4_1: i32 = rax_8;
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg3, 
                arg4, rax_3, rax_8);
            let var_38_2: i8 = 0;
            var_a0 = arg3;
            let var_98_2: i64 = arg4;
            let var_90_2: *mut i32 = &var_a8;
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::ha19a1d5c640575e3(&var_68, &var_a0), 
                1) == 0
            {
                arg1[4] = *arg2.byte_offset(0x40);
                result = *arg2;
                let zmm1_1: i128 = *arg2.byte_offset(0x10);
                let zmm2_1: i128 = *arg2.byte_offset(0x20);
                arg1[3] = *arg2.byte_offset(0x30);
                arg1[2] = zmm2_1;
                arg1[1] = zmm1_1;
                *arg1 = result;
            }
            else
            {
                let rax_12: i8 = arg2[0x12];
                result = var_88;
                let rcx_3: *mut i64 = arg1;
                *rcx_3.byte_offset(8) = result;
                rcx_3[3] = rbx_1;
                *rcx_3.byte_offset(0x1c) = rax_3;
                rcx_3[4] = 0;
                *rcx_3.byte_offset(0x21) = rax_12;
                *rcx_3 = 0x5f;
            }
        }
        else
        {
            let rax_7: i8 = arg2[0x12];
            *arg1.byte_offset(8) = r13_1;
            arg1[1] = rbp_1;
            *arg1.byte_offset(0x18) = rbx_1;
            *arg1.byte_offset(0x1c) = rax_3;
            arg1[2] = 0;
            *arg1.byte_offset(0x21) = rax_7;
            *arg1 = 0x5e;
        }
    }
    
    result
}
