
  int64_t just::parser::Parser::error::hcfcee5ba02637174(int64_t* arg1, void* arg2, int128_t* arg3)

{
    int128_t var_60;
    just::parser::Parser::next::h26f20bd451ef506f(&var_60, arg2);
    int128_t var_a8 = var_60;
    char var_18;
    int64_t result;
    
    if (var_18 != 0x25)
    {
        int32_t var_17;
        *(arg1 + 0x54) = var_17;
        *(arg1 + 0x51) = var_17;
        int64_t var_20;
        arg1[9] = var_20;
        int128_t zmm0 = var_a8;
        int128_t var_30;
        *(arg1 + 0x38) = var_30;
        int128_t var_40;
        *(arg1 + 0x28) = var_40;
        int128_t var_50;
        *(arg1 + 0x18) = var_50;
        *(arg1 + 8) = zmm0;
        arg1[0xa] = var_18;
        core::ptr::drop_in_place$LT$just..compile_error_kind..CompileErrorKind$GT$::he0bfeab3ddccc897(arg3);
        result = 1;
    }
    else
    {
        just::token::Token::error::h986494da066a4455(&arg1[1], &var_a8, arg3);
        result = 0;
    }
    
    *arg1 = result;
    return result;
}
