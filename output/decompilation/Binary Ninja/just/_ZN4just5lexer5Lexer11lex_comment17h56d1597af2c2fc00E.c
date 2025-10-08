
  int64_t just::lexer::Lexer::lex_comment::h56d1597af2c2fc00(int128_t* arg1, void* arg2)

{
    int128_t var_68;
    int64_t result = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_68, arg2, 0x23);
    char var_20;
    
    if (var_20 != 0x25)
    {
        label_672cb6:
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
        if (!just::lexer::Lexer::at_eol_or_eof::h85f92b30e0726684(arg2))
        {
            char i;
            
            do
            {
                result = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
                
                if (var_20 != 0x25)
                    goto label_672cb6;
                
                i = just::lexer::Lexer::at_eol_or_eof::h85f92b30e0726684(arg2);
            } while (!i);
        }
        
        result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
        *(arg1 + 0x48) = 0x25;
    }
    
    return result;
}
