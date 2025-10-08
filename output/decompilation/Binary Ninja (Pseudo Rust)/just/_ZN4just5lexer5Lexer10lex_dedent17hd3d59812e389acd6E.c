
  fn just::lexer::Lexer::lex_dedent::hd3d59812e389acd6(arg1: *mut c_void) -> i64

{
    let rax: i64 = *arg1.byte_offset(0xa0);
    let cond:0: bool = rax != *arg1.byte_offset(0xb8);
    let mut var_40: i64 = rax - *arg1.byte_offset(0xb8);
    
    if cond:0
    {
        let mut var_38: i64 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_40, &data_4692d0, &var_38);
        /* no return */
    }
    
    just::lexer::Lexer::token::h8b86862a20389d16(arg1);
    let mut result: i64 = *arg1.byte_offset(0x10);
    
    if result != 0
    {
        result -= 1;
        *arg1.byte_offset(0x10) = result;
    }
    
    *arg1.byte_offset(0xc4) = 0;
    result
}
