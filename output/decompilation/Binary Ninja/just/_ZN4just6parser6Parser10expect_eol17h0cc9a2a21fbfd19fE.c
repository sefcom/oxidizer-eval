
  int64_t just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(int128_t* arg1, void* arg2)

{
    int128_t var_a8;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_a8, arg2, 0x10);
    int128_t var_98;
    int128_t var_88;
    int128_t var_78;
    int64_t var_68;
    char var_60;
    
    if (var_60 != 0x25)
    {
        int128_t zmm0 = var_a8;
        int32_t var_5c;
        *(arg1 + 0x4c) = var_5c;
        int32_t var_5f;
        *(arg1 + 0x49) = var_5f;
        arg1[4] = var_68;
        arg1[3] = var_78;
        arg1[2] = var_88;
        arg1[1] = var_98;
        *arg1 = zmm0;
        *(arg1 + 0x48) = var_60;
        return var_60;
    }
    
    char rax_1 = just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x13);
    
    if (!rax_1)
    {
        rax_1 = just::parser::Parser::expect::h35e1151927597ac7(&var_a8, arg2, 0x14);
        
        if (var_60 != 0x25)
        {
            arg1[4] = var_68;
            int128_t zmm0_1 = var_a8;
            arg1[3] = var_78;
            arg1[2] = var_88;
            arg1[1] = var_98;
            *arg1 = zmm0_1;
            return rax_1;
        }
    }
    
    *(arg1 + 0x48) = 0x25;
    return rax_1;
}
