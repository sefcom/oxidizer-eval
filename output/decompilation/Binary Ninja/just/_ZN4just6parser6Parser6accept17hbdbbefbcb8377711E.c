
  int64_t just::parser::Parser::accept::hbdbbefbcb8377711(int128_t* arg1, void* arg2, char arg3)

{
    int64_t rax = just::parser::Parser::next_is::hc7c4171067e02951(arg2, arg3);
    
    if (!rax)
        arg1[4] = 0x25;
    else
    {
        int128_t var_60;
        just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_60, arg2);
        int128_t zmm0_1 = var_60;
        int128_t var_50;
        int128_t var_40;
        int128_t var_30;
        int64_t var_20;
        char var_18;
        
        if (var_18 != 0x25)
        {
            int32_t var_17;
            *(arg1 + 0x4c) = var_17;
            *(arg1 + 0x49) = var_17;
            arg1[4] = var_20;
            arg1[3] = var_30;
            arg1[2] = var_40;
            arg1[1] = var_50;
            *arg1 = zmm0_1;
            *(arg1 + 0x48) = var_18;
            return var_18;
        }
        
        rax = var_20;
        arg1[4] = rax;
        arg1[3] = var_30;
        arg1[2] = var_40;
        arg1[1] = var_50;
        *arg1 = zmm0_1;
    }
    
    *(arg1 + 0x48) = 0x25;
    return rax;
}
