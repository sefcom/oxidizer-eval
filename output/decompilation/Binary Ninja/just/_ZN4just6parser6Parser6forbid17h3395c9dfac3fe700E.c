
  int64_t just::parser::Parser::forbid::h3395c9dfac3fe700(uint64_t* arg1, void* arg2)

{
    int128_t var_d8;
    just::parser::Parser::next::h26f20bd451ef506f(&var_d8, arg2);
    int128_t zmm0 = var_d8;
    int32_t var_97;
    int32_t var_e8 = var_97;
    int128_t var_c8;
    int128_t var_b8;
    int128_t var_a8;
    char result;
    char var_90;
    
    if (var_90 != 0x25)
    {
        int32_t var_8f;
        *(arg1 + 0x4c) = var_8f;
        *(arg1 + 0x49) = var_8f;
        *(arg1 + 0x30) = var_a8;
        *(arg1 + 0x20) = var_b8;
        *(arg1 + 0x10) = var_c8;
        *arg1 = zmm0;
        *(arg1 + 0x44) = var_97;
        *(arg1 + 0x41) = var_97;
        arg1[8] = result;
        arg1[9] = var_90;
        return result;
    }
    
    int32_t var_e0 = var_97;
    
    if (result != 0x18)
    {
        arg1[9] = 0x25;
        return result;
    }
    
    int128_t var_a8_1 = var_a8;
    int128_t var_b8_1 = var_b8;
    int128_t var_c8_1 = var_c8;
    var_d8 = zmm0;
    char var_98 = 0x18;
    int32_t var_97_1 = var_97;
    var_97_1 = var_97;
    return just::parser::Parser::parse_recipe::_$u7b$$u7b$closure$u7d$$u7d$::h3e49d237bea22a26(
        arg1, &var_d8);
}
