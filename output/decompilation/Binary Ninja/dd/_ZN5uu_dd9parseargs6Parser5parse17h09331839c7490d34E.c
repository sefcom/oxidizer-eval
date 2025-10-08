
  int64_t* uu_dd::parseargs::Parser::parse::h09331839c7490d34(int64_t* arg1, int64_t* arg2, int128_t* arg3)

{
    int64_t var_1c0;
    int64_t result = uu_dd::parseargs::Parser::read::ha501085c91122a16(&var_1c0, arg2, arg3);
    int64_t r14 = var_1c0;
    int128_t var_1b8;
    int128_t var_1a8;
    
    if (r14 == 2)
    {
        *(arg1 + 0x18) = var_1a8;
        *(arg1 + 8) = var_1b8;
        *arg1 = 3;
        return result;
    }
    
    void var_198;
    void var_c0;
    memcpy(&var_c0, &var_198, 0xb0);
    int64_t var_e8 = r14;
    int128_t var_e0 = var_1b8;
    int128_t var_d0 = var_1a8;
    return uu_dd::parseargs::Parser::validate::hefe4c66de8f3a7b9(arg1, &var_e8);
}
