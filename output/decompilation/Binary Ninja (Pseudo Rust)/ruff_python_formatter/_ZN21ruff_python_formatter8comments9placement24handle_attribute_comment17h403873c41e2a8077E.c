
  fn ruff_python_formatter::comments::placement::handle_attribute_comment::h403873c41e2a8077(arg1: *mut i64, arg2: *mut i128, arg3: *mut i32, arg4: *mut i8, arg5: i64) -> u64

{
    let mut result: u64;
    
    if arg2[1] != 0x5e
    {
        let mut var_68: i32;
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_68, 
            _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3.byte_offset(0x28)), 
            arg4, arg5);
        let var_38_1: i8 = 0;
        let var_6c_1: i8 = 0x5a;
        let mut var_80: i32;
        let mut var_74: ();
        _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h8cf438245f98d522(&var_80, &var_68, &var_74);
        let var_78: i8;
        let mut rbp_2: i32;
        
        if var_78 != 0x5a
        {
            rbp_2 = arg2[4];
        }
        
        if var_78 == 0x5a || rbp_2 >= var_80
        {
            let rbp_3: i8 = *arg2.byte_offset(0x48);
            let mut r12_2: i32;
            
            if rbp_3 == 0
            {
                let rdx_5: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3.byte_offset(0x28));
                let rdx_6: i32 = *arg3;
                
                if rdx_5 > rdx_6
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_68, 
                    rdx_5, rdx_6, 0x10, arg4, arg5);
                r12_2 = *arg2.byte_offset(0x44);
                
                if r12_2 >= var_68
                {
                    goto 'label_7035ad;
                }
                
                let rbp_4: i32 = arg2[4];
                let mut rdx_7: i64;
                result = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg3.byte_offset(0x28));
                arg1[1] = result;
                arg1[2] = rdx_7;
                arg1[3] = rbp_4;
                *arg1.byte_offset(0x1c) = r12_2;
                arg1[4] = 0;
                *arg1 = 0x5f;
            }
            else
            {
                r12_2 = *arg2.byte_offset(0x44);
                'label_7035ad:
                result = arg2[4];
                *arg1.byte_offset(8) = *arg2;
                arg1[3] = result;
                *arg1.byte_offset(0x1c) = r12_2;
                arg1[4] = 0;
                *arg1.byte_offset(0x21) = rbp_3;
                *arg1 = 0x60;
            }
        }
        else
        {
            let r15_1: i8 = *arg2.byte_offset(0x48);
            let r14_1: i32 = *arg2.byte_offset(0x44);
            let mut rdx_4: i64;
            result = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg3.byte_offset(0x28));
            arg1[1] = result;
            arg1[2] = rdx_4;
            arg1[3] = rbp_2;
            *arg1.byte_offset(0x1c) = r14_1;
            arg1[4] = 0;
            *arg1.byte_offset(0x21) = r15_1;
            *arg1 = 0x5f;
        }
    }
    else
    {
        let rbp_1: i8 = *arg2.byte_offset(0x48);
        let mut rax: i64;
        let mut rdx: i64;
        rax = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg3.byte_offset(0x28));
        arg1[1] = rax;
        arg1[2] = rdx;
        result = arg2[4];
        arg1[3] = result;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rbp_1;
        *arg1 = 0x5e;
    }
    
    result
}
