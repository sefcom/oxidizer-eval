
  void just::lexer::Lexer::accepted::h2b4063f26d19f617(char* arg1, void* arg2, int32_t arg3)

{
    if (*(arg2 + 0xc0) != arg3)
    {
        *arg1 = 0;
        arg1[0x48] = 0x25;
        return;
    }
    
    int128_t var_58;
    just::lexer::Lexer::advance::hab928493b22c646a(&var_58, arg2);
    char var_10;
    
    if (var_10 == 0x25)
    {
        *arg1 = 1;
        arg1[0x48] = 0x25;
        return;
    }
    
    int128_t var_18;
    *(arg1 + 0x40) = var_18;
    int128_t zmm0 = var_58;
    int128_t var_28;
    *(arg1 + 0x30) = var_28;
    int128_t var_38;
    *(arg1 + 0x20) = var_38;
    int128_t var_48;
    *(arg1 + 0x10) = var_48;
    *arg1 = zmm0;
}
