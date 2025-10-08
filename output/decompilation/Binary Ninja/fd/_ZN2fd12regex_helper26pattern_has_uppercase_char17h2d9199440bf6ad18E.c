
  uint64_t fd::regex_helper::pattern_has_uppercase_char::h2d9199440bf6ad18(int64_t arg1, int64_t arg2)

{
    int32_t var_200 = 0xfa;
    int16_t var_1fc = 0;
    char var_1fa = 0;
    int32_t var_207 = 0x2020202;
    int16_t var_203 = 0x202;
    char var_201 = 0xa;
    char var_208 = 0;
    void var_108;
    regex_syntax::parser::ParserBuilder::build::h4f1d8f33c91068d9(&var_108, &var_208);
    regex_syntax::parser::Parser::parse::h5efb678b74ee433b(&var_208, &var_108, arg1, arg2);
    uint32_t rbx_1;
    int128_t var_1f8;
    int128_t var_1e8;
    int128_t var_188;
    
    if (var_208 != -0x7fffffffffffffff)
    {
        var_188 = var_208;
        int128_t var_198;
        int128_t var_118_1 = var_198;
        int128_t var_1a8;
        int128_t var_128_1 = var_1a8;
        int128_t var_1b8;
        int128_t var_138_1 = var_1b8;
        int128_t var_1c8;
        int128_t var_148_1 = var_1c8;
        int128_t var_1d8;
        int128_t var_158_1 = var_1d8;
        int128_t var_168_1 = var_1e8;
        int128_t var_178_1 = var_1f8;
        
        if (var_188 != -0x7fffffffffffffff)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$regex_syntax..error..Error$GT$$GT$::h980d190192d3b1f2(&var_188);
            rbx_1 = 0;
        }
        else
            rbx_1 = *var_188[8];
    }
    else
    {
        int128_t var_168 = var_1e8;
        int128_t var_178 = var_1f8;
        var_188 = var_200;
        rbx_1 = fd::regex_helper::pattern_has_uppercase_char::_$u7b$$u7b$closure$u7d$$u7d$::hf198437ff31349b4(&var_188);
    }
    core::ptr::drop_in_place$LT$regex_syntax..parser..Parser$GT$::h264258e692885e03(&var_108);
    rbx_1 &= 1;
    return rbx_1;
}
