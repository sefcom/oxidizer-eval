
  int64_t just::lexer::Lexer::lex_dedent::hd3d59812e389acd6(void* arg1)

{
    int64_t rax = *(arg1 + 0xa0);
    bool cond:0 = rax != *(arg1 + 0xb8);
    int64_t var_40 = rax - *(arg1 + 0xb8);
    
    if (cond:0)
    {
        int64_t var_38 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_40, &data_4692d0, &var_38);
        /* no return */
    }
    
    just::lexer::Lexer::token::h8b86862a20389d16(arg1);
    int64_t result = *(arg1 + 0x10);
    
    if (result)
    {
        result -= 1;
        *(arg1 + 0x10) = result;
    }
    
    *(arg1 + 0xc4) = 0;
    return result;
}
