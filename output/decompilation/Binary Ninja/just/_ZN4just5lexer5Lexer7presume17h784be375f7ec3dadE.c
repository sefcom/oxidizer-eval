
  int64_t just::lexer::Lexer::presume::h784be375f7ec3dad(int128_t* arg1, void* arg2, uint64_t arg3)

{
    int32_t var_94 = arg3;
    uint64_t var_80;
    
    if (*(arg2 + 0xc0) != arg3)
    {
        int32_t* var_90 = &var_94;
        int64_t (* var_88_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_80 = &data_8303a8;
        int64_t var_78_1 = 2;
        int64_t var_60_1 = 0;
        int32_t** var_70_1 = &var_90;
        int64_t var_68_1 = 1;
        void var_30;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_30, 0, arg3, &var_80);
        return just::lexer::Lexer::internal_error::h78cb678bc55cc920(arg1, arg2, &var_30);
    }
    
    int64_t result = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
    char var_38;
    
    if (var_38 != 0x25)
    {
        int128_t var_40;
        arg1[4] = var_40;
        int128_t zmm0_1 = var_80;
        int128_t var_50;
        arg1[3] = var_50;
        int64_t var_60;
        arg1[2] = var_60;
        int64_t var_70;
        arg1[1] = var_70;
        *arg1 = zmm0_1;
    }
    else
        *(arg1 + 0x48) = 0x25;
    
    return result;
}
