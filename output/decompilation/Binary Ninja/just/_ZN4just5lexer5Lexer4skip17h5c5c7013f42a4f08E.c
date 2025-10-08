
  int64_t just::lexer::Lexer::skip::h5c5c7013f42a4f08(int128_t* arg1, void* arg2)

{
    int128_t var_60;
    int64_t result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
    char var_18;
    
    if (var_18 == 0x25)
    {
        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
        
        if (var_18 == 0x25)
        {
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
            
            if (var_18 == 0x25)
            {
                result = just::lexer::Lexer::advance::hab928493b22c646a(&var_60, arg2);
                
                if (var_18 == 0x25)
                {
                    *(arg1 + 0x48) = 0x25;
                    return result;
                }
            }
        }
    }
    
    int128_t var_20;
    arg1[4] = var_20;
    int128_t zmm0 = var_60;
    int128_t var_30;
    arg1[3] = var_30;
    int128_t var_40;
    arg1[2] = var_40;
    int128_t var_50;
    arg1[1] = var_50;
    *arg1 = zmm0;
    return result;
}
