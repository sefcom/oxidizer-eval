
  fn just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1: *mut u64, arg2: *mut c_void, arg3: *mut i64) -> i64

{
    let rax: i64 = *arg3;
    let mut rdx_2: *mut c_void;
    
    if rax == -0x7fffffffffffffba || rax == -0x7fffffffffffffb8
    {
        let mut rax_1: *mut c_void;
        let mut rdx: i64;
        rax_1 = just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg2);
        let rax_2: i8 =
            just::string_kind::StringKind::from_token_start::h243afdb46a506377(rax_1, rdx);
        
        if rax_2 == 2
        {
            just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
                "Lexer::error: expected string or…", 0x35);
            /* tailcall */
            return core::ptr::drop_in_place$LT$just..compile_error_kind..CompileErrorKind$GT$::he0bfeab3ddccc897(arg3);
        }
        
        rdx_2 = (rax_2 << 1) + 1;
    }
    else
    {
        rdx_2 = just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(arg2);
    }
    
    let zmm1: i128 = *arg2.byte_offset(0x80);
    let var_40: i64 = *arg2.byte_offset(0xa8);
    let var_20: i8 = 0x23;
    let var_38: *mut c_void = rdx_2;
    let var_30: i128 = *arg2.byte_offset(0xb0);
    let mut var_60: i128 = *arg2.byte_offset(0x70);
    let var_50: i128 = zmm1;
    just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(arg1, &var_60, arg3)
}
