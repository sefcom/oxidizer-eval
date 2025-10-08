
  int64_t just::parser::Parser::expect::h35e1151927597ac7(int128_t* arg1, void* arg2, char arg3)

{
    int128_t var_100;
    just::parser::Parser::accept::hbdbbefbcb8377711(&var_100, arg2, arg3);
    int128_t zmm0 = var_100;
    int32_t var_bf;
    int32_t var_108 = var_bf;
    int128_t var_f0;
    int128_t var_e0;
    int128_t var_d0;
    char var_c0;
    char var_b8;
    
    if (var_b8 != 0x25)
    {
        int32_t var_b7;
        *(arg1 + 0x4c) = var_b7;
        *(arg1 + 0x49) = var_b7;
        arg1[3] = var_d0;
        arg1[2] = var_e0;
        arg1[1] = var_f0;
        *arg1 = zmm0;
        *(arg1 + 0x44) = var_bf;
        *(arg1 + 0x41) = var_bf;
        arg1[4] = var_c0;
        *(arg1 + 0x48) = var_b8;
        return var_c0;
    }
    
    if (var_c0 != 0x25)
    {
        arg1[3] = var_d0;
        arg1[2] = var_e0;
        arg1[1] = var_f0;
        *arg1 = zmm0;
        *(arg1 + 0x41) = var_bf;
        *(arg1 + 0x44) = var_bf;
        arg1[4] = var_c0;
        *(arg1 + 0x48) = 0x25;
        return var_c0;
    }
    
    int64_t rax_1 = just::parser::Parser::unexpected_token::hbee08644eef5d075(&var_100, arg2);
    int128_t zmm0_1 = var_b8;
    int128_t var_28 = zmm0_1;
    int128_t zmm1_1 = var_100;
    int128_t var_38 = var_d0;
    int128_t var_48 = var_e0;
    int128_t var_58 = var_f0;
    int128_t var_68 = zmm1_1;
    arg1[4] = zmm0_1;
    arg1[3] = var_d0;
    arg1[2] = var_e0;
    arg1[1] = var_f0;
    *arg1 = zmm1_1;
    return rax_1;
}
