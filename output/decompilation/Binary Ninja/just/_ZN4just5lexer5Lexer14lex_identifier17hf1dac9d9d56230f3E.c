
  int64_t just::lexer::Lexer::lex_identifier::hf1dac9d9d56230f3(int128_t* arg1, void* arg2)

{
    int128_t var_68;
    int64_t result = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
    char var_20;
    
    if (var_20 != 0x25)
    {
        label_672c08:
        int128_t var_28;
        arg1[4] = var_28;
        int128_t zmm0_1 = var_68;
        int128_t var_38;
        arg1[3] = var_38;
        int128_t var_48;
        arg1[2] = var_48;
        int128_t var_58;
        arg1[1] = var_58;
        *arg1 = zmm0_1;
    }
    else
    {
        for (int32_t i = *(arg2 + 0xc0); i != 0x110000; i = *(arg2 + 0xc0))
        {
            if (i - 0x61 >= 0x1a)
            {
                int32_t rcx_1;
                
                if (i >= 0x41)
                    rcx_1 = i < 0x5b;
                
                if (i < 0x41 || !(i == 0x5f | rcx_1))
                {
                    int32_t rcx_2;
                    rcx_2 = i - 0x30 >= 0xa;
                    i = i != 0x2d;
                    
                    if (i & rcx_2)
                        break;
                }
            }
            
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
            
            if (var_20 != 0x25)
                goto label_672c08;
        }
        
        result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
        *(arg1 + 0x48) = 0x25;
    }
    
    return result;
}
