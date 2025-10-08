
  fn ruff_python_formatter::comments::placement::handle_slice_comments::h19c4e8125bfdfa93(arg1: *mut i64, arg2: *mut i64, arg3: *mut i32, arg4: i64, arg5: i64, arg6: *mut i8, arg7: i64) -> i64

{
    let mut r14: *mut i32 = arg3;
    let rbp: i32 = arg2[8];
    let mut var_78: ();
    ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to::h10c703c3dd949d71(&var_78, rbp, arg6, 
        arg7, arg4, arg5);
    let mut var_84: ();
    core::iter::traits::iterator::Iterator::try_fold::h84c5c22150ea5174(&var_84, &var_78);
    let mut r13: i8 = arg2[9];
    let var_7c: i8;
    let mut result: i64;
    let mut rcx_1: i64;
    let mut rdx_1: i32;
    
    if var_7c == 0x5a || ((var_7c ^ 9) | r13) != 0
    {
        let rax_1: i32 = *arg2.byte_offset(0x44);
        let rax_2: i8 = ruff_python_formatter::expression::expr_slice::assign_comment_in_slice::h53141057c2112aa6(rbp, arg6, arg7, r14);
        let mut rdi_3: *mut i32;
        let mut r12_1: *mut c_void;
        
        if rax_2 == 0
        {
            r12_1 = &r14[2];
            rdi_3 = *r12_1;
            
            if rdi_3 != 0
            {
                'label_702daf:
                let rax_4: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rdi_3);
                let mut rdx_3: *mut i32;
                result = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*r12_1);
                r14 = rdx_3;
                rcx_1 = 0x5f - 0;
            }
            else
            {
                rcx_1 = 0x60;
                result = 0x3a;
            }
        }
        else if rax_2 != 1
        {
            r12_1 = &r14[6];
            rdi_3 = *r12_1;
            
            if rdi_3 != 0
            {
                goto 'label_702daf;
            }
            
            rcx_1 = 0x60;
            result = 0x3a;
        }
        else
        {
            r12_1 = &r14[4];
            rdi_3 = *r12_1;
            
            if rdi_3 != 0
            {
                goto 'label_702daf;
            }
            
            rcx_1 = 0x60;
            result = 0x3a;
        }
        rdx_1 = rax_1;
    }
    else
    {
        result = *arg2;
        r14 = arg2[1];
        rdx_1 = *arg2.byte_offset(0x44);
        rcx_1 = 0x60;
        r13 = 0;
    }
    
    arg1[1] = result;
    arg1[2] = r14;
    arg1[3] = rbp;
    *arg1.byte_offset(0x1c) = rdx_1;
    arg1[4] = 0;
    *arg1.byte_offset(0x21) = r13;
    *arg1 = rcx_1;
    result
}
