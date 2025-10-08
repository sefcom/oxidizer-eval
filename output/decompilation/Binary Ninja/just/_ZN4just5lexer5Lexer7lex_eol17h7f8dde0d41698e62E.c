
  int64_t just::lexer::Lexer::lex_eol::h7f8dde0d41698e62(uint64_t* arg1, void* arg2)

{
    char var_78;
    just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_78, arg2, 0xd);
    char rax = var_78;
    char var_30;
    char rcx = var_30;
    int128_t var_77;
    int128_t var_67;
    int128_t var_57;
    int64_t var_38;
    
    if (rcx == 0x25)
    {
        char* rdi_1 = &var_78;
        
        if (!(rax & 1))
        {
            int64_t rax_2 = just::lexer::Lexer::presume::h784be375f7ec3dad(rdi_1, arg2, 0xa);
            
            if (var_30 == 0x25)
            {
                label_672b11:
                int32_t rsi_3;
                rsi_3 = *(arg2 + 0x40);
                int64_t rax_3 = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[9] = 0x25;
                return rax_3;
            }
            
            *(arg1 + 0x40) = var_38;
            int128_t zmm0_1 = var_78;
            *(arg1 + 0x30) = var_57;
            *(arg1 + 0x20) = var_67;
            *(arg1 + 0x10) = var_77;
            *arg1 = zmm0_1;
            return rax_2;
        }
        
        just::lexer::Lexer::accepted::h2b4063f26d19f617(rdi_1, arg2, 0xa);
        rax = var_78;
        rcx = var_30;
        
        if (rcx == 0x25)
        {
            if (rax & 1)
                goto label_672b11;
            
            var_78 = -0x7fffffffffffffbb;
            return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_78);
        }
    }
    
    arg1[8] = var_38;
    int128_t var_47;
    *(arg1 + 0x31) = var_47;
    *(arg1 + 0x21) = var_57;
    *(arg1 + 0x11) = var_67;
    *(arg1 + 1) = var_77;
    int32_t var_2f;
    *(arg1 + 0x49) = var_2f;
    *(arg1 + 0x4c) = var_2f;
    *arg1 = rax;
    arg1[9] = rcx;
    return rax;
}
