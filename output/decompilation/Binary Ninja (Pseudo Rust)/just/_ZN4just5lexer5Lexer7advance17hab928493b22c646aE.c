
  fn just::lexer::Lexer::advance::hab928493b22c646a(arg1: *mut u64, arg2: *mut c_void) -> i64

{
    let rax_2: u64 = *arg2.byte_offset(0xc0);
    
    if rax_2 == 0x110000
    {
        /* tailcall */
        return just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
            "Lexer advanced past end of texts…", 0x1f);
    }
    
    let mut rcx_1: i64 = 1;
    
    if rax_2 >= 0x80
    {
        rcx_1 = 2;
        
        if rax_2 >= 0x800
        {
            rcx_1 = 4 - 0;
        }
    }
    
    let var_18: u64 = rax_2;
    *arg2.byte_offset(0xa0) += rcx_1;
    *arg2.byte_offset(0x90) += rcx_1;
    
    if rax_2 == 0xa
    {
        *arg2.byte_offset(0x90) = 0;
        *arg2.byte_offset(0x98) += 1;
    }
    
    let mut rax_1: i8;
    let mut result_1: i32;
    rax_1 =
        core::str::validations::next_code_point::he89b2cd8a446aa48(arg2.byte_offset(0x60), arg1);
    let mut result: i32 = 0x110000;
    
    if (rax_1 & 1) != 0
    {
        result = result_1;
    }
    
    *arg2.byte_offset(0xc0) = result;
    arg1[9] = 0x25;
    result
}
