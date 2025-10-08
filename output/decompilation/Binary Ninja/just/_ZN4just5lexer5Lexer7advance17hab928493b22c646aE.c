
  int64_t just::lexer::Lexer::advance::hab928493b22c646a(uint64_t* arg1, void* arg2)

{
    uint64_t rax_2 = *(arg2 + 0xc0);
    
    if (rax_2 == 0x110000)
        /* tailcall */
        return just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
            "Lexer advanced past end of texts…", 0x1f);
    
    int64_t rcx_1 = 1;
    
    if (rax_2 >= 0x80)
    {
        rcx_1 = 2;
        
        if (rax_2 >= 0x800)
            rcx_1 = 4 - 0;
    }
    
    uint64_t var_18 = rax_2;
    *(arg2 + 0xa0) += rcx_1;
    *(arg2 + 0x90) += rcx_1;
    
    if (rax_2 == 0xa)
    {
        *(arg2 + 0x90) = 0;
        *(arg2 + 0x98) += 1;
    }
    
    char rax_1;
    int32_t result_1;
    rax_1 = core::str::validations::next_code_point::he89b2cd8a446aa48(arg2 + 0x60, arg1);
    int32_t result = 0x110000;
    
    if (rax_1 & 1)
        result = result_1;
    
    *(arg2 + 0xc0) = result;
    arg1[9] = 0x25;
    return result;
}
