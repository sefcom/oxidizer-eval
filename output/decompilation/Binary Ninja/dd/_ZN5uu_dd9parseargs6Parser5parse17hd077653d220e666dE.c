
  int64_t* uu_dd::parseargs::Parser::parse::hd077653d220e666d(int64_t* arg1)

{
    int64_t var_1c0;
    int64_t rcx;
    int64_t rdx;
    int64_t* rsi;
    uu_dd::parseargs::Parser::read::h3585469891c58efd(&var_1c0, rsi, rdx, rcx);
    int64_t r14 = var_1c0;
    int128_t var_1b8;
    int128_t var_1a8;
    
    if (r14 != 2)
    {
        void var_198;
        void var_c0;
        memcpy(&var_c0, &var_198, 0xb0);
        int64_t var_e8 = r14;
        int128_t var_e0_1 = var_1b8;
        int128_t var_d0_1 = var_1a8;
        uu_dd::parseargs::Parser::validate::hd2b1e31453916e87(arg1, &var_e8);
    }
    else
    {
        *(arg1 + 0x18) = var_1a8;
        *(arg1 + 8) = var_1b8;
        *arg1 = 3;
    }
    return arg1;
}
