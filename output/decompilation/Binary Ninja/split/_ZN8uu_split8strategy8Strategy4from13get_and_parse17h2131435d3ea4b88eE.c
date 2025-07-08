
  int64_t uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int128_t var_78;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_78, 
        arg2, arg3, arg4);
    void* rax =
        clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(arg3, arg4, &var_78);
    
    if (!rax)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int32_t var_50;
    uucore::parser::parse_size::parse_size_u64_max::h351ae83d3c4e9b23(&var_50, *(rax + 8), 
        *(rax + 0x10));
    int64_t result;
    
    if (var_50 != 3)
    {
        core::ops::function::FnOnce::call_once::h28af8ecb4f0850c0(&var_78, arg6, &var_50);
        int64_t result_1;
        result = result_1;
        arg1[4] = result;
        int128_t var_68;
        *(arg1 + 0x10) = var_68;
        *arg1 = var_78;
    }
    else
    {
        int64_t var_48;
        
        if (!var_48)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &*var_78[8], rax);
            var_78 = 1;
            return arg6(arg1, &var_78);
        }
        
        result = arg5(&arg1[1], var_48);
        *arg1 = 4;
    }
    
    return result;
}
