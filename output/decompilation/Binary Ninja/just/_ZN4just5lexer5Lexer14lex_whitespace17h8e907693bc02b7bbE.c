
  int64_t just::lexer::Lexer::lex_whitespace::h8e907693bc02b7bb(int128_t* arg1, void* arg2)

{
    int64_t result;
    
    if (!just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*(arg2 + 0xc0)))
    {
        label_672d4a:
        result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
        *(arg1 + 0x48) = 0x25;
    }
    else
    {
        while (true)
        {
            int128_t var_68;
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
            char var_20;
            
            if (var_20 != 0x25)
            {
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
                break;
            }
            
            if (!just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*(arg2 + 0xc0)))
                goto label_672d4a;
        }
    }
    
    return result;
}
