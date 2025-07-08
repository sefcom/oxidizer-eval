
  int64_t uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(int64_t* arg1, char* arg2, uint64_t arg3)

{
    int64_t var_48;
    char result =
        uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(&var_48, arg2, arg3);
    int64_t r12 = var_48;
    uint64_t result_2;
    uint64_t result_1 = result_2;
    int128_t var_38;
    
    if (r12 != 0xe)
        *(arg1 + 0x10) = var_38;
    else
    {
        result = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(arg2, arg3);
        arg1[2] = result_1;
        result_1 = result;
    }
    arg1[1] = result_1;
    *arg1 = r12;
    return result;
}
