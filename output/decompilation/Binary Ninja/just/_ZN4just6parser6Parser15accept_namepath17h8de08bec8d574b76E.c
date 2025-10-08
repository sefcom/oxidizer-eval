
  int64_t just::parser::Parser::accept_namepath::h8de08bec8d574b76(int128_t* arg1, void* arg2)

{
    int64_t rax = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x18);
    
    if (!rax)
        *arg1 = -0x8000000000000000;
    else
    {
        int128_t var_60;
        just::parser::Parser::parse_namepath::hf7b725240a87d50f(&var_60, arg2);
        int128_t var_50;
        char var_18;
        int128_t zmm0_1;
        
        if (var_18 != 0x25)
        {
            zmm0_1 = var_60;
            int32_t var_14;
            *(arg1 + 0x4c) = var_14;
            int32_t var_17;
            *(arg1 + 0x49) = var_17;
            int64_t var_20;
            arg1[4] = var_20;
            int128_t var_30;
            arg1[3] = var_30;
            int128_t var_40;
            arg1[2] = var_40;
            arg1[1] = var_50;
            *arg1 = zmm0_1;
            *(arg1 + 0x48) = var_18;
            return var_18;
        }
        
        rax = var_50;
        int128_t var_98;
        var_98 = rax;
        zmm0_1 = var_60;
        int128_t var_a8_1 = zmm0_1;
        arg1[1] = rax;
        *arg1 = zmm0_1;
    }
    
    *(arg1 + 0x48) = 0x25;
    return rax;
}
