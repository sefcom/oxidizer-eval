
  fn ruff_python_formatter::comments::placement::handle_pattern_match_as_comment::h1d3128bda0017e3f(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: i64) -> i64

{
    let mut result: i64 = arg2[2];
    
    if result == 0x5e
    {
        'label_703adc:
        *arg1.byte_offset(0x40) = *arg2.byte_offset(0x40);
        let zmm0: i128 = *arg2;
        let zmm1: i128 = *arg2.byte_offset(0x10);
        let zmm2: i128 = *arg2.byte_offset(0x20);
        *arg1.byte_offset(0x30) = *arg2.byte_offset(0x30);
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = zmm0;
    }
    else
    {
        let rsi: i64 = arg2[3];
        let mut result_1: i64 = result;
        let mut var_80: i64 = rsi;
        let mut r15_1: *mut i64 = &result_1;
        let mut var_68: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_68, 
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&result_1), 
            arg3, arg4);
        let mut var_38: i8 = 0;
        let mut var_94: i64;
        core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_94, &var_68, 
            &var_38);
        let mut var_a0: i64;
        let var_8c: i8;
        let mut var_98: i32;
        
        if var_8c != 0x5a
        {
            let var_98_1: i32 = var_8c;
            var_a0 = var_94;
        }
        else
        {
            var_98 = 0x5a;
        }
        let mut var_74: i32;
        result = core::option::Option$LT$T$GT$::filter::h8b58b23f5402a20d(&var_74, &var_a0);
        let var_6c: i8;
        
        if var_6c == 0x5a
        {
            goto 'label_703adc;
        }
        
        let rax_2: i32 = var_74;
        let rcx_1: i32 = *arg2.byte_offset(0x44);
        
        if rcx_1 >= rax_2
        {
            r15_1 = arg2;
        }
        
        let mut rax_3: *mut c_void = &var_80;
        let rcx_2: i8 = arg2[9];
        let rdi_4: i64 = arg2[8];
        
        if rcx_1 >= rax_2
        {
            rax_3 = &arg2[1];
        }
        
        result = *rax_3;
        arg1[1] = *r15_1;
        arg1[2] = result;
        arg1[3] = rdi_4;
        arg1[4] = 0;
        *arg1.byte_offset(0x21) = rcx_2;
        *arg1 = 0x60 - 0;
    }
    
    result
}
