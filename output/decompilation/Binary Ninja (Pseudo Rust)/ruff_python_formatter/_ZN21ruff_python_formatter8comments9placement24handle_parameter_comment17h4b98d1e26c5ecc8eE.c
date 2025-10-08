
  fn ruff_python_formatter::comments::placement::handle_parameter_comment::h4b98d1e26c5ecc8e(arg1: *mut i128, arg2: *mut i128, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> i64

{
    let mut result: i32;
    
    if *arg3.byte_offset(8) != 0
    {
        let mut var_48: i32;
        ruff_python_trivia::tokenizer::first_non_trivia_token::h0374298a6b2ddd94(&var_48, 
            *arg3.byte_offset(0x14), arg4, arg5);
        let var_40: i8;
        
        if var_40 == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("A annotated parameter should hav…");
            /* no return */
        }
        
        let rcx_1: i32 = var_48;
        let mut var_49: i8 = var_40;
        
        if var_40 != 0xc
        {
            var_48 = 0;
            core::panicking::assert_failed::h581e1324dddd7d27(0, &var_49, &data_48a9b3, &var_48);
            /* no return */
        }
        
        result = arg2[4];
        
        if result >= rcx_1
        {
            goto 'label_70271d;
        }
        
        goto 'label_7026e3;
    }
    
    result = arg2[4];
    
    if result < *arg3.byte_offset(0x10)
    {
        'label_7026e3:
        let rcx_2: i8 = *arg2.byte_offset(0x48);
        let rdx_1: i32 = *arg2.byte_offset(0x44);
        *arg1.byte_offset(8) = 0x50;
        arg1[1] = arg3;
        *arg1.byte_offset(0x18) = result;
        *arg1.byte_offset(0x1c) = rdx_1;
        arg1[2] = 0;
        *arg1.byte_offset(0x21) = rcx_2;
        *arg1 = 0x5e;
    }
    else
    {
        'label_70271d:
        arg1[4] = arg2[4];
        let zmm0: i128 = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = zmm0;
    }
    
    result
}
