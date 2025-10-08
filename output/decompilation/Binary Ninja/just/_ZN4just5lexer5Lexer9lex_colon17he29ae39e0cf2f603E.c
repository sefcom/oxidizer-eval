
  int64_t just::lexer::Lexer::lex_colon::he29ae39e0cf2f603(char* arg1, void* arg2)

{
    int128_t var_60;
    int64_t rax = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_60, arg2, 0x3a);
    int128_t var_50;
    int128_t var_40;
    int128_t var_30;
    int128_t var_20;
    char var_18;
    
    if (var_18 != 0x25)
    {
        *(arg1 + 0x40) = var_20;
        int128_t zmm0 = var_60;
        *(arg1 + 0x30) = var_30;
        *(arg1 + 0x20) = var_40;
        *(arg1 + 0x10) = var_50;
        *arg1 = zmm0;
        return rax;
    }
    
    just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_60, arg2, 0x3d);
    char rax_1 = var_60;
    char rcx = var_18;
    
    if (rcx == 0x25)
    {
        int64_t rax_2;
        void* rdi_2;
        
        if (rax_1 & 1)
        {
            rdi_2 = arg2;
            label_672764:
            rax_2 = just::lexer::Lexer::token::h8b86862a20389d16(rdi_2);
            arg1[0x48] = 0x25;
            return rax_2;
        }
        
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_60, arg2, 0x3a);
        rax_1 = var_60;
        rcx = var_18;
        
        if (rcx == 0x25)
        {
            if (rax_1 & 1)
            {
                rdi_2 = arg2;
                goto label_672764;
            }
            
            rax_2 = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            *(arg2 + 0xc5) = 1;
            arg1[0x48] = 0x25;
            return rax_2;
        }
    }
    
    *(arg1 + 0x40) = var_20;
    int128_t zmm0_1 = var_60;
    *(arg1 + 0x31) = var_30;
    *(arg1 + 0x21) = var_40;
    *(arg1 + 0x11) = var_50;
    *(arg1 + 1) = zmm0_1;
    int32_t var_17;
    *(arg1 + 0x49) = var_17;
    *(arg1 + 0x4c) = var_17;
    *arg1 = rax_1;
    arg1[0x48] = rcx;
    return rax_1;
}
