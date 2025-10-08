
  fn ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::h66e8d27018a5e0d4(arg1: *mut i128, arg2: *mut i128, arg3: *mut i8, arg4: u64) -> i512

{
    let mut rax_1: i64;
    
    if *arg2.byte_offset(0x48) != 0
    {
        rax_1 = arg2[1];
    }
    
    let mut result: i128;
    
    if *arg2.byte_offset(0x48) != 0 && rax_1 != 0x5e
    {
        let rcx: i64 = *arg2.byte_offset(0x18);
        let mut var_f8: i64 = rax_1;
        let rdx: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_f8);
        let r8_1: i32 = arg2[4];
        
        if rdx > r8_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_80: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_80, arg3, arg4, 
            rdx, r8_1);
        let mut var_d0: ();
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_d0, &var_80);
        let var_c8: i8;
        
        if var_c8 == 0x5a
        {
            ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches::h2e114d08ca69ba0e(&var_80, arg2, var_f8, rcx, arg3, arg4);
            let mut var_e8: *mut i64 = &var_f8;
            let var_e0_1: *mut i8 = arg3;
            let var_d8_1: u64 = arg4;
            ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h7611629345dd40b0(
                &var_d0, &var_80, &var_e8);
            return ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h1eeeae6cff7d3bf8(arg1, &var_d0, arg3, arg4);
        }
        
        arg1[4] = arg2[4];
        result = *arg2;
        let zmm1_1: i128 = arg2[1];
        let zmm2_1: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2_1;
        arg1[1] = zmm1_1;
        *arg1 = result;
    }
    else
    {
        arg1[4] = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    
    result
}
