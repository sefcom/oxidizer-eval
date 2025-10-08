
  void* uu_pr::parse_usize::ha0c8a08d466c6b5c(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_90 = arg3;
    int64_t var_88 = arg4;
    int64_t var_80;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0e26f3cdbc6a68b8(&var_80, 
        arg2, arg3, arg4);
    void* result =
        clap_builder::parser::error::MatchesError::unwrap::hfed9fdb9bcd55c4d(arg3, arg4, &var_80);
    
    if (!result)
    {
        *arg1 = -0x7ffffffffffffffa;
        return result;
    }
    
    int64_t var_50;
    uu_pr::parse_usize::_$u7b$$u7b$closure$u7d$$u7d$::hc0ac91cb2498e34f(&var_50, &var_90, result);
    int64_t var_28;
    int64_t var_58_1 = var_28;
    int128_t var_38;
    int128_t var_68_1 = var_38;
    int128_t var_48;
    int128_t var_78_1 = var_48;
    var_80 = var_50;
    return core::ops::function::FnOnce::call_once::hf083617b5147bd4a(arg1, &var_80);
}
