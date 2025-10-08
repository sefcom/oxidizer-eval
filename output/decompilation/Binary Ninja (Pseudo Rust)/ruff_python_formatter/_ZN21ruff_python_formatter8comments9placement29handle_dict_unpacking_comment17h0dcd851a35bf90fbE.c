
  fn ruff_python_formatter::comments::placement::handle_dict_unpacking_comment::h0dcd851a35bf90fb(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> i512

{
    let r15: i64 = arg2[2];
    let mut result: i128;
    
    if r15 == 0x5e
    {
        'label_7031e2:
        *arg1.byte_offset(0x40) = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        let r13_1: i64 = *arg2.byte_offset(0x28);
        let rax_1: i64 = arg2[1];
        let mut var_68: i64;
        let mut rcx: i32;
        
        if rax_1 != 0x5e
        {
            let rcx_1: i64 = *arg2.byte_offset(0x18);
            var_68 = rax_1;
            let var_60_1: i64 = rcx_1;
            rcx = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_68);
        }
        else
        {
            var_68 = *arg2;
            rcx = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_68);
        }
        
        let rbp_1: i32 = arg2[4];
        
        if rcx > rbp_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg3, arg4, 
            rcx, rbp_1);
        let var_38_1: i8 = 0;
        let mut rax_3: i8;
        rax_3 = _$LT$core..iter..adapters..skip_while..SkipWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hcc6da7fedc5bf4b5(&var_68);
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_3, 1) == 0
        {
            goto 'label_7031e2;
        }
        
        let rax_5: i8 = *arg2.byte_offset(0x48);
        let rcx_2: i32 = *arg2.byte_offset(0x44);
        arg1[1] = r15;
        arg1[2] = r13_1;
        arg1[3] = rbp_1;
        *arg1.byte_offset(0x1c) = rcx_2;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rax_5;
        *arg1 = 0x5e;
    }
    
    result
}
