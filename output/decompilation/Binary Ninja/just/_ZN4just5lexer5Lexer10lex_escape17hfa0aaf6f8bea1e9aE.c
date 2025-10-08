
  uint32_t just::lexer::Lexer::lex_escape::hfa0aaf6f8bea1e9a(char* arg1, void* arg2)

{
    int128_t var_80;
    uint32_t result = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_80, arg2, 0x5c);
    char var_38;
    int128_t var_70;
    int128_t var_60;
    int128_t var_50;
    int128_t var_40;
    
    if (var_38 != 0x25)
    {
        label_672983:
        *(arg1 + 0x40) = var_40;
        int128_t zmm0_1 = var_80;
        *(arg1 + 0x30) = var_50;
        *(arg1 + 0x20) = var_60;
        *(arg1 + 0x10) = var_70;
        *arg1 = zmm0_1;
    }
    else
    {
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_80, arg2, 0xa);
        result = var_80;
        char rcx_1 = var_38;
        
        if (rcx_1 != 0x25)
        {
            label_6729b1:
            *(arg1 + 0x40) = var_40;
            int128_t zmm0_2 = var_80;
            *(arg1 + 0x31) = var_50;
            *(arg1 + 0x21) = var_60;
            *(arg1 + 0x11) = var_70;
            *(arg1 + 1) = zmm0_2;
            int32_t var_37;
            *(arg1 + 0x49) = var_37;
            *(arg1 + 0x4c) = var_37;
            *arg1 = result;
            arg1[0x48] = rcx_1;
        }
        else if (!(result & 1))
        {
            just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_80, arg2, 0xd);
            result = var_80;
            rcx_1 = var_38;
            
            if (rcx_1 != 0x25)
                goto label_6729b1;
            
            if (!(result & 1))
            {
                result = *(arg2 + 0xc0);
                
                if (result != 0x110000)
                {
                    *var_80[8] = result;
                    var_80 = -0x7fffffffffffffd6;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_80);
                }
                
                arg1[0x48] = 0x25;
            }
            else
            {
                just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_80, arg2, 0xa);
                result = var_80;
                rcx_1 = var_38;
                
                if (rcx_1 != 0x25)
                    goto label_6729b1;
                
                if (!(result & 1))
                {
                    var_80 = -0x7fffffffffffffbb;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_80);
                }
                
                if (just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*(arg2 + 0xc0)))
                {
                    bool i;
                    
                    do
                    {
                        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
                        
                        if (var_38 != 0x25)
                            goto label_672983;
                        
                        i = just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(
                            *(arg2 + 0xc0));
                    } while (i);
                }
                
                result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[0x48] = 0x25;
            }
        }
        else
        {
            if (just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*(arg2 + 0xc0)))
            {
                bool i_1;
                
                do
                {
                    result = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
                    
                    if (var_38 != 0x25)
                        goto label_672983;
                    
                    i_1 = just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*(arg2 + 0xc0));
                } while (i_1);
            }
            
            result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            arg1[0x48] = 0x25;
        }
    }
    return result;
}
